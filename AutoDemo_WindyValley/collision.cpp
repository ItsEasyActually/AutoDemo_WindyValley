#include "stdafx.h"
#include <SADXModLoader.h>
#include "collision.h"
#include "misc.h"

#include <windows.h>
#include <exception>
#include <vector>
#include <cstdint>
#include <MemAccess.h>

// TODO: TornadoTargetSprite_TargetLock_Load (floating point comparison shenanigans!)
//DataArray(CollisionInfo*, TornadoTargets, 0x03C82360, 6);
//DataArray(ObjectMaster*, TornadoTarget_ObjectsMaybe, 0x03C82348, 6);

FunctionPointer(int, sub_4C47B0, (ObjectMaster *a1), 0x4C47B0);

// TODO:
namespace CollisionList
{
	enum _enum
	{
		Players,
		Unknown_1,
		Targetable,
		Hazard,
		Unknown_4,
		Unknown_5,
		Minimal,
		Rings,
		Unknown_8,
		Chao,
		COUNT
	};
}

static std::vector<EntityData1*> entities[CollisionList::COUNT] = {};
static std::vector<CollisionInfo*> colliders[CollisionList::COUNT] = {};

static void __cdecl CheckSelfCollision(Uint32 num)
{
	auto& list = entities[num];

	for (Uint32 i = 0; i < list.size(); i++)
	{
		for (Uint32 x = 0; x < list.size(); x++)
		{
			if (x != i)
			{
				CheckCollision(list[i], list[x]);
			}
		}
	}
}

static void __cdecl Collision_Statistics()
{
#ifdef _DEBUG
	auto rows = (Uint32)(480.0f * VerticalStretch / DebugFontSize) - 1;
	DisplayDebugStringFormatted(NJM_LOCATION(1, rows - 10), "ENTITIES[0]: %3u [player]",       entities[0].size());
	DisplayDebugStringFormatted(NJM_LOCATION(1, rows - 9),  "ENTITIES[1]: %3u",                entities[1].size());
	DisplayDebugStringFormatted(NJM_LOCATION(1, rows - 8),  "ENTITIES[2]: %3u [targetable]",   entities[2].size());
	DisplayDebugStringFormatted(NJM_LOCATION(1, rows - 7),  "ENTITIES[3]: %3u [enemy/hazard]", entities[3].size());
	DisplayDebugStringFormatted(NJM_LOCATION(1, rows - 6),  "ENTITIES[4]: %3u",                entities[4].size());
	DisplayDebugStringFormatted(NJM_LOCATION(1, rows - 5),  "ENTITIES[5]: %3u",                entities[5].size());
	DisplayDebugStringFormatted(NJM_LOCATION(1, rows - 4),  "ENTITIES[6]: %3u [minimal]",      entities[6].size());
	DisplayDebugStringFormatted(NJM_LOCATION(1, rows - 3),  "ENTITIES[7]: %3u [rings]",        entities[7].size());
	DisplayDebugStringFormatted(NJM_LOCATION(1, rows - 2),  "ENTITIES[8]: %3u",                entities[8].size());
	DisplayDebugStringFormatted(NJM_LOCATION(1, rows - 1),  "ENTITIES[9]: %3u [chao]",         entities[9].size());
#endif
}

static void __cdecl ClearLists()
{
	Collision_Statistics();

	for (Uint32 i = 0; i < CollisionList::COUNT; i++)
	{
		entities[i].clear();
		colliders[i].clear();
	}
}

static void __cdecl ClearLists_hook()
{
	njPopMatrixEx();
	ClearLists();
}

