#pragma once
#include <SADXModLoader.h>

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
DataArray(CollisionData, stru_C67750, 0xC67750, 1);
DataArray(CollisionData, stru_C673B8, 0xC673B8, 7);
DataArray(SkyboxScale, SkyboxScale_Windy1, 0x00AFE924, 3);
DataArray(SkyboxScale, SkyboxScale_Windy3, 0x00AFE96C, 3);
DataArray(FogData, FogData_Windy1, 0x00AFEA20, 3);
DataArray(FogData, FogData_Windy2, 0x00AFEA50, 3);
DataArray(FogData, FogData_Windy3, 0x00AFEA80, 3);
DataArray(float, E103FinalPos, 0x00C67AD0, 16);
DataPointer(NJS_OBJECT, stru_C05E10, 0xC05E10);
DataPointer(NJS_OBJECT, stru_C06344, 0xC06344);
DataPointer(NJS_OBJECT, stru_C06450, 0xC06450); //Skybox model pointers
DataPointer(NJS_OBJECT, stru_C0655C, 0xC0655C);
DataPointer(int, DroppedFrames, 0x03B1117C);
//DataArray(EntityData1 *, EntityData1Ptrs, 0x3B42E10, 8);
DataPointer(NJS_TEXLIST, WINDY_BACK_TEXLIST, 0xC06B10);

DataPointer(NJS_OBJECT, stru_C158E0, 0xC158E0);
DataPointer(NJS_OBJECT, stru_C159FC, 0xC159FC); //These three are models for PuWind, WcWind, and BLeaf
DataPointer(NJS_OBJECT, stru_C15B2C, 0xC15B2C);

DataPointer(NJS_OBJECT, stru_C06A94, 0xC06A94); //Another skybox model pointer
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(NJS_VECTOR, CurrentSkybox, 0x03ABDC94);
DataPointer(NJS_BGRA, CurrentFogColorX, 0x03ABDC68);
FunctionPointer(void, sub_408530, (NJS_OBJECT *o), 0x408530);

DataPointer(float, Trampolineheight, 0x007DF2E8);
DataPointer(float, Trampolineheightsecond, 0x007DEBE0); //These are floats for the trampoline bounce height
DataPointer(float, Trampolineheightthird, 0x007DF1B0);
DataPointer(float, Trampolineheightfourth, 0x007E0B1C);

DataPointer(float, WindPathParticleZone, 0x007E9584); //Controls the wind path leaves

//Additional SADX Functions
FunctionPointer(void, sub_407870, (NJS_MODEL_SADX *model, char blend, float radius_scale), 0x407870);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
FunctionPointer(void, sub_49CD60, (ObjectMaster *a1), 0x49CD60);
FunctionPointer(void, sub_49DF70, (ObjectMaster *a1), 0x49DF70);
FunctionPointer(void, sub_49E170, (ObjectMaster *a1), 0x49E170);
FunctionPointer(void, sub_4DFAF0, (ObjectMaster *a1), 0x4DFAF0);
FunctionPointer(ObjectMaster, DoObjectThing, (ObjectThing *a1, ObjectMaster *a2), 0x40B9D0);
FunctionPointer(void, sub_4E0050, (ObjectMaster *a1), 0x4E0050);
FunctionPointer(int, rand1, (), 0x6443BF);
FunctionPointer(void, sub_49CE60, (EntityData1 *a1, EntityData2 *a2), 0x49CE60);
FunctionPointer(void, sub_7A6440, (ObjectMaster *a1), 0x7A6440);
FunctionPointer(void, sub_4E0A60, (ObjectMaster *a1), 0x4E0A60);
FunctionPointer(void, InitCollision, (ObjectMaster *obj, CollisionData *collisionArray, int count, unsigned __int8 list), 0x0041CAF0);
FunctionPointer(void, DeleteDynCol, (ObjectMaster *entity), 0x005D43C0);
FunctionPointer(void, sub_4413E0, (unsigned __int8 a1, int a2, int a3, __int16 a4), 0x4413E0);
FunctionPointer(void, sub_441990, (unsigned __int8 a1, float *a2), 0x441990);
FunctionPointer(void *, sub_41CBC0, (EntityData1 *a1), 0x41CBC0);
FunctionPointer(void, sub_46C150, (ObjectMaster *a1), 0x46C150);
DataPointer(int, FramerateSetting, 0x0389D7DC);
FunctionPointer(void, SetStatus, (ObjectMaster *a1), 0x0049CD60);
FunctionPointer(void, DynCol_LoadObject, (ObjectMaster *a1), 0x0049E170);

FunctionPointer(void, sub_4DE8E0, (ObjectMaster *a1), 0x4DE8E0); //Forward-moving tornado subroutine
FunctionPointer(void, sub_4DF7D0, (ObjectMaster *a1), 0x4DF7D0); //Tornado Debris subroutine
FunctionPointer(void, sub_4E6770, (ObjectMaster *a1), 0x4E6770); //Tornado Bridge subroutine

FunctionPointer(void, sub_4DDCE0, (ObjectMaster *a1), 0x4DDCE0); //Tornado....something :3
FunctionPointer(void, sub_4DDC10, (ObjectMaster *a1), 0x4DDC10); //Tornado....something.
FunctionPointer(void, __ftol2, (), 0x644340);
FunctionPointer(void, sub_4B9820, (NJS_VECTOR *a1, NJS_VECTOR *a2, float a3), 0x4B9820);

FunctionPointer(void, DrawModel_407FC0, (NJS_MODEL_SADX *a1, int blend), 0x407FC0); //from PkR

FunctionPointer(void, sub_456BF0, (void *a1, int *a2), 0x456BF0); //Sprite Particles


//Debris Shit
FunctionPointer(void, sub_4DF500, (task *a1), 0x004DF500);
FunctionPointer(void, sub_4DF740, (task *a1), 0x004DF740);
DataArray(NJS_MODEL_SADX, off_C66C80, 0x00C66C80, 10);
DataArray(ObjectThing, stru_C66CA8, 0x00C66CA8, 14);
DataArray(ObjectThing, DebrisThing, 0x00C66CA8, 14);

FunctionPointer(void, sub_49D530, (task *a1), 0x49D530);
FunctionPointer(void, sub_49D570, (task *a1), 0x49D570);
FunctionPointer(void, sub_49D5B0, (task *a1), 0x49D5B0);
FunctionPointer(void, sub_49E070, (), 0x49E070);
FunctionPointer(void, sub_49CF80, (taskwk *a1), 0x49CF80);
FunctionPointer(void, sub_4E6070, (task *a2), 0x004E6070);
FunctionPointer(void, sub_4FB2A0, (task *a2), 0x004FB2A0);
FunctionPointer(void, sub_4E5D90, (task *a2), 0x004E5D90);
FunctionPointer(signed int, sub_4DE570, (int a1, int a2), 0x4DE570);
FunctionPointer(void, sub_4E6370, (int a1), 0x4E6370);
FunctionPointer(void, sub_4E6200, (int a1, int a2), 0x4E6200);
FunctionPointer(void, sub_4E5C20, (task *a3), 0x4E5C20);

//Usercall and Thiscall Functions
ThiscallFunctionPointer(void, sub_4E3090, (int _this), 0x4E3090);


