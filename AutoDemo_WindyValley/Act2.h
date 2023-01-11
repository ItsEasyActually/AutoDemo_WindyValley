
//Act 2 


//LandTable landtable_008046C0 = { LengthOfArray(collist_00804360), 0, 0xC, 0, 3000.0f, collist_00804360, NULL, "WINDY02", (NJS_TEXLIST *)&texlist_windy2, 0, 0 };

/*
PVMEntry WindyValley2Textures_list[] = {
	{ "WINDY02", &WINDY02_texlist }
};

LevelPVMList WindyValley2Textures = { levelact(LevelIDs_WindyValley, 1), arraylengthandptr(WindyValley2Textures_list) };*/

Sint16 poly_007FD264[] = {
	0, 1, 3, 2
};

NJS_MESHSET_SADX meshlist_007FD26C[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_007FD264, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_007FD288[] = {
	{ -1018.652f, 156.2656f, -931.6352f },
	{ -1043.62f, 156.2656f, 846.7595f },
	{ 754.0608f, 156.2656f, 901.7099f },
	{ 704.1252f, 156.2656f, -896.6667f }
};

NJS_VECTOR normal_007FD2B8[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MATERIAL dz_dummymat1[] = {
	{ { 0xFFFFFFFF },{ 0x00000000 }, 0, 0, NJD_FLAG_IGNORE_LIGHT }
};

NJS_MODEL_SADX attach_007FD2E8 = { vertex_007FD288, normal_007FD2B8, LengthOfArray(vertex_007FD288), meshlist_007FD26C, dz_dummymat1, LengthOfArray(meshlist_007FD26C), 0,{ -144.7797f, 156.2656f, -14.96265f }, 1283.823f, NULL };

NJS_OBJECT object_007FD314 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_007FD2E8, 900, -360, -250, 0, 0, 0, 1, 1, 1, NULL, NULL };

DeathZone WindyValley2DeathZones[] = {
	{ CharacterFlags_Sonic | CharacterFlags_Eggman | CharacterFlags_Tails | CharacterFlags_Knuckles | CharacterFlags_Tikal | CharacterFlags_Amy | CharacterFlags_Gamma | CharacterFlags_Big, &object_007FD314 },
	{ 0 }
};