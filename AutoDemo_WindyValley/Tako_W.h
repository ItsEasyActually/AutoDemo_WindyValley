#include <SADXModLoader.h>

NJS_MATERIAL matlist_00133EEC[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 34, NJD_D_100 | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00133F00[] = {
	13, 15, 5,
	4, 7, 12,
	0, 1, 2,
	13, 14, 15,
	2, 12, 7,
	3, 4, 5,
	6, 8, 9,
	9, 8, 10,
	2, 1, 11,
	0, 2, 9,
	9, 10, 0,
	7, 9, 2,
	12, 13, 4,
	5, 4, 13,
	11, 12, 2,
	9, 7, 6
};

Sint16 poly_00133F60[] = {
	14, 13, 11, 12,
	4, 3, 7, 6
};

NJS_VECTOR polynormal_00133F70[] = {
	{ 0, 0.975668f, 0.219251f },
	{ 0, 0.9888819f, 0.148704f },
	{ -0.364804f, 0.801111f, -0.474489f },
	{ -0.622806f, 0.7820669f, 0.021968f },
	{ 0, 0.980581f, -0.196116f },
	{ 0.622806f, 0.7820669f, 0.021968f },
	{ 0.411462f, 0.903571f, -0.119406f },
	{ 0.364804f, 0.801111f, -0.474489f },
	{ -0.411462f, 0.903571f, -0.119406f },
	{ 0, 0.8944269f, -0.447214f },
	{ 0, 0.8944269f, -0.447214f },
	{ 0, 0.980581f, -0.196116f },
	{ 0, 0.9888819f, 0.148704f },
	{ 0, 0.975668f, 0.219251f },
	{ -0.50327f, 0.819306f, -0.274693f },
	{ 0.50327f, 0.819306f, -0.274693f }
};

NJS_VECTOR polynormal_00134030[] = {
	{ -0.555244f, 0.831576f, 0.013585f },
	{ 0.555244f, 0.831576f, 0.013585f }
};

NJS_TEX uv_00134048[] = {
	{ 137, -1543 },
	{ 0, -2295 },
	{ 1275, -2295 },
	{ 1137, -1543 },
	{ 944, -420 },
	{ 330, -420 },
	{ 436, 255 },
	{ 125, 1 },
	{ 398, 1 },
	{ 137, -1543 },
	{ 0, -1543 },
	{ 0, -2295 },
	{ 398, 1 },
	{ 330, -420 },
	{ 944, -420 },
	{ 1275, -1543 },
	{ 1137, -1543 },
	{ 1275, -2295 },
	{ 1275, -420 },
	{ 1149, 1 },
	{ 875, 1 },
	{ 875, 1 },
	{ 1149, 1 },
	{ 836, 255 },
	{ 398, 1 },
	{ 125, 1 },
	{ 0, -420 },
	{ 436, 255 },
	{ 398, 1 },
	{ 875, 1 },
	{ 875, 1 },
	{ 836, 255 },
	{ 436, 255 },
	{ 944, -420 },
	{ 875, 1 },
	{ 398, 1 },
	{ 330, -420 },
	{ 137, -1543 },
	{ 1137, -1543 },
	{ 1275, -2295 },
	{ 1137, -1543 },
	{ 137, -1543 },
	{ 0, -420 },
	{ 330, -420 },
	{ 398, 1 },
	{ 875, 1 },
	{ 944, -420 },
	{ 1275, -420 }
};

NJS_TEX uv_00134108[] = {
	{ 0, -1543 },
	{ 137, -1543 },
	{ 0, -420 },
	{ 330, -420 },
	{ 1137, -1543 },
	{ 1275, -1543 },
	{ 944, -420 },
	{ 1275, -420 }
};

NJS_MESHSET_SADX meshlist_00134128[] = {
	{ NJD_MESHSET_3 | 0, 16, poly_00133F00, NULL, polynormal_00133F70, NULL, uv_00134048, NULL },
	{ NJD_MESHSET_4 | 0, 2, poly_00133F60, NULL, polynormal_00134030, NULL, uv_00134108, NULL }
};

NJS_VECTOR vertex_00134158[] = {
	{ -12.8f, 6, -153.8f },
	{ -32.8f, 4, -141.8f },
	{ -15.23199f, 12, -141.8f },
	{ 40.8f, 1, -68.6f },
	{ 32.00999f, 8, -68.6f },
	{ 40.8f, 0, -33 },
	{ 40.8f, 3, -121.8f },
	{ 19.63647f, 16, -121.8f },
	{ 32.8f, 4, -141.8f },
	{ 15.23199f, 12, -141.8f },
	{ 12.8f, 6, -153.8f },
	{ -40.8f, 3, -121.8f },
	{ -19.63647f, 16, -121.8f },
	{ -32.00999f, 8, -68.6f },
	{ -40.8f, 1, -68.6f },
	{ -40.8f, 0, -33 }
};

NJS_VECTOR normal_00134218[] = {
	{ -0.123574f, 0.877328f, -0.463708f },
	{ -0.395046f, 0.867521f, -0.302236f },
	{ -0.221089f, 0.929526f, -0.295128f },
	{ 0.589548f, 0.807538f, 0.017792f },
	{ 0.248074f, 0.961736f, 0.116285f },
	{ 0.219219f, 0.962119f, 0.162079f },
	{ 0.494663f, 0.8595999f, -0.128047f },
	{ 0.222938f, 0.969021f, -0.106284f },
	{ 0.395046f, 0.867521f, -0.302236f },
	{ 0.221084f, 0.9146219f, -0.338508f },
	{ 0.185742f, 0.863289f, -0.469288f },
	{ -0.494663f, 0.8595999f, -0.128047f },
	{ -0.223697f, 0.974073f, -0.033774f },
	{ -0.248282f, 0.9597549f, 0.13125f },
	{ -0.589548f, 0.807538f, 0.017792f },
	{ -0.331219f, 0.934793f, 0.128284f }
};

NJS_MODEL_SADX attach_001342D8 = { vertex_00134158, normal_00134218, LengthOfArray<Sint32>(vertex_00134158), meshlist_00134128, matlist_00133EEC, LengthOfArray<Uint16>(meshlist_00134128), LengthOfArray<Uint16>(matlist_00133EEC), { 0, 8, -93.4f }, 72.88895f, NULL };

NJS_OBJECT Object_TakoW_Net = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001342D8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00134334[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 31, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 120, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 120, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 120, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00134384[] = {
	5, 3, 2, 0,
	3, 4, 0, 1,
	4, 5, 1, 2,
	8, 6, 5, 3,
	6, 7, 3, 4,
	7, 8, 4, 5,
	11, 9, 8, 6,
	9, 10, 6, 7,
	10, 11, 7, 8,
	14, 12, 11, 9,
	12, 13, 9, 10,
	13, 14, 10, 11,
	17, 15, 14, 12,
	15, 16, 12, 13,
	16, 17, 13, 14,
	20, 18, 17, 15,
	18, 19, 15, 16,
	19, 20, 16, 17,
	23, 21, 20, 18,
	21, 22, 18, 19,
	22, 23, 19, 20
};

Sint16 poly_0013442C[] = {
	24, 25, 26, 27,
	29, 28, 31, 30
};

Sint16 poly_0013443C[] = {
	26, 27, 30, 31,
	28, 29, 24, 25
};

Sint16 poly_0013444C[] = {
	28, 24, 30, 26
};

NJS_VECTOR polynormal_00134454[] = {
	{ -1, 0, 0 },
	{ 0.527787f, -0.8488899f, -0.028761f },
	{ 0.531765f, 0.846406f, 0.028677f },
	{ -0.928477f, 0, 0.371391f },
	{ 0.476302f, -0.848615f, -0.230193f },
	{ 0.50717f, 0.846233f, -0.163307f },
	{ -0.514496f, 0, 0.857493f },
	{ 0.185943f, -0.842316f, -0.5058939f },
	{ 0.356904f, 0.8450069f, -0.398225f },
	{ 0, 0, 1 },
	{ 0, -0.847998f, -0.529999f },
	{ 0, 0.847998f, -0.529999f },
	{ 0.514496f, 0, 0.857493f },
	{ -0.185943f, -0.842316f, -0.5058939f },
	{ -0.356904f, 0.8450069f, -0.398224f },
	{ 0.928477f, 0, 0.371391f },
	{ -0.476302f, -0.848615f, -0.230193f },
	{ -0.50717f, 0.846233f, -0.163307f },
	{ 1, 0, 0 },
	{ -0.527787f, -0.8488899f, -0.028761f },
	{ -0.531765f, 0.846406f, 0.028677f }
};

NJS_VECTOR polynormal_00134550[] = {
	{ -0.986461f, 0, -0.163998f },
	{ 0.986461f, 0, -0.163998f }
};

NJS_VECTOR polynormal_00134568[] = {
	{ 0, 0.9980479f, -0.062454f },
	{ 0, -0.9980479f, -0.062454f }
};

NJS_VECTOR polynormal_00134580[] = {
	{ 0, 0, -1 }
};

NJS_TEX uv_0013458C[] = {
	{ 3570, 0 },
	{ 3570, 255 },
	{ 0 },
	{ 0, 255 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 0 },
	{ 0, 255 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 0 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 0 },
	{ 0, 255 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 0 },
	{ 0, 255 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_001346DC[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 255, -255 }
};

NJS_TEX uv_001346FC[] = {
	{ 1020, -255 },
	{ 1020, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 1020, -255 },
	{ 1020, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

NJS_TEX uv_0013471C[] = {
	{ 0, 255 },
	{ 1020, 255 },
	{ 0 },
	{ 1020, 0 }
};

NJS_MESHSET_SADX meshlist_0013472C[] = {
	{ NJD_MESHSET_4 | 0, 21, poly_00134384, NULL, polynormal_00134454, NULL, uv_0013458C, NULL },
	{ NJD_MESHSET_4 | 1, 2, poly_0013442C, NULL, polynormal_00134550, NULL, uv_001346DC, NULL },
	{ NJD_MESHSET_4 | 2, 2, poly_0013443C, NULL, polynormal_00134568, NULL, uv_001346FC, NULL },
	{ NJD_MESHSET_4 | 3, 1, poly_0013444C, NULL, polynormal_00134580, NULL, uv_0013471C, NULL }
};

NJS_VECTOR vertex_0013478C[] = {
	{ 40, -3.535538f, -33 },
	{ 45.65686f, 0, -33 },
	{ 40, 3.535538f, -33 },
	{ 40, -0.535538f, -121 },
	{ 45.65686f, 3, -122.0894f },
	{ 40, 6.535538f, -121 },
	{ 32, 0.464462f, -141 },
	{ 36.54451f, 4, -144.8703f },
	{ 32, 7.535538f, -141 },
	{ 12, 3.464462f, -153 },
	{ 13.56685f, 7, -158.6568f },
	{ 12, 10.53554f, -153 },
	{ -12, 3.464462f, -153 },
	{ -13.56686f, 7, -158.6568f },
	{ -12, 10.53554f, -153 },
	{ -32, 0.464462f, -141 },
	{ -36.54452f, 4, -144.8703f },
	{ -32, 7.535538f, -141 },
	{ -40, -0.535538f, -121 },
	{ -45.65686f, 3, -122.0894f },
	{ -40, 6.535538f, -121 },
	{ -40, -3.535538f, -33 },
	{ -45.65686f, 0, -32.99999f },
	{ -40, 3.535538f, -33 },
	{ -47.5f, -5, -33 },
	{ -52.98622f, -7.065002f, 0 },
	{ -47.5f, 5, -33 },
	{ -52.98622f, 7.065002f, 0 },
	{ 47.5f, -5, -33 },
	{ 52.98622f, -7.065002f, 0 },
	{ 47.5f, 5, -33 },
	{ 52.98622f, 7.065002f, 0 }
};

NJS_VECTOR normal_0013490C[] = {
	{ -0.485908f, -0.873509f, -0.029596f },
	{ 0.999997f, -0.002344f, -0.00079f },
	{ -0.483857f, 0.874645f, 0.029634f },
	{ -0.477437f, -0.876745f, 0.058072f },
	{ 0.981942f, -0.002339f, -0.189169f },
	{ -0.46168f, 0.878494f, 0.122881f },
	{ -0.405244f, -0.877695f, 0.255791f },
	{ 0.761878f, 0.000154f, -0.64772f },
	{ -0.303393f, 0.886356f, 0.349751f },
	{ -0.172205f, -0.885949f, 0.430627f },
	{ 0.266395f, 0.00132f, -0.963863f },
	{ -0.08132999f, 0.873723f, 0.479576f },
	{ 0.172205f, -0.885949f, 0.430627f },
	{ -0.266394f, 0.00132f, -0.963863f },
	{ 0.08132999f, 0.873723f, 0.479576f },
	{ 0.405245f, -0.877695f, 0.255791f },
	{ -0.761878f, 0.000154f, -0.64772f },
	{ 0.303393f, 0.886356f, 0.349751f },
	{ 0.477437f, -0.876745f, 0.058072f },
	{ -0.981942f, -0.002339f, -0.189169f },
	{ 0.46168f, 0.878494f, 0.122881f },
	{ 0.485908f, -0.873509f, -0.029596f },
	{ -0.999997f, -0.002344f, -0.00079f },
	{ 0.483857f, 0.874645f, 0.029634f },
	{ -0.529301f, -0.5355189f, -0.6580729f },
	{ -0.693988f, -0.70214f, -0.159312f },
	{ -0.529301f, 0.5355189f, -0.6580729f },
	{ -0.693988f, 0.70214f, -0.159312f },
	{ 0.529301f, -0.5355189f, -0.6580729f },
	{ 0.693988f, -0.70214f, -0.159312f },
	{ 0.529301f, 0.5355189f, -0.6580729f },
	{ 0.693988f, 0.70214f, -0.159312f }
};

NJS_MODEL_SADX attach_00134A8C = { vertex_0013478C, normal_0013490C, LengthOfArray<Sint32>(vertex_0013478C), meshlist_0013472C, matlist_00134334, LengthOfArray<Uint16>(meshlist_0013472C), LengthOfArray<Uint16>(matlist_00134334), { 0, 1.735268f, -79.32842f }, 95.39674f, NULL };

NJS_OBJECT Object_TakoW = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00134A8C, 0, 0, 0, 0, 0, 0, 1, 1, 1, &Object_TakoW_Net, NULL };
