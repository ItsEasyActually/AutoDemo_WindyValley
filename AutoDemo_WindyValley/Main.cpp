//This is a mod.
#include "stdafx.h"

#include <SADXModLoader.h>
#include "IniFile.hpp"
#include "set.h"
#include "AdditionalVariables.h"
#include "TexLists.h"

//LandTable Headers
#include "Act1.h"
#include "Act2.h"
#include "Act3.h"

//Skybox
#include "Skybox01.h"
#include "Skybox02.h"
#include "Skybox03.h"

//Stage Info Headers
#include "PathInfo.h"
#include "StartPos.h"
#include "Tornado_Models.h"

//Objects
#include "Tanpopo_Object.h"
#include "Leaf_Models.h"
#include "TDebris.h"
#include "TorndaoBridgeParts.h"
//#include "SBridge.h"

//Functions
#include "Functions.h"

#define ReplaceSETFile(a) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" a "_AD.BIN");
#define ReplacePVMFile(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "_AD.PVM");

//Variables
static bool ADSetFile = true;
static float SkyTrans = 1.0f;
bool LoadedTornado = false;
SETObjData TornadoThings = {};
bool LoadedDECOTornado = false;
int TornadoDECOFrame = 0;
SETObjData TornadoDecoThings = {};
bool TransTornadoDust = false;
//Length  = 127 (including 0)
int TornadoPosModifier[] = {
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	3,
	3,
	3,
	3,
	4,
	4,
	5,
	5,
	6,
	6,
	7,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	18,
	20,
	22,
	24,
	26,
	28,
	30,
	32,
	36,
	40,
	44,
	48,
	52,
	56,
	60,
	64,
	72,
	80,
	88,
	96,
	104,
	112,
	120,
	128,
	144,
	160,
	176,
	192,
	208,
	224,
	240,
	255,
	270,
	286,
	302,
	318,
	334,
	350,
	366,
	382,
	390,
	398,
	406,
	414,
	422,
	430,
	438,
	446,
	450,
	454,
	458,
	462,
	466,
	470,
	474,
	478,
	480,
	482,
	484,
	486,
	488,
	490,
	492,
	494,
	496,
	497,
	498,
	499,
	500,
	501,
	502,
	503,
	504,
	505,
	505,
	506,
	506,
	507,
	507,
	508,
	508,
	509,
	509,
	509,
	509,
	510,
	510,
	510,
	510,
	511,
	511,
	511,
	511,
	512,
	512,
	512
};
bool TornadoDirection = false;
bool LoadedDebris = false;
bool LoadedWave = false;
bool LoadedBridge = false;
SETObjData DebrisThings = {};
const float tornadoLoadDistance = 3102500.0f;
const float debrisLoadDistance = 2250000.0f;
static float DebrisFrame = 0;
static float WaveFrame = 0;
int BridgeFrame = 0;

void TrampolineValueCorrecter()
{
	if (CurrentLevel != 2)
	{
		if (Trampolineheight == 10.0f)
		{
			Trampolineheight == 19.0f;
		}

		if (Trampolineheightsecond == 11.0f)
		{
			Trampolineheight == 20.0f;
		}

		if (Trampolineheightthird == 16.0f)
		{
			Trampolineheight == 25.0f;
		}

		if (Trampolineheightfourth == 12.0f)
		{
			Trampolineheight == 21.0f;
		}
	}
}

void WindPathZoneSetting()
{
	if (CurrentLevel == 2)
	{
		WindPathParticleZone = 0.2224999975f;
	}
	else
	{
		WindPathParticleZone = 0.88999999f;
	}
}

void __cdecl Tornado_Texture_Load(void)
{
	//LoadPVM("Tomado", &Tomado_texlist);
	njSetTexture(&Tomado_texlist);
}

void __cdecl ShockwaveEffect_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		Tornado_Texture_Load();
		njPushMatrix(0);
		njTranslate(0, 732.156555f, -195.87912f, -3467.09546f);
		njScale(0, WaveFrame, WaveFrame, WaveFrame);
		njRotateY(0, (unsigned __int16)(WaveFrame * 0x1000));
		sub_409E70((NJS_MODEL_SADX*)TornadoShockwave.model, 0, 1.0);
		njPopMatrix(1u);
	}
}

void __cdecl ShockWaveEffect_Main(ObjectMaster *a1)
{
	if (WaveFrame >= 300)
	{
		if (a1)
		{
			DeleteObjectMaster(a1);
		}
	}

	else
	{
		EntityData1 *v1; // esi@1

		v1 = a1->Data1;
		if (!ClipSetObject(a1))
		{
			if (v1->Action)
			{
				if (v1->Action == 1)
				{
					ShockwaveEffect_Display(a1);
				}
			}
			else
			{
				v1->Action = 1;
				a1->DisplaySub = ShockwaveEffect_Display;
			}
		}
	}
}

void __cdecl DecoTornado_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v2;
	NJS_VECTOR a2;
	NJS_VECTOR a3;

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		Tornado_Texture_Load();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		a3.y = (v1->Position.y - 90);
		a3.z = (v1->Position.z + 50);

		if (TornadoDirection == false)
		{
			njTranslate(0, (TornadoPosModifier[TornadoDECOFrame]), 0, 0);
			a3.x = (467.1638 + TornadoPosModifier[TornadoDECOFrame]);
		}

		else
		{
			njTranslate(0, -1 * (TornadoPosModifier[TornadoDECOFrame]), 0, 0);
			a3.x = (975.1638 - TornadoPosModifier[TornadoDECOFrame]);
		}

		if (TornadoDECOFrame < 127)
		{
			if (!IsGamePaused() && GameState != 3 && GameState != 4 && GameState != 7 && GameState != 21)
			{
				TornadoDECOFrame++;

				if (FramerateSetting >= 2)
				{
					TornadoDECOFrame++;
				}
			}
			(a2.x) = 0;
			(a2.y) = 1;
			(a2.z) = 0;
			if (!IsGamePaused())
			{
				sub_4B9820(&a3, &a2, 35.0);
			}
		}

		else
		{
			TornadoDECOFrame = 0;
			if (TornadoDirection == false)
			{
				v1->Position.x += 512;
				TornadoDirection = true;
			}

			else
			{
				v1->Position.x -= 512;
				TornadoDirection = false;
			}
		}
		v2 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		sub_409E70((NJS_MODEL_SADX*)Decor_Tornado1.model, 0, 1.0);
		njPushMatrix(0);
		sub_409E70((NJS_MODEL_SADX*)Decor_Tornado2.model, 0, 1.0);
		njPushMatrix(0);
		sub_409E70((NJS_MODEL_SADX*)Decor_Tornado3.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Deco_Tornado_Main(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1

	if (LoadedTornado == true)
	{
		DeleteObjectMaster(a2);
	}

	else
	{
		v1 = a2->Data1;

		if (!ClipSetObject(a2))
		{
			if (v1->Action)
			{
				if (v1->Action == 1)
				{
					*(float*)&v1->CharIndex = -24.6f + *(float*)&v1->CharIndex;
					DecoTornado_Display(a2);
				}
			}
			else
			{
				v1->Action = 1;
				a2->DisplaySub = DecoTornado_Display;
				PlaySound2(62, a2, 1, 0);
			}
		}
	}
}

void __cdecl Load_DecoTornado(void)
{
	ObjectMaster *a1;
	EntityData1 *Torn;
	if (LoadedDECOTornado == false)
	{
		TornadoDecoThings.Distance = 40000000.0f;
		a1 = LoadObject((LoadObj)2, 3, Deco_Tornado_Main);
		a1->SETData.SETData = &TornadoDecoThings;

		if (a1)
		{
			Torn = a1->Data1;
			Torn->Position.x = 467.1638f;
			Torn->Position.y = -245.87912f;
			Torn->Position.z = -3445.72241f;
			Torn->Rotation.x = 0;
			Torn->Rotation.y = 0;
			Torn->Rotation.z = 0;
			Torn->Scale.x = 0.0f;
			Torn->Scale.y = 0.0f;
			Torn->Scale.z = 0.0f;
			Torn->CharIndex = 7;
			a1->MainSub = Deco_Tornado_Main;
		}
	}
	LoadedDECOTornado = true;
}

void __cdecl NewTransitionTornado_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	double v2; // st7@2
	double v3; // st7@4
	double v4; // st7@6
	NJS_VECTOR a2;
	NJS_VECTOR a3;

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		Tornado_Texture_Load();
		DisableFog();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v2 = *(float*)&v1->CharIndex * 3.0 * 65536.0 * -0.002777777777777778;
		if ((unsigned int)(unsigned __int64)v2)
		{
			njRotateY(0, (unsigned __int16)(unsigned __int64)v2);
		}
		sub_407A00((NJS_MODEL_SADX *)Transition_Tornado1.model, 1.0);
		njPushMatrix(0);
		njTranslate(0, Transition_Tornado2.pos[0], Transition_Tornado2.pos[1], Transition_Tornado2.pos[2]);
		v3 = (*(float*)&v1->CharIndex + *(float*)&v1->CharIndex) * 65536.0 * -0.002777777777777778;
		if ((unsigned int)(unsigned __int64)v3)
		{
			njRotateY(0, (unsigned __int16)(unsigned __int64)v3);
		}
		DrawModel_QueueVisible((NJS_MODEL_SADX *)Transition_Tornado2.model, (QueuedModelFlagsB)0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Transition_Tornado3.pos[0], Transition_Tornado3.pos[1], Transition_Tornado3.pos[2]);
		v4 = *(float*)&v1->CharIndex * 65536.0 * -0.002777777777777778;
		if ((unsigned int)(unsigned __int64)v4)
		{
			njRotateY(0, (unsigned __int16)(unsigned __int64)v4);
		}
		DrawModel_QueueVisible((NJS_MODEL_SADX *)Transition_Tornado3.model, (QueuedModelFlagsB)0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);

		(a3.y) = (v1->Position.y - 150);
		(a3.z) = (v1->Position.z + 150);
		(a3.x) = (v1->Position.x + 50);

		(a2.x) = -8;
		(a2.y) = -5;
		(a2.z) = 0;
		if (!IsGamePaused())
		{
			if (TransTornadoDust == true)
			{
				sub_4B9820(&a3, &a2, 30.0);
				TransTornadoDust = false;
			}

			else
			{
				TransTornadoDust = true;
			}
		}
		ToggleStageFog();
	}
}

void __cdecl Load_Tornado(void)
{
	if (LoadedTornado == false)
	{
		ObjectMaster *a1;
		EntityData1 *Torn;
		TornadoThings.Distance = tornadoLoadDistance;
		a1 = LoadObject((LoadObj)2, 3, sub_4DE8E0);
		a1->SETData.SETData = &TornadoThings;
		if (a1)
		{
			Torn = a1->Data1;
			Torn->Position.x = 732.156555f;
			Torn->Position.y = -195.87912f;
			Torn->Position.z = -3467.09546f;
			Torn->Rotation.x = 0;
			Torn->Rotation.y = 0;
			Torn->Rotation.z = 0;
			Torn->Scale.x = 0.0f;
			Torn->Scale.y = 0.0f;
			Torn->Scale.z = 0.0f;
			Torn->CharIndex = 7;
		}
	}
	LoadedTornado = true;
}

void __cdecl Load_Tornado_Shockwave(void)
{
	ObjectMaster *a1;
	EntityData1 *Wave;

	TornadoThings.Distance = 2250000.0f;
	a1 = LoadObject((LoadObj)2, 3, ShockWaveEffect_Main);
	a1->SETData.SETData = &TornadoThings;
	if (a1)
	{
		Wave = a1->Data1;
		Wave->Position.x = 732.156555f;
		Wave->Position.y = -195.87912f;
		Wave->Position.z = -3467.09546f;
		Wave->Rotation.x = 0;
		Wave->Rotation.y = 0;
		Wave->Rotation.z = 0;
		Wave->Scale.x = 1.0f;
		Wave->Scale.y = 1.0f;
		Wave->Scale.z = 1.0f;
		Wave->CharIndex = 9;
	}
}

