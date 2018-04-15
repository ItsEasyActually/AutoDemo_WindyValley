#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "Raft_Objects.h"

void __cdecl Raft_Collision(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	float v2; // ecx@1
	float v3; // edx@1
	NJS_OBJECT *v4; // eax@1
	float XScale;
	NJS_OBJECT *object;

	v1 = a1->Data1;
	if (v1->Scale.z >= 0)
	{
		object = &Object_Raft2;
	}
	else
	{
		object = &Object_Raft3;
	}
	XScale = v1->Scale.x;
	v2 = v1->Position.y;
	v3 = v1->Position.z;
	v1->CharIndex = (v1->Position.x);
	*(float*)&v1->Object = v2;
	*(float*)&v1->LoopData = v3;
	v4 = ObjectArray_GetFreeObject();
	v1->CollisionInfo = (CollisionInfo *)v4;
	v4->evalflags = object->evalflags;
	(v4->scl[0]) = 1.0f + XScale;
	(v4->scl[1]) = 1.0f + XScale;
	(v4->scl[2]) = 1.0f + XScale;
	v4->ang[0] = 0;
	v4->ang[1] = v1->Rotation.y;
	v4->ang[2] = 0;
	v4->pos[0] = object->pos[0] + v1->Position.x;
	v4->pos[1] = object->pos[1] + v1->Position.y;
	v4->pos[2] = object->pos[2] + v1->Position.z;
	v4->model = object->model;
	v4->child = 0;
	v4->sibling = 0;
	DynamicCOL_Add((ColFlags)0x8000000, a1, v4);
	v1->InvulnerableTime = 0;
}

//void __cdecl Raft_Movement(ObjectMaster *a1)
//{
//	ObjectMaster *v1; // edi@1
//	EntityData1 *v2; // esi@1
//	Angle YAng; // eax@1
//	CollisionInfo *v4; // eax@3
//	float XPos; // [sp+8h] [bp-18h]@1
//	float YPos; // [sp+Ch] [bp-14h]@1
//	float ZPos; // [sp+10h] [bp-10h]@1
//	NJS_VECTOR Vector; // [sp+14h] [bp-Ch]@1
//
//	v1 = a1;
//	v2 = a1->Data1;
//	(Vector.x) = 0;
//	(Vector.y) = 0;
//	(Vector.z) = 0;
//	YPos = v2->Position.y;
//	XPos = v2->Position.x;
//	ZPos = v2->Position.z;
//	njPushMatrix(_nj_unit_matrix_);
//	Vector.z = njSin(v2->Rotation.x) * v2->Scale.z;
//	YAng = v2->Rotation.y;
//	if (YAng)
//	{
//		njRotateY(0, (unsigned __int16)YAng);
//	}
//	njCalcVector(0, &Vector, &Vector);
//	v2->Position.x = Vector.x + *(float*)&v2->CharIndex;
//	v2->Position.z = Vector.z + *(float*)&v2->LoopData;
//	njPopMatrix(1u);
//	*(float *)&v1->UnknownA_ptr->field_10 = v2->Position.x - XPos;
//	v1->UnknownA_ptr->field_2C = v1->UnknownA_ptr->field_10;
//	*(float *)&v1->UnknownA_ptr->field_14 = v2->Position.y - YPos;
//	v1->UnknownA_ptr->field_30 = v1->UnknownA_ptr->field_14;
//	*(float *)&v1->UnknownA_ptr->field_18 = v2->Position.z - ZPos;
//	v1->UnknownA_ptr->field_34 = v1->UnknownA_ptr->field_18;
//	(v2->Status) |= 1u;
//	v4 = v2->CollisionInfo;
//	v4->CollisionThings[0].Entity = 0;
//	*(_DWORD *)&v4->CollisionThings[1].field_0 = v2->Rotation.y;
//	v4->CollisionThings[1].Entity = 0;
//	v4->Radius = v2->Object->pos[0] + v2->Position.x;
//	*(float *)&v4->CollisionArray = v2->Object->pos[1] + v2->Position.y;
//	*(float *)&v4->CollisionThings[0].field_0 = v2->Object->pos[2] + v2->Position.z;
//	if (++v2->InvulnerableTime >= 0x15u)
//	{
//		v2->InvulnerableTime = 0;
//	}
//}

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
	float XPos;
	float YPos;
	float ZPos;
	float YDest;



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
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Raft_Display;
		a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Raft_Display;
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))DeleteDynamicCollision;
		Raft_Collision(a1);
	}
}