static void __cdecl AddToCollisionList_r(EntityData1* entity)
{
	const auto collision = entity->CollisionInfo;

	if (collision && collision->Object->MainSub != DeleteObjectMaster)
	{
		int v2 = CurrentAct | (CurrentLevel << 8);
		bool is_chao_stage = BYTE1(v2) >= (signed int)LevelIDs_SSGarden && BYTE1(v2) <= (signed int)LevelIDs_ChaoRace;
		bool is_player = collision->List == 0;
		IsChaoStage = is_chao_stage;

		if (!is_player || !is_chao_stage)
		{
			Collision_InitThings(entity);
		}

		if (collision->List < 0 || collision->List > 9)
		{
			return;
		}

		const auto i = collision->List;

		if (GameMode != GameModes_Menu)
		{
			if (std::find(entities[i].begin(), entities[i].end(), entity) == entities[i].end())
			{
				entities[i].push_back(entity);
			}

			if (std::find(colliders[i].begin(), colliders[i].end(), collision) == colliders[i].end())
			{
				colliders[i].push_back(collision);
			}
		}
	}
}

static void __cdecl RunPlayerCollision_r()
{
	if (IsChaoStage)
	{
		for (auto& i : entities[0])
		{
			Collision_InitThings(i);
		}
	}

	CheckSelfCollision(0);

	for (auto& i : entities[0])
	{
		for (auto& x : entities[2])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[3])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[4])
		{
			CheckCollision__(i, x);
		}

		for (auto& x : entities[5])
		{
			CheckCollision__(i, x);
		}

		for (auto& x : entities[6])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[7])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[8])
		{
			CheckCollision_(i, x);
		}

		for (auto& x : entities[9])
		{
			CheckCollision(i, x);
		}
	}
}

static void __cdecl RunCollision_1_r()
{
	for (auto& i : entities[1])
	{
		for (auto& x : entities[0])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[2])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[3])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[4])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[5])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[6])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[7])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[9])
		{
			CheckCollision(i, x);
		}
	}
}

static void __cdecl RunCollision_9_r()
{
	CheckSelfCollision(9);

	for (auto& i : entities[9])
	{
		for (auto& x : entities[2])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[3])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[4])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[5])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[6])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[7])
		{
			CheckCollision(i, x);
		}
	}
}

static void __cdecl RunCollision_3_r()
{
	CheckSelfCollision(3);

	for (auto& i : entities[3])
	{
		for (auto& x : entities[4])
		{
			CheckCollision(i, x);
		}

		for (auto& x : entities[5])
		{
			CheckCollision(i, x);
		}
	}
}

static void __cdecl RunCollision_4_r()
{
	for (auto& i : entities[4])
	{
		for (auto& j : entities[5])
		{
			CheckCollision(i, j);
		}
	}
}

static void __cdecl RunCollision_5_r()
{
	CheckSelfCollision(5);
}


//void __usercall sub_4C4850(int length@<eax>, CollisionInfo **array_ptr@<ecx>)
// ReSharper disable once CppDeclaratorNeverUsed
static const void* sub_4C4850_ptr = (const void*)0x4C4850;
static void sub_4C4850(int length_, CollisionInfo** array_ptr)
{
	__asm
	{
		mov eax, length_
		mov ecx, array_ptr
		call sub_4C4850_ptr
	}
}

//ObjectMaster *__usercall sub_4C49F0@<eax>(int length@<eax>, void *unknown@<ecx>, CollisionInfo **array, float *out)
// ReSharper disable once CppDeclaratorNeverUsed
static const void* sub_4C49F0_ptr = (const void*)0x4C49F0;
ObjectMaster* sub_4C49F0(int length_, void* unknown, CollisionInfo** array, float* out_)
{
	ObjectMaster* result = nullptr;

	__asm
	{
		mov eax, length_
		mov ecx, unknown
		push out_
		push array
		call sub_4C49F0_ptr
		add esp, 8
		mov result, eax
	}

	return result;
}

