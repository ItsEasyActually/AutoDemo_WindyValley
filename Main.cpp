//This is a mod.

#include "stdafx.h"
#include "Trampoline.h"
#include "WindyGate.h"
#include "SBridge.h"
#include "Rock_Objects.h"
#include "Sirusi_Objects.h"
#include "Grass_Objects.h"
#include "Pole_Objects.h"
#include "IDai_Objects.h"
#include "IHas_Objects.h"
#include "IBou-IHah_Objects.h"
#include "Sara_Objects.h"
#include "Flower_Objects.h"
#include "Raft_Objects.h"
#include "Wele.h"
#include "Tako_W.h"
#include "Spring_Objects.h"
#include "W_Ki_Objects.h"
#include "Dome_Pieces.h"
#include "Propellers.h"
#include "Pot_Objects.h"
#include "UnrefencedModels.h"
#include "Act1.h"
#include "Act2.h"
#include "Act3.h"
#include "PathInfo.h"
#include "StartPos.h"

//Variables
static float grassFrame = 0;
static float treeFrame = 0;

//Structs
struct ObjectThing
{
	ObjectFuncPtr func;
	int16_t list;
	int16_t field_A;
	Rotation3 Rotation;
	NJS_VECTOR Position;
	NJS_OBJECT* object;
};

//Additional SADX Variables
DataPointer(int, MissedFrames, 0x03B1117C);
DataPointer(int, ClipLevel, 0x03ABDCF0);
DataArray(CollisionData, stru_C67750, 0xC67750, 1);
DataArray(CollisionData, stru_C673B8, 0xC673B8, 7);
DataArray(CollisionData, TuriBr2_Collision, 0x00C66FB8, 1);
DataArray(CollisionData, TuriBr_Collision, 0x00C66F88, 1);

//Additional SADX Functions
FunctionPointer(NJS_OBJECT*, DynamicCollision, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);
FunctionPointer(void, sub_407870, (NJS_MODEL_SADX *model, char blend, float radius_scale), 0x407870);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
FunctionPointer(void, sub_49CD60, (ObjectMaster *a1), 0x49CD60);
FunctionPointer(void, sub_49DF70, (ObjectMaster *a1), 0x49DF70);
FunctionPointer(void, sub_49E170, (ObjectMaster *a1), 0x49E170);
FunctionPointer(void, sub_4DFAF0, (ObjectMaster *a1), 0x4DFAF0);
FunctionPointer(ObjectMaster, DoObjectThing, (ObjectThing *a1, ObjectMaster *a2), 0x40B9D0);
FunctionPointer(void, sub_4E0050, (ObjectMaster *a1), 0x4E0050);
FunctionPointer(int, rand, (), 0x6443BF);
FunctionPointer(void, sub_49CE60, (EntityData1 *a1, int a2), 0x49CE60);
FunctionPointer(void, sub_7A6440, (ObjectMaster *a1), 0x7A6440);
FunctionPointer(void, sub_4E0A60, (ObjectMaster *a1), 0x4E0A60);


//Usercall and Thiscall Functions
ThiscallFunctionPointer(void, sub_4E3090, (int _this), 0x4E3090);

// void __usercall(int a1@<eax>)
static const void *const sub_4E2CC0Ptr = (void*)0x4E2CC0;
static inline void sub_4E2CC0(int a1)
{
	__asm
	{
		mov eax, [a1]
		call sub_4E2CC0Ptr
	}
}

// void __usercall(int a1@<eax>)
static const void *const sub_4E2D30Ptr = (void*)0x4E2D30;
static inline void sub_4E2D30(int a1)
{
	__asm
	{
		mov eax, [a1]
		call sub_4E2D30Ptr
	}
}

// void __usercall(int a1@<esi>)
static const void *const sub_4E2DC0Ptr = (void*)0x4E2DC0;
static inline void sub_4E2DC0(int a1)
{
	__asm
	{
		mov esi, [a1]
		call sub_4E2DC0Ptr
	}
}

// void __usercall(int a1@<esi>)
static const void *const sub_4E2EC0Ptr = (void*)0x4E2EC0;
static inline void sub_4E2EC0(int a1)
{
	__asm
	{
		mov esi, [a1]
		call sub_4E2EC0Ptr
	}
}

// void __usercall(EntityData1 *a1@<eax>, NJS_OBJECT *a2@<ecx>, float a3)
static const void *const sub_49CCD0Ptr = (void*)0x49CCD0;
static inline void sub_49CCD0(EntityData1 *a1, NJS_OBJECT *a2, float a3)
{
	__asm
	{
		push[a3]
		mov ecx, [a2]
		mov eax, [a1]
		call sub_49CCD0Ptr
		add esp, 4
	}
}

// void __usercall(int *a1@<eax>)
static const void *const sub_4DF8B0Ptr = (void*)0x4DF8B0;
static inline void sub_4DF8B0(int *a1)
{
	__asm
	{
		mov eax, [a1]
		call sub_4DF8B0Ptr
	}
}


//Null Code (Used for debugging purposes)
void __cdecl NullFunction(ObjectMaster *a1)
{
	return;
}

//Standard Display
void __cdecl Basic_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@2
	Angle v3; // eax@4
	Angle v4; // eax@6

	v1 = a2->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		ProcessModelNode_AB_Wrapper(v1->Object, 1.0);
		njPopMatrix(1u);
	}
}

//Standard Main
void __cdecl Basic_Main(ObjectMaster *a1)
{
	EntityData1 *v1; // edi@1

	v1 = a1->Data1;
	if (!ClipSetObject_Min(a1))
	{
		if (!ObjectSelectedDebug(a1))
		{
			AddToCollisionList(v1);
		}
		Basic_Display(a1);
	}
}

//Trampoline Code
void __cdecl Trampoline_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	float ZScale; // ST08_4@3
	float v3; // ST08_4@4
	float YScale; // ST04_4@4
	float XScale; // ST00_4@4
	float v6; // ST08_4@4

	v1 = a2->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njPushMatrix(0);
		if (v1->Scale.y < 0.0)
		{
			njTranslate(0, TrampolineMesh_Top.pos[0], TrampolineMesh_Top.pos[1], TrampolineMesh_Top.pos[2]); //Top Model
			v3 = -v1->Scale.z;
			YScale = -v1->Scale.y;
			XScale = -v1->Scale.x;
			njScale(0, XScale, YScale, v3);
			njScale(0, 1.0f, 1.8f, 1.0f);
			v6 = VectorMaxAbs(&v1->Scale) * 1.8f;
			sub_407870(&attach_00144B74, 1, v6); //Bottom Model
		}
		else
		{
			njTranslate(0, TrampolineMesh_Top.pos[0], TrampolineMesh_Top.pos[1], TrampolineMesh_Top.pos[2]); //Top Model
			njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
			ZScale = VectorMaxAbs(&v1->Scale);
			sub_407870(&attach_001448A0, 1, ZScale); //Top Model
		}
		njPopMatrix(1u);
		sub_407A00(&attach_001454A0, 1.0); //Full Model
		njPopMatrix(1u);
	}
}

