#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "Tornado_Models.h"
#include "TDebris.h"
#include "TorndaoBridgeParts.h"
#include "Skybox01.h"
#include "Skybox02.h"
#include "Skybox03.h"






//Some Function

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
		//SetTextureToLevelObj();
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
		njTranslate(0, 0, (Act1CloudRing1.pos[1] + 80.0f), 0);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_408530(&Act1CloudRing1);
		njPopMatrix(1u); //cloud ring

		njPushMatrix(0);
		njTranslate(0, 0, (Act1CloudLayer.pos[1] + 380.0f), 0);
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
		//SetTextureToLevelObj();
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
		ProcessModelNode_A_Wrapper(&Act02_Skybox2, (QueuedModelFlagsB)0, 1.0);
		njPopMatrix(1u); //model1

		njPushMatrix(0);
		DrawQueueDepthBias = -38052.0;
		njTranslateV(0, &v1->Position);
		v6 = *(float*)&v1->Object * 65536.0 * 0.002777777777777778;
		if (v6)
		{
			njRotateY(0, (unsigned __int16)v6);
		}
		ProcessModelNode_A_Wrapper(&Act02_Skybox1, (QueuedModelFlagsB)0, 1.0);
		njPopMatrix(1u); //model3

		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v7 = *(float*)&v1->LoopData * 65536.0 * 0.002777777777777778;
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
		//SetTextureToLevelObj();
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
		sub_407A00((NJS_MODEL_SADX *)Decor_Tornado1.model, 1.0);
		njPushMatrix(0);
		DrawModel_QueueVisible((NJS_MODEL_SADX *)Decor_Tornado3.model, (QueuedModelFlagsB)0, 1.0);
		njPushMatrix(0);
		DrawModel_QueueVisible((NJS_MODEL_SADX *)Decor_Tornado2.model, (QueuedModelFlagsB)0, 1.0);
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


