#include "stdafx.h"
#include "Trampoline.h"
#include "WindyGate.h"
#include "SBridge.h"
#include "Bridge_Pole.h"
#include "Tako_W.h"

//Trampoline Code
void __cdecl OPolineDisp_r(task* a2)
{
	auto data = a2->twp;
	auto v3 = -data->scl.z;
	auto Yscl = -data->scl.y;
	auto Xscl = -data->scl.x;
	float v6 = VectorMaxAbs(&data->scl) * 1.8f;
	auto Zscl = VectorMaxAbs(&data->scl);

	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &data->pos);
		njPushMatrix(0);
		if (data->scl.y < 0.0f)
		{
			njTranslate(0, TrampolineMesh_Top.pos[0], TrampolineMesh_Top.pos[1], TrampolineMesh_Top.pos[2]); //Top Model

			njScale(0, Xscl, Yscl, v3);
			njScale(0, 1.0f, 2.0f, 1.0f);
			late_DrawModelClip(&attach_001448A0, (LATE)1, v6); //Top Model
		}
		else
		{
			njTranslate(0, TrampolineMesh_Bottom.pos[0], TrampolineMesh_Bottom.pos[1], TrampolineMesh_Bottom.pos[2]); //Bottom Model
			njScale(0, data->scl.x, data->scl.y, data->scl.z);

			late_DrawModelClip(&attach_00144B74, (LATE)1, Zscl); //Bottom Model
		}
		njPopMatrix(1u);
		sub_407A00(&attach_001454A0, 1.0); //Full Model
		njPopMatrix(1u);
	}
}

void __cdecl OPoline_r(task* a1)
{
	auto data = a1->twp;

	if (!ClipSetObject((ObjectMaster*)a1))
	{
		switch (data->mode)
		{
		case 0:
			data->smode = 0;
			data->ang.z = 0;
			data->scl.x = 1.0f;
			data->scl.y = 0;
			data->scl.z = 1.0f;
			data->counter.b[0] = 0;
			data->mode = 1;
			CCL_Init(a1, stru_C67750, 1, 4u);
			a1->disp = OPolineDisp_r;
			break;
		case 1:
			Trampolineheight = 10.0f;
			Trampolineheightsecond = 11.0f;
			Trampolineheightthird = 16.0f;
			Trampolineheightfourth = 12.0f;
			sub_4E2D30(a1);
			Trampolineheight = 19.0f;
			Trampolineheightsecond = 20.0f;
			Trampolineheightthird = 25.0f;
			Trampolineheightfourth = 21.0f;
			EntryColliList(data);
			break;
		case 3:
			if (data->smode == 1)
			{
				Trampolineheight = 10.0f;
				Trampolineheightsecond = 11.0f;
				Trampolineheightthird = 16.0f;
				Trampolineheightfourth = 12.0f;
				sub_4E2CC0(a1);
				Trampolineheight = 19.0f;
				Trampolineheightsecond = 20.0f;
				Trampolineheightthird = 25.0f;
				Trampolineheightfourth = 21.0f;
			}
			Trampolineheight = 10.0f;
			Trampolineheightsecond = 11.0f;
			Trampolineheightthird = 16.0f;
			Trampolineheightfourth = 12.0f;
			sub_4E2DC0(data);
			Trampolineheight = 19.0f;
			Trampolineheightsecond = 20.0f;
			Trampolineheightthird = 25.0f;
			Trampolineheightfourth = 21.0f;
			break;
		case 4:
			if (data->smode == 1)
			{
				Trampolineheight = 10.0f;
				Trampolineheightsecond = 11.0f;
				Trampolineheightthird = 16.0f;
				Trampolineheightfourth = 12.0f;
				sub_4E2CC0(a1);
				Trampolineheight = 19.0f;
				Trampolineheightsecond = 20.0f;
				Trampolineheightthird = 25.0f;
				Trampolineheightfourth = 21.0f;
			}
			Trampolineheight = 10.0f;
			Trampolineheightsecond = 11.0f;
			Trampolineheightthird = 16.0f;
			Trampolineheightfourth = 12.0f;
			sub_4E2EC0(data);
			Trampolineheight = 19.0f;
			Trampolineheightsecond = 20.0f;
			Trampolineheightthird = 25.0f;
			Trampolineheightfourth = 21.0f;

			break;
		case 5:
			if (data->smode == 1)
			{
				sub_4E2CC0(a1);
			}
			Trampolineheight = 10.0f;
			Trampolineheightsecond = 11.0f;
			Trampolineheightthird = 16.0f;
			Trampolineheightfourth = 12.0f;
			sub_4E3090(data);
			Trampolineheight = 19.0f;
			Trampolineheightsecond = 20.0f;
			Trampolineheightthird = 25.0f;
			Trampolineheightfourth = 21.0f;
			break;
		case 6:
			FreeTask(a1);
			break;
		default:
			data->mode = 0;
			break;
		}
	}

	a1->disp(a1);
}

