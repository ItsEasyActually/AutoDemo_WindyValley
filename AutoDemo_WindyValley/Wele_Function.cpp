#include "stdafx.h"
#include <SADXModLoader.h>
#include "AdditionalVariables.h"
#include "Functions.h"
#include "Wele.h"

void Wele_Display(ObjectMaster *a1)
{
	Angle v5;
	EntityData1 *v1;

	if (a1)
	{
		v1 = a1->Data1;
	}

	if (!DroppedFrames)
	{
		njSetTexture((NJS_TEXLIST*)&OBJ_WINDY_TEXLIST);
		njPushMatrix(0);
		njTranslateV(0, (NJS_VECTOR*)a1->Data1->Object->pos); //Draw the model where the collision is
		njRotateY(0, a1->Data1->Rotation.y);
		sub_409E70((NJS_MODEL_SADX*)Object_Wele.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Wele_Fan.pos[0], Wele_Fan.pos[1], Wele_Fan.pos[2]);
		njRotateX(0, Wele_Fan.ang[0]);
		v5 = *(float*)&v1->LoopData * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5*-1);
		}
		sub_409E70((NJS_MODEL_SADX*)Wele_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Wele_Fan.pos[0], Wele_Fan.pos[1] - 47.0f, Wele_Fan.pos[2]);
		if (Wele_Fan.ang[3] != 0x0)
		{
			njRotateX(0, (unsigned __int16)0);
		}
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5 + 0x4000);
		}
		sub_409E70((NJS_MODEL_SADX*)Wele_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Wele_Middle_Piece.pos[0], Wele_Middle_Piece.pos[1], Wele_Middle_Piece.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Wele_Middle_Piece.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void Wele2_Display(ObjectMaster *a1)
{
	Angle v5;
	EntityData1 *v1;

	if (a1)
	{
		v1 = a1->Data1;
	}

	if (!DroppedFrames)
	{
		njSetTexture((NJS_TEXLIST*)&OBJ_WINDY_TEXLIST);
		njPushMatrix(0);
		njTranslateV(0, (NJS_VECTOR*)a1->Data1->Object->pos); //Draw the model where the collision is
		njRotateY(0, a1->Data1->Rotation.y);
		sub_409E70((NJS_MODEL_SADX*)Object_Normal_AltDoor_Wele.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Normal_AltDoor_Wele_PropBottom.pos[0], Normal_AltDoor_Wele_PropBottom.pos[1], Normal_AltDoor_Wele_PropBottom.pos[2]);
		v5 = *(float*)&v1->LoopData * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Normal_AltDoor_Wele_PropBottom.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Normal_AltDoor_Wele_Door.pos[0], Normal_AltDoor_Wele_Door.pos[1], Normal_AltDoor_Wele_Door.pos[2]);
		if (a1->Data1->CharIndex == 1)
		{
			njRotateY(0, 0xA000);
		}
		sub_409E70((NJS_MODEL_SADX*)Normal_AltDoor_Wele_Door.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Normal_AltDoor_Wele_PropTop.pos[0], Normal_AltDoor_Wele_PropTop.pos[1], Normal_AltDoor_Wele_PropTop.pos[2]);
		njRotateX(0, Normal_AltDoor_Wele_PropTop.ang[0]);
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5*-1);
		}
		sub_409E70((NJS_MODEL_SADX*)Normal_AltDoor_Wele_PropTop.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Normal_AltDoor_Wele_Middle_Piece.pos[0], Normal_AltDoor_Wele_Middle_Piece.pos[1], Normal_AltDoor_Wele_Middle_Piece.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Normal_AltDoor_Wele_Middle_Piece.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void Wele3_Display(ObjectMaster *a1)
{
	Angle v5;
	EntityData1 *v1;

	if (a1)
	{
		v1 = a1->Data1;
	}

	if (!DroppedFrames)
	{
		njSetTexture((NJS_TEXLIST*)&OBJ_WINDY_TEXLIST);
		njPushMatrix(0);
		njTranslateV(0, (NJS_VECTOR*)a1->Data1->Object->pos); //Draw the model where the collision is
		njRotateY(0, a1->Data1->Rotation.y);
		sub_409E70((NJS_MODEL_SADX*)Object_White_Alt_Wele.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Alt_White_Wele_PropTop.pos[0], Alt_White_Wele_PropTop.pos[1], Alt_White_Wele_PropTop.pos[2]);
		v5 = *(float*)&v1->LoopData * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Alt_White_Wele_PropTop.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Alt_White_Wele_PropBottom.pos[0], Alt_White_Wele_PropBottom.pos[1], Alt_White_Wele_PropBottom.pos[2]);
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Alt_White_Wele_PropBottom.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Alt_White_Wele_Door.pos[0], Alt_White_Wele_Door.pos[1], Alt_White_Wele_Door.pos[2]);
		if (a1->Data1->CharIndex == 1)
		{
			njRotateY(0, 0xA000);
		}
		sub_409E70((NJS_MODEL_SADX*)Alt_White_Wele_Door.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void Wele_Main(ObjectMaster *a1)
{
	float dest = a1->Data1->Scale.x;
	float pos = a1->Data1->Object->pos[1];
	float speed = 0.7f; //How fast it'll move up or down
	EntityData1 *v1;

	//NextAction = Mode. Modes: 0 = idle, 1 = moving, 2 = reached destination
	//CharIndex = Flag for door.

	if (!ClipSetObject(a1))
	{
		if (a1)
		{
			v1 = a1->Data1;
		}
		uint8_t state = a1->Data1->NextAction;


		if (state != 1 && state != 2 && state != 3) //Failsafe
		{
			a1->Data1->NextAction = 0;
			a1->Data1->CharIndex = 0;
		}

		if (state == 2) //Destination Mode. Destination has been reached.
		{
			if (pos != dest) //If it overshot, move it back a little to perfectly line it up with its intended destination.
			{
				a1->Data1->Object->pos[1] = a1->Data1->Scale.x;
			}
			if (a1->Data1->Rotation.y != a1->Data1->Rotation.z) //If it couldn't rotate fast enough before it got here, automatically snap to it.
			{
				a1->Data1->Rotation.y = a1->Data1->Rotation.z;
				a1->Data1->Object->ang[1] = a1->Data1->Rotation.z;
			}
			if (a1->Data1->Scale.z != 0) //If the Wele is one of the alternate models, this opens the door and keeps it open.
			{
				a1->Data1->CharIndex = 1;
			}
		}

		else if (state == 1) //Moving Mode. Either moves up or down by comparing the new X scale to the original Y position.
		{
			if (a1->Data1->Scale.x > a1->Data1->Position.y) //moving up
			{
				if (pos < dest)
				{
					a1->Data1->Object->pos[1] += speed; //Y axis
				}
				else
				{
					a1->Data1->NextAction = 2; //If we've reached the destination, enter Mode 2.
				}
			}

			else if (a1->Data1->Scale.x < a1->Data1->Position.y) //moving down
			{
				if (pos > dest)
				{
					a1->Data1->Object->pos[1] -= speed; //Y axis
				}
				else
				{
					a1->Data1->NextAction = 2; //If we've reached the destination, enter Mode 2.
				}
			}

			if (a1->Data1->Rotation.y != a1->Data1->Rotation.z) //Handles rotation if Y rotation is different than Z rotation.
			{
				if (a1->Data1->Rotation.y > a1->Data1->Rotation.z) //Determine which direction is the fastest to spin towards. (If the difference between Y rotation and Z rotation is 0x8000, it doesn't matter which it picks.)
				{
					a1->Data1->Rotation.y -= 0x50;
					a1->Data1->Object->ang[1] -= 0x50;
				}

				else
				{
					a1->Data1->Rotation.y += 0x50;
					a1->Data1->Object->ang[1] += 0x50;
				}
			}
		}

		else if (state == 0) //Idle Mode. This is the Mode it spawns in.
		{
			if (a1->Data1->Scale.z != 0 && IsPlayerInsideSphere(&a1->Data1->Position, 77)) //The alternate Wele models have doors. If the player approaches one, and it's using an alternate model, open the door.
			{
				a1->Data1->CharIndex = 1;
			}

			else if (a1->Data1->Scale.z != 0 && !IsPlayerInsideSphere(&a1->Data1->Position, 117)) //If the player has moved away from the alternate model Wele, make sure the door is closed.
			{
				a1->Data1->CharIndex = 0;
			}

			if (IsPlayerInsideSphere(&a1->Data1->Position, 9)) //Activation radius. Stepping inside this sphere will initiate movement, and close the door if there is one to close.
			{
				a1->Data1->NextAction = 1; //Enter Mode 1
				a1->Data1->CharIndex = 0; // Shut the door.
			}
		}

		if (v1->Scale.y != 0) //Fan spin speed.
		{
			*(float*)&v1->LoopData = v1->Scale.y + *(float*)&v1->LoopData;
		}
		else
		{
			*(float*)&v1->LoopData = 1.5f + *(float*)&v1->LoopData;
		}

		if (a1->Data1->Scale.z > 0) //Making sure to use the right display routine.
		{
			Wele3_Display(a1);
		}
		else if (a1->Data1->Scale.z < 0)
		{
			Wele2_Display(a1);
		}
		else
		{
			Wele_Display(a1);
		}
	}
}

void __cdecl Load_Wele(ObjectMaster *a1)
{
	/*Overview of functions:
	XRotation = Does nothing
	YRotation = Starting rotation
	ZRotation = Aim rotation
	Notes: As stated, the Y rotation is its initial rotation when spawned. I tried to emulate the theory I had a few months ago about what Wele's "Aim Angle" note for the Z rotation.
	If the Z rotation does not match the Y rotation, when the Wele moves, it will slowly spin until it matches the Z rotation. If it can't reach the Z rotation in time before it reaches its
	destination, it will automatically snap to the Z rotation. (This will not happen with our layout.)

	XScale = Destination. Functions like the first functioning versions of Raft put in. The Y position is added to the X scale, and that becomes the new X scale. It's later compared to see if it
	needs to move up or down. If the X scale is 0, it will default to 1 to ensure the coding runs properly.
	YScale = Fan speed. Customizable fan speed for the top and bottom propellor. Cannot set the propellor's speeds individually; they will always both spin at the same speed. If this is 0,
	the default spin speed (1.5) is used. This will be the case in our mod.
	ZScale = Allows selection of which Wele model to use. 0 = Normal Wele, >0 = White Wele, <0 = Alternate Normal Wele*/
	a1->Data1->Object = &Object_White_Alt_Wele;

	AddToCollision(a1, 1); //set up a moving collision, replaces a1->Data1->Object with a pointer to itself

	if (a1->Data1->Scale.x == 0)
	{
		a1->Data1->Scale.x = (a1->Data1->Position.y + 1); //Default
	}
	else
	{
		a1->Data1->Scale.x = (a1->Data1->Position.y + a1->Data1->Scale.x); //Setting the destination.
	}

	a1->MainSub = &Wele_Main; //Determining Display Routine based on model selected.
	if (a1->Data1->Scale.z > 0)
	{
		a1->DisplaySub = &Wele3_Display;
	}
	else if (a1->Data1->Scale.z < 0)
	{
		a1->DisplaySub = &Wele2_Display;
	}
	else
	{
		a1->DisplaySub = &Wele_Display;
	}
	a1->DeleteSub = &deleteSub_Global; //a function that removes a1->Data1->Object from the object list & dynamic list
}