//Bool __usercall sub_628A50@<eax>(CollisionInfo *a1@<eax>, EntityData1 *a2@<edi>)
// ReSharper disable once CppDeclaratorNeverUsed
static const void* sub_628A50_ptr = (const void*)0x628A50;
Bool sub_628A50(CollisionInfo *a1, EntityData1 *a2)
{
	Bool result = 0;

	__asm
	{
		mov eax, a1
		mov edi, a2
		call sub_628A50_ptr
		mov result, eax
	}

	return result;
}

void __cdecl GammaTargetThing_r(ObjectMaster *out)
{
	int v8; // edx@15
	float v13; // [sp+8h] [bp-8h]@7

	const auto CollisionList_2_Count = (int)colliders[2].size();
	const auto CollisionList_3_Count = (int)colliders[3].size();

	_DWORD *v1 = (_DWORD*)out->UnknownB_ptr;
	int v2 = *(BYTE *)v1;
	int v3 = v1[1];
	int v4 = v1[2];
	int v14 = v1[1];
	if (v2)
	{
		if (v2 != 1)
		{
			goto LABEL_20;
		}
	}
	else
	{
		*(BYTE *)v1 = 1;
	}
	if (*(WORD *)(v4 + 18) <= 0 && *(BYTE *)(v4 + 4) < 32)
	{
		ObjectMaster *v5 = sub_4C49F0(CollisionList_2_Count, (void *)v4, colliders[2].data(), (float *)&out);
		ObjectMaster *v6 = sub_4C49F0(CollisionList_3_Count, (void *)v4, colliders[3].data(), &v13);
		if (!v5 || (v6 && *(float *)&out > (double)v13))
		{
			v5 = v6;
		}
		if (v5)
		{
			ObjectMaster *v7 = LoadObject(LoadObj_Data1, 5, (ObjectFuncPtr)0x4CF090);
			if (v7)
			{
				if ((v8 = (int)AllocateArray(1, 52)))
				{
					out = (ObjectMaster *)*(BYTE *)(v3 + 8);
					if (sub_4C47B0(v5))
					{
						signed __int16 v9 = ++*(WORD *)(v4 + 10);
						if (v9 >= 99)
						{
							v9 = 99;
						}
						*(WORD *)(v4 + 10) = v9;
					}
					*(_DWORD *)(v4 + 48) = *(_DWORD*)&v7;
					*(WORD *)(v4 + 18) = 8;
					v7->Data1->Position = v5->Data1->Position;
					int v10 = v14;
					v7->UnknownB_ptr = (void *)v8;
					char v11 = *(BYTE *)(v4 + 10);
					*(_DWORD *)(v8 + 12) = v10;
					ObjectMaster *v12 = out;
					*(BYTE *)(v8 + 1) = v11;
					*(_DWORD *)(v8 + 8) = *(_DWORD*)&v5;
					*(_DWORD *)(v8 + 16) = v4;
					*(_DWORD *)(v8 + 20) = 0;
					*(_DWORD *)(v8 + 48) = *(_DWORD*)&v5->MainSub;
					*(WORD *)(v8 + 4) = EntityData2Ptrs[(signed int)v12]->CharacterData->Upgrades;
				}
				else
				{
					DeleteObjectMaster(v7);
				}
			}
		}
	}
LABEL_20:
	sub_4C4850(CollisionList_2_Count, colliders[2].data());
	sub_4C4850(CollisionList_3_Count, colliders[3].data());
}

