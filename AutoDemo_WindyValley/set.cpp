#include "stdafx.h"
#include <SADXModLoader.h>
#include "set.h"

#define SET_COUNT 4096
#define MISSION_SET_COUNT 2048

static SETObjData set_table[SET_COUNT] {};
static MissionSETData mission_set_table[MISSION_SET_COUNT] {};

void set_init()
{
	WriteData((SETObjData**)0x0046B817, &set_table[0]);
	WriteData((SETObjData**)0x0046BAC8, &set_table[0]);
	WriteData((SETObjData**)0x0059230A, &set_table[0]);
	WriteData((SETObjData**)0x0046BD83, &set_table[0]);
	WriteData((short**)0x0046BE6E, &set_table[0].Flags);
	WriteData((SETObjData**)0x0046BE73, &set_table[0]);
	WriteData((short**)0x0046BE0C, &set_table[0].Flags);
	WriteData((short**)0x0046BF4D, &set_table[0].Flags);
	WriteData((ObjectMaster***)0x0059222D, &set_table[0].ObjInstance);

	WriteData((PRM_Entry***)0x591D5F, &mission_set_table[0].PRMEntry);
	WriteData((MissionSETData**)0x00591D64, &mission_set_table[0]);
	WriteData((MissionSETData**)0x00592245, &mission_set_table[0]);
	WriteData((float**)0x0059224C, &mission_set_table[MISSION_SET_COUNT - 1].Distance);
	WriteData((MissionSETData**)0x00592268, &mission_set_table[0]);
	WriteData((float**)0x0059226F, &mission_set_table[MISSION_SET_COUNT - 1].Distance);
	WriteData((MissionSETData**)0x005922AA, &mission_set_table[0]);
	WriteData((float**)0x005922B5, &mission_set_table[MISSION_SET_COUNT - 1].Distance);
	WriteData((char**)0x5922FB, &mission_set_table[0].LoadCount);
	WriteData((short**)0x00591BAF, &mission_set_table[0].Flags);
	WriteData((ObjectMaster***)0x00591A2D, &mission_set_table[0].ObjInstance);
	WriteData((ObjectMaster***)0x00591C26, &mission_set_table[0].ObjInstance);
	WriteData((ObjectMaster***)0x0059221D, &mission_set_table[0].ObjInstance);

	WriteData((int*)0x0046BD64, SET_COUNT);
	WriteData((int*)0x0046BD6C, SET_COUNT);
	WriteData((int*)0x0046BF3D, SET_COUNT);
	WriteData((int*)0x0046BF44, SET_COUNT);

	WriteData((int*)0x00591A32, MISSION_SET_COUNT);
}
