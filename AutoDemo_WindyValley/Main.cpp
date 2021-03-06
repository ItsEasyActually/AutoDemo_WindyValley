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

//Stage Info Headers
#include "PathInfo.h"
#include "StartPos.h"
#include "Tornado_Models.h"

//Objects
#include "Tanpopo_Object.h"
#include "Leaf_Models.h"
#include "TDebris.h"
#include "TorndaoBridgeParts.h"

//Functions
#include "Functions.h"

#define ReplaceBINFile(a, b) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" b ".BIN");
#define ReplacePVMFile(a, b) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" b ".PVM");

//Variables
static bool ADSetFile = true;
static bool ADDrawD = true;


static float SkyTrans = 1.0f;
bool LoadedTornado = false; //Flag to set if the Transition Tornado has been loaded or not.
SETObjData TornadoThings = {}; //Raw SET Data for the tornado stuff.
bool LoadedDECOTornado = false; //Flag to set if the Decorational Tornado has been loaded or not.
int TornadoDECOFrame = 48; //Used to get the Deco Tornado to swerve back and forth. Uses OnFrame.
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
	136,
	144,
	152,
	160,
	168,
	176,
	184,
	192,
	200,
	208,
	216,
	224,
	232,
	240,
	248,
	256,
	/*144,
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
	366,*/
	264,
	272,
	280,
	288,
	296,
	304,
	312,
	320,
	328,
	336,
	344,
	352,
	360,
	368,
	376,
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
	512 //extra frame for when framerate is >= 2.
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

static int TornUVShift1 = 0;
static int TornUVShift2 = 0;
static int TornUVShift3 = 0;

float SkyboxSpinSpeed1 = 0;
float SkyboxSpinSpeed2 = 0;
float SkyboxSpinSpeed3 = 0;

bool ClassicSpringCheat = false;


void __cdecl WVAct1_Display_new()
{
	Angle v1; // st7@8

	if (!MissedFrames)
	{
		DisableFog();
		njSetTexture(&BETAWINDY_BACK_texlist);
		njPushMatrix(0);
		if (Camera_Data1 != nullptr)
		{
			njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
		}
		njRotateY(0, (unsigned __int16)0);
		njScale(0, 1.4f, 1.4f, 1.4f);
		sub_408530(&Act1MainSkybox);
		njPushMatrix(0);
		njScale(0, 1.25f, 1.0f, 1.25f);
		njTranslate(0, 0, (Act1CloudLayer.pos[1]), 0);
		sub_408530(&Act1CloudLayer);
		njPopMatrix(1u); //cloud layer
		njPushMatrix(0);
		njTranslate(0, 0, (Act1CloudRing1.pos[1]), 0);
		v1 = SkyboxSpinSpeed1 * 65536.0 * 0.002777777777777778;
		if (v1)
		{
			njRotateY(0, (unsigned __int16)v1);
		}
		sub_408530(&Act1CloudRing1);
		njPopMatrix(1u); //cloud ring
		njPopMatrix(1u); //main model
		ToggleStageFog();
	}
}

void __cdecl WVAct2_Display_new()
{
	Angle v4; // eax@6
	Angle v5; // eax@6
	Angle v6; // eax@6
	Angle v7; // eax@6

	if (!MissedFrames)
	{
		DisableFog();
		njSetTexture(&BETAWINDY_BACK2_texlist);
		njPushMatrix(0);
		DrawQueueDepthBias = -28052.0;
		njTranslate(0, 650, -360, -200);
		njRotateY(0, (unsigned __int16)0);
		v5 = SkyboxSpinSpeed1 * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		ProcessModelNode_A_Wrapper(&Act02_Skybox2, (QueuedModelFlagsB)0, 1.0);
		njPopMatrix(1u); //model1

		njPushMatrix(0);
		DrawQueueDepthBias = -38052.0;
		njTranslate(0, 650, -360, -200);
		v6 = SkyboxSpinSpeed2 * 65536.0 * 0.002777777777777778;
		if (v6)
		{
			njRotateY(0, (unsigned __int16)v6);
		}
		ProcessModelNode_A_Wrapper(&Act02_Skybox1, (QueuedModelFlagsB)0, 1.0);
		njPopMatrix(1u); //model3

		njPushMatrix(0);
		njTranslate(0, 650, -360, -200);
		v7 = SkyboxSpinSpeed3 * 65536.0 * 0.002777777777777778;
		if (v7)
		{
			njRotateY(0, (unsigned __int16)v7);
		}
		ProcessModelNode_A_Wrapper(&Act02_Skybox3, (QueuedModelFlagsB)0, 1.0);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u); //model2
		ToggleStageFog();

	}
}

void __cdecl WVAct3_Display_new()
{
	Angle v1;
	Angle v2;
	Angle v3;

	if (!MissedFrames)
	{
		njSetTexture(&BETAWINDY_BACK3_texlist);
		DisableFog();
		njPushMatrix(0);
		if (Camera_Data1 != nullptr)
		{
			njTranslateV(0, &Camera_Data1->Position);
		}
		njRotateY(0, (unsigned __int16)0);

		v1 = SkyboxSpinSpeed1 * 65536.0 * 0.002777777777777778;
		if (v1)
		{
			njRotateY(0, (unsigned __int16)v1);
		}
		sub_408530(&Act3MainSkybox);
		njPushMatrix(0);
		v2 = SkyboxSpinSpeed2 * 65536.0 * 0.002777777777777778;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		sub_408530(&Act3CloudLayer);
		njPopMatrix(1u); //cloud layer
		njPushMatrix(0);
		v3 = SkyboxSpinSpeed3 * 65536.0 * 0.002777777777777778;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		sub_408530(&Act3CloudRing2);
		njPopMatrix(1u); //cloud ring2
		njPushMatrix(0);
		//v7 = *(float*)&v1->Object * 65536.0 * 0.002777777777777778;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		sub_408530(&Act3CloudRing);
		njPopMatrix(1u); //cloud ring
		njPopMatrix(1u); //main model
		ToggleStageFog();
	}
}

void __cdecl Display_BWVSkybox()
{
	if (CurrentLevel == 2 && EntityData1Ptrs[0])
	{
		if (CurrentAct == 0)
		{
			if (!IsGamePaused())
			{
				SkyboxSpinSpeed1 += (-0.02 * FramerateSetting);
			}
			WVAct1_Display_new();
		}
		else if (CurrentAct == 1)
		{
			if (!IsGamePaused())
			{
				SkyboxSpinSpeed1 += (-3.5f * FramerateSetting);
				SkyboxSpinSpeed2 += (-8 * FramerateSetting);
				SkyboxSpinSpeed3 += (-5 * FramerateSetting);
			}
			WVAct2_Display_new();
		}
		else if (CurrentAct == 2)
		{
			if (!IsGamePaused())
			{
				SkyboxSpinSpeed1 += (0.01 * FramerateSetting);
				SkyboxSpinSpeed2 += (0.04 * FramerateSetting);
				SkyboxSpinSpeed3 += (0.02 * FramerateSetting);
			}
			WVAct3_Display_new();
		}
	}

}


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

void __cdecl Tornado_Texture_Load() //Sets the textures for the object to Tomado.PVM.
{
	//LoadPVM("Tomado", &Tomado_texlist);
	njSetTexture(&Tomado_texlist);
}

