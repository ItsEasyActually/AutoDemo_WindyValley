// AutoDemo_WindyValley.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Trampoline.h"
#include "WindyGate.h"
#include "SBridge.h"
#include "Rock_Objects.h"
#include "Sirusi_Objects.h"
#include "Grass_Objects.h"
#include "Pole_Objects.h"
#include "Act1.h"
#include "Act2.h"
#include "Act3.h"
#include "PathInfo.h"
#include "StartPos.h"

//Variables
static float grassFrame = 0;

//Additional SADX Variables
DataPointer(int, MissedFrames, 0x03B1117C);
DataArray(CollisionData, stru_C67750, 0xC67750, 1);
DataArray(CollisionData, stru_C673B8, 0xC673B8, 7);

//Additional SADX Functions
FunctionPointer(NJS_OBJECT*, DynamicCollision, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);
FunctionPointer(void, sub_407870, (NJS_MODEL_SADX *model, char blend, float radius_scale), 0x407870);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);
FunctionPointer(void, sub_7A6440, (ObjectMaster *a1), 0x7A6440);
FunctionPointer(void, sub_49CD60, (ObjectMaster *a1), 0x49CD60);
FunctionPointer(void, sub_49DF70, (ObjectMaster *a1), 0x49DF70);
FunctionPointer(void, sub_49E170, (ObjectMaster *a1), 0x49E170);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);

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


//Null Code (Used for debugging purposes)
void __cdecl NullFunction(ObjectMaster *a1)
{
	return;
}

//Standard Display
void __cdecl Basic_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@3
	Angle v3; // eax@5
	Angle v4; // eax@7

	v1 = a1->Data1;
	SetTextureToLevelObj();
	njPushMatrix(0);
	njTranslateV(0, &v1->Position);
	v4 = v1->Rotation.z;
	if (v4)
	{
		njRotateZ(0, (unsigned __int16)v4);
	}
	v2 = v1->Rotation.x;
	if (v2)
	{
		njRotateX(0, (unsigned __int16)v2);
	}
	v3 = v1->Rotation.y;
	if (v3)
	{
		njRotateY(0, (unsigned __int16)v3);
	}
	ProcessModelNode_AB_Wrapper(v1->Object, 1.0f);
	njPopMatrix(1u);
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
			njScale(0, 1.0, 1.8, 1.0);
			v6 = VectorMaxAbs(&v1->Scale) * 1.8;
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
		sub_407870(&attach_00129010, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, RightPropeller_Model.pos[0], RightPropeller_Model.pos[1], RightPropeller_Model.pos[2]); //Right Propeller
		v5 = v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, v5);
		}
		sub_407870(&attach_00128790, 0, 1.0); //Right Propeller
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, LeftPropeller_Model.pos[0], LeftPropeller_Model.pos[1], LeftPropeller_Model.pos[2]); //Left Propeller
		v6 = v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v6)
		{
			njRotateY(0, v6);
		}
		sub_407870(&attach_00127D10, 0, 1.0); //Left Propeller
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, TopPropeller_Model.pos[0], TopPropeller_Model.pos[1], TopPropeller_Model.pos[2]); //Top Propeller
		v7 = *(float*)&v1->Object * 65536.0 * 0.002777777777777778;
		if (v7)
		{
			njRotateZ(0, v7);
		}
		sub_407870(&attach_00127290, 0, 1.0); //Top Propeller
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
					v1->CharIndex = v1->Scale.x + v1->CharIndex;
				}
				else
				{
					v1->CharIndex = 10.0f + v1->CharIndex;
				}
				if (v1->Scale.y != 0)
				{
					*(float*)&v1->Object = v1->Scale.y + *(float*)&v1->Object;
				}
				else
				{
					*(float*)&v1->Object = 10.0f + *(float*)&v1->Object;
				}
				WGate_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = WGate_Display;
			InitCollision(a1, stru_C673B8, 3, 4u);
		}
	}
}