//Windy Gate
void __cdecl WGate_Display(task* a1)
{
	auto data = a1->twp;

	if (MissedFrames)
		return;

	SetTextureToLevelObj();
	njPushMatrix(0);
	njTranslate(0, data->pos.x, data->pos.y, data->pos.z);

	njRotateZ_(data->ang.z);
	njRotateX_(data->ang.x);
	njRotateY_(data->ang.y);

	late_DrawModelClip((NJS_MODEL_SADX*)Gate_Root.model, (LATE)0, 1.0f); //Root Model
	njPushMatrix(0);
	njTranslate(0, RightPropeller_Model.pos[0], RightPropeller_Model.pos[1], RightPropeller_Model.pos[2]); //Right Propeller
	auto v5 = data->counter.f * 65536.0f * 0.002777777777777778f;
	njRotateY_(v5);

	late_DrawModelClip((NJS_MODEL_SADX*)RightPropeller_Model.model, (LATE)0, 1.0); //Right Propeller
	njPopMatrix(1u);
	njPushMatrix(0);
	njTranslate(0, LeftPropeller_Model.pos[0], LeftPropeller_Model.pos[1], LeftPropeller_Model.pos[2]); //Left Propeller
	auto v6 = data->counter.f * 65536.0f * 0.002777777777777778f;

	njRotateY_(v6);

	late_DrawModelClip((NJS_MODEL_SADX*)LeftPropeller_Model.model, (LATE)0, 1.0); //Left Propeller
	njPopMatrix(1u);
	njPushMatrix(0);
	njTranslate(0, TopPropeller_Model.pos[0], TopPropeller_Model.pos[1], TopPropeller_Model.pos[2]); //Top Propeller

	auto v7 = data->timer.f * 65536.0f * 0.002777777777777778f;
	njRotateZ_(v7);

	late_DrawModelClip((NJS_MODEL_SADX*)TopPropeller_Model.model, (LATE)0, 1.0); //Top Propeller
	njPopMatrix(1u);
	njPopMatrix(1u);

}

void __cdecl WindyGate_Main(task* a1)
{
	auto data = a1->twp;

	if (!CheckRangeOut(a1))
	{
		if (data->mode)
		{
			if (data->mode == 1)
			{
				if (data->scl.x != 0)
				{
					data->counter.f += data->scl.x;
				}
				else
				{
					data->counter.f += 12.0f;
				}
				if (data->scl.y != 0)
				{
					data->timer.f += data->scl.y;
				}
				else
				{
					data->timer.f += 12.0f;
				}

				EntryColliList(data);
			}
		}
		else
		{
			data->mode = 1;
			a1->disp = WGate_Display;
			CCL_Init(a1, WGate_Collision, 3, 4u);
		}

		a1->disp(a1);
	}
}

//Bridge
void __cdecl SBridg(task* a1)
{
	if (a1->twp->scl.z < 0.0f)
	{
		a1->twp->value.l = (int)&LongBridge;
		CCL_Init(a1, (CCL_INFO*)&TuriBr2_Collision, 1, 4u);
	}
	else
	{
		a1->twp->value.l = (int)&ShortBridge;
		CCL_Init(a1, (CCL_INFO*)&TuriBr_Collision, 1, 4u);
	}

	a1->twp->cwp->colli_range = 500.0f;
	sub_7A6440(a1);
	a1->exec = (TaskFuncPtr)OTuribr_Main;
}