void __cdecl Debris_Texture_Load(void)
{
	//LoadPVM("Debris", &TomadoDebris_texlist);
	njSetTexture(&TomadoDebris_texlist);
}

void __cdecl TornadoDestroy(ObjectMaster *a1)
{
	DeleteChildObjects(a1);
}

void __cdecl NewBreak_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@2
	Angle v3; // eax@4
	Angle v4; // eax@6

	v1 = a2->Data1;
	if (!MissedFrames)
	{
		Debris_Texture_Load();
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
		__ftol2;
		//Rings = BridgeFrame;
		switch (BridgeFrame)
		{
		case 0:
			ProcessModelNode_AB_Wrapper(&object_001999A8, 1.0);
			njPopMatrix(1u);
			break;
		case 1:
			ProcessModelNode_AB_Wrapper(&object_00199A8C, 1.0);
			njPopMatrix(1u);
			break;
		case 2:
			ProcessModelNode_AB_Wrapper(&object_00199B70, 1.0);
			njPopMatrix(1u);
			break;
		case 3:
			ProcessModelNode_AB_Wrapper(&object_00199C54, 1.0);
			njPopMatrix(1u);
			break;
		case 4:
			ProcessModelNode_AB_Wrapper(&object_00199D38, 1.0);
			njPopMatrix(1u);
			break;
		case 5:
			ProcessModelNode_AB_Wrapper(&object_00199E44, 1.0);
			njPopMatrix(1u);
			break;
		case 6:
			ProcessModelNode_AB_Wrapper(&object_00199F50, 1.0);
			njPopMatrix(1u);
			break;
		case 7:
			ProcessModelNode_AB_Wrapper(&object_0019A05C, 1.0);
			njPopMatrix(1u);
			break;
		case 8:
			ProcessModelNode_AB_Wrapper(&object_0019A168, 1.0);
			njPopMatrix(1u);
			break;
		case 9:
			ProcessModelNode_AB_Wrapper(&object_0019A274, 1.0);
			njPopMatrix(1u);
			break;
		case 10:
			ProcessModelNode_AB_Wrapper(&object_0019A380, 1.0);
			njPopMatrix(1u);
			break;
		case 11:
			ProcessModelNode_AB_Wrapper(&object_0019A48C, 1.0);
			njPopMatrix(1u);
			break;
		case 12:
			ProcessModelNode_AB_Wrapper(&object_0019A598, 1.0);
			njPopMatrix(1u);
			break;
		case 13:
			ProcessModelNode_AB_Wrapper(&object_0019A7B0, 1.0);
			njPopMatrix(1u);
			break;
		case 14:
			ProcessModelNode_AB_Wrapper(&object_0019A8BC, 1.0);
			njPopMatrix(1u);
			break;
		case 15:
			ProcessModelNode_AB_Wrapper(&object_0019A9C8, 1.0);
			njPopMatrix(1u);
			break;
		case 16:
			ProcessModelNode_AB_Wrapper(&object_0019AAD4, 1.0);
			njPopMatrix(1u);
			break;
		case 17:
			ProcessModelNode_AB_Wrapper(&object_0019ABE0, 1.0);
			njPopMatrix(1u);
			break;
		case 18:
			ProcessModelNode_AB_Wrapper(&object_0019ACEC, 1.0);
			njPopMatrix(1u);
			break;
		case 19:
			ProcessModelNode_AB_Wrapper(&object_0019ADF8, 1.0);
			njPopMatrix(1u);
			break;
		case 20:
			ProcessModelNode_AB_Wrapper(&object_0019AF04, 1.0);
			njPopMatrix(1u);
			break;
		case 21:
			ProcessModelNode_AB_Wrapper(&object_0019B010, 1.0);
			njPopMatrix(1u);
			break;
		case 22:
			ProcessModelNode_AB_Wrapper(&object_0019B0F4, 1.0);
			njPopMatrix(1u);
			break;
		case 23:
			ProcessModelNode_AB_Wrapper(&object_0019B1D8, 1.0);
			njPopMatrix(1u);
			break;
		case 24:
			ProcessModelNode_AB_Wrapper(&object_0019B2BC, 1.0);
			njPopMatrix(1u);
			break;
		case 25:
			ProcessModelNode_AB_Wrapper(&object_0019B3A0, 1.0);
			njPopMatrix(1u);
			break;
		case 26:
			ProcessModelNode_AB_Wrapper(&object_0019B484, 1.0);
			njPopMatrix(1u);
			break;
		case 27:
			ProcessModelNode_AB_Wrapper(&object_0019B568, 1.0);
			njPopMatrix(1u);
			break;
		case 28:
			ProcessModelNode_AB_Wrapper(&object_0019B64C, 1.0);
			njPopMatrix(1u);
			break;
		case 29:
			ProcessModelNode_AB_Wrapper(&object_0019B730, 1.0);
			njPopMatrix(1u);
			break;
		case 30:
			ProcessModelNode_AB_Wrapper(&object_0019B814, 1.0);
			njPopMatrix(1u);
			break;
		case 31:
			ProcessModelNode_AB_Wrapper(&object_0019B8F8, 1.0);
			njPopMatrix(1u);
			break;
		case 32:
			ProcessModelNode_AB_Wrapper(&object_0019B9DC, 1.0);
			njPopMatrix(1u);
			break;
		case 33:
			ProcessModelNode_AB_Wrapper(&object_0019BAC0, 1.0);
			njPopMatrix(1u);
			break;
		case 34:
			ProcessModelNode_AB_Wrapper(&object_0019BBA4, 1.0);
			njPopMatrix(1u);
			break;
		case 35:
			ProcessModelNode_AB_Wrapper(&object_0019BC88, 1.0);
			njPopMatrix(1u);
			break;
		case 36:
			ProcessModelNode_AB_Wrapper(&object_0019BD6C, 1.0);
			njPopMatrix(1u);
			break;
		case 37:
			ProcessModelNode_AB_Wrapper(&object_0019BE50, 1.0);
			njPopMatrix(1u);
			break;
		case 38:
			ProcessModelNode_AB_Wrapper(&object_0019BF34, 1.0);
			njPopMatrix(1u);
			break;
		case 39:
			ProcessModelNode_AB_Wrapper(&object_0019C018, 1.0);
			njPopMatrix(1u);
			break;
		case 40:
			ProcessModelNode_AB_Wrapper(&object_0019C0FC, 1.0);
			njPopMatrix(1u);
			break;
		case 41:
			ProcessModelNode_AB_Wrapper(&object_0019C1E0, 1.0);
			njPopMatrix(1u);
			break;
		case 42:
			ProcessModelNode_AB_Wrapper(&object_0019C2C4, 1.0);
			njPopMatrix(1u);
			break;
		case 43:
			ProcessModelNode_AB_Wrapper(&object_0019C3A8, 1.0);
			njPopMatrix(1u);
			break;
		case 44:
			ProcessModelNode_AB_Wrapper(&object_0019C48C, 1.0);
			njPopMatrix(1u);
			break;
		case 45:
			ProcessModelNode_AB_Wrapper(&object_0019C570, 1.0);
			njPopMatrix(1u);
			break;
		case 46:
			ProcessModelNode_AB_Wrapper(&object_0019C654, 1.0);
			njPopMatrix(1u);
			break;
		case 47:
			ProcessModelNode_AB_Wrapper(&object_0019C738, 1.0);
			njPopMatrix(1u);
			break;
		case 48:
			ProcessModelNode_AB_Wrapper(&object_0019C81C, 1.0);
			njPopMatrix(1u);
			break;
		case 49:
			ProcessModelNode_AB_Wrapper(&object_0019C900, 1.0);
			njPopMatrix(1u);
			break;
		case 50:
			ProcessModelNode_AB_Wrapper(&object_0019C9E4, 1.0);
			njPopMatrix(1u);
			break;
		case 51:
			ProcessModelNode_AB_Wrapper(&object_0019CAC8, 1.0);
			njPopMatrix(1u);
			break;
		case 52:
			ProcessModelNode_AB_Wrapper(&object_0019CBAC, 1.0);
			njPopMatrix(1u);
			break;
		case 53:
			ProcessModelNode_AB_Wrapper(&object_0019CCB8, 1.0);
			njPopMatrix(1u);
			break;
		case 54:
			ProcessModelNode_AB_Wrapper(&object_0019CD9C, 1.0);
			njPopMatrix(1u);
			break;
		case 55:
			ProcessModelNode_AB_Wrapper(&object_0017B7F0, 1.0);
			njPopMatrix(1u);
			break;
		case 56:
			ProcessModelNode_AB_Wrapper(&object_0017B998, 1.0);
			njPopMatrix(1u);
			break;
		case 57:
			ProcessModelNode_AB_Wrapper(&object_0017BB80, 1.0);
			njPopMatrix(1u);
			break;
		case 58:
			ProcessModelNode_AB_Wrapper(&object_0017BD68, 1.0);
			njPopMatrix(1u);
			break;
		case 59:
			ProcessModelNode_AB_Wrapper(&object_0017BF50, 1.0);
			njPopMatrix(1u);
			break;
		case 60:
			ProcessModelNode_AB_Wrapper(&object_0017C138, 1.0);
			njPopMatrix(1u);
			break;
		case 61:
			ProcessModelNode_AB_Wrapper(&object_0017C2D0, 1.0);
			njPopMatrix(1u);
			break;
		case 62:
			ProcessModelNode_AB_Wrapper(&object_0017C468, 1.0);
			njPopMatrix(1u);
			break;
		case 63:
			ProcessModelNode_AB_Wrapper(&object_0017C5EC, 1.0);
			njPopMatrix(1u);
			break;
		case 64:
			ProcessModelNode_AB_Wrapper(&object_0017C770, 1.0);
			njPopMatrix(1u);
			break;
		case 65:
			ProcessModelNode_AB_Wrapper(&object_0017C918, 1.0);
			njPopMatrix(1u);
			break;
		case 66:
			ProcessModelNode_AB_Wrapper(&object_0017CAC0, 1.0);
			njPopMatrix(1u);
			break;
		case 67:
			ProcessModelNode_AB_Wrapper(&object_0017CC68, 1.0);
			njPopMatrix(1u);
			break;
		case 68:
			ProcessModelNode_AB_Wrapper(&object_0017CE10, 1.0);
			njPopMatrix(1u);
			break;
		case 69:
			ProcessModelNode_AB_Wrapper(&object_0017CFB8, 1.0);
			njPopMatrix(1u);
			break;
		case 70:
			ProcessModelNode_AB_Wrapper(&object_0017D160, 1.0);
			njPopMatrix(1u);
			break;
		case 71:
			ProcessModelNode_AB_Wrapper(&object_0017D308, 1.0);
			njPopMatrix(1u);
			break;
		case 72:
			ProcessModelNode_AB_Wrapper(&object_0017D4B0, 1.0);
			njPopMatrix(1u);
			break;
		case 73:
			ProcessModelNode_AB_Wrapper(&object_0017D658, 1.0);
			njPopMatrix(1u);
			break;
		case 74:
			ProcessModelNode_AB_Wrapper(&object_0017D800, 1.0);
			njPopMatrix(1u);
			break;
		case 75:
			ProcessModelNode_AB_Wrapper(&object_0017D9A8, 1.0);
			njPopMatrix(1u);
			break;
		case 76:
			ProcessModelNode_AB_Wrapper(&object_0017DB50, 1.0);
			njPopMatrix(1u);
			break;
		case 77:
			ProcessModelNode_AB_Wrapper(&object_0017DCF8, 1.0);
			njPopMatrix(1u);
			break;
		case 78:
			ProcessModelNode_AB_Wrapper(&object_0017DEA0, 1.0);
			njPopMatrix(1u);
			break;
		case 79:
			ProcessModelNode_AB_Wrapper(&object_0017E048, 1.0);
			njPopMatrix(1u);
			break;
		case 80:
			ProcessModelNode_AB_Wrapper(&object_0017E1F0, 1.0);
			njPopMatrix(1u);
			break;
		case 81:
			ProcessModelNode_AB_Wrapper(&object_0017E398, 1.0);
			njPopMatrix(1u);
			break;
		case 82:
			ProcessModelNode_AB_Wrapper(&object_0017E540, 1.0);
			njPopMatrix(1u);
			break;
		case 83:
			ProcessModelNode_AB_Wrapper(&object_0017E6E8, 1.0);
			njPopMatrix(1u);
			break;
		case 84:
			ProcessModelNode_AB_Wrapper(&object_0017E8D0, 1.0);
			njPopMatrix(1u);
			break;
		case 85:
			ProcessModelNode_AB_Wrapper(&object_0017EAB8, 1.0);
			njPopMatrix(1u);
			break;
		case 86:
			ProcessModelNode_AB_Wrapper(&object_0017ECA0, 1.0);
			njPopMatrix(1u);
			break;
		case 87:
			ProcessModelNode_AB_Wrapper(&object_0017EE88, 1.0);
			njPopMatrix(1u);
			break;
		case 88:
			ProcessModelNode_AB_Wrapper(&object_0017F070, 1.0);
			njPopMatrix(1u);
			break;
		case 89:
			ProcessModelNode_AB_Wrapper(&object_0017F278, 1.0);
			njPopMatrix(1u);
			break;
		case 90:
			ProcessModelNode_AB_Wrapper(&object_0017F420, 1.0);
			njPopMatrix(1u);
			break;
		case 91:
			ProcessModelNode_AB_Wrapper(&object_0017F608, 1.0);
			njPopMatrix(1u);
			break;
		case 92:
			ProcessModelNode_AB_Wrapper(&object_0017F7F0, 1.0);
			njPopMatrix(1u);
			break;
		case 93:
			ProcessModelNode_AB_Wrapper(&object_0017F974, 1.0);
			njPopMatrix(1u);
			break;
		case 94:
			ProcessModelNode_AB_Wrapper(&object_0017FAF8, 1.0);
			njPopMatrix(1u);
			break;
		case 95:
			ProcessModelNode_AB_Wrapper(&object_0017FC90, 1.0);
			njPopMatrix(1u);
			break;
		case 96:
			ProcessModelNode_AB_Wrapper(&object_0017FE14, 1.0);
			njPopMatrix(1u);
			break;
		case 97:
			ProcessModelNode_AB_Wrapper(&object_0017FF98, 1.0);
			njPopMatrix(1u);
			break;
		case 98:
			ProcessModelNode_AB_Wrapper(&object_00180130, 1.0);
			njPopMatrix(1u);
			break;
		case 99:
			ProcessModelNode_AB_Wrapper(&object_001802D8, 1.0);
			njPopMatrix(1u);
			break;
		case 100:
			ProcessModelNode_AB_Wrapper(&object_00180480, 1.0);
			njPopMatrix(1u);
			break;
		case 101:
			ProcessModelNode_AB_Wrapper(&object_00180628, 1.0);
			njPopMatrix(1u);
			break;
		case 102:
			ProcessModelNode_AB_Wrapper(&object_001807D0, 1.0);
			njPopMatrix(1u);
			break;
		case 103:
			ProcessModelNode_AB_Wrapper(&object_00180978, 1.0);
			njPopMatrix(1u);
			break;
		case 104:
			ProcessModelNode_AB_Wrapper(&object_00180B20, 1.0);
			njPopMatrix(1u);
			break;
		case 105:
			ProcessModelNode_AB_Wrapper(&object_00180CC8, 1.0);
			njPopMatrix(1u);
			break;
		case 106:
			ProcessModelNode_AB_Wrapper(&object_00180E70, 1.0);
			njPopMatrix(1u);
			break;
		case 107:
			ProcessModelNode_AB_Wrapper(&object_00181018, 1.0);
			njPopMatrix(1u);
			break;
		case 108:
			ProcessModelNode_AB_Wrapper(&object_001811C0, 1.0);
			njPopMatrix(1u);
			break;
		case 109:
			ProcessModelNode_AB_Wrapper(&object_00181368, 1.0);
			njPopMatrix(1u);
			break;
		case 110:
			ProcessModelNode_AB_Wrapper(&object_00181510, 1.0);
			njPopMatrix(1u);
			break;
		case 111:
			ProcessModelNode_AB_Wrapper(&object_001816B8, 1.0);
			njPopMatrix(1u);
			break;
		case 112:
			ProcessModelNode_AB_Wrapper(&object_00181860, 1.0);
			njPopMatrix(1u);
			break;
		case 113:
			ProcessModelNode_AB_Wrapper(&object_00181A08, 1.0);
			njPopMatrix(1u);
			break;
		case 114:
			ProcessModelNode_AB_Wrapper(&object_00181BB0, 1.0);
			njPopMatrix(1u);
			break;
		case 115:
			ProcessModelNode_AB_Wrapper(&object_00181D58, 1.0);
			njPopMatrix(1u);
			break;
		case 116:
			ProcessModelNode_AB_Wrapper(&object_00181F00, 1.0);
			njPopMatrix(1u);
			break;
		case 117:
			ProcessModelNode_AB_Wrapper(&object_001820A8, 1.0);
			njPopMatrix(1u);
			break;
		case 118:
			ProcessModelNode_AB_Wrapper(&object_00182250, 1.0);
			njPopMatrix(1u);
			break;
		case 119:
			ProcessModelNode_AB_Wrapper(&object_001823F8, 1.0);
			njPopMatrix(1u);
			break;
		case 120:
			ProcessModelNode_AB_Wrapper(&object_001825A0, 1.0);
			njPopMatrix(1u);
			break;
		case 121:
			ProcessModelNode_AB_Wrapper(&object_00182748, 1.0);
			njPopMatrix(1u);
			break;
		case 122:
			ProcessModelNode_AB_Wrapper(&object_001828F0, 1.0);
			njPopMatrix(1u);
			break;
		case 123:
			ProcessModelNode_AB_Wrapper(&object_00182A98, 1.0);
			njPopMatrix(1u);
			break;
		case 124:
			ProcessModelNode_AB_Wrapper(&object_00182C40, 1.0);
			njPopMatrix(1u);
			break;
		case 125:
			ProcessModelNode_AB_Wrapper(&object_00182DE8, 1.0);
			njPopMatrix(1u);
			break;
		case 126:
			ProcessModelNode_AB_Wrapper(&object_00182FD0, 1.0);
			njPopMatrix(1u);
			break;
		case 127:
			ProcessModelNode_AB_Wrapper(&object_001831B8, 1.0);
			njPopMatrix(1u);
			break;
		case 128:
			ProcessModelNode_AB_Wrapper(&object_001833A0, 1.0);
			njPopMatrix(1u);
			break;
		case 129:
			ProcessModelNode_AB_Wrapper(&object_00183588, 1.0);
			njPopMatrix(1u);
			break;
		case 130:
			ProcessModelNode_AB_Wrapper(&object_00183770, 1.0);
			njPopMatrix(1u);
			break;
		case 131:
			ProcessModelNode_AB_Wrapper(&object_00183958, 1.0);
			njPopMatrix(1u);
			break;
		case 132:
			ProcessModelNode_AB_Wrapper(&object_00183B40, 1.0);
			njPopMatrix(1u);
			break;
		case 133:
			ProcessModelNode_AB_Wrapper(&object_00183D74, 1.0);
			njPopMatrix(1u);
			break;
		case 134:
			ProcessModelNode_AB_Wrapper(&object_00183F48, 1.0);
			njPopMatrix(1u);
			break;
		case 135:
			ProcessModelNode_AB_Wrapper(&object_0018411C, 1.0);
			njPopMatrix(1u);
			break;
		case 136:
			ProcessModelNode_AB_Wrapper(&object_001842F0, 1.0);
			njPopMatrix(1u);
			break;
		case 137:
			ProcessModelNode_AB_Wrapper(&object_001844C4, 1.0);
			njPopMatrix(1u);
			break;
		case 138:
			ProcessModelNode_AB_Wrapper(&object_00184698, 1.0);
			njPopMatrix(1u);
			break;
		case 139:
			ProcessModelNode_AB_Wrapper(&object_0018486C, 1.0);
			njPopMatrix(1u);
			break;
		case 140:
			ProcessModelNode_AB_Wrapper(&object_00184A40, 1.0);
			njPopMatrix(1u);
			break;
		case 141:
			ProcessModelNode_AB_Wrapper(&object_00184C14, 1.0);
			njPopMatrix(1u);
			break;
		case 142:
			ProcessModelNode_AB_Wrapper(&object_00184DE8, 1.0);
			njPopMatrix(1u);
			break;
		case 143:
			ProcessModelNode_AB_Wrapper(&object_00184FBC, 1.0);
			njPopMatrix(1u);
			break;
		case 144:
			ProcessModelNode_AB_Wrapper(&object_00185190, 1.0);
			njPopMatrix(1u);
			break;
		case 145:
			ProcessModelNode_AB_Wrapper(&object_00185364, 1.0);
			njPopMatrix(1u);
			break;
		case 146:
			ProcessModelNode_AB_Wrapper(&object_00185538, 1.0);
			njPopMatrix(1u);
			break;
		case 147:
			ProcessModelNode_AB_Wrapper(&object_0018570C, 1.0);
			njPopMatrix(1u);
			break;
		case 148:
			ProcessModelNode_AB_Wrapper(&object_001858E0, 1.0);
			njPopMatrix(1u);
			break;
		case 149:
			ProcessModelNode_AB_Wrapper(&object_00185A88, 1.0);
			njPopMatrix(1u);
			break;
		case 150:
			ProcessModelNode_AB_Wrapper(&object_00185C30, 1.0);
			njPopMatrix(1u);
			break;
		case 151:
			ProcessModelNode_AB_Wrapper(&object_00185DD8, 1.0);
			njPopMatrix(1u);
			break;
		case 152:
			ProcessModelNode_AB_Wrapper(&object_00185F80, 1.0);
			njPopMatrix(1u);
			break;
		case 153:
			ProcessModelNode_AB_Wrapper(&object_00186128, 1.0);
			njPopMatrix(1u);
			break;
		case 154:
			ProcessModelNode_AB_Wrapper(&object_001862D0, 1.0);
			njPopMatrix(1u);
			break;
		case 155:
			ProcessModelNode_AB_Wrapper(&object_00186478, 1.0);
			njPopMatrix(1u);
			break;
		case 156:
			ProcessModelNode_AB_Wrapper(&object_00186620, 1.0);
			njPopMatrix(1u);
			break;
		case 157:
			ProcessModelNode_AB_Wrapper(&object_001867C8, 1.0);
			njPopMatrix(1u);
			break;
		case 158:
			ProcessModelNode_AB_Wrapper(&object_00186970, 1.0);
			njPopMatrix(1u);
			break;
		case 159:
			ProcessModelNode_AB_Wrapper(&object_00186B18, 1.0);
			njPopMatrix(1u);
			break;
		case 160:
			ProcessModelNode_AB_Wrapper(&object_00186CC0, 1.0);
			njPopMatrix(1u);
			break;
		case 161:
			ProcessModelNode_AB_Wrapper(&object_00186E68, 1.0);
			njPopMatrix(1u);
			break;
		case 162:
			ProcessModelNode_AB_Wrapper(&object_00187010, 1.0);
			njPopMatrix(1u);
			break;
		case 163:
			ProcessModelNode_AB_Wrapper(&object_001871B8, 1.0);
			njPopMatrix(1u);
			break;
		case 164:
			ProcessModelNode_AB_Wrapper(&object_00187360, 1.0);
			njPopMatrix(1u);
			break;
		case 165:
			ProcessModelNode_AB_Wrapper(&object_00187508, 1.0);
			njPopMatrix(1u);
			break;
		case 166:
			ProcessModelNode_AB_Wrapper(&object_001876B0, 1.0);
			njPopMatrix(1u);
			break;
		case 167:
			ProcessModelNode_AB_Wrapper(&object_00187858, 1.0);
			njPopMatrix(1u);
			break;
		case 168:
			ProcessModelNode_AB_Wrapper(&object_00187A00, 1.0);
			njPopMatrix(1u);
			break;
		case 169:
			ProcessModelNode_AB_Wrapper(&object_00187BA8, 1.0);
			njPopMatrix(1u);
			break;
		case 170:
			ProcessModelNode_AB_Wrapper(&object_00187D50, 1.0);
			njPopMatrix(1u);
			break;
		case 171:
			ProcessModelNode_AB_Wrapper(&object_00187EF8, 1.0);
			njPopMatrix(1u);
			break;
		case 172:
			ProcessModelNode_AB_Wrapper(&object_001880A0, 1.0);
			njPopMatrix(1u);
			break;
		case 173:
			ProcessModelNode_AB_Wrapper(&object_00188248, 1.0);
			njPopMatrix(1u);
			break;
		case 174:
			ProcessModelNode_AB_Wrapper(&object_001883F0, 1.0);
			njPopMatrix(1u);
			break;
		case 175:
			ProcessModelNode_AB_Wrapper(&object_00188598, 1.0);
			njPopMatrix(1u);
			break;
		case 176:
			ProcessModelNode_AB_Wrapper(&object_00188740, 1.0);
			njPopMatrix(1u);
			break;
		case 177:
			ProcessModelNode_AB_Wrapper(&object_001888E8, 1.0);
			njPopMatrix(1u);
			break;
		case 178:
			ProcessModelNode_AB_Wrapper(&object_00188A90, 1.0);
			njPopMatrix(1u);
			break;
		case 179:
			ProcessModelNode_AB_Wrapper(&object_00188C38, 1.0);
			njPopMatrix(1u);
			break;
		case 180:
			ProcessModelNode_AB_Wrapper(&object_00188DE0, 1.0);
			njPopMatrix(1u);
			break;
		case 181:
			ProcessModelNode_AB_Wrapper(&object_00188F88, 1.0);
			njPopMatrix(1u);
			break;
		case 182:
			ProcessModelNode_AB_Wrapper(&object_00189130, 1.0);
			njPopMatrix(1u);
			break;
		case 183:
			ProcessModelNode_AB_Wrapper(&object_001892D8, 1.0);
			njPopMatrix(1u);
			break;
		case 184:
			ProcessModelNode_AB_Wrapper(&object_00189480, 1.0);
			njPopMatrix(1u);
			break;
		case 185:
			ProcessModelNode_AB_Wrapper(&object_00189628, 1.0);
			njPopMatrix(1u);
			break;
		case 186:
			ProcessModelNode_AB_Wrapper(&object_001897D0, 1.0);
			njPopMatrix(1u);
			break;
		case 187:
			ProcessModelNode_AB_Wrapper(&object_00189978, 1.0);
			njPopMatrix(1u);
			break;
		case 188:
			ProcessModelNode_AB_Wrapper(&object_00189B20, 1.0);
			njPopMatrix(1u);
			break;
		case 189:
			ProcessModelNode_AB_Wrapper(&object_00189CC8, 1.0);
			njPopMatrix(1u);
			break;
		case 190:
			ProcessModelNode_AB_Wrapper(&object_00189E70, 1.0);
			njPopMatrix(1u);
			break;
		case 191:
			ProcessModelNode_AB_Wrapper(&object_0018A018, 1.0);
			njPopMatrix(1u);
			break;
		case 192:
			ProcessModelNode_AB_Wrapper(&object_0018A1C0, 1.0);
			njPopMatrix(1u);
			break;
		case 193:
			ProcessModelNode_AB_Wrapper(&object_0018A368, 1.0);
			njPopMatrix(1u);
			break;
		case 194:
			ProcessModelNode_AB_Wrapper(&object_0018A510, 1.0);
			njPopMatrix(1u);
			break;
		case 195:
			ProcessModelNode_AB_Wrapper(&object_0018A6B8, 1.0);
			njPopMatrix(1u);
			break;
		case 196:
			ProcessModelNode_AB_Wrapper(&object_0018A860, 1.0);
			njPopMatrix(1u);
			break;
		case 197:
			ProcessModelNode_AB_Wrapper(&object_0018AA08, 1.0);
			njPopMatrix(1u);
			break;
		case 198:
			ProcessModelNode_AB_Wrapper(&object_0018AB8C, 1.0);
			njPopMatrix(1u);
			break;
		case 199:
			ProcessModelNode_AB_Wrapper(&object_0018AD10, 1.0);
			njPopMatrix(1u);
			break;
		case 200:
			ProcessModelNode_AB_Wrapper(&object_0018AE94, 1.0);
			njPopMatrix(1u);
			break;
		case 201:
			ProcessModelNode_AB_Wrapper(&object_0018B02C, 1.0);
			njPopMatrix(1u);
			break;
		case 202:
			ProcessModelNode_AB_Wrapper(&object_0018B1B0, 1.0);
			njPopMatrix(1u);
			break;
		case 203:
			ProcessModelNode_AB_Wrapper(&object_0018B334, 1.0);
			njPopMatrix(1u);
			break;
		case 204:
			ProcessModelNode_AB_Wrapper(&object_0018B4B8, 1.0);
			njPopMatrix(1u);
			break;
		case 205:
			ProcessModelNode_AB_Wrapper(&object_0018B650, 1.0);
			njPopMatrix(1u);
			break;
		case 206:
			ProcessModelNode_AB_Wrapper(&object_0018B7D4, 1.0);
			njPopMatrix(1u);
			break;
		case 207:
			ProcessModelNode_AB_Wrapper(&object_0018B96C, 1.0);
			njPopMatrix(1u);
			break;
		case 208:
			ProcessModelNode_AB_Wrapper(&object_0018BB04, 1.0);
			njPopMatrix(1u);
			break;
		case 209:
			ProcessModelNode_AB_Wrapper(&object_0018BC88, 1.0);
			njPopMatrix(1u);
			break;
		case 210:
			ProcessModelNode_AB_Wrapper(&object_0018BE20, 1.0);
			njPopMatrix(1u);
			break;
		case 211:
			ProcessModelNode_AB_Wrapper(&object_0018BFB8, 1.0);
			njPopMatrix(1u);
			break;
		case 212:
			ProcessModelNode_AB_Wrapper(&object_0018C150, 1.0);
			njPopMatrix(1u);
			break;
		case 213:
			ProcessModelNode_AB_Wrapper(&object_0018C2E8, 1.0);
			njPopMatrix(1u);
			break;
		case 214:
			ProcessModelNode_AB_Wrapper(&object_0018C46C, 1.0);
			njPopMatrix(1u);
			break;
		case 215:
			ProcessModelNode_AB_Wrapper(&object_0018C640, 1.0);
			njPopMatrix(1u);
			break;
		case 216:
			ProcessModelNode_AB_Wrapper(&object_0018C814, 1.0);
			njPopMatrix(1u);
			break;
		case 217:
			ProcessModelNode_AB_Wrapper(&object_0018C9E8, 1.0);
			njPopMatrix(1u);
			break;
		case 218:
			ProcessModelNode_AB_Wrapper(&object_0018CC34, 1.0);
			njPopMatrix(1u);
			break;
		case 219:
			ProcessModelNode_AB_Wrapper(&object_0018CD90, 1.0);
			njPopMatrix(1u);
			break;
		case 220:
			ProcessModelNode_AB_Wrapper(&object_0018CFDC, 1.0);
			njPopMatrix(1u);
			break;
		case 221:
			ProcessModelNode_AB_Wrapper(&object_0018D1B0, 1.0);
			njPopMatrix(1u);
			break;
		case 222:
			ProcessModelNode_AB_Wrapper(&object_0018D3FC, 1.0);
			njPopMatrix(1u);
			break;
		case 223:
			ProcessModelNode_AB_Wrapper(&object_0018D5D0, 1.0);
			njPopMatrix(1u);
			break;
		case 224:
			ProcessModelNode_AB_Wrapper(&object_0018D7A4, 1.0);
			njPopMatrix(1u);
			break;
		case 225:
			ProcessModelNode_AB_Wrapper(&object_0018D978, 1.0);
			njPopMatrix(1u);
			break;
		case 226:
			ProcessModelNode_AB_Wrapper(&object_0018DB4C, 1.0);
			njPopMatrix(1u);
			break;
		case 227:
			ProcessModelNode_AB_Wrapper(&object_0018DD20, 1.0);
			njPopMatrix(1u);
			break;
		case 228:
			ProcessModelNode_AB_Wrapper(&object_0018DEF4, 1.0);
			njPopMatrix(1u);
			break;
		case 229:
			ProcessModelNode_AB_Wrapper(&object_0018E140, 1.0);
			njPopMatrix(1u);
			break;
		case 230:
			ProcessModelNode_AB_Wrapper(&object_0018E314, 1.0);
			njPopMatrix(1u);
			break;
		case 231:
			ProcessModelNode_AB_Wrapper(&object_0018E560, 1.0);
			njPopMatrix(1u);
			break;
		case 232:
			ProcessModelNode_AB_Wrapper(&object_0018E734, 1.0);
			njPopMatrix(1u);
			break;
		case 233:
			ProcessModelNode_AB_Wrapper(&object_0018E908, 1.0);
			njPopMatrix(1u);
			break;
		case 234:
			ProcessModelNode_AB_Wrapper(&object_0018EA8C, 1.0);
			njPopMatrix(1u);
			break;
		case 235:
			ProcessModelNode_AB_Wrapper(&object_0018EC10, 1.0);
			njPopMatrix(1u);
			break;
		case 236:
			ProcessModelNode_AB_Wrapper(&object_0018EDA8, 1.0);
			njPopMatrix(1u);
			break;
		case 237:
			ProcessModelNode_AB_Wrapper(&object_0018EF40, 1.0);
			njPopMatrix(1u);
			break;
		case 238:
			ProcessModelNode_AB_Wrapper(&object_0018F0E8, 1.0);
			njPopMatrix(1u);
			break;
		case 239:
			ProcessModelNode_AB_Wrapper(&object_0018F290, 1.0);
			njPopMatrix(1u);
			break;
		case 240:
			ProcessModelNode_AB_Wrapper(&object_0018F438, 1.0);
			njPopMatrix(1u);
			break;
		case 241:
			ProcessModelNode_AB_Wrapper(&object_0018F5E0, 1.0);
			njPopMatrix(1u);
			break;
		case 242:
			ProcessModelNode_AB_Wrapper(&object_0018F788, 1.0);
			njPopMatrix(1u);
			break;
		case 243:
			ProcessModelNode_AB_Wrapper(&object_0018F930, 1.0);
			njPopMatrix(1u);
			break;
		case 244:
			ProcessModelNode_AB_Wrapper(&object_0018FAD8, 1.0);
			njPopMatrix(1u);
			break;
		case 245:
			ProcessModelNode_AB_Wrapper(&object_0018FC80, 1.0);
			njPopMatrix(1u);
			break;
		case 246:
			ProcessModelNode_AB_Wrapper(&object_0018FE28, 1.0);
			njPopMatrix(1u);
			break;
		case 247:
			ProcessModelNode_AB_Wrapper(&object_0018FFFC, 1.0);
			njPopMatrix(1u);
			break;
		case 248:
			ProcessModelNode_AB_Wrapper(&object_001901D0, 1.0);
			njPopMatrix(1u);
			break;
		case 249:
			ProcessModelNode_AB_Wrapper(&object_001903A4, 1.0);
			njPopMatrix(1u);
			break;
		case 250:
			ProcessModelNode_AB_Wrapper(&object_00190578, 1.0);
			njPopMatrix(1u);
			break;
		case 251:
			ProcessModelNode_AB_Wrapper(&object_0019074C, 1.0);
			njPopMatrix(1u);
			break;
		case 252:
			ProcessModelNode_AB_Wrapper(&object_00190994, 1.0); //misplaced bridge pieces
			njPopMatrix(1u);
			break;
		case 253:
			ProcessModelNode_AB_Wrapper(&object_00190B7C, 1.0);
			njPopMatrix(1u);
			break;
		case 254:
			ProcessModelNode_AB_Wrapper(&object_00190D64, 1.0);
			njPopMatrix(1u);
			break;
		case 255:
			ProcessModelNode_AB_Wrapper(&object_00190F4C, 1.0);
			njPopMatrix(1u);
			break;
		case 256:
			ProcessModelNode_AB_Wrapper(&object_001911AC, 1.0);
			njPopMatrix(1u);
			break;
		case 257:
			ProcessModelNode_AB_Wrapper(&object_0019131C, 1.0);
			njPopMatrix(1u);
			break;
		case 258:
			ProcessModelNode_AB_Wrapper(&object_001914B4, 1.0);
			njPopMatrix(1u);
			break;
		case 259:
			ProcessModelNode_AB_Wrapper(&object_0019164C, 1.0);
			njPopMatrix(1u);
			break;
		case 260:
			ProcessModelNode_AB_Wrapper(&object_001917E4, 1.0);
			njPopMatrix(1u);
			break;
		case 261:
			ProcessModelNode_AB_Wrapper(&object_00191968, 1.0);
			njPopMatrix(1u);
			break;
		case 262:
			ProcessModelNode_AB_Wrapper(&object_00191AEC, 1.0);
			njPopMatrix(1u);
			break;
		case 263:
			ProcessModelNode_AB_Wrapper(&object_00191C70, 1.0);
			njPopMatrix(1u);
			break;
		case 264:
			ProcessModelNode_AB_Wrapper(&object_00191E18, 1.0);
			njPopMatrix(1u);
			break;
		case 265:
			ProcessModelNode_AB_Wrapper(&object_00191FC0, 1.0);
			njPopMatrix(1u);
			break;
		case 266:
			ProcessModelNode_AB_Wrapper(&object_00192168, 1.0);
			njPopMatrix(1u);
			break;
		case 267:
			ProcessModelNode_AB_Wrapper(&object_00192310, 1.0);
			njPopMatrix(1u);
			break;
		case 268:
			ProcessModelNode_AB_Wrapper(&object_001924B8, 1.0);
			njPopMatrix(1u);
			break;
		case 269:
			ProcessModelNode_AB_Wrapper(&object_00192660, 1.0);
			njPopMatrix(1u);
			break;
		case 270:
			ProcessModelNode_AB_Wrapper(&object_00192808, 1.0);
			njPopMatrix(1u);
			break;
		case 271:
			ProcessModelNode_AB_Wrapper(&object_001929B0, 1.0);
			njPopMatrix(1u);
			break;
		case 272:
			ProcessModelNode_AB_Wrapper(&object_00192B58, 1.0);
			njPopMatrix(1u);
			break;
		case 273:
			ProcessModelNode_AB_Wrapper(&object_00192D00, 1.0);
			njPopMatrix(1u);
			break;
		case 274:
			ProcessModelNode_AB_Wrapper(&object_00192EA8, 1.0);
			njPopMatrix(1u);
			break;
		case 275:
			ProcessModelNode_AB_Wrapper(&object_00193050, 1.0);
			njPopMatrix(1u);
			break;
		case 276:
			ProcessModelNode_AB_Wrapper(&object_001931F8, 1.0);
			njPopMatrix(1u);
			break;
		case 277:
			ProcessModelNode_AB_Wrapper(&object_001933A0, 1.0);
			njPopMatrix(1u);
			break;
		case 278:
			ProcessModelNode_AB_Wrapper(&object_00193548, 1.0);
			njPopMatrix(1u);
			break;
		case 279:
			ProcessModelNode_AB_Wrapper(&object_001936F0, 1.0);
			njPopMatrix(1u);
			break;
		case 280:
			ProcessModelNode_AB_Wrapper(&object_00193898, 1.0);
			njPopMatrix(1u);
			break;
		case 281:
			ProcessModelNode_AB_Wrapper(&object_00193A40, 1.0);
			njPopMatrix(1u);
			break;
		case 282:
			ProcessModelNode_AB_Wrapper(&object_00193BE8, 1.0);
			njPopMatrix(1u);
			break;
		case 283:
			ProcessModelNode_AB_Wrapper(&object_00193D90, 1.0);
			njPopMatrix(1u);
			break;
		case 284:
			ProcessModelNode_AB_Wrapper(&object_00193F38, 1.0);
			njPopMatrix(1u);
			break;
		case 285:
			ProcessModelNode_AB_Wrapper(&object_001940E0, 1.0);
			njPopMatrix(1u);
			break;
		case 286:
			ProcessModelNode_AB_Wrapper(&object_00194288, 1.0);
			njPopMatrix(1u);
			break;
		case 287:
			ProcessModelNode_AB_Wrapper(&object_00194430, 1.0);
			njPopMatrix(1u);
			break;
		case 288:
			ProcessModelNode_AB_Wrapper(&object_00194618, 1.0);
			njPopMatrix(1u);
			break;
		case 289:
			ProcessModelNode_AB_Wrapper(&object_00194800, 1.0);
			njPopMatrix(1u);
			break;
		case 290:
			ProcessModelNode_AB_Wrapper(&object_001949E8, 1.0);
			njPopMatrix(1u);
			break;
		case 291:
			ProcessModelNode_AB_Wrapper(&object_00194BD0, 1.0);
			njPopMatrix(1u);
			break;
		case 292:
			ProcessModelNode_AB_Wrapper(&object_00194DB8, 1.0);
			njPopMatrix(1u);
			break;
		case 293:
			ProcessModelNode_AB_Wrapper(&object_00194FA0, 1.0);
			njPopMatrix(1u);
			break;
		case 294:
			ProcessModelNode_AB_Wrapper(&object_00195188, 1.0);
			njPopMatrix(1u);
			break;
		case 295:
			ProcessModelNode_AB_Wrapper(&object_001953A4, 1.0);
			njPopMatrix(1u);
			break;
		case 296:
			ProcessModelNode_AB_Wrapper(&object_00195604, 1.0);
			njPopMatrix(1u);
			break;
		case 297:
			ProcessModelNode_AB_Wrapper(&object_001957EC, 1.0);
			njPopMatrix(1u);
			break;
		case 298:
			ProcessModelNode_AB_Wrapper(&object_001959D4, 1.0);
			njPopMatrix(1u);
			break;
		case 299:
			ProcessModelNode_AB_Wrapper(&object_00195BBC, 1.0);
			njPopMatrix(1u);
			break;
		case 300:
			ProcessModelNode_AB_Wrapper(&object_00195DA4, 1.0);
			njPopMatrix(1u);
			break;
		case 301:
			ProcessModelNode_AB_Wrapper(&object_00195F8C, 1.0);
			njPopMatrix(1u);
			break;
		case 302:
			ProcessModelNode_AB_Wrapper(&object_00196148, 1.0);
			njPopMatrix(1u);
			break;
		case 303:
			ProcessModelNode_AB_Wrapper(&object_0019637C, 1.0);
			njPopMatrix(1u);
			break;
		case 304:
			ProcessModelNode_AB_Wrapper(&object_00196538, 1.0);
			njPopMatrix(1u);
			break;
		case 305:
			ProcessModelNode_AB_Wrapper(&object_001966F4, 1.0);
			njPopMatrix(1u);
			break;
		case 306:
			ProcessModelNode_AB_Wrapper(&object_001968BC, 1.0);
			njPopMatrix(1u);
			break;
		case 307:
			ProcessModelNode_AB_Wrapper(&object_00196A84, 1.0);
			njPopMatrix(1u);
			break;
		case 308:
			ProcessModelNode_AB_Wrapper(&object_00196C6C, 1.0);
			njPopMatrix(1u);
			break;
		case 309:
			ProcessModelNode_AB_Wrapper(&object_00196E54, 1.0);
			njPopMatrix(1u);
			break;
		case 310:
			ProcessModelNode_AB_Wrapper(&object_00196FEC, 1.0);
			njPopMatrix(1u);
			break;
		case 311:
			ProcessModelNode_AB_Wrapper(&object_00197184, 1.0);
			njPopMatrix(1u);
			break;
		case 312:
			ProcessModelNode_AB_Wrapper(&object_00197308, 1.0);
			njPopMatrix(1u);
			break;
		case 313:
			ProcessModelNode_AB_Wrapper(&object_001974A0, 1.0);
			njPopMatrix(1u);
			break;
		case 314:
			ProcessModelNode_AB_Wrapper(&object_00197648, 1.0);
			njPopMatrix(1u);
			break;
		case 315:
			ProcessModelNode_AB_Wrapper(&object_001977F0, 1.0);
			njPopMatrix(1u);
			break;
		case 316:
			ProcessModelNode_AB_Wrapper(&object_00197998, 1.0);
			njPopMatrix(1u);
			break;
		case 317:
			ProcessModelNode_AB_Wrapper(&object_00197B40, 1.0);
			njPopMatrix(1u);
			break;
		case 318:
			ProcessModelNode_AB_Wrapper(&object_00197CE8, 1.0);
			njPopMatrix(1u);
			break;
		case 319:
			ProcessModelNode_AB_Wrapper(&object_00197E90, 1.0);
			njPopMatrix(1u);
			break;
		case 320:
			ProcessModelNode_AB_Wrapper(&object_00198038, 1.0);
			njPopMatrix(1u);
			break;
		case 321:
			ProcessModelNode_AB_Wrapper(&object_001981E0, 1.0);
			njPopMatrix(1u);
			break;
		case 322:
			ProcessModelNode_AB_Wrapper(&object_00198388, 1.0);
			njPopMatrix(1u);
			break;
		case 323:
			ProcessModelNode_AB_Wrapper(&object_00198530, 1.0);
			njPopMatrix(1u);
			break;
		case 324:
			ProcessModelNode_AB_Wrapper(&object_001986D8, 1.0);
			njPopMatrix(1u);
			break;
		case 325:
			ProcessModelNode_AB_Wrapper(&object_00198880, 1.0);
			njPopMatrix(1u);
			break;
		case 326:
			ProcessModelNode_AB_Wrapper(&object_00198A28, 1.0);
			njPopMatrix(1u);
			break;
		case 327:
			ProcessModelNode_AB_Wrapper(&object_00198BD0, 1.0);
			njPopMatrix(1u);
			break;
		case 328:
			ProcessModelNode_AB_Wrapper(&object_00198D78, 1.0);
			njPopMatrix(1u);
			break;
		case 329:
			ProcessModelNode_AB_Wrapper(&object_00198F20, 1.0);
			njPopMatrix(1u);
			break;
		case 330:
			ProcessModelNode_AB_Wrapper(&object_001990C8, 1.0);
			njPopMatrix(1u);
			break;
		case 331:
			ProcessModelNode_AB_Wrapper(&object_001992B0, 1.0);
			njPopMatrix(1u);
			break;
		case 332:
			ProcessModelNode_AB_Wrapper(&object_00199498, 1.0);
			njPopMatrix(1u);
			break;
		case 333:
			ProcessModelNode_AB_Wrapper(&object_00199680, 1.0);
			njPopMatrix(1u);
			break;
		case 334:
			ProcessModelNode_AB_Wrapper(&object_00199868, 1.0);
			njPopMatrix(1u);
			break;
		default:
			ProcessModelNode_AB_Wrapper(&object_001999A8, 1.0);
			njPopMatrix(1u);
			break;
		}

	}
}

