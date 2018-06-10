#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "Sara_Objects.h"

void __cdecl Load_SaraB1(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_SaraB1;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_SaraB2(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_SaraB2;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_SaraM1(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_SaraM1;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_SaraM2(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_SaraM2;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_SaraS1(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_SaraS1;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_SaraS2(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_SaraS2;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}
