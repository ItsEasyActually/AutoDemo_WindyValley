#include "stdafx.h"
#include <SADXModLoader.h>
#include "Functions.h"
#include "AdditionalVariables.h"

#include "Pot_Objects.h"
#include "Propellers.h"
#include "Dome_Objects.h"

void __cdecl Prope1_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	v1->Rotation.x = 0;
	v1->Rotation.z = 0;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prope1Base.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_Prope1Prop.pos[0], Object_Prope1Prop.pos[1], Object_Prope1Prop.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prope1Prop.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Prope1(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 2.7f + *(float*)&v1->CharIndex;
				}
				AddToCollisionList(v1);
				Prope1_Display(a1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Prope1_Display;
			InitCollision(a1, Prope1_Collision, 1, 4u);
		}
	}
}

void __cdecl Prope2_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	v1->Rotation.x = 0;
	v1->Rotation.z = 0;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prope2Base.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_Prope2Prop.pos[0], Object_Prope2Prop.pos[1], Object_Prope2Prop.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateX(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prope2Prop.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Prope2(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 2.7f + *(float*)&v1->CharIndex;
				}
				Prope2_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Prope2_Display;
			InitCollision(a1, Prope2_Collision, 1, 4u);
		}
	}
}

void __cdecl Prope3_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prope3Base.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_Prope3Prop.pos[0], Object_Prope3Prop.pos[1], Object_Prope3Prop.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prope3Prop.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Prope3(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	v1->Rotation.x = 0;
	v1->Rotation.z = 0;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 3.0f + *(float*)&v1->CharIndex;
				}
				Prope3_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Prope3_Display;
			InitCollision(a1, Prope3_Collision, 1, 4u);
		}
	}
}

void __cdecl PropeA_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle z1;
	Angle x1;

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
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		x1 = v1->Rotation.x;
		if (x1)
		{
			njRotateX(0, (unsigned __int16)x1);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_PropABase.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_PropAProp.pos[0], Object_PropAProp.pos[1], Object_PropAProp.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateX(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_PropAProp.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_PropeA(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Scale.x != 0)
			{
				*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
			}
			else
			{
				*(float*)&v1->CharIndex = 5.0f + *(float*)&v1->CharIndex;
			}
			PropeA_Display(a1);
			AddToCollisionList(v1);
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = PropeA_Display;
			InitCollision(a1, PropeA_Collision, 2, 4u);
		}
	}
}

void __cdecl PropeB_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle v6;
	Angle v7;
	Angle v8;

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v8 = v1->Rotation.z;
		if (v8)
		{
			njRotateZ(0, (unsigned __int16)v8);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		njPushMatrix(0);
		njTranslate(0, Object_PropeBTopPole.pos[0], (Object_PropeBTopPole.pos[1]), Object_PropeBTopPole.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Object_PropeBTopPole.model, 0, 1.0); //Root Model
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_PropeBTopFans.pos[0], (Object_PropeBTopPole.pos[1]), Object_PropeBTopFans.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateX(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_PropeBTopFans.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_PropeBBotPole.pos[0], (Object_PropeBBotPole.pos[1]), Object_PropeBBotPole.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Object_PropeBBotPole.model, 0, 1.0); //Root Model
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_PropeBBotFans.pos[0], (Object_PropeBBotPole.pos[1]), Object_PropeBBotFans.pos[2]);
		v6 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v6)
		{
			njRotateX(0, (unsigned __int16)v6);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_PropeBBotFans.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_PropeB(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 7.0f + *(float*)&v1->CharIndex;
				}
				PropeB_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = PropeB_Display;
			InitCollision(a1, PropeB_Collision, 5, 4u);
		}
	}
}

