#include "stdafx.h"


#include "Sirusi_Objects.h"

void __cdecl Sirusi1_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5;
	Angle z1;
	Angle x1;
	Angle Distance = 0x2000;

	v1 = a1->Data1;

	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		z1 = v1->Rotation.z;
		if (z1)
		{
			njRotateZ(0, (unsigned __int16)z1);
		}
		x1 = v1->Rotation.x;
		if (x1)
		{
			njRotateX(0, (unsigned __int16)x1);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Sirusi1.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Sirusi1_Sign.pos[0], Sirusi1_Sign.pos[1], Sirusi1_Sign.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			if (v1->Scale.y == 0) //Which side of the sign are we currently on?
			{
				njRotateX(0, (unsigned __int16)v5 - Distance);
			}
			else
			{
				njRotateX(0, (unsigned __int16)(v5 * -1) + Distance);
			}
		}
		sub_409E70((NJS_MODEL_SADX*)Sirusi1_Sign.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Sirusi1(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	float speed = 0;
	bool trigger = false; //Flag for reaching the bottom of a swing. (Marks halfway point)

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				AddToCollisionList(v1);
				if (!IsGamePaused())
				{
					/*Notes:
					Using CharIndex for speed tranfer to Display function.
					Z Scale usage = Current Z Rotation angle of the sign
					X Scale usage = determines which direction it's swinging.
					Y Scale to use as a flag for which side of the sign we're on. It "mirrors" the swing depending on what side it thinks we're on.
					LoopData as a flag to prevent rapid swapping of swinging side.
					*/
					//Coding is very fragile! Please don't touch.

					if (a1->Data1->Scale.z >= 102.9 && a1->Data1->Scale.x == 0) // "102.9" how long it swings for. Important to set this just right so that it doesn't twitch at the base of the swing.
					{
						a1->Data1->Scale.x = 1; //Setting it to start moving backwards
						trigger = true;
					}

					else if (a1->Data1->Scale.z < 3.0 && a1->Data1->Scale.x == 1) // "3.0" chopping off a few frames at the end to make sure it doesn't "stop" at each peak for too long.
					{
						a1->Data1->Scale.x = 0; //Setting it to start moving forwards
					}


					if (trigger == true && *(float *)&a1->Data1->LoopData != 1.0f)
					{
						*(float *)&a1->Data1->LoopData = 1.0f; //cooldown flag activated
						if (a1->Data1->Scale.y == 0)
						{
							a1->Data1->Scale.y = 1;
						}
						else
						{
							a1->Data1->Scale.y = 0;
						}
					}

					else if (a1->Data1->Scale.z < 102.9)
					{
						*(float *)&a1->Data1->LoopData = 0; //wait until we reach 102.9 again before activating.
					}


					speed = njSin(0x99D) * a1->Data1->Scale.z; //Angle in njSin = acceleration, Scale.z = modifier.

					speed *= 1.7f; //Original above values were 212 (141 when the next is 1.5), and this was originally 1.5. Do 212 / (whatever you want) to get the new above values. (((Old notes)))

					if (speed < 0)
					{
						speed = speed * -1; //getting guarenteed positive value (failsafe)
					}

					while (speed > 58)
					{
						speed -= 1; //setting speed limit (DON'T SET THIS (58) TOO LOW!)
					}

					*(float*)&a1->Data1->CharIndex = speed; //for use in Display function

					if (a1->Data1->Scale.x == 0) //increasing modifier based on what direciton we're swinging. Greatly influences swing speed between peaks.
					{
						a1->Data1->Scale.z += (*(float*)&a1->Data1->CharIndex / 1.69);
					}
					else
					{
						a1->Data1->Scale.z -= (*(float*)&a1->Data1->CharIndex / 1.69);
					}
				}
				Sirusi1_Display(a1);
			}
		}
		else
		{
			v1->Action = 1;

			a1->Data1->Scale.x = 0;
			a1->Data1->Scale.y = 0;
			a1->Data1->Scale.z = 1;//<------IMPORTANT!!! Must not be 0!!

			a1->DisplaySub = Sirusi1_Display;
			a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
			InitCollision(a1, Sirusi1_Collision, 1, 4u);
		}
	}
}

void __cdecl Load_Sirusi2(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Sirusi2;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Sirusi3(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Sirusi3;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Sirusi4(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Sirusi4;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Sirusi5(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Sirusi5_Collision, 1, 4u);
	}
	v1->Object = &Object_Sirusi5;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Sirusi6(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Sirusi6_Collision, 1, 4u);
	}
	v1->Object = &Object_Sirusi6;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Sirusi7(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Sirusi7_Collision, 1, 4u);
	}
	v1->Object = &Object_Sirusi7;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Sirusi8(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Sirusi8_Collision, 1, 4u);
	}
	v1->Object = &Object_Sirusi8;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Sirusi9(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	v1->Object = &Object_Sirusi9;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl Load_Siru11(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Siru11;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Siru12(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Siru12;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Siru13(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Siru13;
	SetStatus(a1);
	DynCol_LoadObject(a1);
}

void __cdecl Load_Yaji01(ObjectMaster *a1)
{
	EntityData1 *v1;

	v1 = a1->Data1;
	if (!ObjectSelectedDebug(a1))
	{
		InitCollision(a1, (CollisionData*)&Yaji01_Collision, 2, 4u);
	}
	v1->Object = &Object_Yaji01;
	a1->MainSub = Basic_Main;
	a1->DisplaySub = Basic_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}