//Bridge Object
void __cdecl SBridg(ObjectMaster *a1)
{
	if (a1->Data1->Scale.z < 0)
	{
		a1->Data1->LoopData = (Loop*)&LongBridge;
	}
	else
	{
		a1->Data1->LoopData = (Loop*)&ShortBridge;
	}
	sub_7A6440(a1);
}

//Rock Object Functions
void __cdecl LRock(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_LRock;
	v3 = DynamicCollision(&Object_LRock, a1, (ColFlags)0x00001001);
	v3->scl[0] = 1.0f;
	v3->scl[1] = 1.0f;
	v3->scl[2] = 1.0f;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
}

void __cdecl Rock1(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Rock1;
	v3 = DynamicCollision(&Object_Rock1, a1, (ColFlags)0x00001001);
	v3->scl[0] = 1.0f;
	v3->scl[1] = 1.0f;
	v3->scl[2] = 1.0f;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
}

void __cdecl Rock2(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Rock2;
	v3 = DynamicCollision(&Object_Rock2, a1, (ColFlags)0x00001001);
	v3->scl[0] = 1.0f;
	v3->scl[1] = 1.0f;
	v3->scl[2] = 1.0f;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
}

void __cdecl Rock3(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Rock3;
	v3 = DynamicCollision(&Object_Rock3, a1, (ColFlags)0x00001001);
	v3->scl[0] = 1.0f;
	v3->scl[1] = 1.0f;
	v3->scl[2] = 1.0f;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
}

void __cdecl Rock5(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Rock5;
	v3 = DynamicCollision(&Object_Rock5, a1, (ColFlags)0x00001001);
	v3->scl[0] = 1.0f;
	v3->scl[1] = 1.0f;
	v3->scl[2] = 1.0f;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
}

//Sirusi Object Functions
void __cdecl Load_Sirusi2(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Sirusi2;
	v3 = DynamicCollision(&Collision_Sirusi2, a1, (ColFlags)0x00001001);
	v3->scl[0] = 1.0f;
	v3->scl[1] = 1.0f;
	v3->scl[2] = 1.0f;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
}

void __cdecl Load_Sirusi3(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Sirusi3;
	v3 = DynamicCollision(&Collision_Sirusi3, a1, (ColFlags)0x00001001);
	v3->scl[0] = 1.0f;
	v3->scl[1] = 1.0f;
	v3->scl[2] = 1.0f;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
}

void __cdecl Load_Sirusi4(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Sirusi4;
	v3 = DynamicCollision(&Collision_Sirusi4, a1, (ColFlags)0x00001001);
	v3->scl[0] = 1.0f;
	v3->scl[1] = 1.0f;
	v3->scl[2] = 1.0f;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
}

//Grass Object Functions
void __cdecl Grass1_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@3
	Angle v3; // eax@5
	Angle v4; // eax@7

	v1 = a2->Data1;
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
	sub_405450(&action_Grass1_Action, grassFrame, 1.0);
	njPopMatrix(1u);
}

void __cdecl Grass1(ObjectMaster *a1)
{
	float *v1; // edi@1

	v1 = (float *)&a1->Data1->Action;
	if (!ClipSetObject(a1))
	{
		if (v1)
		{
			if (*(float*)v1 == 1)
			{
				Grass1_Display(a1);
			}
		}
		else
		{
			a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
			a1->DisplaySub = Grass1_Display;
			* (float*)v1 = 1;
		}
	}
}

void __cdecl Grass2_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@3
	Angle v3; // eax@5
	Angle v4; // eax@7

	v1 = a2->Data1;
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
	sub_405450(&action_Grass2_Action, grassFrame, 1.0);
	njPopMatrix(1u);
}

void __cdecl Grass2(ObjectMaster *a1)
{
	float *v1; // edi@1

	v1 = (float *)&a1->Data1->Action;
	if (!ClipSetObject(a1))
	{
		if (v1)
		{
			if (*(float*)v1 == 1)
			{
				if (!ObjectSelectedDebug(a1))
				{
					v1[2] = v1[11] + v1[2];
				}
				Grass1_Display(a1);
			}
		}
		else
		{
			a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
			a1->DisplaySub = Grass1_Display;
			*(float*)v1 = 1;
		}
	}
}