ObjectMaster *__cdecl sub_628B20(EntityData1 *a1)
{
	ObjectMaster *result; // eax@30
	float magnitudes[6]; // [sp+18h] [bp-30h]@5
	CollisionInfo *info_ptrs[6]; // [sp+30h] [bp-18h]@5

	const auto CollisionList_2_Count = (int)colliders[2].size();
	const auto CollisionList_3_Count = (int)colliders[3].size();

	signed int v1 = 0;
	signed int v2 = 0;
	EntityData1* player1 = EntityData1Ptrs[0];
	if (CollisionList_2_Count)
	{
		do
		{
			CollisionInfo *v3 = colliders[2][v1];
			EntityData1 *v4 = v3->Object->Data1;
			double v5 = v4->Position.x - player1->Position.x;

			// re-asigning pointer to Position (NJS_VECTOR*)
			//v4 = (EntityData1 *)((char *)v4 + 32);
			auto _v4 = &v4->Position;
			double v6 = *(float *)&_v4->y - player1->Position.y;
			double v7 = _v4->z - player1->Position.z;
			double v8 = v7 * v7 + v6 * v6 + v5 * v5;
			if (v8 < 9000000.0 && sub_628A50(v3, a1))
			{
				if (v2 >= 6)
				{
					break;
				}
				info_ptrs[v2] = v3;
				float v9 = (float)v8;
				magnitudes[v2++] = v9;
			}
			++v1;
		} while (v1 < CollisionList_2_Count);
	}
	signed int v10 = 0;
	if (CollisionList_3_Count)
	{
		NJS_VECTOR *player_pos = &player1->Position;
		do
		{
			CollisionInfo *v11 = colliders[3][v10];
			EntityData1 *v12 = v11->Object->Data1;
			double v13 = v12->Position.x - player_pos->x;

			// re-asigning pointer to Position (NJS_VECTOR*)
			//v12 = (EntityData1 *)((char *)v12 + 32);
			auto _v12 = &v12->Position;
			double v14 = _v12->z - player_pos->z;
			double v15 = v14 * v14 + (_v12->y - player_pos->y) * (_v12->y - player_pos->y) + v13 * v13;
			if (v15 < 9000000.0 && sub_628A50(v11, a1))
			{
				if (v2 >= 6)
				{
					break;
				}
				info_ptrs[v2] = v11;
				float v16 = (float)v15;
				magnitudes[v2++] = v16;
			}
			++v10;
		} while (v10 < CollisionList_3_Count);
	}
	if (v2 <= 0)
	{
		result = nullptr;
	}
	else
	{
		double v17 = magnitudes[0];
		ObjectMaster *v18 = info_ptrs[0]->Object;
		signed int v19 = 1;
		if (v2 - 1 >= 4)
		{
			signed int v20 = 4;
			do
			{
				if (v17 > magnitudes[v19])
				{
					v17 = magnitudes[v19];
					v18 = info_ptrs[v19]->Object;
				}
				if (v17 > magnitudes[v19 + 1])
				{
					v17 = magnitudes[v19 + 1];
					v18 = info_ptrs[v19 + 1]->Object;
				}
				if (v17 > magnitudes[v19 + 2])
				{
					v17 = magnitudes[v19 + 2];
					v18 = info_ptrs[v19 + 2]->Object;
				}
				if (v17 > magnitudes[v19 + 3])
				{
					v17 = magnitudes[v19 + 3];
					v18 = info_ptrs[v19 + 3]->Object;
				}
				v20 += 4;
				v19 += 4;
			} while (v20 < v2);
		}
		for (; v19 < v2; ++v19)
		{
			if (v17 > magnitudes[v19])
			{
				v17 = magnitudes[v19];
				v18 = info_ptrs[v19]->Object;
			}
		}
		result = v18;
	}
	return result;
}

void collision_init()
{
	WriteJump((void*)0x0041B970, ClearLists);
	WriteCall((void*)0x004207A7, ClearLists_hook);
	WriteJump((void*)0x0041C280, AddToCollisionList_r);
	WriteJump((void*)0x00420010, RunPlayerCollision_r);
	WriteJump((void*)0x00420210, RunCollision_1_r);
	WriteJump((void*)0x004203C0, RunCollision_9_r);
	WriteJump((void*)0x00420560, RunCollision_3_r);
	WriteJump((void*)0x00420640, RunCollision_4_r);
	WriteJump((void*)0x004206A0, RunCollision_5_r);

	WriteJump(GammaTargetThing, GammaTargetThing_r);
	WriteJump((void*)0x628B20, sub_628B20);
}