void __cdecl Load_TBridge(void)
{
	ObjectMaster *a1;
	EntityData1 *Torn;
	if (LoadedBridge == false)
	{
		//collist_008046E8[84].Flags = 0x01;	//This makes the landtable bridge invisible. Use only once we get the stupid bridge pieces to show up...
		TornadoThings.Distance = 40000000.0f;

		for (BridgeFrame = 0; BridgeFrame < 335; BridgeFrame++)
		{
			//a1->Data1->Object = &(TBRIDGE[BridgeFrame]);
			a1 = LoadObject((LoadObj)2, 1, sub_4E6770);
			a1->SETData.SETData = &TornadoThings;
			if (a1)
			{
				Torn = a1->Data1;
				//Torn->Object = &(TBRIDGE[BridgeFrame]);
				Torn->Position.x = (TBRIDGE[BridgeFrame]).pos[0];
				Torn->Position.y = (TBRIDGE[BridgeFrame]).pos[1];
				Torn->Position.z = (TBRIDGE[BridgeFrame]).pos[2];
				Torn->Rotation.x = (TBRIDGE[BridgeFrame]).ang[0];
				Torn->Rotation.y = (TBRIDGE[BridgeFrame]).ang[1];
				Torn->Rotation.z = (TBRIDGE[BridgeFrame]).ang[2];
				Torn->Scale.x = 1.0f;
				Torn->Scale.y = 1.0f;
				Torn->Scale.z = 1.0f;
				Torn->CharIndex = (BridgeFrame + 12);
			}
		}
	}
	LoadedBridge = true;
}