void __cdecl Trampoline_Main(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		switch (v1->Action)
		{
		case 0:
			v1->NextAction = 0;
			v1->Rotation.z = 0;
			v1->Scale.x = 1.0f;
			v1->Scale.y = 0;
			v1->Scale.z = 1.0f;
			v1->CharIndex = 0;
			v1->Action = 1;
			InitCollision(a1, stru_C67750, 1, 4u);
			a1->DisplaySub = Trampoline_Display;
			Trampoline_Display(a1);
			break;
		case 1:
			sub_4E2D30((int)a1);
			AddToCollisionList(v1);
			Trampoline_Display(a1);
			break;
		case 3:
			if (v1->NextAction == 1)
			{
				sub_4E2CC0((int)a1);
			}
			sub_4E2DC0((int)v1);
			Trampoline_Display(a1);
			break;
		case 4:
			if (v1->NextAction == 1)
			{
				sub_4E2CC0((int)a1);
			}
			sub_4E2EC0((int)v1);
			Trampoline_Display(a1);
			break;
		case 5:
			if (v1->NextAction == 1)
			{
				sub_4E2CC0((int)a1);
			}
			sub_4E3090((int)v1);
			Trampoline_Display(a1);
			break;
		case 6:
			DeleteObjectMaster(a1);
			break;
		default:
			v1->Action = 0;
			Trampoline_Display(a1);
			break;
		}
	}
}

//Windy Gate Code
void __cdecl WGate_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@2
	Angle v3; // eax@4
	Angle v4; // eax@6
	double v5; // st7@8
	double v6; // st7@10
	double v7; // st7@12

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Gate_Root.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, RightPropeller_Model.pos[0], RightPropeller_Model.pos[1], RightPropeller_Model.pos[2]); //Right Propeller
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, v5);
		}
		sub_409E70((NJS_MODEL_SADX*)RightPropeller_Model.model, 0, 1.0); //Right Propeller
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, LeftPropeller_Model.pos[0], LeftPropeller_Model.pos[1], LeftPropeller_Model.pos[2]); //Left Propeller
		v6 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v6)
		{
			njRotateY(0, v6);
		}
		sub_409E70((NJS_MODEL_SADX*)LeftPropeller_Model.model, 0, 1.0); //Left Propeller
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, TopPropeller_Model.pos[0], TopPropeller_Model.pos[1], TopPropeller_Model.pos[2]); //Top Propeller
		v7 = *(float*)&v1->Object * 65536.0 * 0.002777777777777778;
		if (v7)
		{
			njRotateZ(0, v7);
		}
		sub_409E70((NJS_MODEL_SADX*)TopPropeller_Model.model, 0, 1.0); //Top Propeller
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl WindyGate_Main(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 12.0f + *(float*)&v1->CharIndex;
				}
				if (v1->Scale.y != 0)
				{
					*(float*)&v1->Object = v1->Scale.y + *(float*)&v1->Object;
				}
				else
				{
					*(float*)&v1->Object = 12.0f + *(float*)&v1->Object;
				}
				WGate_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = WGate_Display;
			InitCollision(a1, WGate_Collision, 3, 4u);
		}
	}
}

//Bridge Object
void __cdecl SBridg(ObjectMaster *a1)
{
	if (a1->Data1->Scale.z < 0)
	{
		a1->Data1->LoopData = (Loop*)&LongBridge;
		InitCollision(a1, (CollisionData*)&TuriBr2_Collision, 1, 4u);
	}
	else
	{
		a1->Data1->LoopData = (Loop*)&ShortBridge;
		InitCollision(a1, (CollisionData*)&TuriBr_Collision, 1, 4u);
	}
	(a1->Data1->CollisionInfo->Radius) = 500.0f;
	sub_7A6440(a1);
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))sub_4E0A60;
}

