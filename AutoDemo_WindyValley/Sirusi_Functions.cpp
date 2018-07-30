#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "Sirusi_Objects.h"

void __cdecl Sirusi1_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle v6;
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
		njAction(&action_Sirusi1_Action, *(float *)&v1->CharIndex);

		njPopMatrix(1u);

		if (!ObjectSelectedDebug(a1) && !IsGamePaused())
		{
			*(float*)&v1->CharIndex = 0.86f + *(float*)&v1->CharIndex;
			if (*(float*)&v1->CharIndex >= 54.0)
			{
				*(float*)&v1->CharIndex = 0.0;
			}
		}
	}
}

void __cdecl Load_Sirusi1(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				AddToCollisionList(v1);
				sub_49CE60(v1, 0);
				Sirusi1_Display(a1);
			}
		}
		else
		{
			v1->Action = 1;

			a1->DisplaySub = Sirusi1_Display;
			a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
			InitCollision(a1, Sirusi1_Collision, 1, 4u);
		}
	}
}

void __cdecl Load_Sirusi2(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Sirusi2;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Sirusi3(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Sirusi3;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Sirusi4(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Sirusi4;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Sirusi5(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Sirusi5_Collision, 1, 4u);
	}
	v1->Object = &Object_Sirusi5;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Sirusi6(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Sirusi6_Collision, 1, 4u);
	}
	v1->Object = &Object_Sirusi6;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Sirusi7(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Sirusi7_Collision, 1, 4u);
	}
	v1->Object = &Object_Sirusi7;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Sirusi8(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Sirusi8_Collision, 1, 4u);
	}
	v1->Object = &Object_Sirusi8;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Sirusi9(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Sirusi9;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Siru11(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Siru11;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Siru12(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Siru12;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Siru13(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Siru13;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Yaji01(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Yaji01_Collision, 2, 4u);
	}
	v1->Object = &Object_Yaji01;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}
