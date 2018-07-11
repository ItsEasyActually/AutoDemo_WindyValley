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
bool LoadedTornado = false; //Flag to set if the Transition Tornado has been loaded or not.
SETObjData TornadoThings = {}; //Raw SET Data for the tornado stuff.
bool LoadedDECOTornado = false; //Flag to set if the Decorational Tornado has been loaded or not.
int TornadoDECOFrame = 0; //Used to get the Deco Tornado to swerve back and forth. Uses OnFrame.
SETObjData TornadoDecoThings = {}; //More Raw SET Data for the Deco Tornado.
bool TransTornadoDust = false; //This is really stupid. I'm trying to figure out this dust cloud animation that's playing in front of the transition tornado in the beta footage, but I can't find the animation anywhere in the final game. So, this flag is fliped on and off every other frame, and controls a dust effect that I have display in front of the transiton tornado.
NJS_VECTOR TornadoSuck = {  692.156555f, -280.87912f, -3467.09546f  }; //Vector position for sucking the player into the tornado.
//Length  = 128 (only use 127 on highest framerate) (including 0)
int TornadoPosModifier[] = { //This is the array of ints that is used in translating the Deco Tornado back and forth. It's like an NJS_ACTION without being one.
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
	512,
	512 //Extra frame only used when framerate is >= 2.
};
bool TornadoDirection = false; //Used by the Deco Tornado to check how it should read from the array above and translate the tornado in a direction.
bool LoadedDebris = false; //This is used to check if the Debris thing I have going in Act 2 loaded. Not that important atm, honestly.
bool LoadedWave = false; //This is used to check if the "shockwave" effect when the Transition Tornado loads can go ahead and spawn.
bool LoadedBridge = false; //This is used to check if the Tornado bridge pieces loaded.
SETObjData DebrisThings = {}; //Raw SET Data for the Debris thing in Act 2.
const float tornadoLoadDistance = 3102500.0f; //Draw Distance stuff.
const float debrisLoadDistance = 2250000.0f; //Draw Distance stuff.
static float DebrisFrame = 0; //This is also some stupid shit, getting the debris to spawn every 15 frames so it doesn't lag out. Also not important atm.
static float WaveFrame = 0; //Uused in scaling the "shockwave" effect and making it spin.
int BridgeFrame = 0; //Used in the bridge loading function below to select pieces and get positions and stuff.

<<<<<<< HEAD
bool Skybox1Loaded = false;
bool Skybox2Loaded = false;
bool Skybox3Loaded = false;
SETObjData SkyboxThings = {};

=======
>>>>>>> dba67353769f50f03f679761999f4bf7c57c2786
void TrampolineValueCorrecter() //This function is a fail-safe just in case you somehow pause and quit the level in the middle of bouncing on a trampoline and one of the values doesn't get reset to its proper value.
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

void WindPathZoneSetting() //This changes the speed of the leaf models blowing around the wind paths. ....Now, not actually sure if the effect was different in the beta. It's hard to see in evilham's gif.
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

<<<<<<< HEAD
void __cdecl WVAct1_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		DisableFog();
		njSetTexture(&BETAWINDY_BACK_texlist);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		if (Camera_Data1 != nullptr)
		{
			a1->Data1->Position = Camera_Data1->Position;
			a1->Data1->Position.y = 0.0f;
		}
		njScale(0, 1.4f, 1.4f, 1.4f);
		sub_408530(&Act1MainSkybox);

		njPushMatrix(0);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_408530(&Act1CloudRing1);
		njPopMatrix(1u); //cloud ring

		njPushMatrix(0);
		njTranslate(0, 0, (Act1CloudLayer.pos[1] + 300.0f), 0);
		sub_408530(&Act1CloudLayer);
		njPopMatrix(1u); //cloud layer
		njPopMatrix(1u); //main model
		ToggleStageFog();
	}
}

