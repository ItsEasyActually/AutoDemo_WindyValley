#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"
#include <cmath>

#include "Spring_Objects.h"

void __cdecl BaneIwa_Spring(ObjectMaster *a1, char a2)
{
	EntityData1 *v2; // esi@1
	EntityData1 *v3; // ebp@1
	Angle v4; // eax@2
	Angle v5; // eax@4
	Angle v6; // eax@6
	unsigned __int8 v7; // al@8
	NJS_VECTOR *v8; // edi@8
	double v9; // st7@8
	float v10; // ST0C_4@8
	unsigned __int8 v11; // bl@8
	int v12; // eax@10
	int v13; // ecx@10
	double v14; // st7@12
	int v15; // edx@12
	int v16; // ecx@12
	__int16 v17; // ax@14
	int *v18; // edx@14
	double v19; // st7@17
	int v20; // ecx@20
	int v21; // edx@20
	double v22; // st7@20
	int v23; // ST04_4@23
	float v24; // [sp+1Ch] [bp-44h]@8
	float v25; // [sp+20h] [bp-40h]@8
	float v26; // [sp+24h] [bp-3Ch]@8
	unsigned __int8 playerNum; // [sp+28h] [bp-38h]@8
	float v28; // [sp+2Ch] [bp-34h]@8
	NJS_VECTOR a3; // [sp+30h] [bp-30h]@8
	int v30; // [sp+3Ch] [bp-24h]@8
	int v31; // [sp+40h] [bp-20h]@8
	int v32; // [sp+44h] [bp-1Ch]@8
	NJS_VECTOR a2a; // [sp+48h] [bp-18h]@1
	Angle v34; // [sp+54h] [bp-Ch]@20
	int v35; // [sp+58h] [bp-8h]@20
	int v36; // [sp+5Ch] [bp-4h]@20

	float SpringPower;
	float CtrlDisable;

	SpringPower = 0.0f;
	CtrlDisable = 0.0f;

	v2 = a1->Data1;
	(a2a.x) = 0;
	(a2a.y) = 5.0f;
	(a2a.z) = 0;
	v3 = EntityData1Ptrs[v2->NextAction];
	if (v3)
	{
		a2a.y = SpringPower + 5.0;
		njPushMatrix(0);
		v4 = v2->Rotation.z;
		if (v4)
		{
			njRotateZ(0, (unsigned __int16)v4);
		}
		v5 = v2->Rotation.x;
		if (v5)
		{
			njRotateX(0, (unsigned __int16)v5);
		}
		v6 = v2->Rotation.y;
		if (v6)
		{
			njRotateY(0, (unsigned __int16)v6);
		}
		njCalcPoint(0, &a2a, &a3);
		njPopMatrix(1u);
		v7 = v2->NextAction;
		v8 = &v3->Position;
		*(float *)&v30 = a3.x + v2->Position.x;
		playerNum = v7;
		*(float *)&v31 = a3.y + v2->Position.y;
		*(float *)&v32 = a3.z + v2->Position.z;
		v25 = *(float *)&v30 - v3->Position.x;
		v9 = *(float *)&v32 - v3->Position.z;
		v26 = v9;
		v10 = v9 * v26 + v25 * v25;
		v11 = v7;
		v24 = squareroot(v10);
		sub_441990(v11, &v28);
		if (v28 < 1.0 || *(float *)&v2->CharIndex != 0.1f)
		{
			if (v24 < 14.0 && v24 >= 2.0)
			{
				ForcePlayerAction(v11, 12);
				v19 = 1.0 / v24;
				v8->x = v25 * v19 + v25 * v19 + v8->x;
				v3->Position.z = v19 * v26 + v19 * v26 + v3->Position.z;
				ForcePlayerAction(v11, 24);
			}
			if (!a2)
			{
				EnemyBounceThing_Wrapper(v11, a3.x, a3.y, a3.z);
				goto LABEL_24;
			}
			v20 = v2->Rotation.y;
			v21 = v2->Rotation.z;
			v34 = v2->Rotation.x;
			v8->x = *(float *)&v30;
			v35 = v20;
			v36 = v21;
			v22 = a3.y * 0.80000001 + v2->Position.y;
			v3->Position.z = *(float *)&v32;
			v3->Position.y = v22;
			if (v2->Scale.x <= 0.0)
			{
				(v2->Scale.x) = 0;
			}
			v17 = (int)(CtrlDisable);
			v18 = (int *)&v34;
		}
		else
		{
			ForcePlayerAction(v11, 12);
			v12 = v31;
			v13 = v32;
			v8->x = *(float *)&v30;
			(v3->Position.y) = v12;
			(v3->Position.z) = v13;
			ForcePlayerAction(v11, 24);
			if (!a2)
			{
				EnemyBounceThing_Wrapper(v11, a3.x, a3.y, a3.z);
			LABEL_24:
				v2->Action = 1;
				*(float *)&v2->CharIndex = 0.1f;
				RumbleA(playerNum, 0);
				return;
			}
			v14 = CtrlDisable;
			v15 = v2->Rotation.x;
			v16 = v2->Rotation.z;
			v31 = v2->Rotation.y;
			v30 = v15;
			v32 = v16;
			if (v14 <= 0.0)
			{
				(CtrlDisable) = 0;
			}
			v17 = (int)(CtrlDisable);
			v18 = &v30;
		}
		*(float *)&v23 = SpringPower + 5.0;
		sub_4413E0(v11, v23, (int)v18, v17);
		goto LABEL_24;
	}
}

