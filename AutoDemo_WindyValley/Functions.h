#pragma once

//Usercall Functions
// void __usercall(task* a1@<eax>)
static const void* const sub_4E2CC0Ptr = (void*)0x4E2CC0;
extern inline void sub_4E2CC0(task* a1)
{
	__asm
	{
		mov eax, [a1]
		call sub_4E2CC0Ptr
	}
}

// void __usercall(task* a1@<eax>)
static const void* const sub_4E2D30Ptr = (void*)0x4E2D30;
extern inline void sub_4E2D30(task* a1)
{
	__asm
	{
		mov eax, [a1]
		call sub_4E2D30Ptr
	}
}

// void __usercall(taskwk* a1@<esi>)
static const void* const sub_4E2DC0Ptr = (void*)0x4E2DC0;
extern inline void sub_4E2DC0(taskwk* a1)
{
	__asm
	{
		mov esi, [a1]
		call sub_4E2DC0Ptr
	}
}

// void __usercall(taskwk* a1@<esi>)
static const void* const sub_4E2EC0Ptr = (void*)0x4E2EC0;
extern inline void sub_4E2EC0(taskwk* a1)
{
	__asm
	{
		mov esi, [a1]
		call sub_4E2EC0Ptr
	}
}

// void __usercall(taskwk *a1@<eax>)
static const void* const sub_4DF8B0Ptr = (void*)0x4DF8B0;
extern inline void ObjectTanpopoHeadPosCalc(taskwk* a1)
{
	__asm
	{
		mov eax, [a1]
		call sub_4DF8B0Ptr
	}
}

// void __usercall(EntityData1 *a1@<eax>)
static const void* const sub_4D46C0Ptr = (void*)0x4D46C0;
extern inline void sub_4D46C0(EntityData1* a1)
{
	__asm
	{
		mov eax, [a1]
		call sub_4D46C0Ptr
	}
}

// void __usercall(ObjectMaster *a1@<eax>, char a2)
static const void* const sub_7A46C0Ptr = (void*)0x7A46C0;
extern inline void sub_7A46C0(ObjectMaster* a1, char a2)
{
	__asm
	{
		push[a2]
		mov eax, [a1]
		call sub_7A46C0Ptr
		add esp, 4
	}
}


// void __usercall BrokenBridge(int flag@<ebx>, task *obj@<edi>)
static const void* const BrokenBridgePtr = (void*)0x4E6200;
extern inline void BrokenBridge(int flag, task* obj)
{
	__asm
	{
		mov edi, [obj]
		mov ebx, [flag]
		call BrokenBridgePtr
	}
}
//Basic Usage Functions
void __cdecl NullFunction(ObjectMaster *a1);
void __cdecl Basic_Display(ObjectMaster *a2);
void __cdecl Basic_Main(ObjectMaster *a1);
void __cdecl DeleteDynamicCollision(ObjectMaster *a1);
void AddToCollision(ObjectMaster *a1, uint8_t col);
void DrawObjModel(ObjectMaster *a1, NJS_MODEL_SADX *m, bool scalable);
void deleteSub_Global(ObjectMaster *a1);

//Misc Functions
void __cdecl OPoline_r(task *a1);
void __cdecl WindyGate_Main(task *a1);
void __cdecl SBridg(task *a1);
void __cdecl Load_BrPole(task *a1);
void __cdecl Load_BaneIwa(ObjectMaster *a1);
void __cdecl Load_TakoW(task *a1);
void __cdecl Load_Lauchin(ObjectMaster *a1);
void __cdecl TSpring_Main(ObjectMaster *a1);
void __cdecl JamSpring_Main(ObjectMaster *a1);

//Rock Functions
void __cdecl LRock(ObjectMaster *a1);
void __cdecl Rock1(ObjectMaster *a1);
void __cdecl Rock2(ObjectMaster *a1);
void __cdecl Rock3(ObjectMaster *a1);
void __cdecl Rock5(ObjectMaster *a1);
void __cdecl Load_IwaB(ObjectMaster *a1);
void __cdecl Load_Ioiwa01(ObjectMaster *a1);
void __cdecl Load_Ioiwa02(ObjectMaster *a1);
void __cdecl Load_Ioiwa03(ObjectMaster *a1);

//Sirusi Functions
void __cdecl Load_Sirusi1(ObjectMaster *a1);
void __cdecl Load_Sirusi2(ObjectMaster *a1);
void __cdecl Load_Sirusi3(ObjectMaster *a1);
void __cdecl Load_Sirusi4(ObjectMaster *a1);
void __cdecl Load_Sirusi5(ObjectMaster *a1);
void __cdecl Load_Sirusi6(ObjectMaster *a1);
void __cdecl Load_Sirusi7(ObjectMaster *a1);
void __cdecl Load_Sirusi8(ObjectMaster *a1);
void __cdecl Load_Sirusi9(ObjectMaster *a1);
void __cdecl Load_Siru11(ObjectMaster *a1);
void __cdecl Load_Siru12(ObjectMaster *a1);
void __cdecl Load_Siru13(ObjectMaster *a1);
void __cdecl Load_Yaji01(ObjectMaster *a1);