//New Object
void __cdecl BrPole_Display(task* a1)
{
	auto data = a1->twp;

	if (MissedFrames)
		return;

	SetTextureToLevelObj();
	njPushMatrix(0);
	njTranslate(0, data->pos.x, data->pos.y, data->pos.z);

	njRotateZ_(data->ang.z);
	njRotateY_(data->ang.y);
	njRotateX_(data->ang.x);

	late_DrawModelClipMesh((NJS_MODEL_SADX*)Object_BrPole.model, (LATE)0, 1.0f); //Root Model
	njPushMatrix(0);
	njTranslate(0, Object_BrPoleFan.pos[0], (Object_BrPoleFan.pos[1]), Object_BrPoleFan.pos[2]);
	auto v5 = *(float*)&data->counter.f * 65536.0f * 0.002777777777777778f;
	
	njRotateY_((unsigned __int16)v5);
	
	late_DrawModelClipMesh((NJS_MODEL_SADX*)Object_BrPoleFan.model, (LATE)0, 1.0f);
	njPopMatrix(1u);
	njPopMatrix(1u);
}

void __cdecl Load_BrPole(task* a1)
{
	auto data = a1->twp;

	if (!CheckRangeOut(a1))
	{
		if (data->mode)
		{
			if (data->mode == 1)
			{
				if (data->scl.x != 0)
				{
					data->counter.f += data->scl.x;
				}
				else
				{
					data->counter.f += 7.5f;
				}
		
				EntryColliList(data);
			}
		}
		else
		{
			data->mode = 1;
			a1->disp = BrPole_Display;
			CCL_Init(a1, (CCL_INFO*)BrPole_Collision, 1, 4u);
		}

		a1->disp(a1);
	}
}


void __cdecl TakoW_Display(task* a1)
{
	auto data = a1->twp;

	if (MissedFrames)
		return;

	SetTextureToLevelObj();
	njPushMatrix(0);
	njTranslate(0, data->pos.x, data->pos.y, data->pos.z);

	njRotateZ_(data->ang.z);
	njRotateY_(data->ang.y);
	njRotateX_(data->ang.x);

	late_DrawModelClipMesh((NJS_MODEL_SADX*)Object_TakoW.model, (LATE)0, 1.0f); //Root Model
	njPushMatrix(0);
	njTranslate(0, Object_TakoW_Net.pos[0], Object_TakoW_Net.pos[1], Object_TakoW_Net.pos[2]);

	if (!ObjectSelectedDebug((ObjectMaster*)a1))
	{
		if (data->value.f <= 2.0f)
		{
			RenderFlags_Reset();
			njScale(0, 1.0f, 1.0f, 1.0f);
		}
		else if (data->value.f <= 4.0f)
		{
			RenderFlags_Reset();
			njScale(0, 1.0f, 1.05f, 1.0f);
		}
	}
	late_DrawModelClipMesh((NJS_MODEL_SADX*)Object_TakoW_Net.model, (LATE)0, 1.0f);
	njPopMatrix(1u);
	njPopMatrix(1u);

}

void __cdecl Load_TakoW(task* a1)
{
	auto twp = a1->twp;

	if (!CheckRangeOut(a1))
	{
		if (twp->mode)
		{
			if (twp->mode == 1)
			{
				if (!IsGamePaused())
				{
					twp->value.f += 0.8f;

					if (FramerateSetting >= 2)
					{
						twp->value.f += 0.8f;
					}

					if (twp->value.f >= 4.5f)
					{
						twp->value.f = 0.0f;
					}
				}
				EntryColliList(twp);
			}
		}
		else
		{
			twp->mode = 1;
			a1->disp = TakoW_Display;
		}

		a1->disp(a1);
	}
}