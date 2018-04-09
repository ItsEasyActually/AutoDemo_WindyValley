#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"


// void __usercall(int a1@<eax>)
static const void *const sub_4E2CC0Ptr = (void*)0x4E2CC0;
extern inline void sub_4E2CC0(int a1)
{
	__asm
	{
		mov eax, [a1]
		call sub_4E2CC0Ptr
	}
}

// void __usercall(int a1@<eax>)
static const void *const sub_4E2D30Ptr = (void*)0x4E2D30;
extern inline void sub_4E2D30(int a1)
{
	__asm
	{
		mov eax, [a1]
		call sub_4E2D30Ptr
	}
}

// void __usercall(int a1@<esi>)
static const void *const sub_4E2DC0Ptr = (void*)0x4E2DC0;
extern inline void sub_4E2DC0(int a1)
{
	__asm
	{
		mov esi, [a1]
		call sub_4E2DC0Ptr
	}
}

// void __usercall(int a1@<esi>)
static const void *const sub_4E2EC0Ptr = (void*)0x4E2EC0;
extern inline void sub_4E2EC0(int a1)
{
	__asm
	{
		mov esi, [a1]
		call sub_4E2EC0Ptr
	}
}

// void __usercall(EntityData1 *a1@<eax>, NJS_OBJECT *a2@<ecx>, float a3)
static const void *const sub_49CCD0Ptr = (void*)0x49CCD0;
extern inline void sub_49CCD0(EntityData1 *a1, NJS_OBJECT *a2, float a3)
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
extern inline void sub_4DF8B0(int *a1)
{
	__asm
	{
		mov eax, [a1]
		call sub_4DF8B0Ptr
	}
}

// void __usercall(EntityData1 *a1@<eax>)
static const void *const sub_4D46C0Ptr = (void*)0x4D46C0;
extern inline void sub_4D46C0(EntityData1 *a1)
{
	__asm
	{
		mov eax, [a1]
		call sub_4D46C0Ptr
	}
}

// void __usercall(ObjectMaster *a1@<eax>, char a2)
static const void *const sub_7A46C0Ptr = (void*)0x7A46C0;
extern inline void sub_7A46C0(ObjectMaster *a1, char a2)
{
	__asm
	{
		push[a2]
		mov eax, [a1]
		call sub_7A46C0Ptr
		add esp, 4
	}
}