void __cdecl ShockwaveEffect_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v5;
	Angle v4;
	Angle v3;
	Angle v6;

	v1 = a1->Data1;

	if (!MissedFrames)
	{
		DisableFog();
		Tornado_Texture_Load();
		if (Camera_Data1 != nullptr)
		{
			a1->Data1->Position = Camera_Data1->Position; //making the effect follow the camera
		}
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v6 = Camera_Data1->Rotation.y;
		if (v6)
		{
			njRotateY(0, (unsigned __int16)v6);
		}
		v4 = Camera_Data1->Rotation.x;
		if (v4)
		{
			njRotateX(0, (unsigned __int16)v4);
		}
		v3 = Camera_Data1->Rotation.z;
		if (v3)
		{
			njRotateZ(0, (unsigned __int16)v3);
		}
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if ((unsigned int)(unsigned __int64)v5)
		{
			njRotateY(0, (unsigned int)(unsigned __int64)v5);
		}
		njScale(0, 1.0f, 1.5f, 1.0f); //This needs to be scaled up a little bit more than the final's effect, since the beta model for it is smaller
		sub_409E70((NJS_MODEL_SADX*)TornadoShockwave.model, 0, 1.0);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void __cdecl ShockWaveEffect_Main(ObjectMaster *a1)
{
	auto SonicChar = EntityData1Ptrs[0];

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
					if (LoadedTornado == true && CurrentLevel == 2 && CurrentAct == 0)
					{
						if (SonicChar != nullptr && !IsGamePaused())
						{
							SonicChar->Position.x = SonicChar->Position.x + squareroot((TornadoSuck.x - SonicChar->Position.x) / 5);
							SonicChar->Position.y = TornadoSuck.y;
							SonicChar->Position.z = SonicChar->Position.z + squareroot((TornadoSuck.z - SonicChar->Position.z) / 38); //Lower this to make it suck Sonic up faster.

							while (SonicChar->Position.y > -280)
							{
								SonicChar->Position.y -= 1;
							}
							while (SonicChar->Position.x > 740)
							{
								SonicChar->Position.x -= 1;
							}
							while (SonicChar->Position.x < 380)
							{
								SonicChar->Position.x += 1;
							}
							//DisablePause();
						}
					}
					*(float*)&v1->CharIndex = -9.2f + *(float*)&v1->CharIndex;
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
		a3.y = (v1->Position.y - 110);
		a3.z = (v1->Position.z + 70); //Make it always appear in front of the tornado, hiding the base.

		if (TornadoDirection == false) //Determining how the value obtained from the array should be applied to the transformation. Basically, what direction are we going?
		{
			njTranslate(0, (TornadoPosModifier[TornadoDECOFrame]), 0, 0); //Moves to the right.
			a3.x = (434 + TornadoPosModifier[TornadoDECOFrame]); //It has to move along with the tornado.
		}

		else
		{
			njTranslate(0, -1 * (TornadoPosModifier[TornadoDECOFrame]), 0, 0); //Moves to the left.
			a3.x = (942 - TornadoPosModifier[TornadoDECOFrame]);
		}

		if (TornadoDECOFrame < 142) //Have we reached the end of the array?
		{
			(a2.x) = 0;
			(a2.y) = 1;
			(a2.z) = 0;
			if (!IsGamePaused())
			{
				sub_4B9820(&a3, &a2, 32.0); //This is the dust cloud subroutine. Easy to use. It goes: Spawn Vector, Directional Vector, Scale.
				if (FramerateSetting >= 2)
				{
					sub_4B9820(&a3, &a2, 32.0);
				}
			}
		}

		else
		{
			TornadoDECOFrame = 0;

			for (int h = 0; h < 252; h++)
			{
				vertex_00179E64[h].x = vertex_00179E64_Orig[h].x;
				vertex_00176468[h].x = vertex_00176468_Orig[h].x;
				vertex_00172A6C[h].x = vertex_00172A6C_Orig[h].x;
			}

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
		/*v2 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}*/
		DrawQueueDepthBias = -6000.0f;
		sub_407A00((NJS_MODEL_SADX *)Decor_Tornado1.model, 1.0);
		njPushMatrix(0);
		DrawModel_QueueVisible((NJS_MODEL_SADX *)Decor_Tornado2.model, (QueuedModelFlagsB)0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		DrawModel_QueueVisible((NJS_MODEL_SADX *)Decor_Tornado3.model, (QueuedModelFlagsB)0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
		DrawQueueDepthBias = 0;
	}
}

void __cdecl Deco_Tornado_Bending()
{
	for (int i = 0; i < 15; i++)
	{
		if (TornadoDirection == true)
		{
			if (TornadoDECOFrame <= 88 && TornadoDECOFrame >= 25)
			{
				if (vertex_00179E64[i].x < vertex_00179E64_bendingLEFT[i].x)
				{
					vertex_00179E64[i].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 21)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 42)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 63)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 84)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 105)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 126)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 147)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 168)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 189)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 210)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 231)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);

					vertex_00176468[i].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 21)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 42)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 63)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 84)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 105)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 126)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 147)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 168)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 189)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 210)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 231)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);

					vertex_00172A6C[i].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 21)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 42)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 63)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 84)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 105)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 126)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 147)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 168)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 189)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 210)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 231)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
				}
			}
			else if (TornadoDECOFrame >= 89)
			{
				if (vertex_00179E64[i].x > vertex_00179E64_Orig[i].x)
				{
					vertex_00179E64[i].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 21)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 42)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 63)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 84)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 105)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 126)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 147)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 168)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 189)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 210)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 231)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);

					vertex_00176468[i].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 21)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 42)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 63)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 84)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 105)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 126)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 147)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 168)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 189)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 210)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 231)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);

					vertex_00172A6C[i].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 21)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 42)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 63)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 84)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 105)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 126)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 147)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 168)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 189)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 210)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 231)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
				}
			}
		}
		else
		{
			if (TornadoDECOFrame <= 88 && TornadoDECOFrame >= 25)
			{
				if (vertex_00179E64[i].x > vertex_00179E64_bendingRIGHT[i].x)
				{
					vertex_00179E64[i].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 21)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 42)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 63)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 84)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 105)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 126)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 147)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 168)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 189)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 210)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 231)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);

					vertex_00176468[i].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 21)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 42)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 63)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 84)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 105)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 126)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 147)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 168)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 189)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 210)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 231)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);

					vertex_00172A6C[i].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 21)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 42)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 63)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 84)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 105)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 126)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 147)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 168)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 189)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 210)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 231)].x -= ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
				}
			}
			else if (TornadoDECOFrame >= 89)
			{
				if (vertex_00179E64[i].x < vertex_00179E64_Orig[i].x)
				{
					vertex_00179E64[i].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 21)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 42)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 63)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 84)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 105)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 126)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 147)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 168)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 189)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 210)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00179E64[(i + 231)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);

					vertex_00176468[i].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 21)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 42)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 63)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 84)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 105)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 126)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 147)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 168)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 189)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 210)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00176468[(i + 231)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);

					vertex_00172A6C[i].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 21)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 42)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 63)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 84)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 105)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 126)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 147)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 168)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 189)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 210)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
					vertex_00172A6C[(i + 231)].x += ((0.45 * i) + (4 / (i + 1.8)) + 0.5);
				}
			}
		}
	}
}

void __cdecl Deco_Tornado_Main(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1

	if (LoadedTornado == true || (CurrentLevel == 2 && CurrentAct != 0) || CurrentLevel != 2)
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
					Deco_Tornado_Bending();
					DecoTornado_Display(a2);

					if (GameState != 16)
					{
						TornUVShift3 = (TornUVShift3 + 35) % 255;
						TornUVShift1 = (TornUVShift1 + 45) % 255;
						TornUVShift2 = (TornUVShift2 + 55) % 255;

						for (unsigned int q = 0; q < LengthOfArray(uv_001713D4); q++)
						{
							uv_001713D4[q].u = uv_001713D4_1[q].u + TornUVShift1;
						}
						for (unsigned int p = 0; p < LengthOfArray(uv_00174DD0); p++)
						{
							uv_00174DD0[p].u = uv_00174DD0_1[p].u + TornUVShift2;
						}
						for (unsigned int r = 0; r < LengthOfArray(uv_001787CC); r++)
						{
							uv_001787CC[r].u = uv_001787CC_1[r].u + TornUVShift3;
						}
					}

					if (!IsGamePaused() && GameState != 3 && GameState != 4 && GameState != 7 && GameState != 21)
					{
						TornadoDECOFrame++;
					}
					//*(float*)&v1->CharIndex = -24.6f + *(float*)&v1->CharIndex;
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

void __cdecl Load_DecoTornado()
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
			Torn->Position.x = 434; //Finally found the coordinates! Y value didn't work out so well, so I kept the one I had. The intended Y value makes it float, so....who knows how it works.
			Torn->Position.y = -245.87912f; //Actual intended value: 91.022217
			Torn->Position.z = -3500; //Still not sure on values of the shockwave effect, though I did see coding for it. Not sure what the coding does, specifically.
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
		DrawQueueDepthBias = -6000.0f;
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
		DrawQueueDepthBias = 0;

		(a3.y) = (v1->Position.y + 30);
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
				if (FramerateSetting >= 2)
				{
					sub_4B9820(&a3, &a2, 30.0);
				}
				TransTornadoDust = false;
			}

			else
			{
				TransTornadoDust = true;
			}
		}
		ToggleStageFog();

		if (a1->Data1->Position.z > -2500)
		{
			TornadoSuck.x = a1->Data1->Position.x;
			TornadoSuck.z = a1->Data1->Position.z - 10;
		}
	}
}

void __cdecl Load_Tornado()
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
			Torn->Position.x = 750; //Finally found the coordinates! Z value didn't work so well, so I kept the one I had.
			Torn->Position.y = -374;
			Torn->Position.z = -3467.09546f; //Actual intended value: -3273
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

void __cdecl Load_Tornado_Shockwave()
{
	ObjectMaster *a1;
	EntityData1 *Wave;

	TornadoThings.Distance = 2250000.0f;
	a1 = LoadObject((LoadObj)2, 3, ShockWaveEffect_Main);
	a1->SETData.SETData = &TornadoThings;
	if (a1)
	{
		Wave = a1->Data1;
		Wave->Position.x = 750; //Again, position is just a guess.
		Wave->Position.y = -374;
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
		//njTranslateV(0, &v1->Position); //This is not needed, since the position is being set directly when the pieces load.
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
	}
}

