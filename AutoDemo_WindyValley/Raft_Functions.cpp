#include "stdafx.h"
#include <cmath>
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "Raft_Objects.h"

void Raft_Display(ObjectMaster *a1) {
	if (!DroppedFrames) {
		njSetTexture((NJS_TEXLIST*)&OBJ_WINDY_TEXLIST);
		njPushMatrix(0);
		njTranslateV(0, (NJS_VECTOR*)a1->Data1->Object->pos); //Draw the model where the collision is
		njRotateY(0, a1->Data1->Rotation.y);
		njScale(0, (1.0f + a1->Data1->Scale.x), (1.0f + a1->Data1->Scale.x), (1.0f + a1->Data1->Scale.x)); //scale thing here, maybe use a1->Data1->Scale.x as you said
		DrawQueueDepthBias = -6000.0f;
		DrawModel(a1->Data1->Object->basicdxmodel); //draw the collision model
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
	}
}

void Raft_Main(ObjectMaster *a1)
{
	float orig = a1->Data1->Position.y;
	float dest = a1->Data1->Scale.y;
	float pos = a1->Data1->Object->pos[1];
	float speed = 0.3f; //based on what you said

	char timer = a1->Data1->CharIndex;
	if (!ClipSetObject(a1)) {
		if (timer == 0) {
			uint8_t state = a1->Data1->NextAction;

			if (state == 0) {
				if (pos < orig) a1->Data1->Object->pos[1] += speed;
				else {
					a1->Data1->Object->pos[1] = orig;
					a1->Data1->NextAction = 1; //state

					a1->Data1->CharIndex = 10; //timer
				}

			}
			else {
				if (pos > dest) a1->Data1->Object->pos[1] -= speed;
				else {
					a1->Data1->Object->pos[1] = dest;
					a1->Data1->NextAction = 0; //state

					a1->Data1->CharIndex = 10; //timer
				}
			}
		}
		else a1->Data1->CharIndex--;
		Raft_Display(a1);
	}
}

void __cdecl Load_Raft(ObjectMaster *a1)
{
	if (a1->Data1->Scale.z >= 0)
	{
		a1->Data1->Object = &Object_Raft2;
	} else {
		a1->Data1->Object = &Object_Raft3;
	}
	AddToCollision(a1, 4); //set up a moving collision with scaling, replaces a1->Data1->Object with a pointer to itself
	//a1->Data1->Scale.y = a1->Data1->Position.y + a1->Data1->Scale.y; //dest pos
	a1->Data1->Scale.y = (a1->Data1->Position.y - 10.0f);

	a1->MainSub = &Raft_Main;
	a1->DisplaySub = &Raft_Display;
	a1->DeleteSub = &deleteSub_Global; //a function that removes a1->Data1->Object from the object list & dynamic list
}

void RaftOther_Display(ObjectMaster *a1)
{
	if (!DroppedFrames)
	{
		njSetTexture((NJS_TEXLIST*)&OBJ_WINDY_TEXLIST);
		njPushMatrix(0);
		njTranslateV(0, (NJS_VECTOR*)a1->Data1->Object->pos); //Draw the model where the collision is
		njRotateY(0, a1->Data1->Rotation.y);
		njScale(0, (1.0f + a1->Data1->Scale.z), (1.0f + a1->Data1->Scale.z), (1.0f + a1->Data1->Scale.z));
		DrawQueueDepthBias = -6000.0f;
		DrawModel(a1->Data1->Object->basicdxmodel); //draw the collision model
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
	}
}

