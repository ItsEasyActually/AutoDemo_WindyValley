#include "stdafx.h"
#include "Trampoline.h"
#include "WindyGate.h"
#include "SBridge.h"
#include "Bridge_Pole.h"
#include "Tako_W.h"

//Trampoline Code
void __cdecl Trampoline_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	float ZScale; // ST08_4@3
	float v3; // ST08_4@4
	float YScale; // ST04_4@4
	float XScale; // ST00_4@4
	float v6; // ST08_4@4

	v1 = a2->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njPushMatrix(0);
		if (v1->Scale.y < 0.0)
		{
			njTranslate(0, TrampolineMesh_Top.pos[0], TrampolineMesh_Top.pos[1], TrampolineMesh_Top.pos[2]); //Top Model
			v3 = -v1->Scale.z;
			YScale = -v1->Scale.y;
			XScale = -v1->Scale.x;
			njScale(0, XScale, YScale, v3);
			njScale(0, 1.0f, 2.0f, 1.0f);
			v6 = VectorMaxAbs(&v1->Scale) * 1.8f;
			sub_407870(&attach_001448A0, 1, v6); //Top Model
		}
		else
		{
			njTranslate(0, TrampolineMesh_Bottom.pos[0], TrampolineMesh_Bottom.pos[1], TrampolineMesh_Bottom.pos[2]); //Bottom Model
			njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
			ZScale = VectorMaxAbs(&v1->Scale);
			sub_407870(&attach_00144B74, 1, ZScale); //Bottom Model
		}
		njPopMatrix(1u);
		sub_407A00(&attach_001454A0, 1.0); //Full Model
		njPopMatrix(1u);
	}
}

void __cdecl Trampoline_Main(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		switch (v1->Action)
		{
		case 0:
			v1->NextAction = 0;
			v1->Rotation.z = 0;
			v1->Scale.x = 1.0f;
			v1->Scale.y = 0;
			v1->Scale.z = 1.0f;
			v1->CharIndex = 0;
			v1->Action = 1;
			InitCollision(a1, stru_C67750, 1, 4u);
			a1->DisplaySub = Trampoline_Display;
			Trampoline_Display(a1);
			break;
		case 1:
			Trampolineheight = 10.0f;
			Trampolineheightsecond = 11.0f;
			Trampolineheightthird = 16.0f;
			Trampolineheightfourth = 12.0f;
			sub_4E2D30((int)a1);
			Trampolineheight = 19.0f;
                        Trampolineheightsecond = 20.0f;
                        Trampolineheightthird = 25.0f;
                        Trampolineheightfourth = 21.0f;
			AddToCollisionList(v1);
			Trampoline_Display(a1);
			break;
		case 3:
			if (v1->NextAction == 1)
			{
				Trampolineheight = 10.0f;
				Trampolineheightsecond = 11.0f;
				Trampolineheightthird = 16.0f;
				Trampolineheightfourth = 12.0f;
				sub_4E2CC0((int)a1);
				Trampolineheight = 19.0f;
				Trampolineheightsecond = 20.0f;
				Trampolineheightthird = 25.0f;
				Trampolineheightfourth = 21.0f;
			}
			Trampolineheight = 10.0f;
			Trampolineheightsecond = 11.0f;
			Trampolineheightthird = 16.0f;
			Trampolineheightfourth = 12.0f;
			sub_4E2DC0((int)v1);
			Trampolineheight = 19.0f;
			Trampolineheightsecond = 20.0f;
			Trampolineheightthird = 25.0f;
			Trampolineheightfourth = 21.0f;
			Trampoline_Display(a1);
			break;
		case 4:
			if (v1->NextAction == 1)
			{
				Trampolineheight = 10.0f;
				Trampolineheightsecond = 11.0f;
				Trampolineheightthird = 16.0f;
				Trampolineheightfourth = 12.0f;
				sub_4E2CC0((int)a1);
				Trampolineheight = 19.0f;
				Trampolineheightsecond = 20.0f;
				Trampolineheightthird = 25.0f;
				Trampolineheightfourth = 21.0f;
			}
			Trampolineheight = 10.0f;
			Trampolineheightsecond = 11.0f;
			Trampolineheightthird = 16.0f;
			Trampolineheightfourth = 12.0f;
			sub_4E2EC0((int)v1);
			Trampolineheight = 19.0f;
			Trampolineheightsecond = 20.0f;
			Trampolineheightthird = 25.0f;
			Trampolineheightfourth = 21.0f;
			Trampoline_Display(a1);
			break;
		case 5:
			if (v1->NextAction == 1)
			{
				sub_4E2CC0((int)a1);
			}
			Trampolineheight = 10.0f;
			Trampolineheightsecond = 11.0f;
			Trampolineheightthird = 16.0f;
			Trampolineheightfourth = 12.0f;
			sub_4E3090((int)v1);
			Trampolineheight = 19.0f;
			Trampolineheightsecond = 20.0f;
			Trampolineheightthird = 25.0f;
			Trampolineheightfourth = 21.0f;
			Trampoline_Display(a1);
			break;
		case 6:
			DeleteObjectMaster(a1);
			break;
		default:
			v1->Action = 0;
			Trampoline_Display(a1);
			break;
		}
	}
}

