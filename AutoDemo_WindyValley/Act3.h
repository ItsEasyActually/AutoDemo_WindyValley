

//LandTable landtable_0080433C = { LengthOfArray(collist_00802BC0), 0, 0xC, 0, 3000.0f, collist_00802BC0, NULL, "WINDY03", (NJS_TEXLIST *)&texlist_windy3, 0, 0 };

/*
PVMEntry WindyValley3Textures_list[] = {
	{ "WINDY03", &WINDY03_texlist }
};

LevelPVMList WindyValley3Textures = { levelact(LevelIDs_WindyValley, 2), arraylengthandptr(WindyValley3Textures_list) };*/


Sint16 poly_007FD35C[] = {
	4, 0, 1
};

Sint16 poly_007FD364[] = {
	1, 2, 4, 3
};

NJS_MESHSET_SADX meshlist_007FD36C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_007FD35C, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_007FD364, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_007FD3A4[] = {
	{ 3075, -5015.018f, -2627 },
	{ 3852, -5015.018f, 430 },
	{ 4118.248f, -6823.48f, 541.2715f },
	{ 7626.248f, -6823.48f, -113.7285f },
	{ 5950, -5015.018f, -2862 }
};

NJS_VECTOR normal_007FD3E0[] = {
	{ 0, 1, 0 },
	{ 0.226327f, 0.919479f, 0.321456f },
	{ 0.416205f, 0.690885f, 0.591144f },
	{ 0.416205f, 0.690885f, 0.591144f },
	{ 0.226327f, 0.919479f, 0.321456f }
};

NJS_MATERIAL dz_dummymat2[] = {
	{ { 0xFFFFFFFF },{ 0x00000000 }, 0, 0, NJD_FLAG_IGNORE_LIGHT }
};

NJS_MODEL_SADX attach_007FD41C = { vertex_007FD3A4, normal_007FD3E0, LengthOfArray(vertex_007FD3A4), meshlist_007FD36C, dz_dummymat2, LengthOfArray(meshlist_007FD36C), 0,{ 5350.624f, -5919.249f, -1160.364f }, 2841.484f, NULL };

NJS_OBJECT object_007FD448 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_007FD41C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

Sint16 poly_007FD490[] = {
	0, 1, 3, 2
};

