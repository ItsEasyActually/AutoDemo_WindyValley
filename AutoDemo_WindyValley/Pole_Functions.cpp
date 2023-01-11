#include "stdafx.h"

#include "Pole_Objects.h"

void __cdecl Load_Pole1(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Pole1_Collision, 2, 4u);
	}
	v1->Object = &Object_Pole1;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Pole2(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Pole2_Collision, 1, 4u);
	}
	v1->Object = &Object_Pole2;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_IHas14(ObjectMaster *a1)
{
	a1->Data1->Object = &I_Has14;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_IHas15(ObjectMaster *a1)
{
	a1->Data1->Object = &I_Has15;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_IHas16(ObjectMaster *a1)
{
	a1->Data1->Object = &I_Has16;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_IHas17(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&IHas17_Collision, 2, 4u);
	}
	v1->Object = &I_Has17;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_IHas18(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, IHas18_Collision, 5, 4u);
	}
	v1->Object = &I_Has18;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_IHas19(ObjectMaster *a1)
{
	a1->Data1->Object = &Unreferenced02_001149B4;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}