void __cdecl Load_TBridge(void)
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
		if (v3 && v2 != &*(NJS_MODEL_SADX*)0xC2AF1C && v2 != &*(NJS_MODEL_SADX*)0xC2C2E8)
		{
			njRotateZ(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.x;
		if (v4 && v2 != &*(NJS_MODEL_SADX*)0xC2AF1C && v2 != &*(NJS_MODEL_SADX*)0xC2C2E8)
		{
			njRotateX(0, (unsigned __int16)v4);
		}
		v5 = v1->Rotation.y;
		if (v5 && v2 != &*(NJS_MODEL_SADX*)0xC2AF1C)
		{
			njRotateY(0, (unsigned __int16)v5);
		}

		if (v2 == &*(NJS_MODEL_SADX*)0xC2AF1C)
		{
			ProcessModelNode_AB_Wrapper(&object_0016F8E0, 1.0);
			njPopMatrix(1u);
		}

		else if (v2 == &*(NJS_MODEL_SADX*)0xC2CAF8)
		{
			ProcessModelNode_AB_Wrapper(&object_0019E788, 1.0);
			njPopMatrix(1u);
		}

		else if (v2 == &*(NJS_MODEL_SADX*)0xC0EC2C && v1->Scale.z == 0.01f)
		{
			sub_407A00(&attach_0016FB78, 1.0);
			njPopMatrix(1u);
		}

		else if (v2 == &*(NJS_MODEL_SADX*)0xC2C134 && v1->Scale.z == 0.01f)
		{
			sub_407A00(&attach_00170810, 1.0);
			njPopMatrix(1u);
		}

		else
		{
			sub_407A00(v2, 1.0);
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

	if (CurrentLevel != 2 || (CurrentLevel == 2 && CurrentAct != 1))
	{
		DeleteObjectMaster(a1);
	}

	else
	{
		v1 = a1->Data1;
		v10 = (NJS_MODEL_SADX *)*((_DWORD *)v1 + 4);
		if (v1->Action)
		{
			if (v1->Action == 1 && /*IsVisible((NJS_VECTOR *)((char *)v1 + 32), 3.0) && EntityData1Ptrs[0] && EntityData1Ptrs[0]->Position.y - 70.0 < *((float *)v1 + 9) && *((float *)v1 + 9) < (double)Camera_Data1->Position.y*/ v1->Position.y < 1420)
			{
				//if (v10 == &*(NJS_MODEL_SADX*)0xC2AF1C)
				//{
				v2 = (double)(signed int)(*((float *)v1 + 12) * 1.5 + 8.0) + *((float *)v1 + 2);
				/*}
				else if (v10 == &*(NJS_MODEL_SADX*)0xC2C2E8)
				{
				v2 = (double)(signed int)(*((float *)v1 + 12) * 1.5 + 4.5111828) + *((float *)v1 + 2);
				}
				else
				{
				v2 = (double)(signed int)(*((float *)v1 + 12) * 1.5 + 5.92273662) + *((float *)v1 + 2);
				}*/
				*((float *)v1 + 2) = v2;
				v3 = (v2 * 65536.0 * 0.002777777777777778);
				*((float *)v1 + 8) = 649.074f + njCos(v3) * 90.0;
				*((float *)v1 + 10) = -196.07f + njSin(v3) * 90.0;
				*((float *)v1 + 9) = fabs((double)rand() * 0.000030517578) * 3.4000001 + *((float *)v1 + 12) * 1.3 + *((float *)v1 + 9);
				v4 = ((*((float *)v1 + 12) + *((float *)v1 + 12)) * 65536.0 * -0.002777777777777778);
				v5 = *((float *)v1 + 12) * 5.0 * 65536.0;
				*((_DWORD *)v1 + 5) -= v4;
				v6 = (v5 * 0.002777777777777778);
				v9 = *((_DWORD *)v1 + 7) - v4;
				*((_DWORD *)v1 + 6) += v6;
				*((_DWORD *)v1 + 7) = v9;
				sub_4DF500(a1);
			}
		}
		else
		{
			if (v10 == &*(NJS_MODEL_SADX*)0xC0EC2C && !v1->Action)
			{
				v11 = rand();

				while (v11 > 999)
				{
					v11 -= 720;
				}

				if ((v11 % 2) == 0)
				{
					v1->Scale.z = 0.01f;
				}
			}

			else if (v10 == &*(NJS_MODEL_SADX*)0xC2C134 && !v1->Action)
			{
				v11 = rand();

				while (v11 > 999)
				{
					v11 -= 720;
				}

				if ((v11 % 2) == 0)
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
			a1->DisplaySub = sub_4DF500;
		}
	}
}

/*void __cdecl PreHypoDebris(ObjectMaster *a1)
{
	EntityData1 *v1; // edi@1
	NJS_MODEL_SADX **v2; // esi@7
	ObjectMaster *v3; // eax@8
	EntityData1 *v4; // edi@1
	//int v4 = 0;

	v1 = a1->Data1;
	if (v1->Action)
	{
		if (v1->Action == 1)
		{
			if (++v1->InvulnerableTime >= 0x296u)
			{
				DeleteChildObjects(a1);
				CheckThingButThenDeleteObject(a1);
			}
			else
			{
				RunObjectChildren(a1);
			}
		}
	}
	else
	{
		v1->Action = 1;
		*v2 = off_C66C80;
		do
		{
			v3 = LoadChildObject(LoadObj_Data1, HypotheticalDebris, a1);
			v4 = v3->Data1;
			if (v4)
			{
				*(float *)v4->LoopData = (Sint32)*v2;
				++v2;
				v4->Position.y = v1->Position.y;
			}
		} while ((signed int)v2 < (signed int)stru_C66CA8);
		SetCameraControlEnabled(1);
	}
}*/

void __cdecl Load_Debris(void)
{
	//auto entityPlayer = EntityData1Ptrs[0];

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

		a1 = LoadObject((LoadObj)2, 3, sub_4DF7D0);
		a1->SETData.SETData = &DebrisThings;
		if (a1)
		{
			debr = a1->Data1;
			debr->Position.x = 649.074f;
			debr->Position.y = 103.486f;
			debr->Position.z = -196.07f;
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
			debr->Position.x = 649.074f;
			debr->Position.y = 403.486f;
			debr->Position.z = -196.07f;
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
			debr->Position.x = 649.074f;
			debr->Position.y = 703.486f;
			debr->Position.z = -196.07f;
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
			debr->Position.x = 649.074f;
			debr->Position.y = 1103.486f;
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




void __cdecl StageFunctions(void)
{
	Tornado_Check(); //Loads Stage Function stuff for Act 1
	Load_BWVSkybox(); //Loads the skyboxes

	if (CurrentLevel == 2 && CurrentAct == 1 && !IsGamePaused())
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
}
