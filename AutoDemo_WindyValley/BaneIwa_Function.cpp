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
	v5 = *(float*)&v1->LoopData * 65536.0 * 0.002777777777777778;
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

	float thingTest;
	float fanSpeed;
	float otherFloat;

	v2 = a1->Data1;
	fanSpeed = v2->Scale.z;
	if (!ClipSetObject(a1))
	{
		if (fanSpeed != 0)
		{
			*(float *)&v2->LoopData = fanSpeed + *(float *)&v2->LoopData;
		}
		else
		{
			*(float *)&v2->LoopData = 2.5f + *(float *)&v2->LoopData;
		}
		switch (v2->Action)
		{
		case 0:
			a1->DeleteSub = DeleteObject_;
			a1->DisplaySub = BaneIwa_Display;
			InitCollision(a1, BaneIwa_Collision, 1, 4u);
			(v2->CollisionInfo->Flags) |= 0x40u;
			*(float *)&v2->Object = 180.0f;
			otherFloat = 0;
			thingTest = 0.5f;
			v2->Index = 10;
			v2->Action = 1;
			break;
		case 1:
			v3 = (int)(*(float *)&v2->Object * 65536.0 * 0.002777777777777778);
			*(float *)&v2->CharIndex = -fabs(njSin(v3) * thingTest);
			if (!GetDebugMode())
			{
				v4 = *(float *)&v2->Object + otherFloat;
				*(float *)&v2->Object = v4;
				if (v4 < otherFloat + 290.0)
				{
					(otherFloat) = 15.0f;
				}
				v7 = (int)((*(float *)&v2->Object - 180.0) * 0.1 * 65536.0 * 0.002777777777777778);
				v8 = njCos(v7) * 0.60000002;
				thingTest = v8;
				if (v8 < 0.0)
				{
					*(float *)&v2->Object = 180.0f;
					(otherFloat) = 0;
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
						(otherFloat) = 20.0f;
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

void __cdecl Lauchin_Display(ObjectMaster *a1)
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
		x1 = v1->Rotation.x;
		if (x1)
		{
			njRotateX(0, (unsigned __int16)x1);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Lauchin.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		if (!ObjectSelectedDebug(a1))
		{
			if (*(float*)&v1->LoopData >= 20.0f)
			{
				njTranslate(0, Lauchin_Cap.pos[0], 1.2861709f, Lauchin_Cap.pos[2]);
				ResetRenderFlags();
				njScale(0, 1.0f, 1.5f, 1.0f);
			}

			else if (*(float*)&v1->LoopData >= 16.0f)
			{
				njTranslate(0, Lauchin_Cap.pos[0], 1.1861709f, Lauchin_Cap.pos[2]);
				ResetRenderFlags();
				njScale(0, 1.0f, 1.4f, 1.0f);
			}

			else if (*(float*)&v1->LoopData >= 12.0f)
			{
				njTranslate(0, Lauchin_Cap.pos[0], 1.1861709f, Lauchin_Cap.pos[2]);
				ResetRenderFlags();
				njScale(0, 1.0f, 1.3f, 1.0f);
			}

			else if (*(float*)&v1->LoopData >= 8.0f)
			{
				njTranslate(0, Lauchin_Cap.pos[0], 1.0861709f, Lauchin_Cap.pos[2]);
				ResetRenderFlags();
				njScale(0, 1.0f, 1.2f, 1.0f);
			}

			else if (*(float*)&v1->LoopData >= 4.0f)
			{
				njTranslate(0, Lauchin_Cap.pos[0], 1.0861709f, Lauchin_Cap.pos[2]);
				ResetRenderFlags();
				njScale(0, 1.0f, 1.1f, 1.0f);
			}

			else if (*(float*)&v1->LoopData == 1.0f)
			{
				njTranslate(0, Lauchin_Cap.pos[0], Lauchin_Cap.pos[1], Lauchin_Cap.pos[2]);
				ResetRenderFlags();
				njScale(0, 1.0f, 1.0f, 1.0f);
			}

			else
			{
				njTranslate(0, Lauchin_Cap.pos[0], Lauchin_Cap.pos[1], Lauchin_Cap.pos[2]);
			}

			if (*(float*)&v1->LoopData != 1.0f && !IsGamePaused())
			{
				*(float*)&v1->LoopData -= 1.0f;

				if (FramerateSetting >= 2)
				{
					*(float*)&v1->LoopData -= 1.0f;
				}
			}
		}
		sub_409E70((NJS_MODEL_SADX*)Lauchin_Cap.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Lauchin(ObjectMaster *a1)
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

	float thingTest;
	float otherFloat;

	v2 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		switch (v2->Action)
		{
		case 0:
			a1->DeleteSub = DeleteObject_;
			a1->DisplaySub = Lauchin_Display;
			InitCollision(a1, Lauchin_Collision, 1, 4u);
			(v2->CollisionInfo->Flags) |= 0x40u;
			*(float *)&v2->Object = 180.0f;
			otherFloat = 0;
			thingTest = 0.5f;
			v2->Index = 10;
			v2->Action = 1;
			break;
		case 1:
			v3 = (int)(*(float *)&v2->Object * 65536.0 * 0.002777777777777778);
			*(float *)&v2->CharIndex = -fabs(njSin(v3) * thingTest);
			if (!GetDebugMode())
			{
				v4 = *(float *)&v2->Object + otherFloat;
				*(float *)&v2->Object = v4;
				if (v4 < otherFloat + 290.0)
				{
					(otherFloat) = 15.0f;
				}
				v7 = (int)((*(float *)&v2->Object - 180.0) * 0.1 * 65536.0 * 0.002777777777777778);
				v8 = njCos(v7) * 0.60000002;
				thingTest = v8;
				if (v8 < 0.0)
				{
					*(float *)&v2->Object = 180.0f;
					(otherFloat) = 0;
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
						(otherFloat) = 20.0f;
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
			Lauchin_Display(a1);
			break;
		case 2:
			v2->Index = 5;
			sub_7A46C0(a1, 1);
			*(float *)&v2->LoopData = 25.0f;
			Lauchin_Display(a1);
			PlaySound(9, 0, 0, 0);
			break;
		case 3:
			sub_46C150(a1);
			break;
		default:
			return;
		}
	}
}