//Rock Object Functions
void __cdecl LRock(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_LRock;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(&Object_LRock, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Rock1(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Rock1;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(&Object_Rock1, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
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

//Sirusi Object Functions
void __cdecl Load_Sirusi2(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Sirusi2;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(&Collision_Sirusi2, a1, (ColFlags)0x40001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_Sirusi3(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Sirusi3;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(&Collision_Sirusi3, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_Sirusi4(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Sirusi4;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(&Collision_Sirusi4, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_Sirusi5(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Sirusi5_Collision, 1, 4u);
	}
	v1->Object = &Object_Sirusi5;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Sirusi6(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Sirusi6_Collision, 1, 4u);
	}
	v1->Object = &Object_Sirusi6;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Sirusi7(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Sirusi7_Collision, 1, 4u);
	}
	v1->Object = &Object_Sirusi7;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Sirusi8(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Sirusi8_Collision, 1, 4u);
	}
	v1->Object = &Object_Sirusi8;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Sirusi9(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Sirusi9;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Siru11(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Siru11;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(&Object_Siru11, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_Siru12(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Siru12;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(&Object_Siru12, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_Siru13(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Siru13;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(&Object_Siru13, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_Yaji01(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Yaji01_Collision, 1, 4u);
	}
	v1->Object = &Object_Yaji01;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

//Grass Object Functions
void __cdecl Grass1_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;
	//float v4; // ST08_4@5
	//double v5; // st7@5
	//ObjectMaster *a2a; // [sp+10h] [bp+4h]@1

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Grass1_Action, grassFrame);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Grass1(ObjectMaster *a1)
{
	a1->MainSub = Grass1_Display;
	a1->DisplaySub = Grass1_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Grass2_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;
	//float v4; // ST08_4@5
	//double v5; // st7@5
	//ObjectMaster *a2a; // [sp+10h] [bp+4h]@1

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Grass2_Action, grassFrame);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Grass2(ObjectMaster *a1)
{
	a1->MainSub = Grass2_Display;
	a1->DisplaySub = Grass2_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Grass3_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;
	//float v4; // ST08_4@5
	//double v5; // st7@5
	//ObjectMaster *a2a; // [sp+10h] [bp+4h]@1

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_Grass3, grassFrame);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Grass3(ObjectMaster *a1)
{
	a1->MainSub = Grass3_Display;
	a1->DisplaySub = Grass3_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Grass4_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;
	//float v4; // ST08_4@5
	//double v5; // st7@5
	//ObjectMaster *a2a; // [sp+10h] [bp+4h]@1

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_Grass4, grassFrame);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Grass4(ObjectMaster *a1)
{
	a1->MainSub = Grass4_Display;
	a1->DisplaySub = Grass4_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Green0(ObjectMaster *a1)
{
	{
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Green0;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;

	}
}

void __cdecl WKusa1_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;
	//float v4; // ST08_4@5
	//double v5; // st7@5
	//ObjectMaster *a2a; // [sp+10h] [bp+4h]@1

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_WKusa1, grassFrame);
		njPopMatrix(1u);
	}
}

void __cdecl Load_WKusa1(ObjectMaster *a1)
{
	a1->MainSub = WKusa1_Display;
	a1->DisplaySub = WKusa1_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

//Flower Functions
void __cdecl Flower0_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;
	//float v4; // ST08_4@5
	//double v5; // st7@5
	//ObjectMaster *a2a; // [sp+10h] [bp+4h]@1

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_Flower0, grassFrame);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Flower0(ObjectMaster *a1)
{
	a1->MainSub = Flower0_Display;
	a1->DisplaySub = Flower0_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Flower1_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;
	//float v4; // ST08_4@5
	//double v5; // st7@5
	//ObjectMaster *a2a; // [sp+10h] [bp+4h]@1

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_Flower1, grassFrame);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Flower1(ObjectMaster *a1)
{
	a1->MainSub = Flower1_Display;
	a1->DisplaySub = Flower1_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_PinkF(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_PinkF;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

//Tanpopo (Dandelion)
ObjectThing Tanpopo_Particles[] = {
	{ sub_4E0050, LoadObj_Data1, 0, 0, 0, 0, 0, 0, 0, &Particle_Tanpopo },
	{ sub_4E0050, LoadObj_Data1, 1, 0x2000, 0, 0x2000, 0, 0, 0, &Particle_Tanpopo },
	{ sub_4E0050, LoadObj_Data1, 2, 0x2000, 0, 0x2000, 0, 0, 0, &Particle_Tanpopo },
	{ sub_4E0050, LoadObj_Data1, 3, 0xE000, 0, 0x2000, 0, 0, 0, &Particle_Tanpopo },
	{ sub_4E0050, LoadObj_Data1, 4, 0xE000, 0, 0x2000, 0, 0, 0, &Particle_Tanpopo },
	{ sub_4E0050, LoadObj_Data1, 5, 0x4000, 0, 0, 0, 0, 0, &Particle_Tanpopo },
	{ sub_4E0050, LoadObj_Data1, 6, 0xC000, 0, 0, 0, 0, 0, &Particle_Tanpopo },
	{ sub_4E0050, LoadObj_Data1, 7, 0, 0, 0x4000, 0, 0, 0, &Particle_Tanpopo },
	{ sub_4E0050, LoadObj_Data1, 8, 0, 0, 0xC000, 0, 0, 0, &Particle_Tanpopo },
	{ sub_4E0050, LoadObj_Data1, 9, 0x6000, 0, 0x2000, 0, 0, 0, &Particle_Tanpopo },
	{ sub_4E0050, LoadObj_Data1, 10, 0x6000, 0, 0x2000, 0, 0, 0, &Particle_Tanpopo },
	{ sub_4E0050, LoadObj_Data1, 11, 0xA000, 0, 0x2000, 0, 0, 0, &Particle_Tanpopo },
	{ sub_4E0050, LoadObj_Data1, 12, 0xA000, 0, 0x2000, 0, 0, 0, &Particle_Tanpopo },
	{ 0 }
};

void __cdecl Tanpopo_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@2
	Angle v3; // eax@4
	Angle v4; // eax@6
	//EntityData1 *v5; // eax@10
	//Angle v6; // ecx@10
	//Angle v7; // ecx@12

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_407870(&Model_Tanpopo, 1, 1.0);
		njPushMatrix(0);
		njTranslate(0, Object_Tanpopostem.pos[0], Object_Tanpopostem.pos[1], Object_Tanpopostem.pos[2]);
		if (v1->Rotation.y)
		{
			njRotateY(0, (unsigned __int16)(v1->Rotation.y));
		}
		if (v1->Rotation.x)
		{
			njRotateX(0, (unsigned __int16)(v1->Rotation.x));
		}
		if (v1->Rotation.z)
		{
			njRotateZ(0, (unsigned __int16)(v1->Rotation.z));
		}
		sub_407870(&Model_Tanpopostem, 1, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Tanpopo_Main(ObjectMaster *a1)
{
	EntityData1 *v1; // edi@1
	ObjectMaster *v2; // eax@10
	char *v3; // edi@11
	int v4; // ecx@11

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				Tanpopo_Display(a1);
				sub_4DF8B0((int *)v1);
				if (!ObjectSelectedDebug(a1))
				{
					RunObjectChildren(a1);
				}
				if (!ObjectSelectedDebug(a1)
					&& (double)v1->InvulnerableTime * 0.00089999998 > (double)rand() * 0.000030517578)
				{
					v2 = LoadChildObject(LoadObj_Data1, sub_4DFAF0, a1);
					if (v2)
					{
						a1->Child = v2;
						v3 = (char *)&v1->Position;
						v4 = (int)&v2->Data1->Position;
						*(_DWORD *)v4 = *(_DWORD *)v3;
						*(_DWORD *)(v4 + 4) = *((_DWORD *)v3 + 1);
						*(_DWORD *)(v4 + 8) = *((_DWORD *)v3 + 2);
					}
				}
			}
			else if (v1->Action == 3)
			{
				DeleteChildObjects(a1);
			}
		}
		else
		{
			a1->DisplaySub = Tanpopo_Display;
			v1->InvulnerableTime = 13;
			v1->CharIndex = 0;
			if (!ObjectSelectedDebug(a1))
			{
				DoObjectThing(Tanpopo_Particles, a1);
			}
			a1->DeleteSub = j_DeleteChildObjects;
			Tanpopo_Display(a1);
			v1->Action = 1;
		}
	}
}

//Windy Tree Functions
void __cdecl WKi1_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;
	//float v4; // ST08_4@5
	//double v5; // st7@5
	//ObjectMaster *a2a; // [sp+10h] [bp+4h]@1

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_WKi1, treeFrame);
		njPopMatrix(1u);
	}
}

void __cdecl Load_WKi1(ObjectMaster *a1)
{
	a1->MainSub = WKi1_Display;
	a1->DisplaySub = WKi1_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl WKi2_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	ObjectMaster *a3; // ST08_4@1
	Angle v3; // eax@3
	Angle v6;
	Angle v7;
	//float v4; // ST08_4@5
	//double v5; // st7@5
	//ObjectMaster *a2a; // [sp+10h] [bp+4h]@1

	v1 = a2->Data1;
	a3 = a2;
	if (!ClipSetObject(a3) && !MissedFrames)
	{
		v1->Scale.x = 1.0;
		v1->Scale.y = 1.0;
		v1->Scale.z = 1.0;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		v3 = v1->Rotation.y;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		njAction(&action_Action_WKi2, treeFrame);
		njPopMatrix(1u);
	}
}

void __cdecl Load_WKi2(ObjectMaster *a1)
{
	a1->MainSub = WKi2_Display;
	a1->DisplaySub = WKi2_Display;
	a1->Data1->Action = 0;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

//Pole Object Functions
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

//I Dai/I Has Object Functions
void __cdecl Load_IDai1(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai1;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_IDai2(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai2;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_IDai3(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai3;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_IDai4(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai4;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_IDai5(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai5;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_IDai6(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai6;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_IDai7(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai7;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_IDai8(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai8;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_IDai9(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Dai9;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_IDai10(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Unreferenced01_00106B30;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_IHas14(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Has14;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_IHas15(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Has15;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}

void __cdecl Load_IHas16(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &I_Has16;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}


void __cdecl Load_IHas19(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Unreferenced02_001149B4;
	if (!ClipSetObject(a1))
	{
		v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
		v3->scl[0] = 1.0f;
		v3->scl[1] = 1.0f;
		v3->scl[2] = 1.0f;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
	}
}


//I Bou Objects
void __cdecl Load_IBou01(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_IBou01;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_IBou02(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_IBou02;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_IBou03(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Unreferenced00_001067D8;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

//I Hah Obhects
void __cdecl Load_IHah01(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_IHah01;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_IHah02(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_IHah02;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_IHah03(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_IHah03;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_IwaB(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_IwaB;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_Ioiwa01(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_Ioiwa01;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_Ioiwa02(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_Ioiwa02;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_Ioiwa03(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_Ioiwa03;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

//Sara Objects
void __cdecl Load_SaraB1(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_SaraB1;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_SaraB2(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_SaraB2;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_SaraM1(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_SaraM1;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_SaraM2(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_SaraM2;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_SaraS1(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_SaraS1;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

void __cdecl Load_SaraS2(ObjectMaster *a1)
{
	{
		NJS_OBJECT *v3;
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &Object_SaraS2;
		if (!ClipSetObject(a1))
		{
			v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
			v3->scl[0] = 1.0f;
			v3->scl[1] = 1.0f;
			v3->scl[2] = 1.0f;
			a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
		}
	}
}

//Dynamic Rotation Objects
//Propellers
void __cdecl Prope1_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prope1Base.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_Prope1Prop.pos[0], Object_Prope1Prop.pos[1], Object_Prope1Prop.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prope1Prop.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Prope1(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				*(float*)&v1->CharIndex = 2.7f + *(float*)&v1->CharIndex;
				Prope1_Display(a1);
				//AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Prope1_Display;
			//InitCollision(a1, WGate_Collision, 3, 4u);
		}
	}
}

void __cdecl Prope2_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prope2Base.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_Prope2Prop.pos[0], Object_Prope2Prop.pos[1], Object_Prope2Prop.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateX(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prope2Prop.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Prope2(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				*(float*)&v1->CharIndex = 2.7f + *(float*)&v1->CharIndex;
				Prope2_Display(a1);
				//AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Prope2_Display;
			//InitCollision(a1, WGate_Collision, 3, 4u);
		}
	}
}

void __cdecl Prope3_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prope3Base.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_Prope3Prop.pos[0], Object_Prope3Prop.pos[1], Object_Prope3Prop.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prope3Prop.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Prope3(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				*(float*)&v1->CharIndex = 3.0f + *(float*)&v1->CharIndex;
				Prope3_Display(a1);
				//AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Prope3_Display;
			//InitCollision(a1, WGate_Collision, 3, 4u);
		}
	}
}

void __cdecl PropeA_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle z1;
	Angle x1;

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		z1 = v1->Rotation.z;
		if (z1)
		{
			njRotateZ(0, (unsigned __int16)z1);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		x1 = v1->Rotation.x;
		if (x1)
		{
			njRotateX(0, (unsigned __int16)x1);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_PropABase.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_PropAProp.pos[0], Object_PropAProp.pos[1], Object_PropAProp.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateX(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_PropAProp.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_PropeA(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				*(float*)&v1->CharIndex = 5.0f + *(float*)&v1->CharIndex;
				PropeA_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = PropeA_Display;
			InitCollision(a1, PropeA_Collision, 2, 4u);
		}
	}
}

void __cdecl PropeB_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle v6;

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		njPushMatrix(0);
		njTranslate(0, Object_PropeBTopPole.pos[0], (Object_PropeBTopPole.pos[1]), Object_PropeBTopPole.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Object_PropeBTopPole.model, 0, 1.0); //Root Model
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_PropeBTopFans.pos[0], (Object_PropeBTopFans.pos[1] + 23.5f), Object_PropeBTopFans.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateX(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_PropeBTopFans.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_PropeBBotPole.pos[0], (Object_PropeBBotPole.pos[1]), Object_PropeBBotPole.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Object_PropeBBotPole.model, 0, 1.0); //Root Model
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_PropeBBotFans.pos[0], (Object_PropeBBotFans.pos[1] + 8.0f), Object_PropeBBotFans.pos[2]);
		v6 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v6)
		{
			njRotateX(0, (unsigned __int16)v6);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_PropeBBotFans.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_PropeB(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				*(float*)&v1->CharIndex = 7.0f + *(float*)&v1->CharIndex;
				PropeB_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = PropeB_Display;
			InitCollision(a1, PropeB_Collision, 5, 4u);
		}
	}
}

void __cdecl PropeC_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	//Angle v6;

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		njPushMatrix(0);
		njTranslate(0, Object_PropeCBar.pos[0], (Object_PropeCBar.pos[1]), Object_PropeCBar.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Object_PropeCBar.model, 0, 1.0); //Root Model
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_PropeCFans.pos[0], (Object_PropeCFans.pos[1]+12), Object_PropeCFans.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateX(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_PropeCFans.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_PropeC(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				*(float*)&v1->CharIndex = 7.0f + *(float*)&v1->CharIndex;
				PropeC_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = PropeC_Display;
			InitCollision(a1, PropeC_Collision, 2, 4u);
		}
	}
}

void __cdecl Pot01_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Pot01.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_Pot01Top.pos[0], (Object_Pot01Top.pos[1]), Object_Pot01Top.pos[2]);
		njRotateY(0, Object_Pot01Top.ang[1]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Pot01Top.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_Pot01Mid.pos[0], (Object_Pot01Mid.pos[1]), Object_Pot01Mid.pos[2]);
		njRotateY(0, Object_Pot01Mid.ang[1]);
		v5 = *(float*)&v1->Object * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Pot01Mid.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_Pot01Bot.pos[0], (Object_Pot01Bot.pos[1]), Object_Pot01Bot.pos[2]);
		v5 = *(float*)&v1->LoopData * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Pot01Bot.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Pot01(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				*(float*)&v1->CharIndex = 7.0f + *(float*)&v1->CharIndex; //Top Fan Value
				*(float*)&v1->Object = 11.0f + *(float*)&v1->Object; //Middle Fan Value
				*(float*)&v1->LoopData = 15.0f + *(float*)&v1->LoopData; //Bottom Fan Value
				Pot01_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Pot01_Display;
			InitCollision(a1, Pot01_Collision, 2, 4u);
		}
	}
}

void __cdecl Pot02_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Pot02.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_Pot02Fans.pos[0], (Object_Pot02Fans.pos[1]), Object_Pot02Fans.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Pot02Fans.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Pot02(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				*(float*)&v1->CharIndex = 10.0f + *(float*)&v1->CharIndex;
				Pot02_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Pot02_Display;
			InitCollision(a1, Pot02_Collision, 2, 4u);
		}
	}
}

void __cdecl Prop1_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prop1.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_Prop1Top.pos[0], (Object_Prop1Top.pos[1]), Object_Prop1Top.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prop1Top.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_Prop1Bot.pos[0], (Object_Prop1Bot.pos[1]), Object_Prop1Bot.pos[2]);
		v5 = *(float*)&v1->Object * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prop1Bot.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Prop1(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				*(float*)&v1->CharIndex = 3.7f + *(float*)&v1->CharIndex;
				*(float*)&v1->Object = -1.2f + *(float*)&v1->Object;
				Prop1_Display(a1);
				//AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Prop1_Display;
			//InitCollision(a1, Pot02_Collision, 2, 4u);
		}
	}
}

void __cdecl Dome1_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		njPushMatrix(0);
		njTranslate(0, Dome_Base.pos[0], (Dome_Base.pos[1]), Dome_Base.pos[2]);
		v4 = v1->Rotation.y;
		sub_409E70((NJS_MODEL_SADX*)Dome_Base.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Fan.pos[0], (Dome_Fan.pos[1] + 30.0f), Dome_Fan.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Dome_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Cap.pos[0], (Dome_Cap.pos[1] + 43.0f), Dome_Cap.pos[2]);
		v4 = v1->Rotation.y;
		sub_409E70((NJS_MODEL_SADX*)Dome_Cap.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Dome1(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				*(float*)&v1->CharIndex = 1.5f + *(float*)&v1->CharIndex;
				Dome1_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Dome1_Display;
			InitCollision(a1, PropeB_Collision, 5, 4u); //Temporary data. Need to properly implement Dome1's Init Collision.
		}
	}
}

void __cdecl Dome2_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		njPushMatrix(0);
		njTranslate(0, Dome_Base.pos[0], (Dome_Base.pos[1]), Dome_Base.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Base.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Fan.pos[0], (Dome_Fan.pos[1] + 30.0f), Dome_Fan.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Dome_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Middle.pos[0], (Dome_Middle.pos[1] + 43.0f), Dome_Middle.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Middle.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Fan.pos[0], (Dome_Fan.pos[1] + 46.0f), Dome_Fan.pos[2]);
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5 + 0x4000);
		}
		sub_409E70((NJS_MODEL_SADX*)Dome_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Cap.pos[0], (Dome_Cap.pos[1] + 59.0f), Dome_Cap.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Cap.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Dome2(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				*(float*)&v1->CharIndex = 1.5f + *(float*)&v1->CharIndex;
				Dome2_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Dome2_Display;
			InitCollision(a1, PropeB_Collision, 5, 4u); //Temporary data. Need to properly implement Dome2's Init Collision.
		}
	}
}

void __cdecl Dome3_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		njPushMatrix(0);
		njTranslate(0, Dome_Base.pos[0], (Dome_Base.pos[1]), Dome_Base.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Base.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Fan.pos[0], (Dome_Fan.pos[1] + 30.0f), Dome_Fan.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Dome_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Middle.pos[0], (Dome_Middle.pos[1] + 43.0f), Dome_Middle.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Middle.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Fan.pos[0], (Dome_Fan.pos[1] + 46.0f), Dome_Fan.pos[2]);
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5 + 0x4000);
		}
		sub_409E70((NJS_MODEL_SADX*)Dome_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Middle.pos[0], (Dome_Middle.pos[1] + 59.0f), Dome_Middle.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Middle.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Fan.pos[0], (Dome_Fan.pos[1] + 61.0f), Dome_Fan.pos[2]);
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Dome_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Cap.pos[0], (Dome_Cap.pos[1] + 74.0f), Dome_Cap.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Cap.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Dome3(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				*(float*)&v1->CharIndex = 1.5f + *(float*)&v1->CharIndex;
				Dome3_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Dome3_Display;
			InitCollision(a1, PropeB_Collision, 5, 4u); //Temporary data. Need to properly implement Dome3's Init Collision.
		}
	}
}


//SADX Object List for Windy Valley
ObjectListEntry WindyValleyObjectList_list[] = {
	{ 2, 3, 0, 0, 0, Ring_Main, "RING   " } /* "RING   " */,					//00
	{ 2, 2, 0, 0, 0, Spring_Main, "SPRING " } /* "SPRING " */,					//01
	{ 2, 2, 0, 0, 0, SpringB_Main, "SPRINGB" } /* "SPRINGB" */,					//02
	{ 3, 3, 0, 0, 0, DashPanel_Main, "O AXPNL" } /* "O AXPNL" */,				//03
	{ 6, 3, 0, 0, 0, SwingSpikeBall_Load, "O IRONB" } /* "O IRONB" */,			//04
	{ 2, 3, 0, 0, 0, FallingSpikeBall_Load, "O FeBJG" } /* "O FeBJG" */,		//05
	{ 2, 3, 0, 0, 0, Spikes_Main, "O TOGE" } /* "O TOGE" */,					//06
	{ 3, 3, 0, 0, 0, EmeraldPiece_Load, "O EME P" } /* "O EME P" */,			//07	
	{ 2, 3, 0, 0, 0, Capsule_Load, "O RELEASE" } /* "O RELEASE" */,				//08
	{ 6, 3, 0, 0, 0, Switch_Main, "O SWITCH" } /* "O SWITCH" */,				//09
	{ 10, 3, 0, 0, 0, Weed_Main, "CMN KUSA" } /* "CMN KUSA" */,					//0A
	{ 6, 3, 0, 0, 0, DashHoop_Main, "CMN_DRING" } /* "CMN_DRING" */,			//0B
	{ 2, 3, 0, 0, 0, Balloon_Main, "O BALOON" } /* "O BALOON" */,				//0C
	{ 2, 3, 0, 0, 0, ItemBox_Main, "O ITEMBOX" } /* "O ITEMBOX" */,				//0D
	{ 6, 2, 0, 0, 0, RocketH_Main, "Rocket H" } /* "Rocket H" */,				//0E
	{ 6, 2, 0, 0, 0, RocketHS_Main, "Rocket HS" } /* "Rocket HS" */,			//0F
	{ 6, 2, 0, 0, 0, RocketV_Main, "Rocket V" } /* "Rocket V" */,				//10
	{ 6, 2, 0, 0, 0, RocketVS_Main, "Rocket VS" } /* "Rocket VS" */,			//11
	{ 2, 2, 1, 4000000, 0, JumpPanel_Load, "O JPanel" } /* "O JPanel" */,		//12
	{ 15, 3, 0, 0, 0, CheckPoint_Main, "O Save Point" } /* "O Save Point" */,	//13
	{ 2, 3, 0, 0, 0, Wall_Main, "WALL   " } /* "WALL   " */,					//14
	{ 3, 2, 0, 0, 0, Trampoline_Main, "TRAMPOL" } /* "TRAMPOL" */,				//15
	{ 2, 2, 0, 0, 0, BLeaf, "B LEAF " } /* "B LEAF " */,						//16
	{ 2, 2, 0, 0, 0, WcWind, "WC WIND" } /* "WC WIND" */,						//17
	{ 2, 2, 0, 0, 0, PuWind, "PU WIND" } /* "PU WIND" */,						//18
	{ 2, 4, 0, 0, 0, Load_Prope1, "PROPE1 " } /* "PROPE1 " */,					//19
	{ 2, 4, 0, 0, 0, Load_Prope2, "PROPE2 " } /* "PROPE2 " */,					//1A
	{ 2, 4, 0, 0, 0, Load_Prope3, "PROPE3 " } /* "PROPE3 " */,					//1B
	{ 2, 5, 0, 0, 0, Load_Flower0, "FLOWER0" } /* "FLOWER0" */,					//1C
	{ 2, 5, 0, 0, 0, Load_Flower1, "FLOWER1" } /* "FLOWER1" */,					//1D
	{ 2, 5, 0, 0, 0, Load_Green0, "GREEN 0" } /* "GREEN 0" */,					//1E
	{ 2, 4, 0, 0, 0, Load_WKi1, "W KI1  " } /* "W KI1  " */,					//1F
	{ 2, 4, 0, 0, 0, Load_WKi2, "W KI2  " } /* "W KI2  " */,					//20
	{ 2, 5, 0, 0, 0, Load_WKusa1, "W KUSA1" } /* "W KUSA1" */,					//21
	{ 2, 5, 0, 0, 0, Load_Grass1, "GRASS1 " } /* "GRASS1 " */,					//22
	{ 2, 5, 0, 0, 0, Load_Grass2, "GRASS2 " } /* "GRASS2 " */,					//23
	{ 2, 5, 0, 0, 0, Load_Grass3, "GRASS3 " } /* "GRASS3 " */,					//24
	{ 2, 5, 0, 0, 0, Load_Grass4, "GRASS4 " } /* "GRASS4 " */,					//25
	{ 6, 3, 0, 0, 0, LRock, "L ROCK1" } /* "L ROCK1" */,						//26
	{ 6, 3, 0, 0, 0, NullFunction, "RAFT   " } /* "RAFT   " */,					//27
	{ 7, 3, 0, 0, 0, NullFunction, "RAFT 2 " } /* "RAFT 2 " */,					//28
	{ 7, 3, 0, 0, 0, NullFunction, "RAFT 3 " } /* "RAFT 3 " */,					//29
	{ 7, 3, 0, 0, 0, NullFunction, "T_RAFT1" } /* "T_RAFT1" */,					//2A
	{ 7, 3, 0, 0, 0, NullFunction, "T_RAFT2" } /* "T_RAFT2" */,					//2B
	{ 2, 4, 0, 0, 0, NullFunction, "SIRUSI1" } /* "SIRUSI1" */,					//2C
	{ 6, 4, 0, 0, 0, Load_Sirusi2, "SIRUSI2" } /* "SIRUSI2" */,					//2D
	{ 6, 4, 0, 0, 0, Load_Sirusi3, "SIRUSI3" } /* "SIRUSI3" */,					//2E
	{ 6, 4, 0, 0, 0, Load_Sirusi4, "SIRUSI4" } /* "SIRUSI4" */,					//2F
	{ 2, 4, 0, 0, 0, Load_Sirusi5, "SIRUSI5" } /* "SIRUSI5" */,					//30
	{ 2, 4, 0, 0, 0, Load_Sirusi6, "SIRUSI6" } /* "SIRUSI6" */,					//31
	{ 2, 4, 0, 0, 0, Load_Sirusi7, "SIRUSI7" } /* "SIRUSI7" */,					//32
	{ 2, 4, 0, 0, 0, Load_Sirusi8, "SIRUSI8" } /* "SIRUSI8" */,					//33
	{ 2, 4, 0, 0, 0, Load_Sirusi9, "SIRUSI9" } /* "SIRUSI9" */,					//34
	{ 6, 4, 0, 0, 0, Load_Siru11, "SIRU 11" } /* "SIRU 11" */,					//35
	{ 6, 4, 0, 0, 0, Load_Siru12, "SIRU 12" } /* "SIRU 12" */,					//36
	{ 6, 4, 0, 0, 0, Load_Siru13, "SIRU 13" } /* "SIRU 13" */,					//37
	{ 2, 4, 0, 0, 0, Load_Yaji01, "YAJI 01" } /* "YAJI 01" */,					//38
	{ 2, 4, 0, 0, 0, Load_Pole1, "POLE 1 " } /* "POLE 1 " */,					//39
	{ 2, 4, 0, 0, 0, Load_Pole2, "POLE 2 " } /* "POLE 2 " */,					//3A
	{ 2, 3, 0, 0, 0, WindyGate_Main, "W GATE " } /* "W GATE " */,				//3B
	{ 2, 3, 0, 0, 0, WindyGate_Main, "W GATE2" } /* "W GATE2" */,				//3C
	{ 2, 3, 0, 0, 0, Load_Pot01, "POT01  " } /* "POT01  " */,					//3D
	{ 2, 3, 0, 0, 0, Load_Pot02, "POT02  " } /* "POT02  " */,					//3E
	{ 6, 3, 0, 0, 0, Rock1, "ROCK 1 " } /* "ROCK 1 " */,						//3F
	{ 2, 3, 0, 0, 0, Rock2, "ROCK 2 " } /* "ROCK 2 " */,						//40
	{ 2, 3, 0, 0, 0, Rock3, "ROCK 3 " } /* "ROCK 3 " */,						//41
	{ 2, 3, 0, 0, 0, Rock5, "ROCK 5 " } /* "ROCK 5 " */,						//42
	{ 6, 3, 0, 0, 0, Load_IDai1, "I DAI 1" } /* "I DAI 1" */,					//43
	{ 6, 3, 0, 0, 0, Load_IDai2, "I DAI 2" } /* "I DAI 2" */,					//44
	{ 6, 3, 0, 0, 0, Load_IDai3, "I DAI 3" } /* "I DAI 3" */,					//45
	{ 6, 3, 0, 0, 0, Load_IDai4, "I DAI 4" } /* "I DAI 4" */,					//46
	{ 6, 3, 0, 0, 0, Load_IDai5, "I DAI 5" } /* "I DAI 5" */,					//47
	{ 6, 3, 0, 0, 0, Load_IDai6, "I DAI 6" } /* "I DAI 6" */,					//48
	{ 6, 3, 0, 0, 0, Load_IDai7, "I DAI 7" } /* "I DAI 7" */,					//49
	{ 6, 3, 0, 0, 0, Load_IDai8, "I DAI 8" } /* "I DAI 8" */,					//4A
	{ 6, 3, 0, 0, 0, Load_IDai9, "I DAI 9" } /* "I DAI 9" */,					//4B
	{ 6, 3, 0, 0, 0, Load_IHas14, "I HAS14" } /* "I HAS14" */,					//4C
	{ 6, 3, 0, 0, 0, Load_IHas15, "I HAS15" } /* "I HAS15" */,					//4D
	{ 6, 3, 0, 0, 0, Load_IHas16, "I HAS16" } /* "I HAS16" */,					//4E
	{ 2, 3, 0, 0, 0, NullFunction, "I HAS17" } /* "I HAS17" */,					//4F
	{ 2, 3, 0, 0, 0, NullFunction, "I HAS18" } /* "I HAS18" */,					//50
	{ 2, 2, 0, 0, 0, NullFunction, "BANEIWA" } /* "BANEIWA" */,					//51
	{ 2, 5, 0, 0, 0, Tanpopo_Main, "TANPOPO" } /* "TANPOPO" */,					//52
	{ 2, 5, 0, 0, 0, NullFunction, "TAKO W " } /* "TAKO W " */,					//53
	{ 2, 3, 0, 0, 0, Load_Dome1, "DOME 1 " } /* "DOME 1 " */,					//54
	{ 2, 3, 0, 0, 0, Load_Dome2, "DOME 2 " } /* "DOME 2 " */,					//55
	{ 2, 3, 0, 0, 0, Load_Dome3, "DOME 3 " } /* "DOME 3 " */,					//56
	{ 2, 5, 0, 0, 0, Load_Prop1, "PROP 1 " } /* "PROP 1 " */,					//57
	{ 2, 4, 0, 0, 0, Load_PropeA, "PROPE A" } /* "PROPE A" */,					//58
	{ 2, 4, 0, 0, 0, Load_PropeB, "PROPE B" } /* "PROPE B" */,					//59
	{ 2, 4, 0, 0, 0, Load_PropeC, "PROPE C" } /* "PROPE C" */,					//5A
	{ 6, 3, 0, 0, 0, Load_IwaB, "IWA B  " } /* "IWA B  " */,					//5B
	{ 2, 5, 0, 0, 0, Load_PinkF, "PINK F " } /* "PINK F " */,					//5C
	{ 6, 3, 0, 0, 0, Load_IBou01, "I BOU01" } /* "I BOU01" */,					//5D
	{ 6, 3, 0, 0, 0, Load_IBou02, "I BOU02" } /* "I BOU02" */,					//5E
	{ 6, 3, 0, 0, 0, Load_IHah01, "I HAH01" } /* "I HAH01" */,					//5F
	{ 6, 3, 0, 0, 0, Load_IHah02, "I HAH02" } /* "I HAH02" */,					//60
	{ 6, 3, 0, 0, 0, Load_IHah03, "I HAH03" } /* "I HAH03" */,					//61
	{ 6, 3, 0, 0, 0, Load_Ioiwa01, "IOIWA01" } /* "IOIWA01" */,					//62
	{ 6, 3, 0, 0, 0, Load_Ioiwa02, "IOIWA02" } /* "IOIWA02" */,					//63
	{ 6, 3, 0, 0, 0, Load_Ioiwa03, "IOIWA03" } /* "IOIWA03" */,					//64
	{ 6, 3, 0, 0, 0, Load_SaraB1, "SARA B1" } /* "SARA B1" */,					//65
	{ 6, 3, 0, 0, 0, Load_SaraB2, "SARA B2" } /* "SARA B2" */,					//66
	{ 6, 3, 0, 0, 0, Load_SaraM1, "SARA M1" } /* "SARA M1" */,					//67
	{ 6, 3, 0, 0, 0, Load_SaraM2, "SARA M2" } /* "SARA M2" */,					//68
	{ 6, 3, 0, 0, 0, Load_SaraS1, "SARA S1" } /* "SARA S1" */,					//69
	{ 6, 3, 0, 0, 0, Load_SaraS2, "SARA S2" } /* "SARA S2" */,					//6A
	{ 2, 4, 0, 0, 0, NullFunction, "TSPRING" } /* "TSPRING" */,					//6B
	{ 2, 4, 0, 0, 0, Load_Lauchin, "LAUCHIN" } /* "LAUCHIN" */,					//6C
	{ 6, 2, 1, 1000000, 0, SBridg, "S BRIDG" } /* "S BRIDG" */,					//6D
	{ 7, 3, 0, 0, 0, NullFunction, "WELE   " } /* "WELE   " */,					//6E
	{ 2, 3, 0, 0, 0, RhinoTank_Main, "E SAITO" } /* "E SAITO" */,				//6F
	{ 2, 3, 0, 0, 0, BoaBoa_Main, "E HEVY " } /* "E HEVY " */,					//70
	{ 2, 3, 0, 0, 0, Leon_Load, "E LEON " } /* "E LEON " */,					//71
	{ 2, 3, 0, 0, 0, E103Enemy_Load, "E E-103" } /* "E E-103" */,				//72
	{ 2, 3, 0, 0, 0, ChaosEmeGoal_WValley_Main, "O KAOSE" } /* "Chaos Emerald */,	//73
	{ 6, 3, 0, 0, 0, Load_IDai10, "I DAI 10" } /* "I DAI 10" */,				//74
	{ 6, 3, 0, 0, 0, Load_IBou03, "I BOU03" } /* "I BOU03" */,					//75
	{ 6, 3, 0, 0, 0, Load_IHas19, "I HAS19" } /* "I HAS19" */					//76
};

ObjectList WindyValleyObjectList = { arraylengthandptrT(WindyValleyObjectList_list, int) };

//Adding Windy Valley to Big's Trial Level List
TrialLevelListEntry BigActionStages_list[] = {
	{ LevelIDs_TwinklePark, 1 },
	{ LevelIDs_IceCap, 3 },
	{ LevelIDs_EmeraldCoast, 2 },
	{ LevelIDs_HotShelter, 0 },
	{ LevelIDs_WindyValley, 0 }
};

TrialLevelList BigActionStages = { arrayptrandlength(BigActionStages_list) };

PointerInfo pointers[] = {
	ptrdecl(0x97DA48, &landtable_008051E0),
	ptrdecl(0x90F01C, &WindyValley1Textures),
	ptrdecl(0xBFD820, &WindyValley1DeathZones),
	ptrdecl(0x97DA4C, &landtable_008046C0),
	ptrdecl(0x90F020, &WindyValley2Textures),
	ptrdecl(0xBFD824, &WindyValley2DeathZones),
	ptrdecl(0x97DA50, &landtable_0080433C),
	ptrdecl(0x90F024, &WindyValley3Textures),
	ptrdecl(0xBFD828, &WindyValley3DeathZones),
	ptrdecl(0x974B38, &WindyValleyObjectList),
	ptrdecl(0x974B3C, &WindyValleyObjectList),
	ptrdecl(0x974B40, &WindyValleyObjectList),
	ptrdecl(0x90EB70, &WindyValleyObjectTextures),
	ptrdecl(0x91C0B8, &WV3path),
	ptrdecl(0x91C0BC, &WV3path)
};

PathDataPtr WV1PathList = { levelact(LevelIDs_WindyValley, 0), PathList_WindyValley0 };
PathDataPtr WV3PathList = { levelact(LevelIDs_WindyValley, 2), PathList_WindyValley2 };

const float tornadoLoadDistance = 3102500.0f; // add this above the WV object list

void TornadoPosition()
{
	njPushMatrix(NULL); njTranslate(NULL, 649.074f, -203.486f, -196.07f);
}

void WVSkybox1Position()
{
	njPushMatrix(NULL); njTranslate(NULL, 0.0f, 300.0f, 0.0f);
	njScale(0, 0.75f, 0.75f, 0.75f);
}

float E103_PositionData[] = {
	450.0, -350.0, -2150.0,
	600.0, -380.0, -2300.0,
	526.0, -437.0, -2474.0,
	423.0, -443.0, -2428.0,
	376.0, -443.0, -2351.0,
	0.0
};

void Init(const char *path, const HelperFunctions &helperFunctions)
{
	*(float *)0x7E7B04 = 1420.68f; // changing the level trigger height for WV part 2
	WriteData((float *)0x4DE8F6, 436.785f); // x component of tornado target.
	WriteData((float *)0x4DE906, -2305.471f); // z component of tornado target.
	WriteData((float *)0x004DE8ED, tornadoLoadDistance); // Tornado's load distance
	WriteData((int *)0x07E1D90, (int)LengthOfArray(WV3path)); // p2 path for WV3
	WriteCall((void *)0x4DD8D3, TornadoPosition); // setting the tornado position properly
	WriteCall((void *)0x4DD7A5, WVSkybox1Position);
	WriteData((NJS_OBJECT**)0x004DFAC9, &Particle_Tanpopo);
	WriteData((NJS_OBJECT**)0x004DFCB0, &Particle_Tanpopo);
	WriteData((float**)0x004E802D, E103_PositionData);



	// registering start locations
	helperFunctions.RegisterStartPosition(Characters_Sonic, sonicWindyValley0);
	helperFunctions.RegisterStartPosition(Characters_Sonic, sonicWindyValley1);
	helperFunctions.RegisterStartPosition(Characters_Sonic, sonicWindyValley2);

	helperFunctions.RegisterStartPosition(Characters_Amy, amyWindyValley0);

	helperFunctions.RegisterStartPosition(Characters_Tails, tailsWindyValley2);

	helperFunctions.RegisterStartPosition(Characters_Gamma, gammaWindyValley0);

	helperFunctions.RegisterStartPosition(Characters_Big, bigWindyValley1);

	// registering paths
	helperFunctions.RegisterPathList(WV1PathList);
	helperFunctions.RegisterPathList(WV3PathList);
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer, &Init, NULL, 0, NULL, 0, NULL, 0, arrayptrandlength(pointers) };

	__declspec(dllexport) void __cdecl OnFrame() 
	{
		if (CurrentLevel == 2 && GameState != 16)
		{
			grassFrame = grassFrame + 1.0f;
			if (grassFrame > 7) grassFrame = 0;
			treeFrame = treeFrame + 1.0f;
			if (treeFrame > 17) treeFrame = 0;
		}
	}
}