//Foliage Functions
void __cdecl Load_Grass1(ObjectMaster *a1);
void __cdecl Load_Grass2(ObjectMaster *a1);
void __cdecl Load_Grass3(ObjectMaster *a1);
void __cdecl Load_Grass4(ObjectMaster *a1);
void __cdecl Load_Green0(ObjectMaster *a1);
void __cdecl Load_WKusa1(ObjectMaster *a1);
void __cdecl Load_Flower0(ObjectMaster *a1);
void __cdecl Load_Flower1(ObjectMaster *a1);
void __cdecl Load_PinkF(ObjectMaster *a1);
void __cdecl Load_WKi1(ObjectMaster *a1);
void __cdecl Load_WKi2(ObjectMaster *a1);

//Pole Functions
void __cdecl Load_Pole1(ObjectMaster *a1);
void __cdecl Load_Pole2(ObjectMaster *a1);
void __cdecl Load_IHas14(ObjectMaster *a1);
void __cdecl Load_IHas15(ObjectMaster *a1);
void __cdecl Load_IHas16(ObjectMaster *a1);
void __cdecl Load_IHas17(ObjectMaster *a1);
void __cdecl Load_IHas18(ObjectMaster *a1);
void __cdecl Load_IHas19(ObjectMaster *a1);

//Pedestal Functions
void __cdecl Load_IDai1(ObjectMaster *a1);
void __cdecl Load_IDai2(ObjectMaster *a1);
void __cdecl Load_IDai3(ObjectMaster *a1);
void __cdecl Load_IDai4(ObjectMaster *a1);
void __cdecl Load_IDai5(ObjectMaster *a1);
void __cdecl Load_IDai6(ObjectMaster *a1);
void __cdecl Load_IDai7(ObjectMaster *a1);
void __cdecl Load_IDai8(ObjectMaster *a1);
void __cdecl Load_IDai9(ObjectMaster *a1);
void __cdecl Load_IDai10(ObjectMaster *a1);


//Debris Functions
void __cdecl Load_IBou01(ObjectMaster *a1);
void __cdecl Load_IBou02(ObjectMaster *a1);
void __cdecl Load_IBou03(ObjectMaster *a1);
void __cdecl Load_IHah01(ObjectMaster *a1);
void __cdecl Load_IHah02(ObjectMaster *a1);
void __cdecl Load_IHah03(ObjectMaster *a1);
void __cdecl Load_IHah04(ObjectMaster *a1);
void __cdecl Load_IHah05(ObjectMaster *a1);
void __cdecl Load_IHah06(ObjectMaster *a1);

//Propeller Functions
void __cdecl Load_Prope1(ObjectMaster *a1);
void __cdecl Load_Prope2(ObjectMaster *a1);
void __cdecl Load_Prope3(ObjectMaster *a1);
void __cdecl Load_PropeA(ObjectMaster *a1);
void __cdecl Load_PropeB(ObjectMaster *a1);
void __cdecl Load_PropeC(ObjectMaster *a1);
void __cdecl Load_Pot01(ObjectMaster *a1);
void __cdecl Load_Pot02(ObjectMaster *a1);
void __cdecl Load_Prop1(ObjectMaster *a1);
void __cdecl Load_Dome1(ObjectMaster *a1);
void __cdecl Load_Dome2(ObjectMaster *a1);
void __cdecl Load_Dome3(ObjectMaster *a1);

//Sara Functions
void __cdecl Load_SaraB1(ObjectMaster *a1);
void __cdecl Load_SaraB2(ObjectMaster *a1);
void __cdecl Load_SaraM1(ObjectMaster *a1);
void __cdecl Load_SaraM2(ObjectMaster *a1);
void __cdecl Load_SaraS1(ObjectMaster *a1);
void __cdecl Load_SaraS2(ObjectMaster *a1);

//Raft Functions
void __cdecl Load_Raft(ObjectMaster *a1);
void __cdecl Load_Raft2(ObjectMaster *a1);
void __cdecl Load_Raft3(ObjectMaster *a1);
void __cdecl Load_TRaft1(ObjectMaster *a1);
void __cdecl Load_TRaft2(ObjectMaster *a1);

//Wele Function
void __cdecl Load_Wele(ObjectMaster *a1);

//Easter Egg functions
void __cdecl Load_WGear(ObjectMaster *a1);
void __cdecl Load_WBolt(ObjectMaster *a1);