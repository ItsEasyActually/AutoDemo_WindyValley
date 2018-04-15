#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"
#include <cmath>

#include "Spring_Objects.h"

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
	sub_407A00((NJS_MODEL_SADX*)Object_BaneIwa_Cap.model, 1.0); //Spring Top (NJS_MODEL)
	njPopMatrix(1u);
	sub_407A00((NJS_MODEL_SADX*)Object_BaneIwa_Coil.model, 1.0); //Spring Coil (NJS_MODEL)
	njPopMatrix(1u);
	njTranslate(0, Object_BaneIwa_Prop.pos[0], Object_BaneIwa_Prop.pos[1], Object_BaneIwa_Prop.pos[2]);
	v5 = *(float*)&v1->field_3C * 65536.0 * 0.002777777777777778;
	if (v5)
	{
		njRotateZ(0, (unsigned __int16)v5);
	}
	sub_407A00((NJS_MODEL_SADX*)Object_BaneIwa_Prop.model, 1.0); //Propeller (NJS_MODEL)
	njPopMatrix(1u);
	njPopMatrix(1u);
}

void __cdecl Load_BaneIwa(ObjectMaster *a1)
{
	EntityData1 *v2; // esi@1
	unsigned int v3; // eax@4
	double v4; // st7@7
	char v6; // c0@7
	unsigned int v7; // eax@10
	double v8; // st7@10
	char v9; // al@12
	CollisionInfo *v10; // ecx@13
	__int16 v11; // ax@13
	char v12; // bl@14
	ObjectMaster *v13; // edi@15
	unsigned __int8 a1a; // [sp+Ch] [bp+4h]@14

	float fanSpeed;

	v2 = a1->Data1;
	fanSpeed = v2->Scale.y/2;
	v2->Scale.x = 40.0f;
	if (!ClipSetObject(a1))
	{
		if (fanSpeed != 0)
		{
			*(float *)&v2->field_3C = fanSpeed + *(float *)&v2->field_3C;
		}
		else
		{
			*(float *)&v2->field_3C = 2.5f + *(float *)&v2->field_3C;
		}
		switch (v2->Action)
		{
		case 0:
			a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
			a1->DisplaySub = BaneIwa_Display;
			InitCollision(a1, BaneIwa_Collision, 1, 4u);
			(v2->CollisionInfo->Flags) |= 0x40u;
			*(float *)&v2->Object = 180.0f;
			(v2->Scale.z) = 0;
			*(float *)&v2->LoopData = 0.5f;
			v2->Index = 10;
			v2->Action = 1;
			break;
		case 1:
			v3 = (int)(*(float *)&v2->Object * 65536.0 * 0.002777777777777778);
			*(float *)&v2->CharIndex = -fabs(njSin(v3) * *(float *)&v2->LoopData);
			if (!GetDebugMode())
			{
				v4 = *(float *)&v2->Object + v2->Scale.z;
				*(float *)&v2->Object = v4;
				if (v4 < v2->Scale.z + 290.0)
				{
					(v2->Scale.z) = 15.0f;
				}
				v7 = (int)((*(float *)&v2->Object - 180.0) * 0.1 * 65536.0 * 0.002777777777777778);
				v8 = njCos(v7) * 0.60000002;
				*(float *)&v2->LoopData = v8;
				if (v8 < 0.0)
				{
					*(float *)&v2->Object = 180.0f;
					(v2->Scale.z) = 0;
				}
				v9 = v2->Index + 1;
				v2->Index = v9;
				if ((unsigned __int8)v9 > 0xAu)
				{
					v10 = v2->CollisionInfo;
					v11 = v10->Flags;
					if (v11 & 1)
					{
						v12 = 0;
						v10->Flags = v11 & 0xFFFE;
						a1a = 0;
						while (1)
						{
							v13 = GetCharacterObject(a1a);
							if (v13)
							{
								if (sub_41CBC0(v2) == v13->Data1)
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
						*(float *)&v2->CharIndex = 0.1f;
						v2->NextAction = v12;
						(v2->Scale.z) = 20.0f;
						*(float *)&v2->Object = 270.0f;
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
			sub_7A46C0(a1, 1);
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