#include "stdafx.h"
#include <cmath>
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "Raft_Objects.h"

void Raft_Display(ObjectMaster *a1)
{
	if (!DroppedFrames)
	{
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
	float speed = 0;

	if (a1->Data1->Scale.z > 28)
	{
		a1->Data1->Rotation.x = 0x1;
	}

	speed = njSin(0x7D) * a1->Data1->Scale.z;

	if (speed < 0)
	{
		speed = speed * -1;
	}

	while (speed > 1)
	{
		speed -= 0.1;
	}

	char timer = a1->Data1->CharIndex;
	if (!ClipSetObject(a1))
	{
		if (timer == 0)
		{
			uint8_t state = a1->Data1->NextAction;

			if (state == 0)
			{
				if (pos < orig)
				{
					a1->Data1->Object->pos[1] += speed;
					if (a1->Data1->Rotation.x == 0)
					{
						a1->Data1->Scale.z++;
					}
					else
					{
						a1->Data1->Scale.z--;
					}
				}

				else
				{
					a1->Data1->Object->pos[1] = orig;
					a1->Data1->NextAction = 1; //state (Mode. Moving up or down?)

					a1->Data1->CharIndex = 1; //timer (How long it stops when it reaches the peak or lowest point)
					a1->Data1->Rotation.x = 0;
					a1->Data1->Scale.z = 0;
				}

			}
			else
			{
				if (pos > dest)
				{
					a1->Data1->Object->pos[1] -= speed;
					if (a1->Data1->Rotation.x == 0)
					{
						a1->Data1->Scale.z++;
					}
					else
					{
						a1->Data1->Scale.z--;
					}
				}
				else
				{
					a1->Data1->Object->pos[1] = dest;
					a1->Data1->NextAction = 0; //state

					a1->Data1->CharIndex = 1; //timer
					a1->Data1->Rotation.x = 0;
					a1->Data1->Scale.z = 0;
				}
			}
		}
		else
		{
			a1->Data1->CharIndex--;
		}

		Raft_Display(a1);
	}
}

void __cdecl Load_Raft(ObjectMaster *a1)
{
	if (a1->Data1->Scale.z >= 0)
	{
		a1->Data1->Object = &Object_Raft2;
	}
	else
	{
		a1->Data1->Object = &Object_Raft3;
	}
	AddToCollision(a1, 4); //set up a moving collision with scaling, replaces a1->Data1->Object with a pointer to itself
	//a1->Data1->Scale.y = a1->Data1->Position.y - a1->Data1->Scale.y; //dest pos
	a1->Data1->Scale.y = (a1->Data1->Position.y - 10.0f);
	a1->Data1->Scale.z = 0;
	a1->Data1->Rotation.x = 0;

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
	double distance;


	//char timer = a1->Data1->CharIndex;
	if (!ClipSetObject(a1))
	{
		if (*(float *)&a1->Data1->LoopData != 1.0f)
		{
			distance = 0;

			if (orig < dest)
			{
				for (double i = (double)a1->Data1->Position.y; i < (double)a1->Data1->Scale.y; i += 0.01)
				{
					distance += 0.01;
				}
			}
			else
			{
				for (double i = (double)a1->Data1->Position.y; i > (double)a1->Data1->Scale.y; i -= 0.01)
				{
					distance += 0.01;
				}
			}

			if (a1->Data1->Rotation.z != 0)
			{
				speed = njSin((a1->Data1->Rotation.z / 2.0)) * *(Angle *)&a1->Data1->CharIndex;
			}

			else
			{
				speed = njSin(0x7D) * *(Angle *)&a1->Data1->CharIndex;
			}


			if (speed < 0)
			{
				speed = speed * -1;
			}

			while (speed > 1)
			{
				speed -= 0.1;
			}

			uint8_t state = a1->Data1->NextAction;

			if (dest > orig) //moving up first (Y scale)
			{
				if (state == 0)
				{
					if (pos < dest)
					{
						a1->Data1->Object->pos[1] += speed;
						a1->Data1->Scale.x += speed;
						if (a1->Data1->Rotation.x == 0)
						{
							*(Angle *)a1->Data1->CharIndex++;
						}
						else
						{
							*(Angle *)a1->Data1->CharIndex--;
						}
					}

					else
					{
						a1->Data1->Object->pos[1] = dest;
						a1->Data1->NextAction = 1; //state (Mode. Moving up or down?)

						//a1->Data1->CharIndex = 1; //timer (How long it stops when it reaches the peak or lowest point)
						a1->Data1->Scale.x = 0;
						a1->Data1->Rotation.x = 0;
						*(Angle *)&a1->Data1->CharIndex = 0;
					}
				}
				else
				{
					if (pos > orig)
					{
						a1->Data1->Object->pos[1] -= speed;
						a1->Data1->Scale.x += speed;
						if (a1->Data1->Rotation.x == 0)
						{
							*(Angle *)a1->Data1->CharIndex++;
						}
						else
						{
							*(Angle *)a1->Data1->CharIndex--;
						}
					}
					else
					{
						a1->Data1->Object->pos[1] = orig;
						a1->Data1->NextAction = 0; //state

						//a1->Data1->CharIndex = 1; //timer
						a1->Data1->Scale.x = 0;
						a1->Data1->Rotation.x = 0;
						*(Angle *)&a1->Data1->CharIndex = 0;
					}
				}
			}

			else //moving down first (Y scale)
			{
				if (state == 0)
				{
					if (pos < orig)
					{
						a1->Data1->Object->pos[1] += speed;
						a1->Data1->Scale.x += speed;
						if (a1->Data1->Rotation.x == 0)
						{
							*(Angle *)a1->Data1->CharIndex++;
						}
						else
						{
							*(Angle *)a1->Data1->CharIndex--;
						}
					}

					else
					{
						a1->Data1->Object->pos[1] = orig;
						a1->Data1->NextAction = 1; //state (Mode. Moving up or down?)

						//a1->Data1->CharIndex = 1; //timer (How long it stops when it reaches the peak or lowest point)
						a1->Data1->Scale.x = 0;
						a1->Data1->Rotation.x = 0;
						*(Angle *)&a1->Data1->CharIndex = 0;
					}
				}
				else
				{
					if (pos > dest)
					{
						a1->Data1->Object->pos[1] -= speed;
						a1->Data1->Scale.x += speed;
						if (a1->Data1->Rotation.x == 0)
						{
							*(Angle *)a1->Data1->CharIndex++;
						}
						else
						{
							*(Angle *)a1->Data1->CharIndex--;
						}
					}
					else
					{
						a1->Data1->Object->pos[1] = dest;
						a1->Data1->NextAction = 0; //state

						//a1->Data1->CharIndex = 1; //timer
						a1->Data1->Scale.x = 0;
						a1->Data1->Rotation.x = 0;
						*(Angle *)&a1->Data1->CharIndex = 0;
					}
				}
			}
			if (a1->Data1->Scale.x >= (distance / 2.0) && a1->Data1->Rotation.x != 0x1) //2.0157778
			{
				a1->Data1->Rotation.x = 0x1;
				a1->Data1->Scale.x = (distance / 2.0);
				*(Angle *)a1->Data1->CharIndex--;

				if (dest > orig) //moving up first (Y scale)
				{
					a1->Data1->Object->pos[1] = (orig + (distance / 2.0));
				}

				else
				{
					a1->Data1->Object->pos[1] = (orig - (distance / 2.0));
				}
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

	a1->Data1->Scale.x = 0;
	a1->Data1->Rotation.x = 0;
	//a1->Data1->Rotation.z = 0;
	*(Angle *)&a1->Data1->CharIndex = 0;

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

	a1->Data1->Scale.x = 0;
	a1->Data1->Rotation.x = 0;
	//a1->Data1->Rotation.z = 0;
	*(Angle *)&a1->Data1->CharIndex = 0;

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

	a1->Data1->Scale.x = 0;
	a1->Data1->Rotation.x = 0;
	//a1->Data1->Rotation.z = 0;
	*(Angle *)&a1->Data1->CharIndex = 0;

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

	a1->Data1->Scale.x = 0;
	a1->Data1->Rotation.x = 0;
	//a1->Data1->Rotation.z = 0;
	*(Angle *)&a1->Data1->CharIndex = 0;

	a1->MainSub = &RaftOther_Main;
	a1->DisplaySub = &RaftOther_Display;
	a1->DeleteSub = &deleteSub_Global; //a function that removes a1->Data1->Object from the object list & dynamic list
}