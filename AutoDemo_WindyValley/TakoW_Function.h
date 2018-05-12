#include "stdafx.h"
	#include <SADXModLoader.h>
	#include "Functions.h"
	#include "AdditionalVariables.h"
	#include <cmath>
    
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
		njTranslate(0, TakoW_Net.pos[0], TakoW_Net.pos[1], TakoW_Net.pos[2]);
		
		if (!ObjectSelectedDebug(a1))
		{
			if (*(float*)&v1->LoopData <= 2.0f)
			{
				ResetRenderFlags();
				njScale(0, 1.0f, 1.0f, 1.0f);
			}
			else if (*(float*)&v1->LoopData <= 4.0f)
			{
				ResetRenderFlags();
				njScale(0, 1.0f, 1.05f, 1.0f);
			}

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

		}
		sub_409E70((NJS_MODEL_SADX*)TakoW_Net.model, 0, 1.0);
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