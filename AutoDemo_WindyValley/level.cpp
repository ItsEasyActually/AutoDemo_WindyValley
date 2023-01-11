#include "stdafx.h"

static const char Max = 3;
LandTableInfo* ADWVGeo[Max] = { nullptr };

NJS_TEXNAME textures_windy1[42];
NJS_TEXLIST texlist_windy1 = { arrayptrandlength(textures_windy1) };

NJS_TEXNAME textures_windy2[25];
NJS_TEXLIST texlist_windy2 = { arrayptrandlength(textures_windy2) };

NJS_TEXNAME textures_windy3[55];
NJS_TEXLIST texlist_windy3 = { arrayptrandlength(textures_windy3) };

void initADWV_Landtables()
{
	PrintDebug("AD WV: Loading Landtables...\n");
	LandTable* ADWVTemp[Max] = { nullptr };

	for (Uint8 i = 0; i < LengthOfArray(ADWVGeo); ++i) 
	{
		std::string str = "landtable020" + std::to_string(i);
		std::string fullPath = "System\\" + str +".sa1lvl";
		ADWVGeo[i] = new LandTableInfo(helper.GetReplaceablePath(fullPath.c_str()));
		ADWVTemp[i] = ADWVGeo[i]->getlandtable();
	}

	if (!ADWVTemp[0])
		return;

	ADWVTemp[0]->TexName = "WINDY01";
	ADWVTemp[0]->TexList = &texlist_windy1;

	ADWVTemp[1]->TexName = "WINDY02";
	ADWVTemp[1]->TexList = &texlist_windy2;

	ADWVTemp[2]->TexName = "WINDY03";
	ADWVTemp[2]->TexList = &texlist_windy3;

	for (Uint8 i = 0; i < LengthOfArray(ADWVGeo); ++i)
	{
		GeoLists[8 * LevelIDs_WindyValley + i] = ADWVTemp[i];
	}

	PrintDebug("Done.\n");
}
