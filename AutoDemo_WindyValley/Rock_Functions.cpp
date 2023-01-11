#include "stdafx.h"


#include "Rock_Objects.h"

void __cdecl LRock(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_LRock;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Rock1(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Rock1;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Rock2(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Rock2_Collision, 1, 4u);
	}
	v1->Object = &Object_Rock2;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Rock3(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Rock3_Collision, 1, 4u);
	}
	v1->Object = &Object_Rock3;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Rock5(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Rock5_Collision, 3, 4u);
	}
	v1->Object = &Object_Rock5;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_IwaB(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_IwaB;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Ioiwa01(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Ioiwa01;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Ioiwa02(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Ioiwa02;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Ioiwa03(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Ioiwa03;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}