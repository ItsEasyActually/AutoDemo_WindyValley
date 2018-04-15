//This is a mod.
#include "stdafx.h"

#include <SADXModLoader.h>
#include "IniFile.hpp"
#include "set.h"
#include "AdditionalVariables.h"

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

//Functions
#include "Functions.h"

#define ReplaceSETFile(a) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" a "_AD.BIN");
#define ReplacePVMFile(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "_AD.PVM");

//Variables
static bool ADSetFile = true;
static float SkyTrans = 1.0f;

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
						v2->Data1->Position = v1->Position;
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
	{ 2, 2, 1, 4000000, 0, JumpPanel_Load, "O JPanel" } /* "O JPanel" */,			//12
	{ 15, 3, 0, 0, 0, CheckPoint_Main, "O Save Point" } /* "O Save Point" */,		//13
	{ 2, 3, 0, 0, 0, Wall_Main, "WALL   " } /* "WALL   " */,						//14
	{ 3, 2, 0, 0, 0, Trampoline_Main, "TRAMPOL" } /* "TRAMPOL" */,					//15
	{ 2, 2, 0, 0, 0, BLeaf, "B LEAF " } /* "B LEAF " */,							//16
	{ 2, 2, 0, 0, 0, WcWind, "WC WIND" } /* "WC WIND" */,							//17
	{ 2, 2, 0, 0, 0, PuWind, "PU WIND" } /* "PU WIND" */,							//18
	{ 2, 4, 0, 0, 0, Load_Prope1, "PROPE1 " } /* "PROPE1 " */,						//19
	{ 2, 4, 0, 0, 0, Load_Prope2, "PROPE2 " } /* "PROPE2 " */,						//1A
	{ 2, 4, 0, 0, 0, Load_Prope3, "PROPE3 " } /* "PROPE3 " */,						//1B
	{ 2, 5, 0, 0, 0, Load_Flower0, "FLOWER0" } /* "FLOWER0" */,						//1C
	{ 2, 5, 0, 0, 0, Load_Flower1, "FLOWER1" } /* "FLOWER1" */,						//1D
	{ 2, 5, 0, 0, 0, Load_Green0, "GREEN 0" } /* "GREEN 0" */,						//1E
	{ 2, 4, 0, 0, 0, Load_WKi1, "W KI1  " } /* "W KI1  " */,						//1F
	{ 2, 4, 0, 0, 0, Load_WKi2, "W KI2  " } /* "W KI2  " */,						//20
	{ 2, 5, 0, 0, 0, Load_WKusa1, "W KUSA1" } /* "W KUSA1" */,						//21
	{ 2, 5, 0, 0, 0, Load_Grass1, "GRASS1 " } /* "GRASS1 " */,						//22
	{ 2, 5, 0, 0, 0, Load_Grass2, "GRASS2 " } /* "GRASS2 " */,						//23
	{ 2, 5, 0, 0, 0, Load_Grass3, "GRASS3 " } /* "GRASS3 " */,						//24
	{ 2, 5, 0, 0, 0, Load_Grass4, "GRASS4 " } /* "GRASS4 " */,						//25
	{ 6, 3, 0, 0, 0, LRock, "L ROCK1" } /* "L ROCK1" */,							//26
	{ 6, 3, 0, 0, 0, NullFunction, "RAFT   " } /* "RAFT   " */,						//27
	{ 7, 3, 0, 0, 0, NullFunction, "RAFT 2 " } /* "RAFT 2 " */,						//28
	{ 7, 3, 0, 0, 0, NullFunction, "RAFT 3 " } /* "RAFT 3 " */,						//29
	{ 7, 3, 0, 0, 0, NullFunction, "T_RAFT1" } /* "T_RAFT1" */,						//2A
	{ 7, 3, 0, 0, 0, NullFunction, "T_RAFT2" } /* "T_RAFT2" */,						//2B
	{ 2, 4, 0, 0, 0, Load_Sirusi1, "SIRUSI1" } /* "SIRUSI1" */,						//2C
	{ 6, 4, 0, 0, 0, Load_Sirusi2, "SIRUSI2" } /* "SIRUSI2" */,						//2D
	{ 6, 4, 0, 0, 0, Load_Sirusi3, "SIRUSI3" } /* "SIRUSI3" */,						//2E
	{ 6, 4, 0, 0, 0, Load_Sirusi4, "SIRUSI4" } /* "SIRUSI4" */,						//2F
	{ 2, 4, 0, 0, 0, Load_Sirusi5, "SIRUSI5" } /* "SIRUSI5" */,						//30
	{ 2, 4, 0, 0, 0, Load_Sirusi6, "SIRUSI6" } /* "SIRUSI6" */,						//31
	{ 2, 4, 0, 0, 0, Load_Sirusi7, "SIRUSI7" } /* "SIRUSI7" */,						//32
	{ 2, 4, 0, 0, 0, Load_Sirusi8, "SIRUSI8" } /* "SIRUSI8" */,						//33
	{ 2, 4, 0, 0, 0, Load_Sirusi9, "SIRUSI9" } /* "SIRUSI9" */,						//34
	{ 6, 4, 0, 0, 0, Load_Siru11, "SIRU 11" } /* "SIRU 11" */,						//35
	{ 6, 4, 0, 0, 0, Load_Siru12, "SIRU 12" } /* "SIRU 12" */,						//36
	{ 6, 4, 0, 0, 0, Load_Siru13, "SIRU 13" } /* "SIRU 13" */,						//37
	{ 2, 4, 0, 0, 0, Load_Yaji01, "YAJI 01" } /* "YAJI 01" */,						//38
	{ 2, 4, 0, 0, 0, Load_Pole1, "POLE 1 " } /* "POLE 1 " */,						//39
	{ 2, 4, 0, 0, 0, Load_Pole2, "POLE 2 " } /* "POLE 2 " */,						//3A
	{ 2, 3, 0, 0, 0, WindyGate_Main, "W GATE " } /* "W GATE " */,					//3B
	{ 2, 3, 0, 0, 0, WindyGate_Main, "W GATE2" } /* "W GATE2" */,					//3C
	{ 2, 3, 0, 0, 0, Load_Pot01, "POT01  " } /* "POT01  " */,						//3D
	{ 2, 3, 0, 0, 0, Load_Pot02, "POT02  " } /* "POT02  " */,						//3E
	{ 6, 3, 0, 0, 0, Rock1, "ROCK 1 " } /* "ROCK 1 " */,							//3F
	{ 2, 3, 0, 0, 0, Rock2, "ROCK 2 " } /* "ROCK 2 " */,							//40
	{ 2, 3, 0, 0, 0, Rock3, "ROCK 3 " } /* "ROCK 3 " */,							//41
	{ 2, 3, 0, 0, 0, Rock5, "ROCK 5 " } /* "ROCK 5 " */,							//42
	{ 6, 3, 0, 0, 0, Load_IDai1, "I DAI 1" } /* "I DAI 1" */,						//43
	{ 6, 3, 0, 0, 0, Load_IDai2, "I DAI 2" } /* "I DAI 2" */,						//44
	{ 6, 3, 0, 0, 0, Load_IDai3, "I DAI 3" } /* "I DAI 3" */,						//45
	{ 6, 3, 0, 0, 0, Load_IDai4, "I DAI 4" } /* "I DAI 4" */,						//46
	{ 6, 3, 0, 0, 0, Load_IDai5, "I DAI 5" } /* "I DAI 5" */,						//47
	{ 6, 3, 0, 0, 0, Load_IDai6, "I DAI 6" } /* "I DAI 6" */,						//48
	{ 6, 3, 0, 0, 0, Load_IDai7, "I DAI 7" } /* "I DAI 7" */,						//49
	{ 6, 3, 0, 0, 0, Load_IDai8, "I DAI 8" } /* "I DAI 8" */,						//4A
	{ 6, 3, 0, 0, 0, Load_IDai9, "I DAI 9" } /* "I DAI 9" */,						//4B
	{ 6, 3, 0, 0, 0, Load_IHas14, "I HAS14" } /* "I HAS14" */,						//4C
	{ 6, 3, 0, 0, 0, Load_IHas15, "I HAS15" } /* "I HAS15" */,						//4D
	{ 6, 3, 0, 0, 0, Load_IHas16, "I HAS16" } /* "I HAS16" */,						//4E
	{ 2, 3, 0, 0, 0, Load_IHas17, "I HAS17" } /* "I HAS17" */,						//4F
	{ 2, 3, 0, 0, 0, Load_IHas18, "I HAS18" } /* "I HAS18" */,						//50
	{ 2, 2, 0, 0, 0, Load_BaneIwa, "BANEIWA" } /* "BANEIWA" */,						//51
	{ 2, 5, 0, 0, 0, Tanpopo_Main, "TANPOPO" } /* "TANPOPO" */,						//52
	{ 2, 5, 0, 0, 0, NullFunction, "TAKO W " } /* "TAKO W " */,						//53
	{ 2, 3, 0, 0, 0, Load_Dome1, "DOME 1 " } /* "DOME 1 " */,						//54
	{ 2, 3, 0, 0, 0, Load_Dome2, "DOME 2 " } /* "DOME 2 " */,						//55
	{ 2, 3, 0, 0, 0, Load_Dome3, "DOME 3 " } /* "DOME 3 " */,						//56
	{ 2, 5, 0, 0, 0, Load_Prop1, "PROP 1 " } /* "PROP 1 " */,						//57
	{ 2, 4, 0, 0, 0, Load_PropeA, "PROPE A" } /* "PROPE A" */,						//58
	{ 2, 4, 0, 0, 0, Load_PropeB, "PROPE B" } /* "PROPE B" */,						//59
	{ 2, 4, 0, 0, 0, Load_PropeC, "PROPE C" } /* "PROPE C" */,						//5A
	{ 6, 3, 0, 0, 0, Load_IwaB, "IWA B  " } /* "IWA B  " */,						//5B
	{ 2, 5, 0, 0, 0, Load_PinkF, "PINK F " } /* "PINK F " */,						//5C
	{ 6, 3, 0, 0, 0, Load_IBou01, "I BOU01" } /* "I BOU01" */,						//5D
	{ 6, 3, 0, 0, 0, Load_IBou02, "I BOU02" } /* "I BOU02" */,						//5E
	{ 6, 3, 0, 0, 0, Load_IHah01, "I HAH01" } /* "I HAH01" */,						//5F
	{ 6, 3, 0, 0, 0, Load_IHah02, "I HAH02" } /* "I HAH02" */,						//60
	{ 6, 3, 0, 0, 0, Load_IHah03, "I HAH03" } /* "I HAH03" */,						//61
	{ 6, 3, 0, 0, 0, Load_Ioiwa01, "IOIWA01" } /* "IOIWA01" */,						//62
	{ 6, 3, 0, 0, 0, Load_Ioiwa02, "IOIWA02" } /* "IOIWA02" */,						//63
	{ 6, 3, 0, 0, 0, Load_Ioiwa03, "IOIWA03" } /* "IOIWA03" */,						//64
	{ 6, 3, 0, 0, 0, Load_SaraB1, "SARA B1" } /* "SARA B1" */,						//65
	{ 6, 3, 0, 0, 0, Load_SaraB2, "SARA B2" } /* "SARA B2" */,						//66
	{ 6, 3, 0, 0, 0, Load_SaraM1, "SARA M1" } /* "SARA M1" */,						//67
	{ 6, 3, 0, 0, 0, Load_SaraM2, "SARA M2" } /* "SARA M2" */,						//68
	{ 6, 3, 0, 0, 0, Load_SaraS1, "SARA S1" } /* "SARA S1" */,						//69
	{ 6, 3, 0, 0, 0, Load_SaraS2, "SARA S2" } /* "SARA S2" */,						//6A
	{ 2, 4, 0, 0, 0, NullFunction, "TSPRING" } /* "TSPRING" */,						//6B
	{ 2, 4, 0, 0, 0, NullFunction, "LAUCHIN" } /* "LAUCHIN" */,						//6C
	{ 6, 2, 1, 1000000, 0, SBridg, "S BRIDG" } /* "S BRIDG" */,						//6D
	{ 7, 3, 0, 0, 0, NullFunction, "WELE   " } /* "WELE   " */,						//6E
	{ 2, 3, 0, 0, 0, RhinoTank_Main, "E SAITO" } /* "E SAITO" */,					//6F
	{ 2, 3, 0, 0, 0, BoaBoa_Main, "E HEVY " } /* "E HEVY " */,						//70
	{ 2, 3, 0, 0, 0, Leon_Load, "E LEON " } /* "E LEON " */,						//71
	{ 2, 3, 0, 0, 0, E103Enemy_Load, "E E-103" } /* "E E-103" */,					//72
	{ 2, 3, 0, 0, 0, ChaosEmeGoal_WValley_Main, "O KAOSE" } /* "Chaos Emerald */,	//73
	{ 6, 3, 0, 0, 0, Load_IDai10, "I DAI 10" } /* "I DAI 10" */,					//74
	{ 6, 3, 0, 0, 0, Load_IBou03, "I BOU03" } /* "I BOU03" */,						//75
	{ 6, 3, 0, 0, 0, Load_IHas19, "I HAS19" } /* "I HAS19" */,						//76
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


	WriteData((NJS_OBJECT**)0x004DFAC9, &Particle_Tanpopo);
	WriteData((NJS_OBJECT**)0x004DFCB0, &Particle_Tanpopo);
	WriteData((float**)0x004E802D, E103_PositionData);
	
	
	*(NJS_OBJECT*)0xC158E0 = Object_Leaf; //WcWind/PuWind/Bleaf
	*(NJS_OBJECT*)0xC159FC = Object_Leaf; //WcWind/PuWind/Bleaf
	*(NJS_OBJECT*)0xC15B2C = Object_Leaf; //WcWind/PuWind/Bleaf



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
}
