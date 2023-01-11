

const char* TexName;

int BinaryNamePointer;
int LoadFuncPointer;

//LandTable landtable_008051E0 = { LengthOfArray(collist_008046E8), 0, 0xC, 0, 3000.0f, collist_008046E8, NULL, "WINDY01", (NJS_TEXLIST *)&texlist_windy1, 0, 0 };

/*
PVMEntry WindyValley1Textures_list[] = {
	{ "WINDY01", &WINDY01_texlist }
};

LevelPVMList WindyValley1Textures = { levelact(LevelIDs_WindyValley, 0), arraylengthandptr(WindyValley1Textures_list) };*/

Sint16 poly_007FD16C[] = {
	0, 1, 3, 2
};

NJS_MESHSET_SADX meshlist_007FD174[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_007FD16C, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_007FD190[] = {
	{ -1947, -779.7325f, -4995 },
	{ -1977, -779.7325f, 1070 },
	{ 4117, -779.7325f, 1131 },
	{ 4087, -779.7325f, -5041 }
};

NJS_VECTOR normal_007FD1C0[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MATERIAL dz_dummymat0[] = {
	{ { 0xFFFFFFFF },{ 0x00000000 }, 0, 0, NJD_FLAG_IGNORE_LIGHT }
};

NJS_MODEL_SADX attach_007FD1F0 = { vertex_007FD190, normal_007FD1C0, LengthOfArray(vertex_007FD190), meshlist_007FD174, dz_dummymat0, LengthOfArray(meshlist_007FD174), 0,{ 1070, -779.7325f, -1955 }, 4336.773f, NULL };

NJS_OBJECT object_007FD21C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_007FD1F0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

DeathZone WindyValley1DeathZones[] = {
	{ CharacterFlags_Sonic | CharacterFlags_Eggman | CharacterFlags_Tails | CharacterFlags_Knuckles | CharacterFlags_Tikal | CharacterFlags_Amy | CharacterFlags_Gamma | CharacterFlags_Big, &object_007FD21C },
	{ 0 }
};