void __cdecl Tornado_Check(void)
{
	if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
	{
		if (Camera_Data1 != nullptr && Camera_Data1->Position.z > -1700 && (LoadedTornado == true || LoadedDECOTornado == true))
		{
			LoadedTornado = false;
			LoadedWave = false;
			WaveFrame = 0;
			collist_008046E8[84].Flags = 0x80000001;
			LoadedBridge = false;
			LoadedDECOTornado = false;
			TornadoDECOFrame = 0;
			TornadoDirection = false;
			BridgeFrame = 0;
			TransTornadoDust = false;
		}
	}

	if (CurrentLevel == 2 && CurrentAct == 0 && CurrentCharacter != 6)
	{
		if (Camera_Data1 != nullptr && Camera_Data1->Position.z < -2450 && Camera_Data1->Position.y > -460 && LoadedTornado == false)
		{
			Load_Tornado();
			LoadedWave = true;
		}
		if (LoadedWave == true && WaveFrame < 305)
		{
			if (WaveFrame == 0)
			{
				Load_Tornado_Shockwave();
			}
			if (!IsGamePaused())
			{
				WaveFrame += 2;
				if (FramerateSetting >= 2)
				{
					WaveFrame += 2;
				}
			}
		}
		if (Camera_Data1 != nullptr && Camera_Data1->Position.z < -1950 && Camera_Data1->Position.y > -460)
		{
			Load_DecoTornado();
			Load_TBridge();
		}
	}

	else if (CurrentLevel != 2 && (LoadedTornado == true || LoadedDECOTornado == true))
	{
		LoadedTornado = false;
		LoadedWave = false;
		WaveFrame = 0;
		collist_008046E8[84].Flags = 0x80000001;
		LoadedBridge = false;
		LoadedDECOTornado = false;
		TornadoDECOFrame = 0;
		TornadoDirection = false;
		BridgeFrame = 0;
		TransTornadoDust = false;
	}

	if (CurrentLevel == 2 && CurrentAct == 0 && CurrentCharacter == 6)
	{
		collist_008046E8[84].Flags = 0x01;
	}
}