void __cdecl NewBreakBridgeMain(ObjectMaster *a1) //Hijacking the main routine of the tornado bridge object.
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
	auto entity = EntityData1Ptrs[0];

	if (CurrentLevel != 2 || (CurrentLevel == 2 && CurrentAct != 0) || entity == nullptr) //Failsafe delete thing.
	{
		DeleteObjectMaster(a1);
		DeleteChildObjects(a1);
	}

	else
	{
		v1 = a1;
		v2 = a1->Data1;

		if (!ClipObject(a1, 2250000.0))
		{
			if (v2->Action)
			{
				if (v2->Action == 1)
				{
					if (++v2->InvulnerableTime <= 0x58u) //This used to be much higher. 258. However, it seems that the game can only handle so many child objects being run at once. And it's strict, crashing if it's overloaded. This was lowered so the debris doesn't spend a lot of time swirling around. The child objects despawn quicker.
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
				NewBreak_Display(v1);
			}
		}
	}
}

void __cdecl ChildBridge_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@1
	Angle v3; // eax@3

	v1 = a2->Data1;
	Debris_Texture_Load();
	njPushMatrix(0);
	njTranslate(0, (v1->Position.x), (v1->Position.y), (v1->Position.z));
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
	//ProcessModelNode_AB_Wrapper((&(TBRIDGE[(int)a2->Parent->Data1->Scale.z])), 1.0);
	//sub_407A00((NJS_MODEL_SADX *)&(TBRIDGE[(int)a2->Parent->Data1->Scale.z]).model, 1.0);
	DrawModel(*(NJS_MODEL_SADX **)(&(TBRIDGE[(int)a2->Parent->Data1->Scale.z]).model)); //Of all the draw routines I tried, this one is the one that works. I think maybe there's layering issues? But I can't really tell by looking at it. ....Nor do I really care, to be honest. Just happy that this works as well as it does.
	njPopMatrix(1u);
}

void __cdecl ChildBridgeMain(ObjectMaster *a2)
{
	ObjectMaster *v1; // ebp@1
	EntityData2 *v2; // ecx@1
	EntityData1 *v3; // esi@1
	float *v4; // ebx@1
	double v5; // st7@7
	int v6; // eax@8
	double v7; // st7@8
	double v8; // st7@10
	double v9; // st7@13
	int v10; // ecx@15
	double v11; // st7@18
	int v12; // edx@18
	int v13; // eax@18
	int v14; // edi@20
	int v15; // ebx@20
	float v16; // [sp+10h] [bp-14h]@1
	float v17; // [sp+14h] [bp-10h]@1
	float v18; // [sp+18h] [bp-Ch]@1
	float v19; // [sp+1Ch] [bp-8h]@1
	float v20; // [sp+20h] [bp-4h]@1
	float a2a; // [sp+28h] [bp+4h]@1

	v1 = a2;
	v2 = (EntityData2 *)a2->Data2;
	v3 = a2->Data1;
	v16 = v3->Position.x;
	v17 = v3->Position.y;
	v18 = v3->Position.z;
	a2a = (v2->VelocityDirection.y);
	v19 = v2->VelocityDirection.x;
	v4 = &v2->VelocityDirection.x;
	v20 = v2->VelocityDirection.z;
	switch (*(char *)v3) //Yeah, I really don't know what all this is doing for the most part. Obviously it's what makes it swirl around the tornado, but the details are blurred to my eyes.
	{
	case 2:
		if (!--v3->InvulnerableTime)
		{
			v3->InvulnerableTime = 0;
			v3->Action = 3;
		}
		if (v3->LoopData && v3->LoopData != (Loop *)0x1)
		{
			if (*(float *)v3->LoopData == 1.0f)
			{
				v3->InvulnerableTime = 0;
				v3->Action = 3;
			}
		}
		ChildBridge_Display(v1);
		goto LABEL_20;
	case 3:
		v5 = v19;
		if (v3->LoopData)
		{
			v3->Rotation.y += v2->field_2C;
			v16 = v5 * 3.0 + v16;
			v3->Rotation.x += v2->field_28;
			v17 = *(float *)&a2a * 3.0 + v17;
			v18 = v20 * 3.0 + v18;
			v8 = *(float *)&a2a - 0.1;
			*(float *)&a2a = v8;
			if (v8 < 0.0)
			{
				*(char *)v3 = 4;
			}
		}
		else
		{
			v6 = v3->Rotation.x;
			v16 = v5 + v16;
			v3->Rotation.y += v2->field_2C;
			v3->Rotation.x = v2->field_28 + v6;
			v17 = *(float *)&a2a + v17;
			v18 = v20 + v18;
			v7 = *(float *)&a2a - 0.1;
			*(float *)&a2a = v7;
			if (v7 < 0.0)
			{
				v3->Action = 5;
				v3->CharIndex = 692;
				ChildBridge_Display(v1);
				goto LABEL_20;
			}
		}
		ChildBridge_Display(v1);
	LABEL_20:
		v3->Position.x = v16;
		v14 = (int)&v3->Position.y;
		*(float *)v14 = v17;
		*(float *)(v14 + 4) = v18;
		*v4 = v19;
		v15 = (int)(v4 + 1);
		*(float *)v15 = *(float *)&a2a;
		*(float *)(v15 + 4) = v20;
		return;
	case 4:
		v9 = *(float *)&a2a - 0.14;
		*(float *)&a2a = v9;
		if (v9 < -0.12)
		{
			*(float *)&a2a = -0.12;
		}
		v3->Rotation.y += v2->field_2C;
		v10 = v2->field_28 + v3->Rotation.x;
		++v3->InvulnerableTime;
		v16 = v19 + v19 + v16;
		v3->Rotation.x = v10;
		v17 = *(float *)&a2a * 7.0 + v17;
		v18 = v20 + v20 + v18;
		ChildBridge_Display(v1);
		goto LABEL_20;
	case 5:
		if (++v3->InvulnerableTime > 0xE1u)
		{
			v3->Action = 6;
		}
		v11 = v3->CharIndex + 3.0;
		v12 = v3->Rotation.x;
		v3->Rotation.y += v2->field_2C;
		v13 = v2->field_28;
		v3->CharIndex = v11;
		v3->Rotation.x = v13 + v12;
		v16 = njSin((unsigned __int64)(v11 * 65536.0 * 0.002777777777777778)) * 3.4000001 + v16;
		v17 = v17 + 0.1;
		v18 = njCos((unsigned __int64)(v3->CharIndex * 65536.0 * 0.002777777777777778)) * 3.4000001 + v18;
		ChildBridge_Display(v1);
		goto LABEL_20;
	case 6:
		v1->DisplaySub = 0;
		goto LABEL_20;
	default:
		goto LABEL_20;
	}
}

void __cdecl BridgeChildLoad(ObjectMaster *a2) //Hijacking the function used when loading a child object from the bridge object.
{
	ObjectMaster *v1; // edi@1
	EntityData1 *v2; // esi@1
	EntityData2 *v3; // ebp@1
	double v4; // st7@1
	float *v5; // ebx@8
	int v6; // eax@9
	double v7; // st7@9
	int v8; // eax@10
	ObjectMaster *a2a; // [sp+14h] [bp+4h]@1
	ObjectMaster *a2b; // [sp+14h] [bp+4h]@9

	v1 = a2;
	v2 = a2->Data1;
	v3 = (EntityData2 *)a2->Data2;
	v2->InvulnerableTime = 0;
	a2a = (ObjectMaster *)rand();
	*(char *)v2 = 2;
	v4 = (double)(signed int)a2a * 0.000030517578;
	if (v4 <= 0.60000002) //Bunch of shit I don't know what it's doing.
	{
		if (v4 <= 0.75)
		{
			if (v4 <= 0.94999999)
			{
				v2->InvulnerableTime = 5;
			}
			else
			{
				v2->InvulnerableTime = 3;
			}
		}
		else
		{
			v2->InvulnerableTime = 2;
		}
	}
	else
	{
		v2->InvulnerableTime = 0;
		v2->Action = 3;
	}
	v5 = (float *)v1->Parent->Data1;
	if (v2->LoopData)
	{
		v3->VelocityDirection.x = (double)rand() * 0.000030517578 * v5[11];
		v8 = rand();
		v3->VelocityDirection.y = (double)v8 * 0.000030517578 + (double)v8 * 0.000030517578;
		v7 = (double)rand() * 0.000030517578 * v5[13];
	}
	else
	{
		v6 = rand();
		v3->VelocityDirection.x = (double)v6 * 0.000030517578 + (double)v6 * 0.000030517578;
		v3->VelocityDirection.y = (double)rand() * 0.000030517578 * 1.5 + 2.5;
		a2b = (ObjectMaster *)rand();
		v7 = (double)(signed int)a2b * 0.000030517578 + (double)(signed int)a2b * 0.000030517578;
	}
	v3->VelocityDirection.z = v7;
	v3->field_2C = (unsigned __int64)(((double)rand() * 0.000030517578 - 0.5) * 1800.0);
	v3->field_28 = (unsigned __int64)(((double)rand() * 0.000030517578 - 0.5) * 3000.0);
	if (CurrentLevel == 2) //This is also super important. A level check, so that this function doesn't interefere with other levels. From what I've tested, anything else that uses these functions doesn't crash or crap-out with this coding, but further testing should be done throughout the game, just to make sure.
	{
		v1->MainSub = ChildBridgeMain;
		v1->DisplaySub = ChildBridge_Display;
		v1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
		ChildBridge_Display(v1);
	}
	else //Also, for clarification, this function isn't the one that is used by other levels. The below Main and Display functions are, however.
	{
		v1->MainSub = sub_4E5D90;
		v1->DisplaySub = sub_4FB2A0;
		v1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
		sub_4FB2A0(v1);
	}
}