//Windy Gate
void __cdecl WGate_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@2
	Angle v3; // eax@4
	Angle v4; // eax@6
	double v5; // st7@8
	double v6; // st7@10
	double v7; // st7@12

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Gate_Root.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, RightPropeller_Model.pos[0], RightPropeller_Model.pos[1], RightPropeller_Model.pos[2]); //Right Propeller
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, v5);
		}
		sub_409E70((NJS_MODEL_SADX*)RightPropeller_Model.model, 0, 1.0); //Right Propeller
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, LeftPropeller_Model.pos[0], LeftPropeller_Model.pos[1], LeftPropeller_Model.pos[2]); //Left Propeller
		v6 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v6)
		{
			njRotateY(0, v6);
		}
		sub_409E70((NJS_MODEL_SADX*)LeftPropeller_Model.model, 0, 1.0); //Left Propeller
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, TopPropeller_Model.pos[0], TopPropeller_Model.pos[1], TopPropeller_Model.pos[2]); //Top Propeller
		v7 = *(float*)&v1->Object * 65536.0 * 0.002777777777777778;
		if (v7)
		{
			njRotateZ(0, v7);
		}
		sub_409E70((NJS_MODEL_SADX*)TopPropeller_Model.model, 0, 1.0); //Top Propeller
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl WindyGate_Main(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 12.0f + *(float*)&v1->CharIndex;
				}
				if (v1->Scale.y != 0)
				{
					*(float*)&v1->Object = v1->Scale.y + *(float*)&v1->Object;
				}
				else
				{
					*(float*)&v1->Object = 12.0f + *(float*)&v1->Object;
				}
				WGate_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = WGate_Display;
			InitCollision(a1, WGate_Collision, 3, 4u);
		}
	}
}

//Bridge
void __cdecl SBridg(ObjectMaster *a1)
{
	if (a1->Data1->Scale.z < 0)
	{
		a1->Data1->LoopData = (Loop*)&LongBridge;
		InitCollision(a1, (CollisionData*)&TuriBr2_Collision, 1, 4u);
	}
	else
	{
		a1->Data1->LoopData = (Loop*)&ShortBridge;
		InitCollision(a1, (CollisionData*)&TuriBr_Collision, 1, 4u);
	}
	(a1->Data1->CollisionInfo->colli_range) = 500.0f;
	sub_7A6440(a1);
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))sub_4E0A60;
}

//New Object
void __cdecl BrPole_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle v6;
	Angle v7;

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_BrPole.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_BrPoleFan.pos[0], (Object_BrPoleFan.pos[1]), Object_BrPoleFan.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_BrPoleFan.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_BrPole(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 7.5f + *(float*)&v1->CharIndex;
				}
				BrPole_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = BrPole_Display;
			InitCollision(a1, BrPole_Collision, 1, 4u);
		}
	}
}

void __cdecl TakoW_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle z1;
	Angle x1;

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		z1 = v1->Rotation.z;
		if (z1)
		{
			njRotateZ(0, (unsigned __int16)z1);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		x1 = v1->Rotation.x;
		if (x1)
		{
			njRotateX(0, (unsigned __int16)x1);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_TakoW.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_TakoW_Net.pos[0], Object_TakoW_Net.pos[1], Object_TakoW_Net.pos[2]);

		if (!ObjectSelectedDebug(a1))
		{
			if (*(float*)&v1->LoopData <= 2.0f)
			{
				RenderFlags_Reset();
				njScale(0, 1.0f, 1.0f, 1.0f);
			}
			else if (*(float*)&v1->LoopData <= 4.0f)
			{
				RenderFlags_Reset();
				njScale(0, 1.0f, 1.05f, 1.0f);
			}
		}
		sub_409E70((NJS_MODEL_SADX*)Object_TakoW_Net.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_TakoW(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (!IsGamePaused())
				{
					*(float*)&v1->LoopData += 0.8f;

					if (FramerateSetting >= 2)
					{
						*(float*)&v1->LoopData += 0.8f;
					}

					if (*(float*)&v1->LoopData >= 4.5f)
					{
						*(float*)&v1->LoopData = 0.0f;
					}
				}
				TakoW_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = TakoW_Display;
		}
	}
}