void __cdecl WVAct2_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // eax@6
	Angle v6; // eax@6
	Angle v7; // eax@6

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		DisableFog();
		njSetTexture(&BETAWINDY_BACK2_texlist);
		njPushMatrix(0);
		DrawQueueDepthBias = -28052.0;
		njTranslateV(0, &v1->Position);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		ProcessModelNode_A_Wrapper(&Act02_Skybox3, (QueuedModelFlagsB)0, 1.0);
		njPopMatrix(1u); //model1

		njPushMatrix(0);
		DrawQueueDepthBias = -38052.0;
		njTranslateV(0, &v1->Position);
		v6 = *(float*)&v1->Object * 65536.0 * 0.002777777777777778;
		if (v6)
		{
			njRotateY(0, (unsigned __int16)v6);
		}
		ProcessModelNode_A_Wrapper(&Act02_Skybox2, (QueuedModelFlagsB)0, 1.0);
		njPopMatrix(1u); //model3

		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v7 = *(float*)&v1->LoopData * 65536.0 * 0.002777777777777778;
		if (v7)
		{
			njRotateY(0, (unsigned __int16)v7);
		}
		ProcessModelNode_A_Wrapper(&Act02_Skybox1, (QueuedModelFlagsB)0, 1.0);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u); //model2
		ToggleStageFog();

	}
}

void __cdecl WVAct3_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle v6; // st7@8
	Angle v7; // st7@8

	v1 = a1->Data1;

	if (!MissedFrames)
	{
		njSetTexture(&BETAWINDY_BACK3_texlist);
		DisableFog();
		if (Camera_Data1 != nullptr)
		{
			a1->Data1->Position = Camera_Data1->Position;
		}
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_408530(&Act3MainSkybox);
		njPushMatrix(0);
		v6 = *(float*)&v1->LoopData * 65536.0 * 0.002777777777777778;
		if (v6)
		{
			njRotateY(0, (unsigned __int16)v6);
		}
		sub_408530(&Act3CloudRing2);
		njPopMatrix(1u); //cloud ring2
		njPushMatrix(0);
		v7 = *(float*)&v1->Object * 65536.0 * 0.002777777777777778;
		if (v7)
		{
			njRotateY(0, (unsigned __int16)v7);
		}
		njScale(0, 1.1f, 1.1f, 1.1f);
		sub_408530(&Act3CloudRing);
		njPopMatrix(1u); //cloud ring
		njPushMatrix(0);
		v7 = *(float*)&v1->Object * 65536.0 * 0.002777777777777778;
		if (v7)
		{
			njRotateY(0, (unsigned __int16)v7);
		}
		njScale(0, 0.7f, 0.6f, 0.7f);
		sub_408530(&Act3CloudLayer);
		njPopMatrix(1u); //cloud layer
		njPopMatrix(1u); //main model
		ToggleStageFog();
	}
}



void __cdecl SkyBoxAct3_Main(ObjectMaster *a1)
{
	if (CurrentLevel != 2 || (CurrentLevel == 2 && CurrentAct != 2))
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
					*(float*)&v1->CharIndex = 0.01f + *(float*)&v1->CharIndex;
					*(float*)&v1->LoopData = 0.02f + *(float*)&v1->LoopData;
					*(float*)&v1->Object = 0.04f + *(float*)&v1->Object;
					WVAct3_Display(a1);
				}
			}
			else
			{
				v1->Action = 1;
				a1->DisplaySub = WVAct3_Display;
			}
		}
	}
}


void __cdecl SkyBoxAct2_Main(ObjectMaster *a1)
{
	if (CurrentLevel != 2 || (CurrentLevel == 2 && CurrentAct != 1))
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
					*(float*)&v1->CharIndex = -3.5f + *(float*)&v1->CharIndex;
					*(float*)&v1->LoopData = -5.0f + *(float*)&v1->LoopData;
					*(float*)&v1->Object = -8.0f + *(float*)&v1->Object;
					WVAct2_Display(a1);
				}
			}
			else
			{
				a1->Data1->Position.x = 649.074f;
				a1->Data1->Position.y = -203.486f;
				a1->Data1->Position.z = -196.07f;
				v1->Action = 1;
				a1->DisplaySub = WVAct2_Display;
			}
		}
	}
}

