#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "Raft_Objects.h"

void __cdecl Raft_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	Angle YAng;
	float XScale;

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		YAng = v1->Rotation.y;
		if (YAng)
		{
			njRotateY(0, (unsigned __int16)YAng);
		}
		XScale = 1.0 + v1->Scale.x;
		njScale(0, XScale, XScale, XScale);
		ProcessModelNode_AB_Wrapper(v1->Object, 1.0);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Raft(ObjectMaster *a1)
{
	EntityData1 *v1;
	float ScaleZ;
	NJS_OBJECT *obj;

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		ScaleZ = v1->Scale.z;
		if (ScaleZ >= 0.0)
		{
			v1->Object = &Object_Raft2;
		}
		else
		{
			v1->Object = &Object_Raft3;
		}
		obj = ObjectArray_GetFreeObject();
		obj->evalflags = v1->Object->evalflags;
		obj->model = v1->Object->model;
		obj->pos[0] = v1->Position.x;
		obj->pos[1] = v1->Position.y;
		obj->pos[2] = v1->Position.z;
		obj->ang[0] = 0;
		obj->ang[1] = v1->Rotation.y;
		obj->ang[2] = 0;
		obj->scl[0] = 1.0f + v1->Scale.x;
		obj->scl[1] = 1.0f + v1->Scale.x;
		obj->scl[2] = 1.0f + v1->Scale.x;
		obj->child = 0;
		obj->sibling = 0;
		DynamicCOL_Add(ColFlags_Solid, a1, obj);
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Raft_Display;
		a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Raft_Display;
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DeleteObject_DynamicCOL;
	}
}