void RaftOther_Main(ObjectMaster *a1)
{
	float orig = a1->Data1->Position.y;
	float dest = a1->Data1->Scale.y;
	float pos = a1->Data1->Object->pos[1];
	float speed = 0;


	if (abs(orig) > abs(dest)) //I tried implementing dynamic speed. Using the speed of Raft for all these, especially those with a long movement range, just makes them painfully slow.
	{
		speed = (orig / dest) / 2;
	}

	else
	{
		speed = (dest / orig) / 2;
	}

	if (speed < 0)
	{
		speed = speed * -1; //Making sure movement speed is within a certain range: (0 - 1)
	}

	while (speed > 1)
	{
		speed -= 0.1; //Making sure it doesn't move too fast (So that Sonic can always stand on it without falling when it moves down, or clipping through it when moving up.
	}

	char timer = a1->Data1->CharIndex;
	if (!ClipSetObject(a1))
	{
		if (*(float *)&a1->Data1->LoopData != 1.0f)
		{
			if (timer == 0)
			{
				uint8_t state = a1->Data1->NextAction;

				if (dest > orig)
				{
					if (state == 0)
					{
						if (pos < dest)
						{
							a1->Data1->Object->pos[1] += speed;
						}

						else
						{
							a1->Data1->Object->pos[1] = dest;
							a1->Data1->NextAction = 1; //state (Mode. Moving up or down?)

							a1->Data1->CharIndex = 10; //timer (How long it stops when it reaches the peak or lowest point)
						}
					}
					else
					{
						if (pos > orig)
						{
							a1->Data1->Object->pos[1] -= speed;
						}
						else
						{
							a1->Data1->Object->pos[1] = orig;
							a1->Data1->NextAction = 0; //state

							a1->Data1->CharIndex = 10; //timer
						}
					}
				}

				else
				{
					if (state == 0)
					{
						if (pos < orig)
						{
							a1->Data1->Object->pos[1] += speed;
						}

						else
						{
							a1->Data1->Object->pos[1] = orig;
							a1->Data1->NextAction = 1; //state (Mode. Moving up or down?)

							a1->Data1->CharIndex = 10; //timer (How long it stops when it reaches the peak or lowest point)
						}
					}
					else
					{
						if (pos > dest)
						{
							a1->Data1->Object->pos[1] -= speed;
						}
						else
						{
							a1->Data1->Object->pos[1] = dest;
							a1->Data1->NextAction = 0; //state

							a1->Data1->CharIndex = 10; //timer
						}
					}
				}
			}
			else
			{
				a1->Data1->CharIndex--;
			}
		}
		RaftOther_Display(a1);
	}
}

void __cdecl Load_Raft2(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Raft2;
	AddToCollision(a1, 5); //set up a moving collision with scaling, replaces a1->Data1->Object with a pointer to itself
	a1->Data1->Scale.y = (a1->Data1->Position.y + a1->Data1->Scale.y);

	if (a1->Data1->Scale.y == a1->Data1->Position.y)
	{
		*(float *)&a1->Data1->LoopData = 1.0f; //If the Y Scale is set to 0, don't make it move at all.
	}


	a1->MainSub = &RaftOther_Main;
	a1->DisplaySub = &RaftOther_Display;
	a1->DeleteSub = &deleteSub_Global; //a function that removes a1->Data1->Object from the object list & dynamic list
}

void __cdecl Load_Raft3(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_Raft3;
	AddToCollision(a1, 5); //set up a moving collision with scaling, replaces a1->Data1->Object with a pointer to itself
	a1->Data1->Scale.y = (a1->Data1->Position.y + a1->Data1->Scale.y);

	if (a1->Data1->Scale.y == a1->Data1->Position.y)
	{
		*(float *)&a1->Data1->LoopData = 1.0f; //If the Y Scale is set to 0, don't make it move at all.
	}

	a1->MainSub = &RaftOther_Main;
	a1->DisplaySub = &RaftOther_Display;
	a1->DeleteSub = &deleteSub_Global; //a function that removes a1->Data1->Object from the object list & dynamic list
}

void __cdecl Load_TRaft1(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_TRaft1;
	AddToCollision(a1, 5); //set up a moving collision with scaling, replaces a1->Data1->Object with a pointer to itself
	a1->Data1->Scale.y = (a1->Data1->Position.y + a1->Data1->Scale.y);

	if (a1->Data1->Scale.y == a1->Data1->Position.y)
	{
		*(float *)&a1->Data1->LoopData = 1.0f; //If the Y Scale is set to 0, don't make it move at all.
	}

	a1->MainSub = &RaftOther_Main;
	a1->DisplaySub = &RaftOther_Display;
	a1->DeleteSub = &deleteSub_Global; //a function that removes a1->Data1->Object from the object list & dynamic list
}

void __cdecl Load_TRaft2(ObjectMaster *a1)
{
	a1->Data1->Object = &Object_TRaft2;
	AddToCollision(a1, 5); //set up a moving collision with scaling, replaces a1->Data1->Object with a pointer to itself
	a1->Data1->Scale.y = (a1->Data1->Position.y + a1->Data1->Scale.y);

	if (a1->Data1->Scale.y == a1->Data1->Position.y)
	{
		*(float *)&a1->Data1->LoopData = 1.0f; //If the Y Scale is set to 0, don't make it move at all.
	}
	a1->MainSub = &RaftOther_Main;
	a1->DisplaySub = &RaftOther_Display;
	a1->DeleteSub = &deleteSub_Global; //a function that removes a1->Data1->Object from the object list & dynamic list
}