void __cdecl BaneIwa_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle rz; // eax@1
	Angle rx; // eax@3
	Angle ry; // eax@5
	float YDist; // ST04_4@7
	float SpinSpeed;
	float v5;
	ObjectMaster *a1a; // [sp+10h] [bp+4h]@7

	v1 = a1->Data1;
	SetTextureToLevelObj();
	njPushMatrix(0);
	njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);

	rz = v1->Rotation.z;
	if (rz)
	{
		njRotateZ(0, (unsigned __int16)rz);
	}
	rx = v1->Rotation.x;
	if (rx)
	{
		njRotateX(0, (unsigned __int16)rx);
	}
	ry = v1->Rotation.y;
	if (ry)
	{
		njRotateY(0, (unsigned __int16)ry);
	}

	DrawModel((NJS_MODEL_SADX*)Object_BaneIwa.model); //Spring Base (NJS_MODEL)
	njPushMatrix(0); //Propeller Start
	njPushMatrix(0); //Spring Coil Start
	njPushMatrix(0); //Spring Top
	//YDist = v1->CharIndex * 4.0;
	//njTranslate(0, 0.0, YDist, 0.0);
	sub_407A00((NJS_MODEL_SADX*)Object_BaneIwa_Cap.model, 1.0); //Spring Top (NJS_MODEL)
	njPopMatrix(1u);
	//*(float *)&a1a = v1->CharIndex + 1.0;
	//njScale(0, 1.0, *(Float *)&a1a, 1.0);
	//if (*(float *)&a1a <= 1.0)
	//{
	//	*(float *)&a1a = 1.0;
	//}
	sub_407A00((NJS_MODEL_SADX*)Object_BaneIwa_Coil.model, 1.0); //Spring Coil (NJS_MODEL)
	njPopMatrix(1u);
	sub_407A00((NJS_MODEL_SADX*)Object_BaneIwa_Prop.model, 1.0); //Propeller (NJS_MODEL)
	njPopMatrix(1u);
	njPopMatrix(1u);
}

void __cdecl Load_BaneIwa(ObjectMaster *a1)
{
	EntityData1 *v2; // esi@1
	double v3; // st7@7
	char v5; // c0@7
	double v6; // st7@10
	char v7; // al@12
	CollisionInfo *v8; // ecx@13
	__int16 v9; // ax@13
	char v10; // bl@14
	ObjectMaster *v11; // edi@15
	unsigned __int8 a1a; // [sp+Ch] [bp+4h]@14

	v2 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		switch (v2->Action)
		{
		case 0:
			//a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
			a1->DisplaySub = BaneIwa_Display;
			InitCollision(a1, BaneIwa_Collision, 1, 4u);
			(v2->CollisionInfo->Flags) |= 0x40u;
			*(float*)&v2->Object = 180.0f;
			(v2->Scale.z) = 0.0f;
			*(float*)&v2->LoopData = 0.5f;
			v2->Index = 10;
			v2->Action = 1;
			break;
		case 1:
			*(float *)&v2->CharIndex = -fabs(njSin((unsigned __int64)(*(float*)&v2->Object * 65536.0 * 0.002777777777777778)) * *(float*)&v2->LoopData);
			if (!GetDebugMode())
			{
				v3 = *(float*)&v2->Object + v2->Scale.z;
				*(float*)&v2->Object = v3;
				if (v3 < v2->Scale.z + 290.0)
				{
					(v2->Scale.z) = 15.0f;
				}
				v6 = njCos((unsigned __int64)((*(float*)&v2->Object - 180.0) * 0.1 * 65536.0 * 0.002777777777777778))
					* 0.60000002;
				*(float*)&v2->LoopData = v6;
				if (v6 < 0.0)
				{
					*(float*)&v2->Object = 180.0f;
					(v2->Scale.z) = 0;
				}
				v7 = v2->Index + 1;
				v2->Index = v7;
				if ((unsigned __int8)v7 > 0xAu)
				{
					v8 = v2->CollisionInfo;
					v9 = v8->Flags;
					if (v9 & 1)
					{
						v10 = 0;
						v8->Flags = v9 & 0xFFFE;
						a1a = 0;
						while (1)
						{
							v11 = GetCharacterObject(a1a);
							if (v11)
							{
								if (sub_41CBC0(v2) ==  (char *)v11->Data1)
								{
									break;
								}
							}
							a1a = ++v10;
							if ((unsigned __int8)v10 >= 2u)
							{
								goto LABEL_18;
							}
						}
						*(float*)&v2->CharIndex = 0.1f;
						v2->NextAction = v10;
						(v2->Scale.z) = 20.0f;
						*(float*)&v2->Object = 270.0f;
						v2->Action = 2;
					}
					else
					{
					LABEL_18:
						if (v2->Action != 2)
						{
							AddToCollisionList(v2);
						}
					}
				}
				if (v2->Index > 0x32u)
				{
					v2->Index = 50;
				}
			}
			BaneIwa_Display(a1);
			break;
		case 2:
			v2->Index = 5;
			BaneIwa_Spring(a1, 1);
			BaneIwa_Display(a1);
			//PlaySound(9, 0, 0, 0);
			break;
		case 3:
			sub_46C150(a1);
			break;
		default:
			return;
		}
	}
}