#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "Rock_Objects.h"

void __cdecl LRock(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_LRock;
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
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DeleteDynCol;
	}
}

void __cdecl Rock1(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Rock1;
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
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DeleteDynCol;
	}
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
	{
		NJS_OBJECT *obj;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_IwaB;
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
			a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DeleteDynCol;
		}
	}
}

void __cdecl Load_Ioiwa01(ObjectMaster *a1)
{
	{
		NJS_OBJECT *obj;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_Ioiwa01;
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
			a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DeleteDynCol;
		}
	}
}

void __cdecl Load_Ioiwa02(ObjectMaster *a1)
{
	{
		NJS_OBJECT *obj;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_Ioiwa02;
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
			a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DeleteDynCol;
		}
	}
}

void __cdecl Load_Ioiwa03(ObjectMaster *a1)
{
	{
		NJS_OBJECT *obj;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_Ioiwa03;
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
			a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DeleteDynCol;
		}
	}
}