void __cdecl SkyBoxAct1_Main(ObjectMaster *a1)
{
	if (CurrentLevel != 2 || (CurrentLevel == 2 && CurrentAct != 0))
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
					*(float*)&v1->CharIndex = -0.02f + *(float*)&v1->CharIndex;
					WVAct1_Display(a1);
				}
			}
			else
			{
				v1->Action = 1;
				a1->DisplaySub = WVAct1_Display;
			}
		}
	}
}

void __cdecl Act3SkyBox_Load(void)
{
	ObjectMaster *a1;
	EntityData1 *boxthree;

	if (Skybox3Loaded == false)
	{
		SkyboxThings.Distance = 40000000.0f;
		a1 = LoadObject((LoadObj)2, 3, SkyBoxAct3_Main);
		a1->SETData.SETData = &SkyboxThings;
		if (a1)
		{
			boxthree = a1->Data1;
			boxthree->Position.x = 0.0f;
			boxthree->Position.y = 0.0f;
			boxthree->Position.z = 0.0f;
			boxthree->Rotation.x = 0;
			boxthree->Rotation.y = 0;
			boxthree->Rotation.z = 0;
			boxthree->Scale.x = 1.0f;
			boxthree->Scale.y = 1.0f;
			boxthree->Scale.z = 1.0f;
		}
	}
	Skybox3Loaded = true;
}

void __cdecl Act2SkyBox_Load(void)
{
	ObjectMaster *a1;
	EntityData1 *boxtwo;

	if (Skybox2Loaded == false)
	{
		SkyboxThings.Distance = 40000000.0f;
		a1 = LoadObject((LoadObj)2, 3, SkyBoxAct2_Main);
		a1->SETData.SETData = &SkyboxThings;
		if (a1)
		{
			boxtwo = a1->Data1;
			boxtwo->Position.x = 0.0f;
			boxtwo->Position.y = 0.0f;
			boxtwo->Position.z = 0.0f;
			boxtwo->Rotation.x = 0;
			boxtwo->Rotation.y = 0;
			boxtwo->Rotation.z = 0;
			boxtwo->Scale.x = 1.0f;
			boxtwo->Scale.y = 1.0f;
			boxtwo->Scale.z = 1.0f;
		}
	}
	Skybox2Loaded = true;
}

void __cdecl Act1SkyBox_Load(void)
{
	ObjectMaster *a1;
	EntityData1 *boxone;

	if (Skybox1Loaded == false)
	{
		SkyboxThings.Distance = 40000000.0f;

		a1 = LoadObject((LoadObj)2, 3, SkyBoxAct1_Main);
		a1->SETData.SETData = &SkyboxThings;
		if (a1)
		{
			boxone = a1->Data1;
			boxone->Position.x = 0.0f;
			boxone->Position.y = 0.0f;
			boxone->Position.z = 0.0f;
			boxone->Rotation.x = 0;
			boxone->Rotation.y = 0;
			boxone->Rotation.z = 0;
			boxone->Scale.x = 1.0f;
			boxone->Scale.y = 1.0f;
			boxone->Scale.z = 1.0f;
		}
	}
	Skybox1Loaded = true;
}


void __cdecl Load_BWVSkybox(void)
{
	auto CharTest = EntityData1Ptrs[0];
	if (CurrentLevel == 2)
	{
		if (CurrentAct == 0)
		{
			Act1SkyBox_Load();
		}
		else if (CurrentAct == 1)
		{
			Act2SkyBox_Load();
		}
		else if (CurrentAct == 2)
		{
			Act3SkyBox_Load();
		}
		if (GameState == 3 || GameState == 7 || GameState == 21 || CurrentLevel != 2 || CharTest == nullptr)
		{
			Skybox1Loaded = false;
			Skybox2Loaded = false;
			Skybox3Loaded = false;
		}
	}
}