void __cdecl PropeC_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle v6;
	Angle v7;

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		njPushMatrix(0);
		njTranslate(0, Object_PropeCBar.pos[0], (Object_PropeCBar.pos[1]), Object_PropeCBar.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Object_PropeCBar.model, 0, 1.0); //Root Model
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_PropeCFans.pos[0], (Object_PropeCBar.pos[1]), Object_PropeCFans.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateX(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_PropeCFans.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_PropeC(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.y != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.y + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 7.0f + *(float*)&v1->CharIndex;
				}
				PropeC_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = PropeC_Display;
			InitCollision(a1, PropeC_Collision, 2, 4u);
		}
	}
}

void __cdecl Pot01_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle v6;
	Angle v7;

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Pot01.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_Pot01Top.pos[0], (Object_Pot01Top.pos[1]), Object_Pot01Top.pos[2]);
		njRotateY(0, Object_Pot01Top.ang[1]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Pot01Top.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_Pot01Mid.pos[0], (Object_Pot01Mid.pos[1]), Object_Pot01Mid.pos[2]);
		njRotateY(0, Object_Pot01Mid.ang[1]);
		v5 = *(float*)&v1->Object * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Pot01Mid.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_Pot01Bot.pos[0], (Object_Pot01Bot.pos[1]), Object_Pot01Bot.pos[2]);
		v5 = *(float*)&v1->LoopData * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Pot01Bot.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Pot01(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 7.0f + *(float*)&v1->CharIndex; //Top Fan Value
				}
				if (v1->Scale.y != 0)
				{
					*(float*)&v1->Object = v1->Scale.y + *(float*)&v1->Object;
				}
				else
				{
					*(float*)&v1->Object = 11.0f + *(float*)&v1->Object; //Middle Fan Value
				}
				if (v1->Scale.z != 0)
				{
					*(float*)&v1->LoopData = v1->Scale.z + *(float*)&v1->LoopData;
				}
				else
				{
					*(float*)&v1->LoopData = 15.0f + *(float*)&v1->LoopData; //Bottom Fan Value
				}
				Pot01_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Pot01_Display;
			InitCollision(a1, Pot01_Collision, 2, 4u);
		}
	}
}

void __cdecl Pot02_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8
	Angle v6;
	Angle v7;

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v6 = v1->Rotation.z;
		if (v6)
		{
			njRotateZ(0, (unsigned __int16)v6);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		v7 = v1->Rotation.x;
		if (v7)
		{
			njRotateX(0, (unsigned __int16)v7);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Pot02.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_Pot02Fans.pos[0], (Object_Pot02Fans.pos[1]), Object_Pot02Fans.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Pot02Fans.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Pot02(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 10.0f + *(float*)&v1->CharIndex;
				}
				Pot02_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Pot02_Display;
			InitCollision(a1, Pot02_Collision, 2, 4u);
		}
	}
}

void __cdecl Prop1_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prop1.model, 0, 1.0); //Root Model
		njPushMatrix(0);
		njTranslate(0, Object_Prop1Top.pos[0], (Object_Prop1Top.pos[1]), Object_Prop1Top.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prop1Top.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Object_Prop1Bot.pos[0], (Object_Prop1Bot.pos[1]), Object_Prop1Bot.pos[2]);
		v5 = *(float*)&v1->Object * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Object_Prop1Bot.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Prop1(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	v1->Rotation.x = 0;
	v1->Rotation.z = 0;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 3.7f + *(float*)&v1->CharIndex;
				}
				if (v1->Scale.y != 0)
				{
					*(float*)&v1->Object = v1->Scale.y + *(float*)&v1->Object;
				}
				else
				{
					*(float*)&v1->Object = -1.0f + *(float*)&v1->Object;
				}
				Prop1_Display(a1);
				AddToCollisionList(v1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Prop1_Display;
			InitCollision(a1, Prop1_Collision, 1, 4u);
		}
	}
}