void __cdecl Load_TBridge()
{
	ObjectMaster *a1;
	EntityData1 *Torn;
	if (LoadedBridge == false)
	{
		collist_008046E8[84].Flags = 0x01;	//This makes the landtable bridge invisible.
		TornadoThings.Distance = 40000000.0f;

		for (BridgeFrame = 0; BridgeFrame < 335; BridgeFrame++) //Looping through the array of NJS_OBJECTS for the bridge pieces.
		{
			a1 = LoadObject((LoadObj)2, 4, sub_4E6770);
			a1->SETData.SETData = &TornadoThings;
			if (a1)
			{
				Torn = a1->Data1;
				Torn->Position.x = (TBRIDGE[BridgeFrame]).pos[0];
				Torn->Position.y = (TBRIDGE[BridgeFrame]).pos[1];
				Torn->Position.z = (TBRIDGE[BridgeFrame]).pos[2];
				Torn->Rotation.x = (TBRIDGE[BridgeFrame]).ang[0];
				Torn->Rotation.y = (TBRIDGE[BridgeFrame]).ang[1];
				Torn->Rotation.z = (TBRIDGE[BridgeFrame]).ang[2];
				Torn->Scale.x = 1.0f;
				Torn->Scale.y = 1.0f;
				Torn->Scale.z = BridgeFrame; //This is important. This is like the object's "ID". The Z Scale is used later to get the child objects displaying correctly.
				Torn->CharIndex = (BridgeFrame + 12);
			}
		}
	}
	LoadedBridge = true;
}