//Pole Object Functions
void __cdecl Load_Pole1(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Pole1;
	v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
	v3->scl[0] = 1.0f;
	v3->scl[1] = 1.0f;
	v3->scl[2] = 1.0f;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
}

void __cdecl Load_Pole2(ObjectMaster *a1)
{
	NJS_OBJECT *v3;
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Pole2;
	v3 = DynamicCollision(v1->Object, a1, (ColFlags)0x00001001);
	v3->scl[0] = 1.0f;
	v3->scl[1] = 1.0f;
	v3->scl[2] = 1.0f;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Basic_Display;
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
	{ 2, 4, 0, 0, 0, NullFunction, "PROPE1 " } /* "PROPE1 " */,					//19
	{ 2, 4, 0, 0, 0, NullFunction, "PROPE2 " } /* "PROPE2 " */,					//1A
	{ 2, 4, 0, 0, 0, NullFunction, "PROPE3 " } /* "PROPE3 " */,					//1B
	{ 2, 5, 0, 0, 0, NullFunction, "FLOWER0" } /* "FLOWER0" */,					//1C
	{ 2, 5, 0, 0, 0, NullFunction, "FLOWER1" } /* "FLOWER1" */,					//1D
	{ 2, 5, 0, 0, 0, NullFunction, "GREEN 0" } /* "GREEN 0" */,					//1E
	{ 2, 4, 0, 0, 0, NullFunction, "W KI1  " } /* "W KI1  " */,					//1F
	{ 2, 4, 0, 0, 0, NullFunction, "W KI2  " } /* "W KI2  " */,					//20
	{ 2, 5, 0, 0, 0, NullFunction, "W KUSA1" } /* "W KUSA1" */,					//21
	{ 2, 5, 0, 0, 0, Grass1, "GRASS1 " } /* "GRASS1 " */,						//22
	{ 2, 5, 0, 0, 0, Grass2, "GRASS2 " } /* "GRASS2 " */,						//23
	{ 2, 5, 0, 0, 0, NullFunction, "GRASS3 " } /* "GRASS3 " */,					//24
	{ 2, 5, 0, 0, 0, NullFunction, "GRASS4 " } /* "GRASS4 " */,					//25
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
	{ 2, 4, 0, 0, 0, NullFunction, "SIRUSI5" } /* "SIRUSI5" */,					//30
	{ 2, 4, 0, 0, 0, NullFunction, "SIRUSI6" } /* "SIRUSI6" */,					//31
	{ 2, 4, 0, 0, 0, NullFunction, "SIRUSI7" } /* "SIRUSI7" */,					//32
	{ 2, 4, 0, 0, 0, NullFunction, "SIRUSI8" } /* "SIRUSI8" */,					//33
	{ 2, 4, 0, 0, 0, NullFunction, "SIRUSI9" } /* "SIRUSI9" */,					//34
	{ 6, 4, 0, 0, 0, NullFunction, "SIRU 11" } /* "SIRU 11" */,					//35
	{ 6, 4, 0, 0, 0, NullFunction, "SIRU 12" } /* "SIRU 12" */,					//36
	{ 6, 4, 0, 0, 0, NullFunction, "SIRU 13" } /* "SIRU 13" */,					//37
	{ 2, 4, 0, 0, 0, NullFunction, "YAJI 01" } /* "YAJI 01" */,					//38
	{ 2, 4, 0, 0, 0, Load_Pole1, "POLE 1 " } /* "POLE 1 " */,					//39
	{ 2, 4, 0, 0, 0, Load_Pole2, "POLE 2 " } /* "POLE 2 " */,					//3A
	{ 2, 3, 0, 0, 0, WindyGate_Main, "W GATE " } /* "W GATE " */,				//3B
	{ 2, 3, 0, 0, 0, WindyGate_Main, "W GATE2" } /* "W GATE2" */,				//3C
	{ 2, 3, 0, 0, 0, NullFunction, "POT01  " } /* "POT01  " */,					//3D
	{ 2, 3, 0, 0, 0, NullFunction, "POT02  " } /* "POT02  " */,					//3E
	{ 6, 3, 0, 0, 0, Rock1, "ROCK 1 " } /* "ROCK 1 " */,						//3F
	{ 2, 3, 0, 0, 0, Rock2, "ROCK 2 " } /* "ROCK 2 " */,						//40
	{ 2, 3, 0, 0, 0, Rock3, "ROCK 3 " } /* "ROCK 3 " */,						//41
	{ 2, 3, 0, 0, 0, Rock5, "ROCK 5 " } /* "ROCK 5 " */,						//42
	{ 6, 3, 0, 0, 0, NullFunction, "I DAI 1" } /* "I DAI 1" */,					//43
	{ 6, 3, 0, 0, 0, NullFunction, "I DAI 2" } /* "I DAI 2" */,					//44
	{ 6, 3, 0, 0, 0, NullFunction, "I DAI 3" } /* "I DAI 3" */,					//45
	{ 6, 3, 0, 0, 0, NullFunction, "I DAI 4" } /* "I DAI 4" */,					//46
	{ 6, 3, 0, 0, 0, NullFunction, "I DAI 5" } /* "I DAI 5" */,					//47
	{ 6, 3, 0, 0, 0, NullFunction, "I DAI 6" } /* "I DAI 6" */,					//48
	{ 6, 3, 0, 0, 0, NullFunction, "I DAI 7" } /* "I DAI 7" */,					//49
	{ 6, 3, 0, 0, 0, NullFunction, "I DAI 8" } /* "I DAI 8" */,					//4A
	{ 6, 3, 0, 0, 0, NullFunction, "I DAI 9" } /* "I DAI 9" */,					//4B
	{ 6, 3, 0, 0, 0, NullFunction, "I HAS14" } /* "I HAS14" */,					//4C
	{ 6, 3, 0, 0, 0, NullFunction, "I HAS15" } /* "I HAS15" */,					//4D
	{ 6, 3, 0, 0, 0, NullFunction, "I HAS16" } /* "I HAS16" */,					//4E
	{ 2, 3, 0, 0, 0, NullFunction, "I HAS17" } /* "I HAS17" */,					//4F
	{ 2, 3, 0, 0, 0, NullFunction, "I HAS18" } /* "I HAS18" */,					//50
	{ 2, 2, 0, 0, 0, NullFunction, "BANEIWA" } /* "BANEIWA" */,					//51
	{ 2, 5, 0, 0, 0, NullFunction, "TANPOPO" } /* "TANPOPO" */,					//52
	{ 2, 5, 0, 0, 0, NullFunction, "TAKO W " } /* "TAKO W " */,					//53
	{ 2, 3, 0, 0, 0, NullFunction, "DOME 1 " } /* "DOME 1 " */,					//54
	{ 2, 3, 0, 0, 0, NullFunction, "DOME 2 " } /* "DOME 2 " */,					//55
	{ 2, 3, 0, 0, 0, NullFunction, "DOME 3 " } /* "DOME 3 " */,					//56
	{ 2, 5, 0, 0, 0, NullFunction, "PROP 1 " } /* "PROP 1 " */,					//57
	{ 2, 4, 0, 0, 0, NullFunction, "PROPE A" } /* "PROPE A" */,					//58
	{ 2, 4, 0, 0, 0, NullFunction, "PROPE B" } /* "PROPE B" */,					//59
	{ 2, 4, 0, 0, 0, NullFunction, "PROPE C" } /* "PROPE C" */,					//5A
	{ 6, 3, 0, 0, 0, NullFunction, "IWA B  " } /* "IWA B  " */,					//5B
	{ 2, 5, 0, 0, 0, NullFunction, "PINK F " } /* "PINK F " */,					//5C
	{ 6, 3, 0, 0, 0, NullFunction, "I BOU01" } /* "I BOU01" */,					//5D
	{ 6, 3, 0, 0, 0, NullFunction, "I BOU02" } /* "I BOU02" */,					//5E
	{ 6, 3, 0, 0, 0, NullFunction, "I HAH01" } /* "I HAH01" */,					//5F
	{ 6, 3, 0, 0, 0, NullFunction, "I HAH02" } /* "I HAH02" */,					//60
	{ 6, 3, 0, 0, 0, NullFunction, "I HAH03" } /* "I HAH03" */,					//61
	{ 6, 3, 0, 0, 0, NullFunction, "IOIWA01" } /* "IOIWA01" */,					//62
	{ 6, 3, 0, 0, 0, NullFunction, "IOIWA02" } /* "IOIWA02" */,					//63
	{ 6, 3, 0, 0, 0, NullFunction, "IOIWA03" } /* "IOIWA03" */,					//64
	{ 6, 3, 0, 0, 0, NullFunction, "SARA B1" } /* "SARA B1" */,					//65
	{ 6, 3, 0, 0, 0, NullFunction, "SARA B2" } /* "SARA B2" */,					//66
	{ 6, 3, 0, 0, 0, NullFunction, "SARA M1" } /* "SARA M1" */,					//67
	{ 6, 3, 0, 0, 0, NullFunction, "SARA M2" } /* "SARA M2" */,					//68
	{ 6, 3, 0, 0, 0, NullFunction, "SARA S1" } /* "SARA S1" */,					//69
	{ 6, 3, 0, 0, 0, NullFunction, "SARA S2" } /* "SARA S2" */,					//6A
	{ 2, 4, 0, 0, 0, NullFunction, "TSPRING" } /* "TSPRING" */,					//6B
	{ 2, 4, 0, 0, 0, NullFunction, "LAUCHIN" } /* "LAUCHIN" */,					//6C
	{ 6, 2, 1, 1000000, 0, SBridg, "S BRIDG" } /* "S BRIDG" */,					//6D
	{ 7, 3, 0, 0, 0, NullFunction, "WELE   " } /* "WELE   " */,					//6E
	{ 2, 3, 0, 0, 0, RhinoTank_Main, "E SAITO" } /* "E SAITO" */,				//6F
	{ 2, 3, 0, 0, 0, BoaBoa_Main, "E HEVY " } /* "E HEVY " */,					//70
	{ 2, 3, 0, 0, 0, Leon_Load, "E LEON " } /* "E LEON " */,					//71
	{ 2, 3, 0, 0, 0, E103Enemy_Load, "E E-103" } /* "E E-103" */				//72
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
	njPushMatrix(NULL); njTranslate(NULL, 649.074f, -203.486f, -196.07);
}

void WVSkybox1Position()
{
	njPushMatrix(NULL); njTranslate(NULL, 0.0f, 300.0f, 0.0f);
	njScale(0, 0.75f, 0.75f, 0.75f);
}

void Init(const char *path, const HelperFunctions &helperFunctions)
{
	*(float *)0x7E7B04 = 1420.68f; // changing the level trigger height for WV part 2
	WriteData((float *)0x4DE8F6, 436.785f); // x component of tornado target.
	WriteData((float *)0x4DE906, -2305.471f); // z component of tornado target.
	WriteData((float *)0x004DE8ED, tornadoLoadDistance); // Tornado's load distance
	WriteData((int *)0x07E1D90, (int)LengthOfArray(WV3path)); // p2 path for WV3
	WriteCall((void *)0x4DD8D3, TornadoPosition); // setting the tornado position properly
	WriteCall((void *)0x4DD7A5, WVSkybox1Position);



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
			if (grassFrame > 30) grassFrame = 0;
			grassFrame = grassFrame + 0.08f;
		}
	}
}
