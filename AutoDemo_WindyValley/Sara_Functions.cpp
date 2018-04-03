#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "Sara_Objects.h"

void __cdecl Load_SaraB1(ObjectMaster *a1)
{
	{
		NJS_OBJECT *obj;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_SaraB1;
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

void __cdecl Load_SaraB2(ObjectMaster *a1)
{
	{
		NJS_OBJECT *obj;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_SaraB2;
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

void __cdecl Load_SaraM1(ObjectMaster *a1)
{
	{
		NJS_OBJECT *obj;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_SaraM1;
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

void __cdecl Load_SaraM2(ObjectMaster *a1)
{
	{
		NJS_OBJECT *obj;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_SaraM2;
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

void __cdecl Load_SaraS1(ObjectMaster *a1)
{
	{
		NJS_OBJECT *obj;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_SaraS1;
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

void __cdecl Load_SaraS2(ObjectMaster *a1)
{
	{
		NJS_OBJECT *obj;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_SaraS2;
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