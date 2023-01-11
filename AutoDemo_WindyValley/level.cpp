#include "stdafx.h"

LandTableInfo* ADWVGeo[3] = { nullptr };

NJS_TEXNAME textures_windy1[42];
NJS_TEXLIST texlist_windy1 = { arrayptrandlength(textures_windy1) };

NJS_TEXNAME textures_windy2[25];
NJS_TEXLIST texlist_windy2 = { arrayptrandlength(textures_windy2) };

NJS_TEXNAME textures_windy3[55];
NJS_TEXLIST texlist_windy3 = { arrayptrandlength(textures_windy3) };


void initADWV_Landtables()
{
	PrintDebug("AD WV: Loading Landtables...\n");

	for (Uint8 i = 0; i < LengthOfArray(ADWVGeo); ++i) {
		std::string str = "landtable020" + std::to_string(i);
		std::string fullPath = "System\\" + str +".sa1lvl";
		ADWVGeo[i] = new LandTableInfo(helper.GetReplaceablePath(fullPath.c_str()));
	}

	LandTable* ADWV0 = ADWVGeo[0]->getlandtable();
	ADWV0->TexName = "WINDY01";
	ADWV0->TexList = &texlist_windy1;

	LandTable* ADWV1 = ADWVGeo[1]->getlandtable();
	ADWV1->TexName = "WINDY02";
	ADWV1->TexList = &texlist_windy2;

	LandTable* ADWV2 = ADWVGeo[2]->getlandtable();
	ADWV2->TexName = "WINDY03";
	ADWV2->TexList = &texlist_windy3;

	GeoLists[8 * LevelIDs_WindyValley + 0] = ADWV0;
	GeoLists[8 * LevelIDs_WindyValley + 1] = ADWV1;
	GeoLists[8 * LevelIDs_WindyValley + 2] = ADWV2;

	PrintDebug("Done.\n");
}
