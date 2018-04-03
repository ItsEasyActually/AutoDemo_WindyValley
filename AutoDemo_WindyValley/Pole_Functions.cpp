#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

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
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Has14;
	if (!ClipSetObject(a1))
	{
		obj = ObjectArray_GetFreeObject();
		obj->evalflags = v1->Object->evalflags;
		obj->model = v1->Object->model;
		obj->pos[0] = v1->Position.x;
		obj->pos[1] = v1->Position.y;
		obj->pos[2] = v1->Position.z;
		obj->ang[0] = v1->Rotation.x;
		obj->ang[1] = v1->Rotation.y;
		obj->ang[2] = v1->Rotation.z;
		obj->scl[0] = 1.0f;
		obj->scl[1] = 1.0f;
		obj->scl[2] = 1.0f;
		obj->child = 0;
		obj->sibling = 0;
		DynamicCOL_Add(ColFlags_Solid, a1, obj);
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DeleteDynamicCollision;
	}
}

void __cdecl Load_IHas15(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Has15;
	if (!ClipSetObject(a1))
	{
		obj = ObjectArray_GetFreeObject();
		obj->evalflags = v1->Object->evalflags;
		obj->model = v1->Object->model;
		obj->pos[0] = v1->Position.x;
		obj->pos[1] = v1->Position.y;
		obj->pos[2] = v1->Position.z;
		obj->ang[0] = v1->Rotation.x;
		obj->ang[1] = v1->Rotation.y;
		obj->ang[2] = v1->Rotation.z;
		obj->scl[0] = 1.0f;
		obj->scl[1] = 1.0f;
		obj->scl[2] = 1.0f;
		obj->child = 0;
		obj->sibling = 0;
		DynamicCOL_Add(ColFlags_Solid, a1, obj);
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DeleteDynamicCollision;
	}
}

void __cdecl Load_IHas16(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;
	Angle XAng;
	Angle YAng;
	Angle ZAng;

	v1 = a1->Data1;
	v1->Object = &I_Has16;
	if (!ClipSetObject(a1))
	{
		obj = ObjectArray_GetFreeObject();
		obj->evalflags = 0;
		obj->model = v1->Object->model;
		obj->scl[0] = 1.0f;
		obj->scl[1] = 1.0f;
		obj->scl[2] = 1.0f;
		obj->ang[0] = v1->Rotation.x;
		obj->ang[1] = v1->Rotation.y;
		obj->ang[2] = v1->Rotation.z;
		obj->pos[0] = v1->Position.x;
		obj->pos[1] = v1->Position.y;
		obj->pos[2] = v1->Position.z;
		obj->child = 0;
		obj->sibling = 0;
		DynamicCOL_Add(ColFlags_Solid, a1, obj);
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DeleteDynamicCollision;
	}
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
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Unreferenced02_001149B4;
	if (!ClipSetObject(a1))
	{
		obj = ObjectArray_GetFreeObject();
		obj->evalflags = v1->Object->evalflags;
		obj->model = v1->Object->model;
		obj->pos[0] = v1->Position.x;
		obj->pos[1] = v1->Position.y;
		obj->pos[2] = v1->Position.z;
		obj->ang[0] = v1->Rotation.x;
		obj->ang[1] = v1->Rotation.y;
		obj->ang[2] = v1->Rotation.z;
		obj->scl[0] = 1.0f;
		obj->scl[1] = 1.0f;
		obj->scl[2] = 1.0f;
		obj->child = 0;
		obj->sibling = 0;
		DynamicCOL_Add(ColFlags_Solid, a1, obj);
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DeleteDynamicCollision;
	}
}