void __cdecl Tornado_Check() //This is the big one. The main chunk of the stage function nonsense.
{
	auto PlayChar = EntityData1Ptrs[0];
	
	if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
	{
		if (CurrentLevel == 2 && PlayChar == nullptr)
		{
			SkyboxSpinSpeed1 = 0;
			SkyboxSpinSpeed2 = 0;
			SkyboxSpinSpeed3 = 0;
		}

		if (PlayChar != nullptr && PlayChar->Position.z > -1700 && (LoadedTornado == true || LoadedDECOTornado == true))
		{
			LoadedTornado = false; //Basically, if you reset after either tornado has been loaded, and you appear further back, reset everything. For some baffling reason, not checking for that distance away (1700), the transiton tornado won't load. Are the gamestates being changed when that thing appears?
			LoadedWave = false;
			WaveFrame = 0;
			collist_008046E8[84].Flags = 0x80000001;
			LoadedBridge = false;
			LoadedDECOTornado = false;
			TornadoDECOFrame = 48;
			TornadoDirection = false;
			BridgeFrame = 0;
			TransTornadoDust = false;
			TornUVShift3 = 0;
			TornUVShift1 = 0;
			TornUVShift2 = 0;
			TornadoSuck.x = 692.156555f;
			TornadoSuck.z = -3467.09546f;

			for (int h = 0; h < 252; h++)
			{
				vertex_00179E64[h].x = vertex_00179E64_Orig[h].x;
				vertex_00176468[h].x = vertex_00176468_Orig[h].x;
				vertex_00172A6C[h].x = vertex_00172A6C_Orig[h].x;
			}
		}
	}

	if (CurrentLevel == 2 && CurrentAct == 0 && CurrentCharacter != 6) //Make sure you're in Act 1 and NOT Gamma.
	{
		if (PlayChar != nullptr && PlayChar->Position.z < -2450 && PlayChar->Position.y > -350 && LoadedTornado == false) //If you reach the air vent and the tornado and bridge haven't been loaded in yet.
		{
			Load_Tornado();
			Load_Tornado_Shockwave();
			Load_TBridge();
		}

		if (PlayChar != nullptr && PlayChar->Position.z < -2000 && PlayChar->Position.y > -460) //Loading the swerving tornado
		{
			Load_DecoTornado();
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
		TornadoDECOFrame = 48;
		TornadoDirection = false;
		BridgeFrame = 0;
		TransTornadoDust = false;
		TornUVShift3 = 0;
		TornUVShift1 = 0;
		TornUVShift2 = 0;
		TornadoSuck.x = 692.156555f;
		TornadoSuck.z = -3467.09546f;
		SkyboxSpinSpeed1 = 0;
		SkyboxSpinSpeed2 = 0;
		SkyboxSpinSpeed3 = 0;

		for (int h = 0; h < 252; h++)
		{
			vertex_00179E64[h].x = vertex_00179E64_Orig[h].x;
			vertex_00176468[h].x = vertex_00176468_Orig[h].x;
			vertex_00172A6C[h].x = vertex_00172A6C_Orig[h].x;
		}
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

void __cdecl MagatamaDebris_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v3; // eax@2
	Angle v4; // eax@4
	Angle v5; // eax@6

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		Debris_Texture_Load();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v3 = v1->Rotation.z;
		if (v3)
		{
			njRotateZ(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.x;
		if (v4)
		{
			njRotateX(0, (unsigned __int16)v4);
		}
		v5 = v1->Rotation.y;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}

		sub_407A00(v1->Object->basicdxmodel, 1.0);
		njPopMatrix(1u);
	}
}

void __cdecl MagatamaDebris(ObjectMaster *a1)
{
	EntityData1 *v1;
	double v2; // st7@7
	Angle v3; // edi@7
	int v4; // edi@7
	double v5; // st7@7
	int v6; // rax@7
	int v9; // rax@7
	int v7; // eax@8
	long double v8; // st7@8
	NJS_MODEL_SADX *v10; // ebx@1

	v1 = a1->Data1;

	if (CurrentLevel != 2 || (CurrentLevel == 2 && CurrentAct != 1) || v1->Position.y >= 1700)
	{
		if (a1)
		{
			a1->DisplaySub = 0;
			DeleteObjectMaster(a1);
		}
	}

	else
	{
		if (v1->Action)
		{
			if (v1->Action == 1 && v1->Position.y < 1720)
			{
				if (v1->Object == &object_0016D290 || v1->Object == &object_0016E528 || v1->Object == &object_0016EA18) //Average-sized pieces
				{
					v2 = (double)(signed int)(*((float *)v1 + 12) * 1.5 + 6.0) + *((float *)v1 + 2);
				}														// ^  This value controls how fast the debris move around. Higher makes them faster, lower makes them slower. 8.0 is original value.
				else if (v1->Object == &object_0016C21C || v1->Object == &object_0016CF08 || v1->Object == &object_0016DF08 || v1->Object == &object_0016F8AC) //Big pieces
				{
					v2 = (double)(signed int)(*((float *)v1 + 12) * 3.5 + 4.5111828) + *((float *)v1 + 2);
				}
				else //Tiny pieces
				{
					v2 = (double)(signed int)(*((float *)v1 + 12) * 8.0 + 5.92273662) + *((float *)v1 + 2);
				}
				*((float *)v1 + 2) = v2;
				v3 = (v2 * 65536.0 * 0.002777777777777778);
				*((float *)v1 + 8) = 650 + njCos(v3) * 90.0; //These fix the positioning of the debris; this one, and the one below it. (650 and -200)
				*((float *)v1 + 10) = -200 + njSin(v3) * 90.0;
				*((float *)v1 + 9) = fabs((double)rand() * 0.000030517578) * 3.4000001 + *((float *)v1 + 12) * 1.3 + *((float *)v1 + 9);
				v4 = ((*((float *)v1 + 12) + *((float *)v1 + 12)) * 65536.0 * -0.002777777777777778);
				v5 = *((float *)v1 + 12) * 5.0 * 65536.0;
				*((_DWORD *)v1 + 5) -= v4;
				v6 = (v5 * 0.002777777777777778);
				v9 = *((_DWORD *)v1 + 7) - v4;
				*((_DWORD *)v1 + 6) += v6;
				*((_DWORD *)v1 + 7) = v9;
				MagatamaDebris_Display(a1);
			}
		}
		else
		{
			v1->Action = 1;
			v7 = rand();
			*((_DWORD *)v1 + 8) = 0;
			*((_DWORD *)v1 + 10) = 0;
			v8 = (double)v7 * 0.000030517578;
			*((float *)v1 + 12) = fabs(v8);
			*((float *)v1 + 2) = (double)(signed int)(v8 * 360.0);
			a1->DisplaySub = MagatamaDebris_Display;
		}
	}
}



void __cdecl MagatamaBreak(NJS_VECTOR SpawnPos)
{
	ObjectMaster *a1;
	SETObjData MagatamaSetting = {};
	EntityData1 *Stone;

	MagatamaSetting.Distance = 200000.0f;


	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016F8AC;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016EE58;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016EC38;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016EA18;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016E528;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016E128;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016DF08;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016D6D0;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016D4B0;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016D290;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016CF08;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016C43C;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016C21C;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016B930;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}

	a1 = LoadObject((LoadObj)2, 3, MagatamaDebris);
	a1->SETData.SETData = &MagatamaSetting;
	a1->Data1->Object = &object_0016B710;
	if (a1)
	{
		Stone = a1->Data1;
		Stone->Position.x = SpawnPos.x;
		Stone->Position.y = SpawnPos.y;
		Stone->Position.z = SpawnPos.z;
		Stone->Rotation.x = 0;
		Stone->Rotation.y = 0;
		Stone->Rotation.z = 0;
		Stone->Scale.x = 1.0f;
		Stone->Scale.y = 1.0f;
		Stone->Scale.z = 1.0f;
		a1->MainSub = MagatamaDebris;
	}
}

void __cdecl DebrisDisplay(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	NJS_MODEL_SADX *v2; // ebx@1
	Angle v3; // eax@2
	Angle v4; // eax@4
	Angle v5; // eax@6

	v1 = a1->Data1;
	v2 = (NJS_MODEL_SADX *)*((_DWORD *)v1 + 4);
	if (!MissedFrames)
	{
		Debris_Texture_Load();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v3 = v1->Rotation.z;
		if (v3 && v1->Scale.z != 0.01f) //Checking to see if we actually have the magatama rock or giant pillar.
		{
			njRotateZ(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.x;
		if (v4 && v1->Scale.z != 0.01f)//Checking to see if we actually have the magatama rock or giant pillar.
		{
			njRotateX(0, (unsigned __int16)v4);
		}
		v5 = v1->Rotation.y;
		if (v5 && (v2 != &*(NJS_MODEL_SADX*)0xC2AF1C && v1->Scale.z != 0.01f))//Checking to see if we actually have the magatama rock.
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		//DrawModel_QueueVisible(v2, (QueuedModelFlagsB)0, 1.0);


		if (v2 == &*(NJS_MODEL_SADX*)0xC2AF1C && v1->Scale.z != 0.01f) //Magatam rock's alternate selection (L-Shaped wood)
		{
			sub_407A00(&attach_0016FB78, 1.0);
			njPopMatrix(1u);
		}

		else if (v2 == &*(NJS_MODEL_SADX*)0xC2AF1C) //Normal magatama rock
		{
			ProcessModelNode_AB_Wrapper(&object_0016F8E0, 1.0);
			njPopMatrix(1u);
		}

		else if (v2 == &*(NJS_MODEL_SADX*)0xC2CAF8) //Rendering tree with leaves
		{
			//ProcessModelNode_AB_Wrapper(&object_0019E788, 1.0);
			ProcessModelNode_A_WrapperB(&object_0019E788, (QueuedModelFlagsB)0); //Fixing transparency issues
			njPopMatrix(1u);
		}

		else if (v2 == &*(NJS_MODEL_SADX*)0xC2C2E8 && v1->Scale.z == 0.01f) //Tiny wooden triangle's alternate selection (Giant pillar)
		{
			sub_407A00(&attach_001A0724, 1.0);
			njPopMatrix(1u);
		}
		else
		{
			DrawModel_407FC0(v2, (QueuedModelFlagsB)0); //Everything else (Borrowing from PkR to render the blade of grass correctly without transparency issues)
			sub_407A00(v2, 1.0); //Everything else
			njPopMatrix(1u);
		}
	}
}

void __cdecl HypotheticalDebris(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	double v2; // st7@7
	Angle v3; // edi@7
	int v4; // edi@7
	double v5; // st7@7
	int v6; // rax@7
	int v9; // rax@7
	int v7; // eax@8
	long double v8; // st7@8
	NJS_MODEL_SADX *v10; // ebx@1
	int v11;
	NJS_VECTOR a2; //used for dust for Magatama rock when it breaks.

	a2.x = 0;
	a2.y = 2;
	a2.z = 0;

	if (CurrentLevel != 2 || (CurrentLevel == 2 && CurrentAct != 1))
	{
		DeleteObjectMaster(a1);
	}

	else
	{
		v1 = a1->Data1;
		v10 = (NJS_MODEL_SADX *)*((_DWORD *)v1 + 4);
		if (v10 == &*(NJS_MODEL_SADX*)0xC2AF1C && v1->Scale.z != 0 && a1->Parent->Data1->InvulnerableTime == 0xFE) //Magatama destruction sequence
		{
			PlaySound(64, 0, 0, 0);
			sub_4B9820(&v1->Position, &a2, 18.0); //make dust?
			MagatamaBreak(a1->Data1->Position);
			a1->DisplaySub = 0;
			DeleteObjectMaster(a1);
		}

		else if (v1->Action)
		{
			if (v1->Action == 1 && v1->Position.y < 1720)
			{
				if (v10 == &*(NJS_MODEL_SADX*)0xC2AF1C && v1->Scale.z != 0)
				{
					v2 = (double)(signed int)(*((float *)v1 + 12) * 1.5 + 6.0) + *((float *)v1 + 2); //Magatama rock speed
				}														// ^  This value controls how fast the debris move around. Higher makes them faster, lower makes them slower. 8.0 is original value.
				else if (v10 == &*(NJS_MODEL_SADX*)0xC2C2E8 && v1->Scale.z != 0)
				{
					v2 = (double)(signed int)(*((float *)v1 + 12) * 1.5 + 5.5111828) + *((float *)v1 + 2); //Big pillar speed
				}
				else
				{
					v2 = (double)(signed int)(*((float *)v1 + 12) * 1.5 + 7.0) + *((float *)v1 + 2);
				}
				*((float *)v1 + 2) = v2;
				v3 = (v2 * 65536.0 * 0.002777777777777778);
				*((float *)v1 + 8) = 650 + njCos(v3) * 90.0; //These fix the positioning of the debris; this one, and the one below it. (650 and -200)
				*((float *)v1 + 10) = -200 + njSin(v3) * 90.0;
				*((float *)v1 + 9) = fabs((double)rand() * 0.000030517578) * 3.4000001 + *((float *)v1 + 12) * 1.3 + *((float *)v1 + 9);
				v4 = ((*((float *)v1 + 12) + *((float *)v1 + 12)) * 65536.0 * -0.002777777777777778);
				v5 = *((float *)v1 + 12) * 5.0 * 65536.0;
				*((_DWORD *)v1 + 5) -= v4;
				v6 = (v5 * 0.002777777777777778);
				v9 = *((_DWORD *)v1 + 7) - v4;
				*((_DWORD *)v1 + 6) += v6;
				*((_DWORD *)v1 + 7) = v9;
				DebrisDisplay(a1);
			}
		}
		else
		{
			if (v10 == &*(NJS_MODEL_SADX*)0xC2AF1C && !v1->Action)
			{
				v11 = rand();

				while (v11 > 999)
				{
					v11 -= 720;
				}

				if ((v11 % 14) == 0) //Randomly selecting the Magatama Rock
				{
					v1->Scale.z = 0.01f;
				}
			}

			else if (v10 == &*(NJS_MODEL_SADX*)0xC2C2E8 && !v1->Action)
			{
				v11 = rand();

				while (v11 > 999)
				{
					v11 -= 720;
				}

				if ((v11 % 5) == 0) //Randomly selecting the Giant Pillar
				{
					v1->Scale.z = 0.01f;
				}
			}
			v1->Action = 1;
			v7 = rand();
			*((_DWORD *)v1 + 8) = 0;
			*((_DWORD *)v1 + 10) = 0;
			v8 = (double)v7 * 0.000030517578;
			*((float *)v1 + 12) = fabs(v8);
			*((float *)v1 + 2) = (double)(signed int)(v8 * 360.0);
			a1->DisplaySub = DebrisDisplay;
		}
	}
}

void __cdecl Load_Debris()
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
			debr->Position.x = 650.0f;
			debr->Position.y = -353.486f;
			debr->Position.z = -200.0f;
			debr->Rotation.x = 0;
			debr->Rotation.y = 0;
			debr->Rotation.z = 0;
			debr->Scale.x = 1.0f;
			debr->Scale.y = 1.0f;
			debr->Scale.z = 1.0f;
			debr->CharIndex = 8;
		}

		a1 = LoadObject((LoadObj)2, 3, sub_4DF7D0);
		a1->SETData.SETData = &DebrisThings;
		if (a1)
		{
			debr = a1->Data1;
			debr->Position.x = 650.0f;
			debr->Position.y = 53.486f;
			debr->Position.z = -200.0f;
			debr->Rotation.x = 0;
			debr->Rotation.y = 0;
			debr->Rotation.z = 0;
			debr->Scale.x = 1.0f;
			debr->Scale.y = 1.0f;
			debr->Scale.z = 1.0f;
			debr->CharIndex = 8;
		}

		a1 = LoadObject((LoadObj)2, 3, sub_4DF7D0);
		a1->SETData.SETData = &DebrisThings;
		if (a1)
		{
			debr = a1->Data1;
			debr->Position.x = 650.0f;
			debr->Position.y = 453.486f;
			debr->Position.z = -200.0f;
			debr->Rotation.x = 0;
			debr->Rotation.y = 0;
			debr->Rotation.z = 0;
			debr->Scale.x = 1.0f;
			debr->Scale.y = 1.0f;
			debr->Scale.z = 1.0f;
			debr->CharIndex = 8;
		}

		a1 = LoadObject((LoadObj)2, 3, sub_4DF7D0);
		a1->SETData.SETData = &DebrisThings;
		if (a1)
		{
			debr = a1->Data1;
			debr->Position.x = 650.0f;
			debr->Position.y = 853.486f;
			debr->Position.z = -200.0f;
			debr->Rotation.x = 0;
			debr->Rotation.y = 0;
			debr->Rotation.z = 0;
			debr->Scale.x = 1.0f;
			debr->Scale.y = 1.0f;
			debr->Scale.z = 1.0f;
			debr->CharIndex = 8;
		}

		a1 = LoadObject((LoadObj)2, 3, sub_4DF7D0);
		a1->SETData.SETData = &DebrisThings;
		if (a1)
		{
			debr = a1->Data1;
			debr->Position.x = 650.0f;
			debr->Position.y = 1353.486f;
			debr->Position.z = -200.0f;
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

int __cdecl WindCheck()
{
	return 0;
}

void __cdecl SecretSpringCheck(ObjectMaster *a1)
{
	if (ClassicSpringCheat == true)
	{
		JamSpring_Main(a1);
	}

	else
	{
		Spring_Main(a1);
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
	{ 2, 3, 0, 0, 0, Ring_Main, "RING   " } /* "RING   " */,							//00
	{ 2, 2, 0, 0, 0, SecretSpringCheck, "SPRING " } /* "SPRING " */,					//01 Cheat code? :3
	{ 2, 2, 0, 0, 0, SpringB_Main, "SPRINGB" } /* "SPRINGB" */,							//02
	{ 3, 3, 0, 0, 0, DashPanel_Main, "O AXPNL" } /* "O AXPNL" */,						//03
	{ 6, 3, 0, 0, 0, SwingSpikeBall_Load, "O IRONB" } /* "O IRONB" */,					//04
	{ 2, 3, 0, 0, 0, FallingSpikeBall_Load, "O FeBJG" } /* "O FeBJG" */,				//05
	{ 2, 3, 0, 0, 0, Spikes_Main, "O TOGE" } /* "O TOGE" */,							//06
	{ 3, 3, 0, 0, 0, EmeraldPiece_Load, "O EME P" } /* "O EME P" */,					//07	
	{ 2, 3, 0, 0, 0, Capsule_Load, "O RELEASE" } /* "O RELEASE" */,						//08
	{ 6, 3, 0, 0, 0, Switch_Main, "O SWITCH" } /* "O SWITCH" */,						//09
	{ 10, 3, 0, 0, 0, Weed_Main, "CMN KUSA" } /* "CMN KUSA" */,							//0A
	{ 6, 3, 0, 0, 0, DashHoop_Main, "CMN_DRING" } /* "CMN_DRING" */,					//0B
	{ 2, 3, 0, 0, 0, Balloon_Main, "O BALOON" } /* "O BALOON" */,						//0C
	{ 2, 3, 0, 0, 0, ItemBox_Main, "O ITEMBOX" } /* "O ITEMBOX" */,						//0D
	{ 6, 2, 0, 0, 0, RocketH_Main, "Rocket H" } /* "Rocket H" */,						//0E
	{ 6, 2, 0, 0, 0, RocketHS_Main, "Rocket HS" } /* "Rocket HS" */,					//0F
	{ 6, 2, 0, 0, 0, RocketV_Main, "Rocket V" } /* "Rocket V" */,						//10
	{ 6, 2, 0, 0, 0, RocketVS_Main, "Rocket VS" } /* "Rocket VS" */,					//11
	{ 2, 2, 1, 4000000, 0, JumpPanel_Load, "O JPanel" } /* "O JPanel" */,				//12
	{ 15, 6, 0, 0, 0, CheckPoint_Main, "O Save Point" } /* "O Save Point" */,			//13
	{ 2, 3, 0, 0, 0, Wall_Main, "WALL   " } /* "WALL   " */,							//14
	{ 3, 2, 1, 1150000, 0, Trampoline_Main, "TRAMPOL" } /* "TRAMPOL" */,				//15
	{ 2, 2, 1, 450000, 0, BLeaf, "B LEAF " } /* "B LEAF " */,							//16
	{ 2, 2, 1, 550000, 0, WcWind, "WC WIND" } /* "WC WIND" */,							//17
	{ 2, 2, 0, 0, 0, PuWind, "PU WIND" } /* "PU WIND" */,								//18
	{ 2, 4, 1, 1150000, 0, Load_Prope1, "PROPE1 " } /* "PROPE1 " */,					//19
	{ 2, 4, 1, 1150000, 0, Load_Prope2, "PROPE2 " } /* "PROPE2 " */,					//1A
	{ 2, 4, 1, 1150000, 0, Load_Prope3, "PROPE3 " } /* "PROPE3 " */,					//1B
	{ 2, 5, 1, 450000, 0, Load_Flower0, "FLOWER0" } /* "FLOWER0" */,					//1C
	{ 2, 5, 1, 450000, 0, Load_Flower1, "FLOWER1" } /* "FLOWER1" */,					//1D
	{ 2, 5, 1, 450000, 0, Load_Green0, "GREEN 0" } /* "GREEN 0" */,						//1E
	{ 2, 4, 1, 1050000, 0, Load_WKi1, "W KI1  " } /* "W KI1  " */,						//1F
	{ 2, 4, 1, 1050000, 0, Load_WKi2, "W KI2  " } /* "W KI2  " */,						//20
	{ 2, 5, 1, 450000, 0, Load_WKusa1, "W KUSA1" } /* "W KUSA1" */,						//21
	{ 2, 5, 1, 450000, 0, Load_Grass1, "GRASS1 " } /* "GRASS1 " */,						//22
	{ 2, 5, 1, 450000, 0, Load_Grass2, "GRASS2 " } /* "GRASS2 " */,						//23
	{ 2, 5, 1, 450000, 0, Load_Grass3, "GRASS3 " } /* "GRASS3 " */,						//24
	{ 2, 5, 1, 450000, 0, Load_Grass4, "GRASS4 " } /* "GRASS4 " */,						//25
	{ 6, 3, 1, 850000, 0, LRock, "L ROCK1" } /* "L ROCK1" */,							//26
	{ 6, 3, 1, 500000, 0, Load_Raft, "RAFT   " } /* "RAFT   " */,						//27
	{ 7, 3, 1, 1250000, 0, Load_Raft2, "RAFT 2 " } /* "RAFT 2 " */,						//28
	{ 7, 3, 1, 1250000, 0, Load_Raft3, "RAFT 3 " } /* "RAFT 3 " */,						//29
	{ 7, 3, 1, 1250000, 0, Load_TRaft1, "T_RAFT1" } /* "T_RAFT1" */,					//2A
	{ 7, 3, 0, 0, 0, Load_TRaft2, "T_RAFT2" } /* "T_RAFT2" */,							//2B
	{ 2, 4, 1, 850000, 0, Load_Sirusi1, "SIRUSI1" } /* "SIRUSI1" */,					//2C
	{ 6, 4, 1, 950000, 0, Load_Sirusi2, "SIRUSI2" } /* "SIRUSI2" */,					//2D
	{ 6, 4, 1, 950000, 0, Load_Sirusi3, "SIRUSI3" } /* "SIRUSI3" */,					//2E
	{ 6, 4, 1, 950000, 0, Load_Sirusi4, "SIRUSI4" } /* "SIRUSI4" */,					//2F
	{ 2, 4, 1, 1150000, 0, Load_Sirusi5, "SIRUSI5" } /* "SIRUSI5" */,					//30
	{ 2, 4, 1, 1150000, 0, Load_Sirusi6, "SIRUSI6" } /* "SIRUSI6" */,					//31
	{ 2, 4, 1, 1150000, 0, Load_Sirusi7, "SIRUSI7" } /* "SIRUSI7" */,					//32
	{ 2, 4, 1, 1150000, 0, Load_Sirusi8, "SIRUSI8" } /* "SIRUSI8" */,					//33
	{ 2, 4, 1, 1150000, 0, Load_Sirusi9, "SIRUSI9" } /* "SIRUSI9" */,					//34
	{ 6, 4, 1, 950000, 0, Load_Siru11, "SIRU 11" } /* "SIRU 11" */,						//35
	{ 6, 4, 1, 950000, 0, Load_Siru12, "SIRU 12" } /* "SIRU 12" */,						//36
	{ 6, 4, 1, 850000, 0, Load_Siru13, "SIRU 13" } /* "SIRU 13" */,						//37
	{ 2, 4, 1, 1250000, 0, Load_Yaji01, "YAJI 01" } /* "YAJI 01" */,					//38
	{ 2, 4, 1, 1150000, 0, Load_Pole1, "POLE 1 " } /* "POLE 1 " */,						//39
	{ 2, 4, 1, 1150000, 0, Load_Pole2, "POLE 2 " } /* "POLE 2 " */,						//3A
	{ 2, 3, 1, 1150000, 0, WindyGate_Main, "W GATE " } /* "W GATE " */,					//3B
	{ 2, 3, 1, 1250000, 0, WindyGate_Main, "W GATE2" } /* "W GATE2" */,					//3C
	{ 2, 3, 1, 1150000, 0, Load_Pot01, "POT01  " } /* "POT01  " */,						//3D
	{ 2, 3, 1, 1150000, 0, Load_Pot02, "POT02  " } /* "POT02  " */,						//3E
	{ 6, 3, 1, 850000, 0, Rock1, "ROCK 1 " } /* "ROCK 1 " */,							//3F
	{ 2, 3, 1, 1150000, 0, Rock2, "ROCK 2 " } /* "ROCK 2 " */,							//40
	{ 2, 3, 1, 1150000, 0, Rock3, "ROCK 3 " } /* "ROCK 3 " */,							//41
	{ 2, 3, 1, 1150000, 0, Rock5, "ROCK 5 " } /* "ROCK 5 " */,							//42
	{ 6, 3, 1, 750000, 0, Load_IDai1, "I DAI 1" } /* "I DAI 1" */,						//43
	{ 6, 3, 1, 750000, 0, Load_IDai2, "I DAI 2" } /* "I DAI 2" */,						//44
	{ 6, 3, 1, 750000, 0, Load_IDai3, "I DAI 3" } /* "I DAI 3" */,						//45
	{ 6, 3, 1, 650000, 0, Load_IDai4, "I DAI 4" } /* "I DAI 4" */,						//46
	{ 6, 3, 1, 650000, 0, Load_IDai5, "I DAI 5" } /* "I DAI 5" */,						//47
	{ 6, 3, 1, 650000, 0, Load_IDai6, "I DAI 6" } /* "I DAI 6" */,						//48
	{ 6, 3, 1, 650000, 0, Load_IDai7, "I DAI 7" } /* "I DAI 7" */,						//49
	{ 6, 3, 1, 650000, 0, Load_IDai8, "I DAI 8" } /* "I DAI 8" */,						//4A
	{ 6, 3, 1, 650000, 0, Load_IDai9, "I DAI 9" } /* "I DAI 9" */,						//4B
	{ 6, 3, 1, 950000, 0, Load_IHas14, "I HAS14" } /* "I HAS14" */,						//4C
	{ 6, 3, 1, 850000, 0, Load_IHas15, "I HAS15" } /* "I HAS15" */,						//4D
	{ 6, 3, 1, 950000, 0, Load_IHas16, "I HAS16" } /* "I HAS16" */,						//4E
	{ 2, 3, 1, 1110000, 0, Load_IHas17, "I HAS17" } /* "I HAS17" */,					//4F
	{ 2, 3, 1, 1110000, 0, Load_IHas18, "I HAS18" } /* "I HAS18" */,					//50
	{ 2, 2, 1, 1250000, 0, Load_BaneIwa, "BANEIWA" } /* "BANEIWA" */,					//51
	{ 2, 5, 1, 450000, 0, Tanpopo_Main, "TANPOPO" } /* "TANPOPO" */,					//52
	{ 2, 5, 1, 1250000, 0, Load_TakoW, "TAKO W " } /* "TAKO W " */,						//53
	{ 2, 3, 1, 1150000, 0, Load_Dome1, "DOME 1 " } /* "DOME 1 " */,						//54
	{ 2, 3, 1, 1150000, 0, Load_Dome2, "DOME 2 " } /* "DOME 2 " */,						//55
	{ 2, 3, 1, 1150000, 0, Load_Dome3, "DOME 3 " } /* "DOME 3 " */,						//56
	{ 2, 5, 1, 1150000, 0, Load_Prop1, "PROP 1 " } /* "PROP 1 " */,						//57
	{ 2, 4, 1, 1250000, 0, Load_PropeA, "PROPE A" } /* "PROPE A" */,					//58
	{ 2, 4, 1, 1250000, 0, Load_PropeB, "PROPE B" } /* "PROPE B" */,					//59
	{ 2, 4, 1, 1250000, 0, Load_PropeC, "PROPE C" } /* "PROPE C" */,					//5A
	{ 6, 3, 1, 850000, 0, Load_IwaB, "IWA B  " } /* "IWA B  " */,						//5B
	{ 2, 5, 1, 450000, 0, Load_PinkF, "PINK F " } /* "PINK F " */,						//5C
	{ 6, 3, 1, 850000, 0, Load_IBou01, "I BOU01" } /* "I BOU01" */,						//5D
	{ 6, 3, 1, 850000, 0, Load_IBou02, "I BOU02" } /* "I BOU02" */,						//5E
	{ 6, 3, 1, 850000, 0, Load_IHah01, "I HAH01" } /* "I HAH01" */,						//5F
	{ 6, 3, 1, 850000, 0, Load_IHah02, "I HAH02" } /* "I HAH02" */,						//60
	{ 6, 3, 1, 850000, 0, Load_IHah03, "I HAH03" } /* "I HAH03" */,						//61
	{ 6, 3, 1, 850000, 0, Load_Ioiwa01, "IOIWA01" } /* "IOIWA01" */,					//62
	{ 6, 3, 1, 850000, 0, Load_Ioiwa02, "IOIWA02" } /* "IOIWA02" */,					//63
	{ 6, 3, 1, 850000, 0, Load_Ioiwa03, "IOIWA03" } /* "IOIWA03" */,					//64
	{ 6, 3, 1, 850000, 0, Load_SaraB1, "SARA B1" } /* "SARA B1" */,						//65
	{ 6, 3, 1, 850000, 0, Load_SaraB2, "SARA B2" } /* "SARA B2" */,						//66
	{ 6, 3, 1, 850000, 0, Load_SaraM1, "SARA M1" } /* "SARA M1" */,						//67
	{ 6, 3, 1, 850000, 0, Load_SaraM2, "SARA M2" } /* "SARA M2" */,						//68
	{ 6, 3, 1, 850000, 0, Load_SaraS1, "SARA S1" } /* "SARA S1" */,						//69
	{ 6, 3, 1, 850000, 0, Load_SaraS2, "SARA S2" } /* "SARA S2" */,						//6A
	{ 2, 4, 0, 0, 0, TSpring_Main, "TSPRING" } /* "TSPRING" */,							//6B
	{ 2, 4, 0, 0, 0, Load_Lauchin, "LAUCHIN" } /* "LAUCHIN" */,							//6C
	{ 6, 2, 1, 1000000, 0, SBridg, "S BRIDG" } /* "S BRIDG" */,							//6D
	{ 7, 3, 1, 1000000, 0, Load_Wele, "WELE   " } /* "WELE   " */,						//6E
	{ 2, 3, 0, 0, 0, RhinoTank_Main, "E SAITO" } /* "E SAITO" */,						//6F
	{ 2, 3, 0, 0, 0, BoaBoa_Main, "E HEVY " } /* "E HEVY " */,							//70
	{ 2, 3, 0, 0, 0, Leon_Load, "E LEON " } /* "E LEON " */,							//71
	{ 2, 3, 0, 0, 0, E103Enemy_Load, "E E-103" } /* "E E-103" */,						//72
	{ 2, 3, 0, 0, 0, ChaosEmeGoal_WValley_Main, "O KAOSE" } /* "Chaos Emerald */,		//73
	{ 6, 3, 1, 850000, 0, Load_IDai10, "I DAI 10" } /* "I DAI 10" */,					//74
	{ 6, 3, 1, 750000, 0, Load_IBou03, "I BOU03" } /* "I BOU03" */,						//75
	{ 6, 3, 1, 810000, 0, Load_IHas19, "I HAS19" } /* "I HAS19" */,						//76
	{ 6, 3, 1, 40000000, 0, Load_IHah04, "I HAH04" } /* "I HAH04" */,					//77
	{ 6, 3, 1, 40000000, 0, Load_IHah05, "I HAH05" } /* "I HAH05" */,					//78
	{ 6, 3, 1, 40000000, 0, Load_IHah06, "I HAH06" } /* "I HAH06" */,					//79
	{ 15, 3, 1, 160000, 0, ItemBoxAir_Main, "O ItemBoxAir" },/*O ItemboxAir*/			//7A
	{ 6, 3, 1, 1000000, 0, Load_BrPole, "BRPOLE" } /* "BRPOLE" */,						//7B
	{ 6, 3, 1, 4000000, 0, Load_WGear, "WGEAR" } /* "WGEAR" */,							//7C
	{ 6, 3, 1, 4000000, 0, Load_WBolt, "WBOLT" } /* "WBOLT" */,							//7D
	{ 2, 2, 0, 0, 0, CSphere, "C SPHERE" } /* "C SPHERE" */,							//7E
	{ 2, 2, 0, 0, 0, ColCylinder_Main, "C CYLINDER" } /* "C CYLINDER" */,				//7F
	{ 2, 2, 0, 0, 0, ColCube_Main, "C CUBE" } /* "C CUBE" */,							//80
	{ 2, 2, 0, 0, 0, TikalHint_Load, "O TIKAL" } /* "O TIKAL" */						//81
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
	//ptrdecl(0x90F01C, &WindyValley1Textures),
	ptrdecl(0xBFD820, &WindyValley1DeathZones),
	ptrdecl(0x97DA4C, &landtable_008046C0),
	//ptrdecl(0x90F020, &WindyValley2Textures),
	ptrdecl(0xBFD824, &WindyValley2DeathZones),
	ptrdecl(0x97DA50, &landtable_0080433C),
	//ptrdecl(0x90F024, &WindyValley3Textures),
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

void TornadoPosition()
{
	njPushMatrix(NULL); njTranslate(NULL, 650, -360, -200);
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

	ReplaceBINFile("SET0202M", "SET0202M_AD");
	ReplaceBINFile("SET0200E", "SET0200E_AD");
	ReplaceBINFile("CAM0200S", "CAM0200S_AD");
	ReplaceBINFile("CAM0201S", "CAM0201S_AD");
	ReplaceBINFile("CAM0202S", "CAM0202S_AD");
	ReplaceBINFile("CAM0202M", "CAM0202M_AD");
	ReplaceBINFile("CAM0200E", "CAM0200E_AD");
	ReplaceBINFile("SET0200S", "SET0200S_AD");
	ReplaceBINFile("SET0201S", "SET0201S_AD");
	ReplaceBINFile("SET0202S", "SET0202S_AD");

	ReplaceBINFile("SET0202M_DC", "SET0202M_AD");
	ReplaceBINFile("SET0200E_DC", "SET0200E_AD");
	ReplaceBINFile("CAM0200S_DC", "CAM0200S_AD");
	ReplaceBINFile("CAM0201S_DC", "CAM0201S_AD");
	ReplaceBINFile("CAM0202S_DC", "CAM0202S_AD");
	ReplaceBINFile("CAM0202M_DC", "CAM0202M_AD");
	ReplaceBINFile("CAM0200E_DC", "CAM0200E_AD");
	ReplaceBINFile("SET0200S_DC", "SET0200S_AD");
	ReplaceBINFile("SET0201S_DC", "SET0201S_AD");
	ReplaceBINFile("SET0202S_DC", "SET0202S_AD");

	const IniFile *config = new IniFile(std::string(path) + "\\config.ini");

	ADSetFile = config->getBool("Options", "ADSetFile", false);
	ADDrawD = config->getBool("Options", "ADDrawD", false);
	if (ADSetFile)
	{
		ReplaceBINFile("SET0200S", "SET0200S_Orig");
		ReplaceBINFile("SET0201S", "SET0201S_Orig");
		ReplaceBINFile("SET0202S", "SET0202S_Orig");
	}
	if (ADDrawD)
	{
		for (int i = 21; i < 40; i++)
		{
			WindyValleyObjectList.List[i].UseDistance = 0;
		}

		WindyValleyObjectList.List[40].Distance = 950000;
		WindyValleyObjectList.List[41].Distance = 950000;
		WindyValleyObjectList.List[42].Distance = 950000;

		for (int j = 43; j < 109; j++)
		{
			WindyValleyObjectList.List[j].UseDistance = 0;
		}

		for (int k = 116; k < 119; k++)
		{
			WindyValleyObjectList.List[k].UseDistance = 0;
		}

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

	WriteJump((void *)0x4E65C0, NewBreakBridgeMain); //overwriting the breakable bridge's main routine.
	WriteJump((void *)0x4E6070, BridgeChildLoad);

	WriteJump((void *)0x4DF5A0, HypotheticalDebris); //Main Debris loading function overwrite
	//WriteJump((void *)0x4DF500, DebrisDisplay); //Display routine overwrite for Debris
	//WriteJump((void *)0x4DF740, PreHypoDebris); //Testing something
	WriteData<1>((void*)0x04DF75C, 0xFFu); //Controlling how long each piece of debris is spawned for. 96u is original value.

	WriteData<1>((void*)0x04E362C, 0x2Cu); //Controlling how long the (normal) leaves of Pu Wind last for. 64u (100) is original value.
	WriteData<1>((void*)0x04E362D, 0x1u); //Controlling how long the (normal) leaves of Pu Wind last for. 0u (100) is original value. These both are setting it to 300, the same as the beta effect.

	WriteData<1>((void*)0x04E6297, 0x41u);//Making the bridge cloud dust sprite the same size as the AD's.
	WriteData<1>((void*)0x04E6297, 0x40u);//Same

	WriteCall((void *)0x4E379D, WindCheck); //Removing ClipSet check for the leaves of Pu Wind.
	WriteCall((void *)0x4E354B, WindCheck);
	WriteCall((void *)0x4E52AD, WindCheck); //Doing the same for BLeaf.

	

	//WriteJump((void *)0x4DDC10, sub_4DDCE0); //RHINO TANK TORNADO PARTY!!! :D
	//WriteJump((void *)0x4DDC10, sub_4DDC10); //Setting it back to normal.


	WriteData((NJS_OBJECT**)0x004DFAC9, &Particle_Tanpopo);
	WriteData((NJS_OBJECT**)0x004DFCB0, &Particle_Tanpopo);
	//WriteData((float**)0x004E802D, E103_PositionData);

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

	*(NJS_OBJECT*)0xC13274 = object_00183588; //?

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

	*(NJS_OBJECT*)0xC2C314 = object_00170838; //Tiny Triangle Wood
	*(NJS_MODEL_SADX*)0xC2C2E8 = attach_00170810;

	*(NJS_OBJECT*)0xC2C788 = object_001A086C; //WKusa1 Leaf
	*(NJS_MODEL_SADX*)0xC2C75C = attach_001A0844;

	*(NJS_OBJECT*)0xC2CB24 = object_0019E788; //Debris Tree with Leaves
	*(NJS_MODEL_SADX*)0xC2CAF8 = attach_0019E760;

	*(NJS_OBJECT*)0xC0EC58 = object_0016FA00; //Flat, Rectangular Wood
	*(NJS_MODEL_SADX*)0xC0EC2C = attach_0016F9D8;

	ResizeTextureList(&OBJ_WINDY_TEXLIST, 128);
	ResizeTextureList(&WINDY_BACK_TEXLIST, 3);
	ResizeTextureList(&WINDY_BACK2_TEXLIST, 2);
	ResizeTextureList(&WINDY_BACK3_TEXLIST, 3);
	ResizeTextureList(&WINDY01_TEXLIST, 42);
	ResizeTextureList(&WINDY02_TEXLIST, 25);
	ResizeTextureList(&WINDY03_TEXLIST, 55);


	for (int j = 0; j < 16; j++) //This sets E103's positions correctly so he can be fought without him flying off.
	{
		E103FinalPos[j] = E103_PositionData[j];
	}

	for (int i = 0; i < 3; i++)
	{
		FogData_Windy1[i].Distance = 14000.0f;
		FogData_Windy1[i].Layer = 1000.0f;
		FogData_Windy1[i].Color = 0xFFFFFFFF;
		DrawDist_WindyValley1[i].Maximum = -8000.0f;
		FogData_Windy2[i].Color = 0xFFFFFFFF;
		FogData_Windy2[i].Distance = 2500.0f;
		FogData_Windy2[i].Layer = 50.0f;
		FogData_Windy2[i].Toggle = 1;
		FogData_Windy3[i].Distance = 10000.0f;
		FogData_Windy3[i].Layer = 200.0f;
		FogData_Windy3[i].Color = 0xFFFFFFFF;
		DrawDist_WindyValley3[i].Maximum = -8000.0f;
	}

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
		//Load_BWVSkybox(); //Loads the skyboxes
		Display_BWVSkybox(); //New loading routine for skyboxes

		if (CurrentLevel == 2)
		{
			if ((ControllerPointers[0]->HeldButtons & Buttons_X) && CurrentCharacter != 6 && !EntityData1Ptrs[0])
			{
				ClassicSpringCheat = true;
			}

			if (CurrentAct == 1 && !IsGamePaused())
			{
				if (LoadedDebris == false)
				{
					DebrisFrame++;
					if (FramerateSetting >= 2)
					{
						DebrisFrame++;
					}
				}

				if (DebrisFrame >= 15)
				{
					Load_Debris();
					//DebrisFrame = 0;
				}

				if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
				{
					LoadedDebris = false;
					DebrisFrame = 0;
				}
			}

			if (CurrentLevel != 2 || (CurrentLevel == 2 && CurrentAct != 1))
			{
				if (DebrisFrame != 0)
				{
					LoadedDebris = false;
					DebrisFrame = 0;
				}
			}

			if (CurrentLevel != 2 && ClassicSpringCheat == true)
			{
				ClassicSpringCheat = false;
			}
		}
	}
}
