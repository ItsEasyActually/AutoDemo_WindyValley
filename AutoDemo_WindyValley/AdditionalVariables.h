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
DataArray(CollisionData, TuriBr2_Collision, 0x00C66FB8, 1);
DataArray(CollisionData, TuriBr_Collision, 0x00C66F88, 1);
DataArray(SkyboxScale, SkyboxScale_Windy1, 0x00AFE924, 3);
DataArray(SkyboxScale, SkyboxScale_Windy3, 0x00AFE96C, 3);
DataArray(FogData, FogData_Windy1, 0x00AFEA20, 3);
DataArray(FogData, FogData_Windy2, 0x00AFEA50, 3);
DataArray(FogData, FogData_Windy3, 0x00AFEA80, 3);
DataPointer(NJS_OBJECT, stru_C05E10, 0xC05E10);
DataPointer(NJS_OBJECT, stru_C06344, 0xC06344);
DataPointer(NJS_OBJECT, stru_C06450, 0xC06450); //Skybox model pointers
DataPointer(NJS_OBJECT, stru_C0655C, 0xC0655C);

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

//Usercall and Thiscall Functions
ThiscallFunctionPointer(void, sub_4E3090, (int _this), 0x4E3090);