=======
>>>>>>> dba67353769f50f03f679761999f4bf7c57c2786
void __cdecl Tornado_Texture_Load(void) //Sets the textures for the object to Tomado.PVM.
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
		njTranslate(0, 732.156555f, -195.87912f, -3467.09546f); //Where the tornado spawns, too, except higher.
		njScale(0, WaveFrame, WaveFrame, WaveFrame); //Scale it based on the counter.
		njRotateY(0, (unsigned __int16)(WaveFrame * 0x1000)); //Make it spin. Because of how this works, it gets faster and faster the higher the count goes.
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
	NJS_VECTOR a2; //Directional vector for the dust cloud effect.
	NJS_VECTOR a3; //Vector that controls where the dust cloud spawns.

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		Tornado_Texture_Load();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		a3.y = (v1->Position.y - 90);
		a3.z = (v1->Position.z + 50); //Make it always appear in front of the tornado, hiding the base.

		if (TornadoDirection == false) //Determining how the value obtained from the array should be applied to the transformation. Basically, what direction are we going?
		{
			njTranslate(0, (TornadoPosModifier[TornadoDECOFrame]), 0, 0); //Moves to the right.
			a3.x = (467.1638 + TornadoPosModifier[TornadoDECOFrame]); //It has to move along with the tornado.
		}

		else
		{
			njTranslate(0, -1 * (TornadoPosModifier[TornadoDECOFrame]), 0, 0); //Moves to the left.
			a3.x = (975.1638 - TornadoPosModifier[TornadoDECOFrame]);
		}

		if (TornadoDECOFrame < 127) //Have we reached the end of the array?
		{
			if (!IsGamePaused() && GameState != 3 && GameState != 4 && GameState != 7 && GameState != 21)
			{
				TornadoDECOFrame++;

				if (FramerateSetting >= 2)
				{
					TornadoDECOFrame++; //To keep a consistent movement speed across all framerates.
				}
			}
			(a2.x) = 0;
			(a2.y) = 1;
			(a2.z) = 0;
			if (!IsGamePaused())
			{
				sub_4B9820(&a3, &a2, 35.0); //This is the dust cloud subroutine. Easy to use. It goes: Spawn Vector, Directional Vector, Scale.
			}
		}

		else
		{
			TornadoDECOFrame = 0;
			if (TornadoDirection == false)
			{
				v1->Position.x += 512; //Moving the tornado to the actual position of the translation so we can start heading the other way.
				TornadoDirection = true; //And changing direction.
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
		sub_407A00((NJS_MODEL_SADX *)Decor_Tornado3.model, 1.0);
		njPushMatrix(0);
		DrawModel_QueueVisible((NJS_MODEL_SADX *)Decor_Tornado2.model, (QueuedModelFlagsB)0, 1.0);
		njPushMatrix(0);
		DrawModel_QueueVisible((NJS_MODEL_SADX *)Decor_Tornado1.model, (QueuedModelFlagsB)0, 1.0);
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
				PlaySound2(62, a2, 1, 0); //Because why not? Whoooosh!
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
			Torn->Position.x = 467.1638f; //I don't know if this is actually where it spawns in the beta. In fact, that goes for all of these things except the bridge pieces, obviously. It'd be nice to find those positions so we can have pinpoint accuracy.
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

void __cdecl NewTransitionTornado_Display(ObjectMaster *a1) //Overriding the Transition Tornado's display routine so I can add that additional dust cloud effect in front of it.
{
	EntityData1 *v1; // esi@1
	double v2; // st7@2
	double v3; // st7@4
	double v4; // st7@6
	NJS_VECTOR a2; //These vectors are doing the same shit as the Deco Tornado's....mostly. This is the directional one.
	NJS_VECTOR a3; //And this one is always placed offset from the tornado's current position. So, it follows it, staying in front.

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
			if (TransTornadoDust == true) //God, this is dumb. I'm just trying to mimic the effect in the footage as best I can until someone comes in and shows me where it is or how to do this better.
			{
				sub_4B9820(&a3, &a2, 30.0); //Dust cloud routine.
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
			Torn->Position.x = 732.156555f; //Again, don't know if this is actually where it's supposed to spawn.
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
		a1 = LoadObject((LoadObj)2, 3, Wall_Main);
		a1->SETData.SETData = &TornadoThings;
		if (a1)
		{
			Torn = a1->Data1;
			Torn->Position.x = 473.244659f; //Loading some pushy walls in just to make sure the player can't escape the tornado by going back into the level or something.
			Torn->Position.y = -384.367523f;
			Torn->Position.z = -2498.39258f;
			Torn->Rotation.x = 0;
			Torn->Rotation.y = 0x7A2D;
			Torn->Rotation.z = 0;
			Torn->Scale.x = 100.0f;
			Torn->Scale.y = 100.0f;
			Torn->Scale.z = 25.0f;
		}
		a1 = LoadObject((LoadObj)2, 3, Wall_Main);
		a1->SETData.SETData = &TornadoThings;
		if (a1)
		{
			Torn = a1->Data1;
			Torn->Position.x = 597.882935f;
			Torn->Position.y = -395.617523f;
			Torn->Position.z = -2558.87744f;
			Torn->Rotation.x = 0;
			Torn->Rotation.y = 0xA35B;
			Torn->Rotation.z = 0;
			Torn->Scale.x = 100.0f;
			Torn->Scale.y = 100.0f;
			Torn->Scale.z = 25.0f;
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
		Wave->Position.x = 732.156555f; //Again, position is just a guess.
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

void __cdecl Debris_Texture_Load(void) //Sets the textures of the object to Debris.PVM. Used for the tornado debris and the bridge pieces.
{
	//LoadPVM("Debris", &TomadoDebris_texlist);
	njSetTexture(&TomadoDebris_texlist);
}

void __cdecl TornadoDestroy(ObjectMaster *a1)
{
	DeleteChildObjects(a1); //Currently, this MUST run for the bridge pieces, otherwise they'll swirl around the tornado and eventually crash the game because....I dunno? Too many child objects being processed at once?
}

void __cdecl NewBreak_Display(ObjectMaster *a2) //Overriding the Tornado Bridge objects' display routine.
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
		//njTranslateV(0, &v1->Position);
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
		
		ProcessModelNode_AB_Wrapper(&TBRIDGE[(int)v1->Scale.z], 1.0);
		njPopMatrix(1u);
<<<<<<< HEAD
=======
	}
}

void __cdecl NewBreakBridgeMain(ObjectMaster *a1) //New main subroutine for bridge objects
{
	ObjectMaster *v1; // edi@1
	EntityData1 *v2; // esi@1
	char v3; // al@18
	NJS_VECTOR a2; // [sp+8h] [bp-Ch]@11
	NJS_OBJECT *v4; // edi@1
	ObjectMaster *v5; // edi@1
	EntityData1 *v7; // esi@1
	NJS_VECTOR a3; // edi@1
	ObjectMaster *v8; // edi@1

	v1 = a1;
	v2 = a1->Data1;
	if (!ClipObject(a1, 2250000.0))
	{
		if (v2->Action)
		{
			if (v2->Action == 1)
			{
				if (++v2->InvulnerableTime <= 0x58u) //This was lowered from 258 to 58. This make the child objects disappear faster, so we can have them swirl up the tornado and not have the game crash.
				{
					RunObjectChildren(v1);
				}
				else
				{
					v2->Action = 6;
					DeleteChildObjects(v1);
				}
			}
		}
		else
		{
			if (sub_4DE570((int)&v2->Position, (int)&a1))
			{
				if (*(float *)&a1 < 190.0 || v2->NextAction)
				{
					if (*(float *)&a1 < 95.0)
					{
						(a2.x) = 0;
						(a2.y) = -8;
						(a2.z) = 0;
						sub_4B9820(&v2->Position, &a2, 10.0);
					}
					if (v2->Scale.y < 0.0)
					{
						sub_4E6370((int)v1);
						if (v2->Index > 5u)
						{
							(a2.x) = 0;
							(a2.y) = -8;
							(a2.z) = 0;
							v2->Index = 0;
							sub_4B9820(&v2->Position, &a2, 10.0);
						}
					}
					else
					{
						/*	
						NJS_OBJECT *v4;
						ObjectMaster *v5;
						EntityData1 *v7;



						v2 = LoadChildObject(LoadObj_Data1, sub_4DFAF0, a1);
						if (v2)
						{
						a1->Child = v2;
						v2->Data1->Position.x = v1->Position.x;
						v2->Data1->Position.y = (v1->Position.y - 1);
						v2->Data1->Position.z = v1->Position.z;
						}




						*/
						//INSERT LOADCHILDSHIT HERE
					/*	v4 = &TBRIDGE[(int)v2->Scale.z];
						v5 = LoadChildObject(LoadObj_Data1, sub_4E6070, v8);
						if (v5)
						{
							v5->Data1->Rotation.y = v4->ang[1];
							v5->Data1->Position.x = v4->pos[0];
							v5->Data1->Position.y = v4->pos[1];
							v5->Data1->Position.z = v4->pos[2];
							v5->Data1->Object = v4;

							(a3.x = 0);
							(a3.y = 8);
							(a3.z = 0);
							sub_4B9820(&v2->Position, &a3, 5.0);
						}*/ 
						//Bullshit I was doing ^
						sub_4E6200(0, (int)v1);
						v2->Action = 1;
						v1->DisplaySub = 0;
					}
				}
				if (v2->Scale.y >= 0.0 && *(float *)&a1 < 200.0)
				{
					v3 = v2->Index + 1;
					v2->Index = v3;
					if ((unsigned __int8)v3 > 0x14u)
					{
						(a2.x) = 10;
						(a2.y) = 8;
						(a2.z) = 0;
						v2->Index = 0;
						sub_4B9820(&v2->Position, &a2, 18.0);
					}
				}
			}
			sub_4E5C20(v1);
		}
>>>>>>> dba67353769f50f03f679761999f4bf7c57c2786
	}
}

void __cdecl Load_TBridge(void) //This colossal mess.
{
	ObjectMaster *a1;
	EntityData1 *Torn;
	if (LoadedBridge == false)
	{
		collist_008046E8[84].Flags = 0x01;	//This makes the landtable bridge invisible.
		TornadoThings.Distance = 40000000.0f;

		for (BridgeFrame = 0; BridgeFrame < 335; BridgeFrame++) //I'm looping through, trying to get them all loaded in an orderly fashion.
		{
<<<<<<< HEAD
			a1 = LoadObject((LoadObj)2, 1, sub_4E6770);
=======
			a1 = LoadObject((LoadObj)2, 1, sub_4E6770);/
>>>>>>> dba67353769f50f03f679761999f4bf7c57c2786
			a1->SETData.SETData = &TornadoThings;
			if (a1)
			{
				Torn = a1->Data1;
				Torn->Position.x = (TBRIDGE[BridgeFrame]).pos[0];
				Torn->Position.y = (TBRIDGE[BridgeFrame]).pos[1]; //Trying to grab positions and rotations (if any) from the current piece.
				Torn->Position.z = (TBRIDGE[BridgeFrame]).pos[2];
				Torn->Rotation.x = (TBRIDGE[BridgeFrame]).ang[0];
				Torn->Rotation.y = (TBRIDGE[BridgeFrame]).ang[1];
				Torn->Rotation.z = (TBRIDGE[BridgeFrame]).ang[2];
				Torn->Scale.x = 1.0f;
				Torn->Scale.y = 1.0f;
				Torn->Scale.z = BridgeFrame;
				Torn->CharIndex = (BridgeFrame + 12);
			}
		} //Getting this to work is going to require extensive research on the bridge's coding in the final game. Maybe.
	}
	LoadedBridge = true;
}

void __cdecl Tornado_Check(void) //This is the big one. The main chunk of the stage function nonsense.
{
	auto PlayChar = EntityData1Ptrs[0];
	
	if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
	{
		if (PlayChar != nullptr && PlayChar->Position.z > -1700 && (LoadedTornado == true || LoadedDECOTornado == true))
		{
			LoadedTornado = false; //Basically, if you reset after either tornado has been loaded, and you appear further back, reset everything. For some baffling reason, not checking for that distance away (1700), the transiton tornado won't load. Are the gamestates being changed when that thing appears?
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

	if (CurrentLevel == 2 && CurrentAct == 0 && CurrentCharacter != 6) //Make sure you're in Act 1 and NOT Gamma.
	{
		if (PlayChar != nullptr && PlayChar->Position.z < -2450 && PlayChar->Position.y > -350 && LoadedTornado == false) //If you reach the air vent and the tornado and bridge haven't been loaded in yet.
		{
			Load_Tornado();
			LoadedWave = true; //Giving the "shockwave" the greenlight to spawn and start spinning and scaling.
			Load_TBridge();
		}
		if (LoadedWave == true && WaveFrame < 305) //Yes, the wave scales up to 305 times its normal size. If it's much lower than this, I just find it a bit underwhelming.
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
					WaveFrame += 2; //Maintaining consistent scaling and spinning speed no matter the framerate.
				}
			}
		}
		if (PlayChar != nullptr && PlayChar->Position.z < -2050 && PlayChar->Position.y > -460) //Loading the swerving tornado
		{
			Load_DecoTornado();
		}
		
		if (LoadedTornado == true && CurrentLevel == 2 && CurrentAct == 0)
		{
			if (PlayChar != nullptr && !IsGamePaused()) //This is the code that sucks the player up into the tornado.
			{
				
				if (FramerateSetting >= 2)
				{
					PlayChar->Position.x = PlayChar->Position.x + squareroot((TornadoSuck.x - PlayChar->Position.x) / 2.5);
					//PlayChar->Position.y = PlayChar->Position.y + squareroot((TornadoSuck.y - (PlayChar->Position.y * 1.2358869) + 220) / 20);
					PlayChar->Position.y = TornadoSuck.y;
					PlayChar->Position.z = PlayChar->Position.z + squareroot((TornadoSuck.z - PlayChar->Position.z) / 20); //Lower this to make it suck Sonic up faster.
				}
				
				else
				{
					PlayChar->Position.x = PlayChar->Position.x + squareroot((TornadoSuck.x - PlayChar->Position.x) / 5);
					//PlayChar->Position.y = PlayChar->Position.y + squareroot((TornadoSuck.y - (PlayChar->Position.y * 1.2358869) + 220) / 40);
					PlayChar->Position.y = TornadoSuck.y;
					PlayChar->Position.z = PlayChar->Position.z + squareroot((TornadoSuck.z - PlayChar->Position.z) / 40);
				}
				
				while (PlayChar->Position.y > -280)
				{
					PlayChar->Position.y -= 1;
				}
				//DisablePause();
			}
		}
	}

	else if (CurrentLevel != 2 && (LoadedTornado == true || LoadedDECOTornado == true)) //If you leave the level and either tornado has been loaded.
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

	if (CurrentLevel == 2 && CurrentAct == 0 && CurrentCharacter == 6) //When playing as Gamma in Act 1, make the bridge invisible to simulate that it got ripped up when Sonic played the stage prior to him arriving here.
	{
		collist_008046E8[84].Flags = 0x01;
	}
	
	if (CurrentLevel != 2 && (collist_008046E8[84].Flags) == 0x01) //When you leave the level for whatever reason, and the bridge is invisible, make that shit visible!
	{
		collist_008046E8[84].Flags = 0x80000001;
	}
}

void __cdecl Load_Debris(void) //Debris loading shit.
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
			debr->Position.x = 649.074f; //The debug sphere appears in the right spot, but all the models still swirl around 0, SpawnHeight, 0.
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


void __cdecl Debris_Check(void) //Basic checking shit to make sure you're in Act 2.
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

/*void RenderWindy1Sky()
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
}*/

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
	WriteJump((void *)0x4E5C20, NewBreak_Display); //Overwriting the bridge's display function.
	WriteCall((void *)0x4DDEB6, Debris_Texture_Load);
	//WriteCall((void *)0x4FB2A8, Debris_Texture_Load);
	WriteCall((void *)0x4E5C3A, Debris_Texture_Load);
	WriteJump((void *)0x4DE3F0, NewTransitionTornado_Display); //overwriting the transition tornado's display routine.
	//WriteCall((void *)0x4E660F, TornadoDestroy); //Makes it so the debris doesn't swirl around the tornado.
<<<<<<< HEAD
	//WriteJump((void *)0x4E65C0, NewBreakBridgeMain); //overwriting the breakable bridge's main routine.
=======
	WriteJump((void *)0x4E65C0, NewBreakBridgeMain); //overwriting the breakable bridge's main routine.
>>>>>>> dba67353769f50f03f679761999f4bf7c57c2786
	

	//WriteJump((void *)0x4DDC10, sub_4DDCE0); //RHINO TANK TORNADO PARTY!!! :D
	//WriteJump((void *)0x4DDC10, sub_4DDC10); //Setting it back to normal.


	WriteData((NJS_OBJECT**)0x004DFAC9, &Particle_Tanpopo);
	WriteData((NJS_OBJECT**)0x004DFCB0, &Particle_Tanpopo);
	WriteData((float**)0x004E802D, E103_PositionData);

	//Replacing Final's skybox models with "null" object.
	*(NJS_OBJECT*)0xC05E10 = SkyNuller; 
	*(NJS_OBJECT*)0xC0655C = SkyNuller;
	*(NJS_OBJECT*)0xC06A94 = SkyNuller;
	*(NJS_OBJECT*)0xC06450 = SkyNuller;
	*(NJS_OBJECT*)0xC06344 = SkyNuller;
	*(NJS_OBJECT*)0xC0749C = SkyNuller;
	*(NJS_OBJECT*)0xC09C4C = SkyNuller;
	*(NJS_OBJECT*)0xC09294 = SkyNuller;
	*(NJS_OBJECT*)0xC0B188 = SkyNuller;
	*(NJS_OBJECT*)0xC0A60C = SkyNuller;
	*(NJS_OBJECT*)0xC0B07C = SkyNuller;
	*(NJS_OBJECT*)0xC0AB44 = SkyNuller;
	
	
	*(NJS_OBJECT*)0xC158E0 = Object_Leaf; //WcWind/PuWind/Bleaf
	*(NJS_OBJECT*)0xC159FC = Object_Leaf; //WcWind/PuWind/Bleaf
	*(NJS_OBJECT*)0xC15B2C = Object_Leaf; //WcWind/PuWind/Bleaf
	*(NJS_MODEL_SADX*)0xC158B4 = attach_0012911C; //These are model replacements for the stuff the Transition Tornado spawns, like more leaves and bridge pieces.
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
		Load_BWVSkybox();

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