NJS_MESHSET_SADX meshlist_007FD498[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_007FD490, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_007FD4B4[] = {
	{ -2720, -11050.33f, -4447 },
	{ -2738, -11050.33f, 5149 },
	{ 9851, -11050.33f, 5438 },
	{ 9941, -11050.33f, -4502 }
};

NJS_VECTOR normal_007FD4E4[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_007FD514 = { vertex_007FD4B4, normal_007FD4E4, LengthOfArray(vertex_007FD4B4), meshlist_007FD498, dz_dummymat2, LengthOfArray(meshlist_007FD498), 0,{ 3601.5f, -11050.33f, 468 }, 8055.443f, NULL };

NJS_OBJECT object_007FD540 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_007FD514, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

Sint16 poly_007FD588[] = {
	4, 1, 5, 2,
	5, 3, 4, 0
};

NJS_MESHSET_SADX meshlist_007FD598[] = {
	{ NJD_MESHSET_4 | 0, 2, poly_007FD588, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_007FD5B8[] = {
	{ 3203, -5356.56f, -2089 },
	{ 823, -3221.938f, 999 },
	{ 1219, -3221.938f, 2522 },
	{ 4983, -5356.56f, -309 },
	{ 1573, -3221.938f, 99 },
	{ 2699, -3221.938f, 1611 }
};

NJS_VECTOR normal_007FD600[] = {
	{ 0.451814f, 0.797993f, -0.398837f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.451814f, 0.797993f, -0.398837f },
	{ 0.23826f, 0.948154f, -0.210323f },
	{ 0.23826f, 0.948154f, -0.210323f }
};

NJS_MODEL_SADX attach_007FD648 = { vertex_007FD5B8, normal_007FD600, LengthOfArray(vertex_007FD5B8), meshlist_007FD598, dz_dummymat2, LengthOfArray(meshlist_007FD598), 0,{ 2903, -4289.249f, 216.5f }, 3105.114f, NULL };

NJS_OBJECT object_007FD674 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_007FD648, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_8D14EF6BCE13CE91CF3[] = {
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 0, 0, NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_8D14EF6BCE13CE98DC4[] = {
	0, 1, 2,
	3, 2, 4,
	4, 5, 3,
	6, 7, 8,
	6, 8, 9,
	9, 10, 11,
	9, 11, 12,
	6, 9, 12,
	13, 6, 12,
	9, 1, 0,
	0, 10, 9,
	14, 15, 12,
	12, 11, 14,
	15, 16, 13,
	13, 12, 15,
	17, 6, 13,
	13, 16, 17,
	17, 18, 7,
	7, 6, 17,
	19, 14, 11,
	11, 10, 19,
	0, 19, 10,
	3, 5, 17,
	17, 16, 3,
	16, 15, 14,
	14, 19, 3,
	16, 14, 3,
	5, 20, 18,
	18, 17, 5,
	19, 0, 2,
	2, 3, 19,
	21, 22, 23,
	23, 24, 21,
	25, 26, 27,
	27, 28, 25,
	29, 30, 31,
	31, 32, 29,
	33, 34, 35,
	35, 36, 33,
	37, 38, 39,
	39, 40, 37,
	41, 42, 43,
	43, 44, 41,
	45, 46, 47,
	47, 48, 45,
	49, 50, 51,
	52, 53, 54,
	55, 56, 57,
	57, 58, 55,
	59, 60, 61,
	62, 63, 64,
	65, 66, 67,
	68, 69, 70,
	71, 72, 73,
	74, 75, 76,
	77, 78, 79
};

NJS_TEX uv_8D14EF6BCE13CE954C6[] = {
	{ -90, -44 },
	{ 0 },
	{ -123, 0 },
	{ -158, -89 },
	{ -123, 0 },
	{ -255, 0 },
	{ -255, 0 },
	{ -255, -211 },
	{ -158, -89 },
	{ -154, -197 },
	{ -165, -255 },
	{ 0, -255 },
	{ -154, -197 },
	{ 0, -255 },
	{ 0, -85 },
	{ 0, -85 },
	{ -80, -98 },
	{ -97, -133 },
	{ 0, -85 },
	{ -97, -133 },
	{ -118, -159 },
	{ -154, -197 },
	{ 0, -85 },
	{ -118, -159 },
	{ -138, -174 },
	{ -154, -197 },
	{ -118, -159 },
	{ 0, -85 },
	{ 0 },
	{ -90, -44 },
	{ -90, -44 },
	{ -80, -98 },
	{ 0, -85 },
	{ -111, -126 },
	{ -126, -143 },
	{ -118, -159 },
	{ -118, -159 },
	{ -97, -133 },
	{ -111, -126 },
	{ -126, -143 },
	{ -145, -148 },
	{ -138, -174 },
	{ -138, -174 },
	{ -118, -159 },
	{ -126, -143 },
	{ -177, -181 },
	{ -154, -197 },
	{ -138, -174 },
	{ -138, -174 },
	{ -145, -148 },
	{ -177, -181 },
	{ -177, -181 },
	{ -212, -255 },
	{ -165, -255 },
	{ -165, -255 },
	{ -154, -197 },
	{ -177, -181 },
	{ -115, -102 },
	{ -111, -126 },
	{ -97, -133 },
	{ -97, -133 },
	{ -80, -98 },
	{ -115, -102 },
	{ -90, -44 },
	{ -115, -102 },
	{ -80, -98 },
	{ -158, -89 },
	{ -255, -211 },
	{ -177, -181 },
	{ -177, -181 },
	{ -145, -148 },
	{ -158, -89 },
	{ -145, -148 },
	{ -126, -143 },
	{ -111, -126 },
	{ -111, -126 },
	{ -115, -102 },
	{ -158, -89 },
	{ -145, -148 },
	{ -111, -126 },
	{ -158, -89 },
	{ -255, -211 },
	{ -255, -255 },
	{ -212, -255 },
	{ -212, -255 },
	{ -177, -181 },
	{ -255, -211 },
	{ -115, -102 },
	{ -90, -44 },
	{ -123, 0 },
	{ -123, 0 },
	{ -158, -89 },
	{ -115, -102 },
	{ 0, -85 },
	{ 0, -255 },
	{ 0, -255 },
	{ 0, -255 },
	{ 0, -85 },
	{ 0, -85 },
	{ -212, -255 },
	{ -255, -255 },
	{ -255, -255 },
	{ -255, -255 },
	{ -212, -255 },
	{ -212, -255 },
	{ -255, -211 },
	{ -255, 0 },
	{ -255, 0 },
	{ -255, 0 },
	{ -255, -211 },
	{ -255, -211 },
	{ -123, 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ -123, 0 },
	{ -123, 0 },
	{ -165, -255 },
	{ -212, -255 },
	{ -212, -255 },
	{ -212, -255 },
	{ -165, -255 },
	{ -165, -255 },
	{ -255, 0 },
	{ -123, 0 },
	{ -123, 0 },
	{ -123, 0 },
	{ -255, 0 },
	{ -255, 0 },
	{ -255, -255 },
	{ -255, -211 },
	{ -255, -211 },
	{ -255, -211 },
	{ -255, -255 },
	{ -255, -255 },
	{ 0 },
	{ 0, -85 },
	{ 0, -85 },
	{ 0, -85 },
	{ 0 },
	{ 0 },
	{ 0, -255 },
	{ -165, -255 },
	{ -165, -255 },
	{ -165, -255 },
	{ 0, -255 },
	{ 0, -255 },
	{ 0, -255 },
	{ -165, -255 },
	{ 0, -85 },
	{ -212, -255 },
	{ -255, -255 },
	{ -255, -211 },
	{ -212, -255 },
	{ -255, -211 },
	{ -255, 0 },
	{ -212, -255 },
	{ -255, 0 },
	{ -123, 0 },
	{ -165, -255 },
	{ -212, -255 },
	{ -123, 0 },
	{ -123, 0 },
	{ 0 },
	{ 0, -85 },
	{ -165, -255 },
	{ -123, 0 },
	{ 0, -85 }
};

NJS_MESHSET_SADX meshlist_8D14EF6BCE13CE95F35[] = {
	{ NJD_MESHSET_3 | 0, 56, poly_8D14EF6BCE13CE98DC4, NULL, NULL, NULL, uv_8D14EF6BCE13CE954C6, NULL }
};

NJS_VECTOR vertex_8D14EF6BCE13CE9C29D[] = {
	{ 2023.021f, -690.2123f, -3397.956f },
	{ 3065.089f, -690.2128f, -4162.477f },
	{ 704.1848f, -1851.114f, -4892.27f },
	{ -660.1236f, -1851.114f, -1860.217f },
	{ -1849.786f, -1851.113f, -3469.67f },
	{ -2418.516f, -1851.113f, -434.9382f },
	{ -502.4809f, -225.3525f, 1776.859f },
	{ -933.1738f, -225.3523f, 3714.085f },
	{ 3105.782f, -225.3531f, 1835.317f },
	{ 4102.128f, -225.3535f, -2022.081f },
	{ 2437.684f, -225.3528f, -1579.313f },
	{ 1747.756f, -225.3527f, -376.4089f },
	{ 932.3154f, -225.3525f, 498.4556f },
	{ 140.4796f, -225.3524f, 986.6452f },
	{ 1197.037f, -690.2122f, -632.1515f },
	{ 596.4395f, -690.212f, -42.15735f },
	{ -141.9507f, -690.2119f, 109.9799f },
	{ -1414.014f, -690.2117f, 1249.26f },
	{ -2777.888f, -690.2114f, 3714.085f },
	{ 1028.194f, -690.212f, -1438.46f },
	{ -3055.165f, -1851.113f, 2261.272f },
	{ 4102.128f, -225.3535f, -2022.081f },
	{ 3105.782f, -225.3531f, 1835.317f },
	{ 3105.783f, 4208.923f, 1835.317f },
	{ 4102.128f, 4208.923f, -2022.081f },
	{ -2777.888f, -690.2114f, 3714.085f },
	{ -3055.165f, -1851.113f, 2261.272f },
	{ -3055.165f, 2583.165f, 2261.272f },
	{ -2777.888f, 3744.066f, 3714.085f },
	{ -2418.516f, -1851.113f, -434.9382f },
	{ -1849.786f, -1851.113f, -3469.67f },
	{ -1849.786f, 2583.165f, -3469.67f },
	{ -2418.516f, 2583.165f, -434.9382f },
	{ 704.1848f, -1851.114f, -4892.27f },
	{ 3065.089f, -690.2128f, -4162.477f },
	{ 3065.089f, 3744.064f, -4162.477f },
	{ 704.1848f, 2583.164f, -4892.27f },
	{ -933.1738f, -225.3523f, 3714.085f },
	{ -2777.888f, -690.2114f, 3714.085f },
	{ -2777.888f, 3744.066f, 3714.085f },
	{ -933.1738f, 4208.925f, 3714.085f },
	{ -1849.786f, -1851.113f, -3469.67f },
	{ 704.1848f, -1851.114f, -4892.27f },
	{ 704.1848f, 2583.164f, -4892.27f },
	{ -1849.786f, 2583.165f, -3469.67f },
	{ -3055.165f, -1851.113f, 2261.272f },
	{ -2418.516f, -1851.113f, -434.9382f },
	{ -2418.516f, 2583.165f, -434.9382f },
	{ -3055.165f, 2583.165f, 2261.272f },
	{ 3065.089f, -690.2128f, -4162.477f },
	{ 4102.128f, -225.3535f, -2022.081f },
	{ 4102.128f, 4208.923f, -2022.081f },
	{ 4102.128f, 4208.923f, -2022.081f },
	{ 3065.089f, 3744.064f, -4162.477f },
	{ 3065.089f, -690.2128f, -4162.477f },
	{ 3105.782f, -225.3531f, 1835.317f },
	{ -933.1738f, -225.3523f, 3714.085f },
	{ -933.1738f, 4208.925f, 3714.085f },
	{ 3105.783f, 4208.923f, 1835.317f },
	{ 3105.783f, 4208.923f, 1835.317f },
	{ -933.1738f, 4208.925f, 3714.085f },
	{ 4102.128f, 4208.923f, -2022.081f },
	{ -2777.888f, 3744.066f, 3714.085f },
	{ -3055.165f, 2583.165f, 2261.272f },
	{ -2418.516f, 2583.165f, -434.9382f },
	{ -2777.888f, 3744.066f, 3714.085f },
	{ -2418.516f, 2583.165f, -434.9382f },
	{ -1849.786f, 2583.165f, -3469.67f },
	{ -2777.888f, 3744.066f, 3714.085f },
	{ -1849.786f, 2583.165f, -3469.67f },
	{ 704.1848f, 2583.164f, -4892.27f },
	{ -933.1738f, 4208.925f, 3714.085f },
	{ -2777.888f, 3744.066f, 3714.085f },
	{ 704.1848f, 2583.164f, -4892.27f },
	{ 704.1848f, 2583.164f, -4892.27f },
	{ 3065.089f, 3744.064f, -4162.477f },
	{ 4102.128f, 4208.923f, -2022.081f },
	{ -933.1738f, 4208.925f, 3714.085f },
	{ 704.1848f, 2583.164f, -4892.27f },
	{ 4102.128f, 4208.923f, -2022.081f }
};

NJS_VECTOR normal_8D14EF6BCE13CE926A4[] = {
	{ 0.295647f, -0.263042f, 0.918369f },
	{ 0.194613f, -0.265264f, 0.944331f },
	{ 0.328561f, -0.214588f, 0.919782f },
	{ 0.247113f, -0.176916f, 0.952699f },
	{ 0, 0, 1 },
	{ 0.354729f, -0.287323f, 0.889726f },
	{ 0.213566f, -0.100168f, 0.97178f },
	{ 0.190452f, -0.082609f, 0.978215f },
	{ 0, 0, 1 },
	{ 0.046994f, -0.116849f, 0.992037f },
	{ 0.140137f, -0.125077f, 0.9822f },
	{ 0.223782f, -0.115309f, 0.967794f },
	{ 0.179835f, -0.227702f, 0.95698f },
	{ 0.156585f, -0.218436f, 0.963206f },
	{ 0.516565f, -0.15406f, 0.842275f },
	{ 0.18557f, -0.276043f, 0.943061f },
	{ 0.251193f, -0.397911f, 0.882365f },
	{ 0.388059f, -0.271244f, 0.880816f },
	{ 0.469619f, -0.194231f, 0.861239f },
	{ 0.493399f, -0.075049f, 0.86656f },
	{ 0.863455f, -0.203885f, 0.461385f },
	{ 0.968223f, -0.250087f, 0 },
	{ 0.968223f, -0.250087f, 0 },
	{ 0.968223f, -0.250087f, 0 },
	{ 0.968223f, -0.250087f, 0 },
	{ -0.98227f, -0.187471f, 0 },
	{ -0.98227f, -0.187471f, 0 },
	{ -0.98227f, -0.187471f, 0 },
	{ -0.98227f, -0.187471f, 0 },
	{ -0.982889f, 0.1842f, 0 },
	{ -0.982889f, 0.1842f, 0 },
	{ -0.982889f, 0.1842f, 0 },
	{ -0.982889f, 0.1842f, 0 },
	{ 0.295328f, 0.955396f, 0 },
	{ 0.295328f, 0.955396f, 0 },
	{ 0.295328f, 0.955396f, 0 },
	{ 0.295328f, 0.955396f, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ -0.486617f, 0.873615f, 0 },
	{ -0.486617f, 0.873615f, 0 },
	{ -0.486617f, 0.873615f, 0 },
	{ -0.486617f, 0.873615f, 0 },
	{ -0.973236f, 0.229808f, 0 },
	{ -0.973236f, 0.229808f, 0 },
	{ -0.973236f, 0.229808f, 0 },
	{ -0.973236f, 0.229808f, 0 },
	{ 0.899934f, 0.436026f, 0 },
	{ 0.899934f, 0.436026f, 0 },
	{ 0.899934f, 0.436026f, 0 },
	{ 0.899934f, 0.436025f, 0 },
	{ 0.899934f, 0.436025f, 0 },
	{ 0.899934f, 0.436025f, 0 },
	{ 0.421765f, -0.906705f, 0 },
	{ 0.421765f, -0.906705f, 0 },
	{ 0.421765f, -0.906705f, 0 },
	{ 0.421765f, -0.906705f, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.863455f, 0.203885f, -0.461386f },
	{ -0.863455f, 0.203885f, -0.461386f },
	{ -0.863455f, 0.203885f, -0.461386f },
	{ -0.926529f, 0.173638f, -0.333757f },
	{ -0.926529f, 0.173638f, -0.333757f },
	{ -0.926529f, 0.173638f, -0.333757f },
	{ -0.095123f, 0.170773f, -0.980708f },
	{ -0.095123f, 0.170773f, -0.980708f },
	{ -0.095123f, 0.170773f, -0.980708f },
	{ -0.238156f, 0.223837f, -0.945081f },
	{ -0.238156f, 0.223837f, -0.945081f },
	{ -0.238156f, 0.223837f, -0.945081f },
	{ -0.446657f, -0.022153f, -0.894431f },
	{ -0.446657f, -0.022153f, -0.894431f },
	{ -0.446657f, -0.022153f, -0.894431f },
	{ -0.258038f, 0.22651f, -0.939207f },
	{ -0.258038f, 0.22651f, -0.939207f },
	{ -0.258038f, 0.22651f, -0.939207f }
};

NJS_MODEL_SADX attach_8D14EF6BCE13CE93A2F = { vertex_8D14EF6BCE13CE9C29D, normal_8D14EF6BCE13CE926A4, LengthOfArray(vertex_8D14EF6BCE13CE9C29D), meshlist_8D14EF6BCE13CE95F35, matlist_8D14EF6BCE13CE91CF3, LengthOfArray(meshlist_8D14EF6BCE13CE95F35), LengthOfArray(matlist_8D14EF6BCE13CE91CF3),{ 238.398f, 395.8633f, -426.5721f }, 6119.925f, NULL };

NJS_OBJECT object_8D14EF6986D1674295F = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_SHAPE_SKIP, &attach_8D14EF6BCE13CE93A2F, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

DeathZone WindyValley3DeathZones[] = {
	{ CharacterFlags_Sonic | CharacterFlags_Eggman | CharacterFlags_Tails | CharacterFlags_Knuckles | CharacterFlags_Tikal | CharacterFlags_Amy | CharacterFlags_Gamma | CharacterFlags_Big, &object_007FD448 },
	{ CharacterFlags_Sonic | CharacterFlags_Eggman | CharacterFlags_Tails | CharacterFlags_Knuckles | CharacterFlags_Tikal | CharacterFlags_Amy | CharacterFlags_Gamma | CharacterFlags_Big, &object_007FD540 },
	{ CharacterFlags_Sonic | CharacterFlags_Eggman | CharacterFlags_Tails | CharacterFlags_Knuckles | CharacterFlags_Tikal | CharacterFlags_Amy | CharacterFlags_Gamma | CharacterFlags_Big, &object_007FD674 },
	{ CharacterFlags_Sonic | CharacterFlags_Tails | CharacterFlags_Knuckles | CharacterFlags_Amy | CharacterFlags_Gamma | CharacterFlags_Big, &object_8D14EF6986D1674295F },
	{ 0 }
};