void __cdecl Dome1_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		njPushMatrix(0);
		njTranslate(0, Dome_Base.pos[0], (Dome_Base.pos[1]), Dome_Base.pos[2]);
		v4 = v1->Rotation.y;
		sub_409E70((NJS_MODEL_SADX*)Dome_Base.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Fan.pos[0], (Dome_Fan.pos[1] + 30.0f), Dome_Fan.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Dome_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Cap.pos[0], (Dome_Cap.pos[1] + 43.0f), Dome_Cap.pos[2]);
		v4 = v1->Rotation.y;
		sub_409E70((NJS_MODEL_SADX*)Dome_Cap.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Dome1(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	v1->Rotation.x = 0;
	v1->Rotation.z = 0;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0 && v1->Scale.x > -11 && v1->Scale.x < 11)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 1.5f + *(float*)&v1->CharIndex;
				}
				sub_49CE60(v1, 0);
				AddToCollisionList(v1);
				Dome1_Display(a1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Dome1_Display;
			InitCollision(a1, Dome1_Collision, 1, 4u);
		}
	}
}

void __cdecl Dome2_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		njPushMatrix(0);
		njTranslate(0, Dome_Base.pos[0], (Dome_Base.pos[1]), Dome_Base.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Base.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Fan.pos[0], (Dome_Fan.pos[1] + 30.0f), Dome_Fan.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Dome_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Middle.pos[0], (Dome_Middle.pos[1] + 43.0f), Dome_Middle.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Middle.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Fan.pos[0], (Dome_Fan.pos[1] + 46.0f), Dome_Fan.pos[2]);
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5 + 0x4000);
		}
		sub_409E70((NJS_MODEL_SADX*)Dome_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Cap.pos[0], (Dome_Cap.pos[1] + 59.0f), Dome_Cap.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Cap.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Dome2(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	v1->Rotation.x = 0;
	v1->Rotation.z = 0;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 1.5f + *(float*)&v1->CharIndex;
				}
				AddToCollisionList(v1);
				sub_49CE60(v1, 0);
				Dome2_Display(a1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Dome2_Display;
			InitCollision(a1, Dome2_Collision, 1, 4u);
		}
	}
}

void __cdecl Dome3_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	Angle v4; // eax@6
	Angle v5; // st7@8

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		njPushMatrix(0);
		njTranslate(0, Dome_Base.pos[0], (Dome_Base.pos[1]), Dome_Base.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Base.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Fan.pos[0], (Dome_Fan.pos[1] + 30.0f), Dome_Fan.pos[2]);
		v5 = *(float*)&v1->CharIndex * 65536.0 * 0.002777777777777778;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Dome_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Middle.pos[0], (Dome_Middle.pos[1] + 43.0f), Dome_Middle.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Middle.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Fan.pos[0], (Dome_Fan.pos[1] + 46.0f), Dome_Fan.pos[2]);
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5 + 0x4000);
		}
		sub_409E70((NJS_MODEL_SADX*)Dome_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Middle.pos[0], (Dome_Middle.pos[1] + 59.0f), Dome_Middle.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Middle.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Fan.pos[0], (Dome_Fan.pos[1] + 61.0f), Dome_Fan.pos[2]);
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		sub_409E70((NJS_MODEL_SADX*)Dome_Fan.model, 0, 1.0);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, Dome_Cap.pos[0], (Dome_Cap.pos[1] + 74.0f), Dome_Cap.pos[2]);
		sub_409E70((NJS_MODEL_SADX*)Dome_Cap.model, 0, 1.0);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl Load_Dome3(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	v1->Rotation.x = 0;
	v1->Rotation.z = 0;
	if (!ClipSetObject(a1))
	{
		if (v1->Action)
		{
			if (v1->Action == 1)
			{
				if (v1->Scale.x != 0)
				{
					*(float*)&v1->CharIndex = v1->Scale.x + *(float*)&v1->CharIndex;
				}
				else
				{
					*(float*)&v1->CharIndex = 1.5f + *(float*)&v1->CharIndex;
				}
				AddToCollisionList(v1);
				sub_49CE60(v1, 0);
				Dome3_Display(a1);
			}
		}
		else
		{
			v1->Action = 1;
			a1->DisplaySub = Dome3_Display;
			InitCollision(a1, Dome3_Collision, 1, 4u);
		}
	}
}
