#include "stdafx.h"
#include "Grass_Objects.h"
#include "Flower_Objects.h"
#include "W_Ki_Objects.h"

//Grass Object Functions
void __cdecl Grass1_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Grass1_Action, *(float *)&v1->CharIndex);
		njPopMatrix(1u);
	}
}

void __cdecl Grass1_Main(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;

	if (!ClipSetObject(a1))
	{
		if (!ObjectSelectedDebug(a1) && !IsGamePaused())
		{
			*(float*)&v1->CharIndex = 1.0f + *(float*)&v1->CharIndex;
		}

		Grass1_Display(a1);

		if (*(float*)&v1->CharIndex >= 7.0)
		{
			*(float*)&v1->CharIndex = 0.0;
		}
	}
}

void __cdecl Load_Grass1(ObjectMaster *a1)
{
	a1->MainSub = Grass1_Main;
	a1->DisplaySub = Grass1_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Grass2_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Grass2_Action, *(float *)&v1->CharIndex);
		njPopMatrix(1u);
	}
}

void __cdecl Grass2_Main(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;

	if (!ClipSetObject(a1))
	{
		if (!ObjectSelectedDebug(a1) && !IsGamePaused())
		{
			*(float*)&v1->CharIndex = 1.0f + *(float*)&v1->CharIndex;
		}

		Grass2_Display(a1);

		if (*(float*)&v1->CharIndex >= 7.0)
		{
			*(float*)&v1->CharIndex = 0.0;
		}
	}
}

void __cdecl Load_Grass2(ObjectMaster *a1)
{
	a1->MainSub = Grass2_Main;
	a1->DisplaySub = Grass2_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Grass3_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_Grass3, *(float *)&v1->CharIndex);
		njPopMatrix(1u);
	}
}

void __cdecl Grass3_Main(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;

	if (!ClipSetObject(a1))
	{
		if (!ObjectSelectedDebug(a1) && !IsGamePaused())
		{
			*(float*)&v1->CharIndex = 1.0f + *(float*)&v1->CharIndex;
		}

		Grass3_Display(a1);

		if (*(float*)&v1->CharIndex >= 7.0)
		{
			*(float*)&v1->CharIndex = 0.0;
		}
	}
}

void __cdecl Load_Grass3(ObjectMaster *a1)
{
	a1->MainSub = Grass3_Main;
	a1->DisplaySub = Grass3_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Grass4_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_Grass4, *(float *)&v1->CharIndex);
		njPopMatrix(1u);
		if (!ObjectSelectedDebug(a2) && !IsGamePaused())
		{
			if (*(float*)&v1->CharIndex >= 7.0)
			{
				*(float*)&v1->CharIndex = 0.0;
			}
		}
	}
}

void __cdecl Grass4_Main(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;

	if (!ClipSetObject(a1))
	{
		if (!ObjectSelectedDebug(a1) && !IsGamePaused())
		{
			*(float*)&v1->CharIndex = 1.0f + *(float*)&v1->CharIndex;
		}

		Grass4_Display(a1);

		if (*(float*)&v1->CharIndex >= 7.0)
		{
			*(float*)&v1->CharIndex = 0.0;
		}
	}
}

void __cdecl Load_Grass4(ObjectMaster *a1)
{
	a1->MainSub = Grass4_Main;
	a1->DisplaySub = Grass4_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Green0(ObjectMaster *a1)
{
	{
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_Green0;
		a1->MainSub = Basic_Main;
		a1->DisplaySub = Basic_Display;
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;

	}
}

void __cdecl WKusa1_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_WKusa1, *(float *)&v1->CharIndex);
		njPopMatrix(1u);
	}
}

void __cdecl WKusa1_Main(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;

	if (!ClipSetObject(a1))
	{
		if (!ObjectSelectedDebug(a1) && !IsGamePaused())
		{
			*(float*)&v1->CharIndex = 1.0f + *(float*)&v1->CharIndex;
		}

		WKusa1_Display(a1);

		if (*(float*)&v1->CharIndex >= 7.0)
		{
			*(float*)&v1->CharIndex = 0.0;
		}
	}
}

