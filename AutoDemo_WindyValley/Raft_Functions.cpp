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
	if (timer == 0) {
		uint8_t state = a1->Data1->NextAction;

		if (state == 0) {
			if (pos < dest) a1->Data1->Object->pos[1] += speed;
			else {
				a1->Data1->Object->pos[1] = dest;
				a1->Data1->NextAction = 1; //state

				a1->Data1->CharIndex = 10; //timer
			}

		}
		else {
			if (pos > orig) a1->Data1->Object->pos[1] -= speed;
			else {
				a1->Data1->Object->pos[1] = orig;
				a1->Data1->NextAction = 0; //state

				a1->Data1->CharIndex = 10; //timer
			}
		}
	}
	else a1->Data1->CharIndex--;
	Raft_Display(a1);
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
	a1->Data1->Scale.y = (a1->Data1->Position.y + 10.0f);

	a1->MainSub = &Raft_Main;
	a1->DisplaySub = &Raft_Display;
	a1->DeleteSub = &deleteSub_Global; //a function that removes a1->Data1->Object from the object list & dynamic list
}