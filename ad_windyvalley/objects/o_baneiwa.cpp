#include "../pch.h"

NJS_OBJECT* obj_baneiwa = nullptr;

void __cdecl DispBaneIwa(task* tp)
{
	Angle rz;
	Angle rx;
	Angle ry;
	float v5;

	auto twp = tp->twp;
	SetTextureToLevelObj();
	njPushMatrix(0);
	njTranslate(0, twp->pos.x, twp->pos.y, twp->pos.z);


	rz = twp->ang.z;
	if (rz)
	{
		njRotateZ(0, (unsigned __int16)rz);
	}
	rx = twp->ang.x;
	if (rx)
	{
		njRotateX(0, (unsigned __int16)rx);
	}
	ry = twp->ang.y;
	if (ry)
	{
		njRotateY(0, (unsigned __int16)ry);
	}

	DrawModel(obj_baneiwa->basicdxmodel); //Spring Base (NJS_MODEL)
	njPushMatrix(0); //Propeller Start
	njPushMatrix(0); //Spring Coil Start
	njPushMatrix(0); //Spring Top
	sub_407A00(obj_baneiwa->getnode(3)->basicdxmodel, 1.0); //Spring Top (NJS_MODEL)
	njPopMatrix(1u);
	sub_407A00(obj_baneiwa->getnode(2)->basicdxmodel, 1.0); //Spring Coil (NJS_MODEL)
	njPopMatrix(1u);
	njTranslate(0, obj_baneiwa->getnode(1)->pos[0], obj_baneiwa->getnode(1)->pos[1], obj_baneiwa->getnode(1)->pos[2]);
	v5 = twp->value.f * 65536.0 * 0.002777777777777778;
	if (v5)
	{
		njRotateZ(0, (unsigned __int16)v5);
	}
	//sub_407A00((NJS_MODEL_SADX*)Object_BaneIwa_Prop.model, 1.0); //Propeller (NJS_MODEL)
	DrawModel_407FC0(obj_baneiwa->getnode(1)->basicdxmodel, (QueuedModelFlagsB)0); //borrowing from PkR, this fixes the transparency issue on baneiwa's fans!
	njPopMatrix(1u);
	njPopMatrix(1u);
}

void __cdecl InitBaneIwa(task* tp)
{
	unsigned int v3;
	double v4;
	unsigned int v7;
	double v8;
	char v9;
	CollisionInfo* v10;
	__int16 v11;
	char v12;
	ObjectMaster* v13;
	unsigned __int8 a1a;

	float thingTest = 0.0f;
	float fanSpeed = 0.0f;
	float otherFloat = 0.0f;

	auto twp = tp->twp;
	fanSpeed = twp->scl.z;
	if (!ClipSetObject((ObjectMaster*)tp))
	{
		if (fanSpeed != 0)
		{
			twp->value.f = fanSpeed + twp->value.f;
		}
		else
		{
			twp->value.f= 2.5f + twp->value.f;
		}
		switch (twp->mode)
		{
		case 0:
			tp->dest = ReleaseNotUsingPlayerModels_nullsub;
			tp->disp = DispBaneIwa;
			CCL_Init(tp, ccl_baneiwa, 1, 4u);
			(twp->cwp->flag) |= 0x40u;
			twp->timer.f = 180.0f;
			otherFloat = 0;
			thingTest = 0.5f;
			twp->btimer = 10;
			twp->mode = 1;
			break;
		case 1:
			v3 = (int)(twp->value.f * 65536.0f * 0.002777777777777778f);
			twp->counter.f = -fabs(njSin(v3) * thingTest);
			if (!GetDebugMode())
			{
				v4 = twp->timer.f + otherFloat;
				twp->timer.f = v4;
				if (v4 < otherFloat + 290.0)
				{
					(otherFloat) = 15.0f;
				}
				v7 = (int)((twp->timer.f - 180.0f) * 0.1f * 65536.0f * 0.002777777777777778f);
				v8 = njCos(v7) * 0.60000002;
				thingTest = v8;
				if (v8 < 0.0)
				{
					twp->timer.f = 180.0f;
					(otherFloat) = 0;
				}
				v9 = twp->btimer + 1;
				twp->btimer = v9;
				if ((unsigned __int8)v9 > 0xAu)
				{
					v10 = (CollisionInfo*)twp->cwp;
					v11 = v10->flag;
					if (v11 & 1)
					{
						v12 = 0;
						v10->flag = v11 & 0xFFFE;
						a1a = 0;
						while (1)
						{
							v13 = GetCharacterObject(a1a);
							if (v13)
							{
								if (sub_41CBC0((EntityData1*)twp) == v13->Data1)
								{
									break;
								}
							}
							a1a = ++v12;
							if ((unsigned __int8)v12 >= 2u)
							{
								goto LABEL_18;
							}
						}
						twp->counter.f = 0.1f;
						twp->smode = v12;
						(otherFloat) = 20.0f;
						twp->timer.f = 270.0f;
						twp->mode = 2;
					}
					else
					{
					LABEL_18:
						if (twp->mode != 2)
						{
							AddToCollisionList((EntityData1*)twp);
						}
					}
				}
				if (twp->btimer > 0x32u)
				{
					twp->btimer = 50;
				}
			}
			DispBaneIwa(tp);
			break;
		case 2:
			twp->btimer = 5;
			sub_7A46C0(tp, 1);
			DispBaneIwa(tp);
			PlaySound(9, 0, 0, 0);
			break;
		case 3:
			DeadOut(tp);
			break;
		default:
			return;
		}
	}
}