void __cdecl Load_WKusa1(ObjectMaster *a1)
{
	a1->MainSub = WKusa1_Main;
	a1->DisplaySub = WKusa1_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

//Flower Functions
void __cdecl Flower0_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_Flower0, *(float *)&v1->CharIndex);
		njPopMatrix(1u);
	}
}

void __cdecl Flower0_Main(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;

	if (!ClipSetObject(a1))
	{
		if (!ObjectSelectedDebug(a1) && !IsGamePaused())
		{
			*(float*)&v1->CharIndex = 1.0f + *(float*)&v1->CharIndex;
		}

		Flower0_Display(a1);

		if (*(float*)&v1->CharIndex >= 7.0)
		{
			*(float*)&v1->CharIndex = 0.0;
		}
	}
}

void __cdecl Load_Flower0(ObjectMaster *a1)
{
	a1->MainSub = Flower0_Main;
	a1->DisplaySub = Flower0_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Flower1_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_Flower1, *(float *)&v1->CharIndex);
		njPopMatrix(1u);
	}
}

void __cdecl Flower1_Main(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;

	if (!ClipSetObject(a1))
	{
		if (!ObjectSelectedDebug(a1) && !IsGamePaused())
		{
			*(float*)&v1->CharIndex = 1.0f + *(float*)&v1->CharIndex;
		}

		Flower1_Display(a1);

		if (*(float*)&v1->CharIndex >= 7.0)
		{
			*(float*)&v1->CharIndex = 0.0;
		}
	}
}

void __cdecl Load_Flower1(ObjectMaster *a1)
{
	a1->MainSub = Flower1_Main;
	a1->DisplaySub = Flower1_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl PinkF_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&PinkF_Anim, *(float *)&v1->CharIndex);
		njPopMatrix(1u);
	}
}

void __cdecl PinkF_Main(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;

	if (!ClipSetObject(a1))
	{
		if (!ObjectSelectedDebug(a1) && !IsGamePaused())
		{
			*(float*)&v1->CharIndex = 1.0f + *(float*)&v1->CharIndex;
		}

		PinkF_Display(a1);

		if (*(float*)&v1->CharIndex >= 7.0)
		{
			*(float*)&v1->CharIndex = 0.0;
		}
	}
}

void __cdecl Load_PinkF(ObjectMaster *a1)
{
	a1->MainSub = PinkF_Main;
	a1->DisplaySub = PinkF_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

//Windy Tree Functions
void __cdecl WKi1_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_WKi1, *(float*)&v1->CharIndex);
		njPopMatrix(1u);
	}
}

void __cdecl WKi1_Main(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;

	if (!ClipSetObject(a1))
	{
		if (!ObjectSelectedDebug(a1) && !IsGamePaused())
		{
			*(float*)&v1->CharIndex = 1.0f + *(float*)&v1->CharIndex;
		}

		WKi1_Display(a1);

		if (*(float*)&v1->CharIndex >= 17.0)
		{
			*(float*)&v1->CharIndex = 0.0;
		}
	}
}

void __cdecl Load_WKi1(ObjectMaster *a1)
{
	a1->MainSub = WKi1_Main;
	a1->DisplaySub = WKi1_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl WKi2_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_WKi2, *(float *)&v1->CharIndex);
		njPopMatrix(1u);
	}
}

void __cdecl WKi2_Main(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;

	if (!ClipSetObject(a1))
	{
		if (!ObjectSelectedDebug(a1) && !IsGamePaused())
		{
			*(float*)&v1->CharIndex = 1.0f + *(float*)&v1->CharIndex;
		}

		WKi2_Display(a1);

		if (*(float*)&v1->CharIndex >= 17.0)
		{
			*(float*)&v1->CharIndex = 0.0;
		}
	}
}

void __cdecl Load_WKi2(ObjectMaster *a1)
{
	a1->MainSub = WKi2_Main;
	a1->DisplaySub = WKi2_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}
