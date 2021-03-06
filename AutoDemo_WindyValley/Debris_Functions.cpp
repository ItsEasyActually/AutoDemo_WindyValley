#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "IBou-IHah_Objects.h"

//I Bou Objects
void __cdecl Load_IBou01(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_IBou01;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_IBou02(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_IBou02;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_IBou03(ObjectMaster *a1)
{
	a1->Data1->Object = &Unreferenced00_001067D8;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

//I Hah Obhects
void __cdecl Load_IHah01(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_IHah01;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_IHah02(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_IHah02;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_IHah03(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_IHah03;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_IHah04(ObjectMaster *a1)
{
	{
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_IHah04;
		a1->MainSub = Basic_Main;
		a1->DisplaySub = Basic_Display;
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
	}
}

void __cdecl Load_IHah05(ObjectMaster *a1)
{
	{
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_IHah05;
		a1->MainSub = Basic_Main;
		a1->DisplaySub = Basic_Display;
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
	}
}

void __cdecl Load_IHah06(ObjectMaster *a1)
{
	{
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_IHah06;
		a1->MainSub = Basic_Main;
		a1->DisplaySub = Basic_Display;
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
	}
}