void __cdecl Load_Debris(void)
{
	if (LoadedDebris == false)
	{
		ObjectMaster *a1;
		EntityData1 *debr;
		DebrisThings.Distance = debrisLoadDistance;
		a1 = LoadObject((LoadObj)2, 3, sub_4DF7D0);
		a1->SETData.SETData = &DebrisThings;
		if (a1)
		{
			debr = a1->Data1;
			debr->Position.x = 649.074f;
			debr->Position.y = -203.486f;
			debr->Position.z = -196.07f;
			debr->Rotation.x = 0;
			debr->Rotation.y = 0;
			debr->Rotation.z = 0;
			debr->Scale.x = 1.0f;
			debr->Scale.y = 1.0f;
			debr->Scale.z = 1.0f;
			debr->CharIndex = 8;
		}
	}
	LoadedDebris = true;
}


void __cdecl Debris_Check(void)
{
	if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
	{
		if (LoadedDebris == true)
		{
			LoadedDebris = false;
		}
	}

	if (CurrentLevel == 2 && CurrentAct == 1)
	{
		if (LoadedDebris == false)
		{
			Load_Debris();
		}
	}

	else if (CurrentLevel != 2 && LoadedDebris == true)
	{
		LoadedDebris = false;
	}
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
		sub_407870(&Model_Tanpopostem, 1, 1.0);
		njPushMatrix(0);
		njTranslate(0, Particle_Tanpopo.pos[0], (Particle_Tanpopo.pos[1] + 2.5f), (Particle_Tanpopo.pos[2] + 0.3f));
		sub_407870(&attach_001398BC, 1, 1.0);
		njPushMatrix(0);
		njTranslate(0, Particle_Tanpopo.pos[0], (Particle_Tanpopo.pos[1]), Particle_Tanpopo.pos[2]);
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4 + 0x4000);
		}
		sub_407870(&attach_001398BC, 1, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Tanpopo_Main(ObjectMaster *a1)
{
	EntityData1 *v1; // edi@1
	ObjectMaster *v2; // eax@10

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
					&& (double)v1->InvulnerableTime * 0.00089999998 > (double)rand1() * 0.000030517578)
				{
					v2 = LoadChildObject(LoadObj_Data1, sub_4DFAF0, a1);
					if (v2)
					{
						a1->Child = v2;
						v2->Data1->Position.x = v1->Position.x;
						v2->Data1->Position.y = (v1->Position.y - 1);
						v2->Data1->Position.z = v1->Position.z;
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

//SADX Object List for Windy Valley
ObjectListEntry WindyValleyObjectList_list[] = {
	{ 2, 3, 0, 0, 0, Ring_Main, "RING   " } /* "RING   " */,						//00
	{ 2, 2, 0, 0, 0, Spring_Main, "SPRING " } /* "SPRING " */,						//01
	{ 2, 2, 0, 0, 0, SpringB_Main, "SPRINGB" } /* "SPRINGB" */,						//02
	{ 3, 3, 0, 0, 0, DashPanel_Main, "O AXPNL" } /* "O AXPNL" */,					//03
	{ 6, 3, 0, 0, 0, SwingSpikeBall_Load, "O IRONB" } /* "O IRONB" */,				//04
	{ 2, 3, 0, 0, 0, FallingSpikeBall_Load, "O FeBJG" } /* "O FeBJG" */,			//05
	{ 2, 3, 0, 0, 0, Spikes_Main, "O TOGE" } /* "O TOGE" */,						//06
	{ 3, 3, 0, 0, 0, EmeraldPiece_Load, "O EME P" } /* "O EME P" */,				//07	
	{ 2, 3, 0, 0, 0, Capsule_Load, "O RELEASE" } /* "O RELEASE" */,					//08
	{ 6, 3, 0, 0, 0, Switch_Main, "O SWITCH" } /* "O SWITCH" */,					//09
	{ 10, 3, 0, 0, 0, Weed_Main, "CMN KUSA" } /* "CMN KUSA" */,						//0A
	{ 6, 3, 0, 0, 0, DashHoop_Main, "CMN_DRING" } /* "CMN_DRING" */,				//0B
	{ 2, 3, 0, 0, 0, Balloon_Main, "O BALOON" } /* "O BALOON" */,					//0C
	{ 2, 3, 0, 0, 0, ItemBox_Main, "O ITEMBOX" } /* "O ITEMBOX" */,					//0D
	{ 6, 2, 0, 0, 0, RocketH_Main, "Rocket H" } /* "Rocket H" */,					//0E
	{ 6, 2, 0, 0, 0, RocketHS_Main, "Rocket HS" } /* "Rocket HS" */,				//0F
	{ 6, 2, 0, 0, 0, RocketV_Main, "Rocket V" } /* "Rocket V" */,					//10
	{ 6, 2, 0, 0, 0, RocketVS_Main, "Rocket VS" } /* "Rocket VS" */,				//11
	{ 2, 2, 1, 4000000, 0, JumpPanel_Load, "O JPanel" } /* "O JPanel" */,				//12
	{ 15, 3, 0, 0, 0, CheckPoint_Main, "O Save Point" } /* "O Save Point" */,				//13
	{ 2, 3, 0, 0, 0, Wall_Main, "WALL   " } /* "WALL   " */,						//14
	{ 3, 2, 1, 1250000, 0, Trampoline_Main, "TRAMPOL" } /* "TRAMPOL" */,					//15
	{ 2, 2, 1, 450000, 0, BLeaf, "B LEAF " } /* "B LEAF " */,						//16
	{ 2, 2, 1, 550000, 0, WcWind, "WC WIND" } /* "WC WIND" */,						//17
	{ 2, 2, 0, 0, 0, PuWind, "PU WIND" } /* "PU WIND" */,							//18
	{ 2, 4, 1, 1250000, 0, Load_Prope1, "PROPE1 " } /* "PROPE1 " */,					//19
	{ 2, 4, 1, 1250000, 0, Load_Prope2, "PROPE2 " } /* "PROPE2 " */,					//1A
	{ 2, 4, 1, 1250000, 0, Load_Prope3, "PROPE3 " } /* "PROPE3 " */,					//1B
	{ 2, 5, 1, 650000, 0, Load_Flower0, "FLOWER0" } /* "FLOWER0" */,					//1C
	{ 2, 5, 1, 650000, 0, Load_Flower1, "FLOWER1" } /* "FLOWER1" */,					//1D
	{ 2, 5, 1, 650000, 0, Load_Green0, "GREEN 0" } /* "GREEN 0" */,						//1E
	{ 2, 4, 1, 1050000, 0, Load_WKi1, "W KI1  " } /* "W KI1  " */,						//1F
	{ 2, 4, 1, 1050000, 0, Load_WKi2, "W KI2  " } /* "W KI2  " */,						//20
	{ 2, 5, 1, 650000, 0, Load_WKusa1, "W KUSA1" } /* "W KUSA1" */,						//21
	{ 2, 5, 1, 650000, 0, Load_Grass1, "GRASS1 " } /* "GRASS1 " */,						//22
	{ 2, 5, 1, 650000, 0, Load_Grass2, "GRASS2 " } /* "GRASS2 " */,						//23
	{ 2, 5, 1, 650000, 0, Load_Grass3, "GRASS3 " } /* "GRASS3 " */,						//24
	{ 2, 5, 1, 650000, 0, Load_Grass4, "GRASS4 " } /* "GRASS4 " */,						//25
	{ 6, 3, 1, 950000, 0, LRock, "L ROCK1" } /* "L ROCK1" */,						//26
	{ 6, 3, 1, 500000, 0, NullFunction, "RAFT   " } /* "RAFT   " */,					//27
	{ 7, 3, 1, 1250000, 0, NullFunction, "RAFT 2 " } /* "RAFT 2 " */,					//28
	{ 7, 3, 1, 1250000, 0, NullFunction, "RAFT 3 " } /* "RAFT 3 " */,					//29
	{ 7, 3, 0, 0, 0, NullFunction, "T_RAFT1" } /* "T_RAFT1" */,						//2A
	{ 7, 3, 0, 0, 0, NullFunction, "T_RAFT2" } /* "T_RAFT2" */,						//2B
	{ 2, 4, 1, 850000, 0, Load_Sirusi1, "SIRUSI1" } /* "SIRUSI1" */,					//2C
	{ 6, 4, 1, 950000, 0, Load_Sirusi2, "SIRUSI2" } /* "SIRUSI2" */,					//2D
	{ 6, 4, 1, 950000, 0, Load_Sirusi3, "SIRUSI3" } /* "SIRUSI3" */,					//2E
	{ 6, 4, 1, 950000, 0, Load_Sirusi4, "SIRUSI4" } /* "SIRUSI4" */,					//2F
	{ 2, 4, 1, 1250000, 0, Load_Sirusi5, "SIRUSI5" } /* "SIRUSI5" */,					//30
	{ 2, 4, 1, 1250000, 0, Load_Sirusi6, "SIRUSI6" } /* "SIRUSI6" */,					//31
	{ 2, 4, 1, 1250000, 0, Load_Sirusi7, "SIRUSI7" } /* "SIRUSI7" */,					//32
	{ 2, 4, 1, 1250000, 0, Load_Sirusi8, "SIRUSI8" } /* "SIRUSI8" */,					//33
	{ 2, 4, 1, 1250000, 0, Load_Sirusi9, "SIRUSI9" } /* "SIRUSI9" */,					//34
	{ 6, 4, 1, 950000, 0, Load_Siru11, "SIRU 11" } /* "SIRU 11" */,						//35
	{ 6, 4, 1, 950000, 0, Load_Siru12, "SIRU 12" } /* "SIRU 12" */,						//36
	{ 6, 4, 1, 950000, 0, Load_Siru13, "SIRU 13" } /* "SIRU 13" */,						//37
	{ 2, 4, 1, 1250000, 0, Load_Yaji01, "YAJI 01" } /* "YAJI 01" */,					//38
	{ 2, 4, 1, 1250000, 0, Load_Pole1, "POLE 1 " } /* "POLE 1 " */,						//39
	{ 2, 4, 1, 1250000, 0, Load_Pole2, "POLE 2 " } /* "POLE 2 " */,						//3A
	{ 2, 3, 1, 1250000, 0, WindyGate_Main, "W GATE " } /* "W GATE " */,					//3B
	{ 2, 3, 1, 1250000, 0, WindyGate_Main, "W GATE2" } /* "W GATE2" */,					//3C
	{ 2, 3, 1, 1250000, 0, Load_Pot01, "POT01  " } /* "POT01  " */,						//3D
	{ 2, 3, 1, 1250000, 0, Load_Pot02, "POT02  " } /* "POT02  " */,						//3E
	{ 6, 3, 1, 950000, 0, Rock1, "ROCK 1 " } /* "ROCK 1 " */,						//3F
	{ 2, 3, 1, 1250000, 0, Rock2, "ROCK 2 " } /* "ROCK 2 " */,						//40
	{ 2, 3, 1, 1250000, 0, Rock3, "ROCK 3 " } /* "ROCK 3 " */,						//41
	{ 2, 3, 1, 1250000, 0, Rock5, "ROCK 5 " } /* "ROCK 5 " */,						//42
	{ 6, 3, 1, 950000, 0, Load_IDai1, "I DAI 1" } /* "I DAI 1" */,						//43
	{ 6, 3, 1, 950000, 0, Load_IDai2, "I DAI 2" } /* "I DAI 2" */,						//44
	{ 6, 3, 1, 950000, 0, Load_IDai3, "I DAI 3" } /* "I DAI 3" */,						//45
	{ 6, 3, 1, 950000, 0, Load_IDai4, "I DAI 4" } /* "I DAI 4" */,						//46
	{ 6, 3, 1, 950000, 0, Load_IDai5, "I DAI 5" } /* "I DAI 5" */,						//47
	{ 6, 3, 1, 950000, 0, Load_IDai6, "I DAI 6" } /* "I DAI 6" */,						//48
	{ 6, 3, 1, 950000, 0, Load_IDai7, "I DAI 7" } /* "I DAI 7" */,						//49
	{ 6, 3, 1, 950000, 0, Load_IDai8, "I DAI 8" } /* "I DAI 8" */,						//4A
	{ 6, 3, 1, 950000, 0, Load_IDai9, "I DAI 9" } /* "I DAI 9" */,						//4B
	{ 6, 3, 1, 950000, 0, Load_IHas14, "I HAS14" } /* "I HAS14" */,						//4C
	{ 6, 3, 1, 950000, 0, Load_IHas15, "I HAS15" } /* "I HAS15" */,						//4D
	{ 6, 3, 1, 950000, 0, Load_IHas16, "I HAS16" } /* "I HAS16" */,						//4E
	{ 2, 3, 1, 1210000, 0, Load_IHas17, "I HAS17" } /* "I HAS17" */,					//4F
	{ 2, 3, 1, 1210000, 0, Load_IHas18, "I HAS18" } /* "I HAS18" */,					//50
	{ 2, 2, 1, 1250000, 0, Load_BaneIwa, "BANEIWA" } /* "BANEIWA" */,					//51
	{ 2, 5, 1, 650000, 0, Tanpopo_Main, "TANPOPO" } /* "TANPOPO" */,					//52
	{ 2, 5, 1, 1250000, 0, Load_TakoW, "TAKO W " } /* "TAKO W " */,						//53
	{ 2, 3, 1, 1250000, 0, Load_Dome1, "DOME 1 " } /* "DOME 1 " */,						//54
	{ 2, 3, 1, 1250000, 0, Load_Dome2, "DOME 2 " } /* "DOME 2 " */,						//55
	{ 2, 3, 1, 1250000, 0, Load_Dome3, "DOME 3 " } /* "DOME 3 " */,						//56
	{ 2, 5, 1, 1850000, 0, Load_Prop1, "PROP 1 " } /* "PROP 1 " */,						//57
	{ 2, 4, 1, 1250000, 0, Load_PropeA, "PROPE A" } /* "PROPE A" */,					//58
	{ 2, 4, 1, 1250000, 0, Load_PropeB, "PROPE B" } /* "PROPE B" */,					//59
	{ 2, 4, 1, 1250000, 0, Load_PropeC, "PROPE C" } /* "PROPE C" */,					//5A
	{ 6, 3, 1, 950000, 0, Load_IwaB, "IWA B  " } /* "IWA B  " */,						//5B
	{ 2, 5, 1, 650000, 0, Load_PinkF, "PINK F " } /* "PINK F " */,						//5C
	{ 6, 3, 1, 950000, 0, Load_IBou01, "I BOU01" } /* "I BOU01" */,						//5D
	{ 6, 3, 1, 950000, 0, Load_IBou02, "I BOU02" } /* "I BOU02" */,						//5E
	{ 6, 3, 1, 950000, 0, Load_IHah01, "I HAH01" } /* "I HAH01" */,						//5F
	{ 6, 3, 1, 950000, 0, Load_IHah02, "I HAH02" } /* "I HAH02" */,						//60
	{ 6, 3, 1, 950000, 0, Load_IHah03, "I HAH03" } /* "I HAH03" */,						//61
	{ 6, 3, 1, 950000, 0, Load_Ioiwa01, "IOIWA01" } /* "IOIWA01" */,						//62
	{ 6, 3, 1, 950000, 0, Load_Ioiwa02, "IOIWA02" } /* "IOIWA02" */,						//63
	{ 6, 3, 1, 950000, 0, Load_Ioiwa03, "IOIWA03" } /* "IOIWA03" */,						//64
	{ 6, 3, 1, 950000, 0, Load_SaraB1, "SARA B1" } /* "SARA B1" */,						//65
	{ 6, 3, 1, 950000, 0, Load_SaraB2, "SARA B2" } /* "SARA B2" */,						//66
	{ 6, 3, 1, 950000, 0, Load_SaraM1, "SARA M1" } /* "SARA M1" */,						//67
	{ 6, 3, 1, 950000, 0, Load_SaraM2, "SARA M2" } /* "SARA M2" */,						//68
	{ 6, 3, 1, 950000, 0, Load_SaraS1, "SARA S1" } /* "SARA S1" */,						//69
	{ 6, 3, 1, 950000, 0, Load_SaraS2, "SARA S2" } /* "SARA S2" */,						//6A
	{ 2, 4, 0, 0, 0, NullFunction, "TSPRING" } /* "TSPRING" */,						//6B
	{ 2, 4, 0, 0, 0, Load_Lauchin, "LAUCHIN" } /* "LAUCHIN" */,						//6C
	{ 6, 2, 1, 1000000, 0, SBridg, "S BRIDG" } /* "S BRIDG" */,						//6D
	{ 7, 3, 0, 0, 0, NullFunction, "WELE   " } /* "WELE   " */,						//6E
	{ 2, 3, 0, 0, 0, RhinoTank_Main, "E SAITO" } /* "E SAITO" */,						//6F
	{ 2, 3, 0, 0, 0, BoaBoa_Main, "E HEVY " } /* "E HEVY " */,						//70
	{ 2, 3, 0, 0, 0, Leon_Load, "E LEON " } /* "E LEON " */,						//71
	{ 2, 3, 0, 0, 0, E103Enemy_Load, "E E-103" } /* "E E-103" */,					//72
	{ 2, 3, 0, 0, 0, ChaosEmeGoal_WValley_Main, "O KAOSE" } /* "Chaos Emerald */,	//73
	{ 6, 3, 1, 950000, 0, Load_IDai10, "I DAI 10" } /* "I DAI 10" */,					//74
	{ 6, 3, 1, 950000, 0, Load_IBou03, "I BOU03" } /* "I BOU03" */,						//75
	{ 6, 3, 1, 910000, 0, Load_IHas19, "I HAS19" } /* "I HAS19" */,						//76
	//Placeholder slots for possible use of those 3 giant rock models
	{ 6, 3, 1, 40000000, 0, NullFunction, "I HAH04" } /* "I HAH04" */,						//77
	{ 6, 3, 1, 40000000, 0, NullFunction, "I HAH05" } /* "I HAH05" */,						//78
	{ 6, 3, 1, 40000000, 0, NullFunction, "I HAH06" } /* "I HAH06" */,						//79
	{ 2, 2, 0, 0, 0, NextAct_Main, "NEXT ACT" } /* This is a test object */,	//7A
	{ 6, 3, 1, 1000000, 0, Load_BrPole, "BRPOLE" } /* "BRPOLE" */,						//7B
	{ 6, 3, 1, 4000000, 0, NullFunction, "WGEAR" } /* "WGEAR" */,					//7C
	{ 6, 3, 1, 4000000, 0, NullFunction, "WBOLT" } /* "WBOLT" */,					//7D
	{ 2, 2, 0, 0, 0, CSphere, "C SPHERE" } /* "C SPHERE" */,						//7E
	{ 2, 2, 0, 0, 0, ColCylinder_Main, "C CYLINDER" } /* "C CYLINDER" */,			//7F
	{ 2, 2, 0, 0, 0, ColCube_Main, "C CUBE" } /* "C CUBE" */,						//80
	{ 2, 2, 0, 0, 0, TikalHint_Load, "O TIKAL" } /* "O TIKAL" */					//81
};

ObjectList WindyValleyObjectList = { arraylengthandptrT(WindyValleyObjectList_list, int) };

void RetrieveWindy1SkyTransparency(float a, float r, float g, float b)
{
	SkyTrans = a;
}

void RenderWindy1Sky()
{
	SetMaterialAndSpriteColor_Float(SkyTrans, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -30000.0f;
	ProcessModelNode(&Act01_Skybox1, (QueuedModelFlagsB)0, 1.0f); //Main
	DrawQueueDepthBias = -28000.0f;
	ProcessModelNode(&Act01_Skybox2, (QueuedModelFlagsB)0, 1.0f); //Bottom non-trans
	SetMaterialAndSpriteColor_Float(SkyTrans* 0.6f, 1.0f, 1.0f, 1.0f);
	DrawQueueDepthBias = -25000.0f;
	ProcessModelNode(&Act01_Skybox3, (QueuedModelFlagsB)0, 1.0f); //Bottom trans
	DrawQueueDepthBias = 0;
}

//Adding Windy Valley to Big's Trial Level List
/*TrialLevelListEntry BigActionStages_list[] = {
	{ LevelIDs_TwinklePark, 1 },
	{ LevelIDs_IceCap, 3 },
	{ LevelIDs_EmeraldCoast, 2 },
	{ LevelIDs_HotShelter, 0 },
	{ LevelIDs_WindyValley, 0 }
};

TrialLevelList BigActionStages = { arrayptrandlength(BigActionStages_list) };
*/

PointerInfo pointers[] = {
	ptrdecl(0x97DA48, &landtable_008051E0),
	ptrdecl(0xBFD820, &WindyValley1DeathZones),
	ptrdecl(0x97DA4C, &landtable_008046C0),
	ptrdecl(0xBFD824, &WindyValley2DeathZones),
	ptrdecl(0x97DA50, &landtable_0080433C),
	ptrdecl(0xBFD828, &WindyValley3DeathZones),
	ptrdecl(0x974B38, &WindyValleyObjectList),
	ptrdecl(0x974B3C, &WindyValleyObjectList),
	ptrdecl(0x974B40, &WindyValleyObjectList),
	ptrdecl(0x91C0B8, &WV3path),
	ptrdecl(0x91C0BC, &WV3path)
};

PathDataPtr WV1PathList = { levelact(LevelIDs_WindyValley, 0), PathList_WindyValley0 };
PathDataPtr WV3PathList = { levelact(LevelIDs_WindyValley, 2), PathList_WindyValley2 };

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
	set_init();

	if (helperFunctions.Version < 6) {
		PrintDebug("Your ModLoader is out of date.\n Please update to use this mod!");
	};

	ReplacePVMFile("WINDY01_DC", "WINDY01_AD");
	ReplacePVMFile("WINDY02_DC", "WINDY02_AD");
	ReplacePVMFile("WINDY03_DC", "WINDY03_AD");
	ReplacePVMFile("WINDY_BACK_DC", "WINDY_BACK_AD");
	ReplacePVMFile("WINDY_BACK2_DC", "WINDY_BACK2_AD");
	ReplacePVMFile("WINDY_BACK3_DC", "WINDY_BACK3_AD");
	ReplacePVMFile("OBJ_WINDY_DC", "OBJ_WINDY_AD");
	ReplacePVMFile("WINDY_E103_DC", "WINDY_E103_AD");
	ReplacePVMFile("WINDY01", "WINDY01_AD");
	ReplacePVMFile("WINDY02", "WINDY02_AD");
	ReplacePVMFile("WINDY03", "WINDY03_AD");
	ReplacePVMFile("WINDY_BACK", "WINDY_BACK_AD");
	ReplacePVMFile("WINDY_BACK2", "WINDY_BACK2_AD");
	ReplacePVMFile("WINDY_BACK3", "WINDY_BACK3_AD");
	ReplacePVMFile("OBJ_WINDY", "OBJ_WINDY_AD");
	ReplacePVMFile("WINDY_E103", "WINDY_E103_AD");

	const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
	ADSetFile = config->getBool("Options", "ADSetFile", false);
	if (ADSetFile)
	{
		ReplaceSETFile("SET0200S", "SET0200S_AD");
		ReplaceSETFile("SET0201S", "SET0201S_AD");
		ReplaceSETFile("SET0202S", "SET0202S_AD");
	}
	delete config;

	*(float *)0x7E7B04 = 1420.68f; // changing the level trigger height for WV part 2
	WriteData((float *)0x4DE8F6, 436.785f); // x component of tornado target.
	WriteData((float *)0x4DE906, -2305.471f); // z component of tornado target.
	WriteData((float *)0x004DE8ED, tornadoLoadDistance); // Tornado's load distance
	WriteData((int *)0x07E1D90, (int)LengthOfArray(WV3path)); // p2 path for WV3
	WriteCall((void *)0x4DD8D3, TornadoPosition); // setting the tornado position properly
	//Skybox stuff
	//WriteCall((void*)0x004DD794, RetrieveWindy1SkyTransparency);
	//WriteCall((void*)0x004DD7D1, RenderWindy1Sky);
	//WriteData<5>((void*)0x004DD7DB, 0x90);
	//WriteData<5>((void*)0x004DD7E5, 0x90);
	//WriteData<5>((void*)0x004DD7EF, 0x90);
	//WriteData<5>((void*)0x004DD7F9, 0x90);
	WriteCall((void *)0x4DD7A5, WVSkybox1Position);

	WriteCall((void *)0x4DE405, Tornado_Texture_Load); //Setting the tornado to use a custom PVM file.
	WriteCall((void *)0x4DF522, Debris_Texture_Load); //Setting the tornado debris to use a custom PVM file.
	WriteJump((void *)0x4E5C20, NewBreak_Display);
	WriteCall((void *)0x4DDEB6, Debris_Texture_Load);
	WriteCall((void *)0x4FB2A8, Debris_Texture_Load);
	WriteCall((void *)0x4E5C3A, Debris_Texture_Load);
	WriteJump((void *)0x4DE3F0, NewTransitionTornado_Display); //overwriting the transition tornado's display routine.
	WriteCall((void *)0x4E660F, TornadoDestroy); //Makes it so the debris doesn't swirl around the tornado.

	//WriteJump((void *)0x4DDC10, sub_4DDCE0); //RHINO TANK TORNADO PARTY!!! :D
	//WriteJump((void *)0x4DDC10, sub_4DDC10); //Setting it back to normal.


	WriteData((NJS_OBJECT**)0x004DFAC9, &Particle_Tanpopo);
	WriteData((NJS_OBJECT**)0x004DFCB0, &Particle_Tanpopo);
	WriteData((float**)0x004E802D, E103_PositionData);
	
	
	*(NJS_OBJECT*)0xC158E0 = Object_Leaf; //WcWind/PuWind/Bleaf
	*(NJS_OBJECT*)0xC159FC = Object_Leaf; //WcWind/PuWind/Bleaf
	*(NJS_OBJECT*)0xC15B2C = Object_Leaf; //WcWind/PuWind/Bleaf
	*(NJS_MODEL_SADX*)0xC158B4 = attach_0012911C;
	*(NJS_MODEL_SADX*)0xC15B00 = attach_0012911C;
	*(NJS_MODEL_SADX*)0xC159D0 = attach_0012911C;

	*(NJS_OBJECT*)0xC0D9CC = Transition_Tornado1; //Replacing SET tornado models for forward-moving tornado
	*(NJS_OBJECT*)0xC0CDCC = Transition_Tornado2;
	*(NJS_OBJECT*)0xC0BFA4 = Transition_Tornado3;

	//There's a piece of debris that gets sucked up into the Final's tornado, a piece of the final bridge with two posts attached to it.

	//*(NJS_OBJECT*)0xC13274 = object_001762D4; //So this thing was causing that redefintion error. I just wanted to replace a childobject model for the tornado with the bridge model. I'll find some way to make this work.

	//More Debris for this model when it hits the tornado:
	*(NJS_OBJECT*)0xC111AC = object_00196C6C;
	*(NJS_OBJECT*)0xC11418 = object_00198530;
	*(NJS_OBJECT*)0xC119A8 = object_00195F8C;
	*(NJS_OBJECT*)0xC11C40 = object_00190B7C;
	*(NJS_OBJECT*)0xC11F04 = object_00197648;
	*(NJS_OBJECT*)0xC12144 = object_00190F4C;
	*(NJS_OBJECT*)0xC1233C = object_00191AEC;
	*(NJS_OBJECT*)0xC12548 = object_00197184;
	*(NJS_OBJECT*)0xC12970 = object_00191968;
	*(NJS_OBJECT*)0xC12B8C = object_001924B8;
	*(NJS_OBJECT*)0xC0DCE8 = object_00194DB8;
	*(NJS_OBJECT*)0xC0DEF4 = object_00190D64;
	*(NJS_OBJECT*)0xC0E134 = object_00195BBC;
	*(NJS_OBJECT*)0xC0E40C = object_001931F8;
	*(NJS_OBJECT*)0xC0E690 = object_001957EC;
	*(NJS_OBJECT*)0xC0E93C = object_00193BE8;
	*(NJS_OBJECT*)0xC0EC58 = object_0019164C;
	*(NJS_OBJECT*)0xC0EE0C = object_00197CE8;
	*(NJS_OBJECT*)0xC0F0CC = object_001968BC;
	*(NJS_OBJECT*)0xC0F280 = object_001977F0;
	*(NJS_OBJECT*)0xC0F500 = object_00198A28;
	*(NJS_OBJECT*)0xC0F6B4 = object_00196A84;
	*(NJS_OBJECT*)0xC0F8F4 = object_00196538;
	*(NJS_OBJECT*)0xC0FB00 = object_00191C70;
	*(NJS_OBJECT*)0xC0FE08 = object_00195DA4;
	*(NJS_OBJECT*)0xC1009C = object_001917E4;
	*(NJS_OBJECT*)0xC10250 = object_001933A0;
	*(NJS_OBJECT*)0xC10514 = object_00198BD0;
	*(NJS_OBJECT*)0xC10720 = object_00196148;

	/*List of Debris models in the final:
	C2AF48		NJSMODEL=C2AF1C
	C2B08C		NJSMODEL=C2B060
	C2B438		NJSMODEL=C2B40C
	C2B57C		NJSMODEL=C2B550
	C2B860		NJSMODEL=C2B834
	C2C160		NJSMODEL=C2C134
	C2C314		NJSMODEL=C2C2E8
	C2C788		NJSMODEL=C2C75C
	C2CB24		NJSMODEL=C2CAF8
	C0EC58		NJSMODEL=C0EC2C

	These are the NJS_OBJECTs. Must replace the NJS_MODELs instead!
	They are contained in the array at C66C80.
	*/
	*(NJS_OBJECT*)0xC2AF48 = object_0016F8E0; //Magatama Rock
	*(NJS_MODEL_SADX*)0xC2AF1C = attach_0016F884;

	*(NJS_OBJECT*)0xC2B08C = object_001A0250; //Small Rock
	*(NJS_MODEL_SADX*)0xC2B060 = attach_001A0228;

	*(NJS_OBJECT*)0xC2B438 = object_0019F824; //Small Rock with Pointy Bottom
	*(NJS_MODEL_SADX*)0xC2B40C = attach_0019F7FC;

	*(NJS_OBJECT*)0xC2B57C = object_0019EDF8; //Tree without Leaves
	*(NJS_MODEL_SADX*)0xC2B550 = attach_0019EDD0;

	*(NJS_OBJECT*)0xC2B860 = object_00170740; //Bigger Rock
	*(NJS_MODEL_SADX*)0xC2B834 = attach_00170718;

	*(NJS_OBJECT*)0xC2C160 = object_0016FD14; //Angled Wood
	*(NJS_MODEL_SADX*)0xC2C134 = attach_0016FCEC;

	*(NJS_OBJECT*)0xC2C314 = object_001A074C; //Giant Pillar
	*(NJS_MODEL_SADX*)0xC2C2E8 = attach_001A0724;

	*(NJS_OBJECT*)0xC2C788 = object_001A086C; //WKusa1 Leaf
	*(NJS_MODEL_SADX*)0xC2C75C = attach_001A0844;

	*(NJS_OBJECT*)0xC2CB24 = object_0019E788; //Debris Tree with Leaves
	*(NJS_MODEL_SADX*)0xC2CAF8 = attach_0019E760;

	*(NJS_OBJECT*)0xC0EC58 = object_001A086C; //Another WKusa1 Leaf. There's one too many slots, not enough beta debris...
	*(NJS_MODEL_SADX*)0xC0EC2C = attach_001A0844;


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
		TrampolineValueCorrecter(); //This is just to make sure that if you pause in the middle of bouncing, that the floats return to their original values for other levels.
		//WindPathZoneSetting(); Unsure now if the wind path leaves actually moved differently in the beta.
		Tornado_Check(); //Loads Stage Function stuff for Act 1

		if (CurrentLevel == 2 && CurrentAct == 1 && !IsGamePaused()) //Loads Stage Function Debris for Act 2. Very early state, barely works.
		{
			DebrisFrame++;
			if (FramerateSetting >= 2)
			{
				DebrisFrame++;
			}
			if (DebrisFrame == 15)
			{
				Debris_Check();
				DebrisFrame = 0;
			}
		}
	}

}
