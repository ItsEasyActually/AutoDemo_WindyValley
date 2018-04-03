#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "IDai_Objects.h"

void __cdecl Load_IDai1(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai1;
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

void __cdecl Load_IDai2(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai2;
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

void __cdecl Load_IDai3(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai3;
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

void __cdecl Load_IDai4(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai4;
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

void __cdecl Load_IDai5(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai5;
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

void __cdecl Load_IDai6(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai6;
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

void __cdecl Load_IDai7(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai7;
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

void __cdecl Load_IDai8(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai8;
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

void __cdecl Load_IDai9(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai9;
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

void __cdecl Load_IDai10(ObjectMaster *a1)
{
	NJS_OBJECT *obj;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Unreferenced01_00106B30;
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