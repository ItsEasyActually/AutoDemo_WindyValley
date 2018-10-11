#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "GoldGearandBolt.h"

//Easter Egg objects
void __cdecl WGear_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle v6;
	Angle v7;
	float v8;
	float ZScale; // ST08_4@3
	float YScale; // ST04_4@4
	float XScale; // ST00_4@4

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
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateZ(0, (unsigned __int16)v5);
		}
		v8 = v1->Scale.x;
		YScale = (1.0 + v8);
		XScale = (1.0 + v8);
		ZScale = (1.0 + v8);
		njScale(0, ZScale, YScale, XScale);
		sub_409E70((NJS_MODEL_SADX*)Object_WGEAR.model, 0, 1.0);
		njPopMatrix(1u);
	}
}

void __cdecl Load_WGear(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.z != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.z + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 1.5f + *(float*)&v1->CharIndex;
				}
				WGear_Display(a1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = WGear_Display;
		}
	}
}

void __cdecl WBolt_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle v6;
	Angle v7;
	float v8;
	float ZScale; // ST08_4@3
	float YScale; // ST04_4@4
	float XScale; // ST00_4@4

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
		v8 = v1->Scale.x;
		YScale = (1.0 + v8);
		XScale = (1.0 + v8);
		ZScale = (1.0 + v8);
		njScale(0, ZScale, YScale, XScale);
		sub_409E70((NJS_MODEL_SADX*)Object_WBOLT.model, 0, 1.0);
		njPopMatrix(1u);
	}
}

void __cdecl Load_WBolt(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				WBolt_Display(a1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = WBolt_Display;
		}
	}
}