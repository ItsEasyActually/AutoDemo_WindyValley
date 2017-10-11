#pragma once

#include "SADXModLoader.h"

NJS_MATERIAL matlist_00139918[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013992C[] = {
	4, 5, 6
};

Sint16 poly_00139932[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013993C[] = {
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 }
};

NJS_TEX uv_00139948[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_00139958[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013992C, NULL, NULL, NULL, uv_0013993C, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_00139932, NULL, NULL, NULL, uv_00139948, NULL }
};

NJS_VECTOR vertex_00139988[] = {
	{ -0.223174f, 0.000133f, -0.0005589999f },
	{ -0.547568f, -0.056855f, 2.096426f },
	{ 0.267797f, -0.000176f, 0.000277f },
	{ 0.179871f, -0.057313f, 2.094416f },
	{ -0.547567f, -0.056298f, 2.096547f },
	{ -0.545836f, 0.404214f, 4.317784f },
	{ 0.179872f, -0.056159f, 2.094667f }
};

NJS_VECTOR normal_001399DC[] = {
	{ 0.000656f, 0.9996279f, 0.027284f },
	{ 0.000656f, 0.9996279f, 0.027284f },
	{ 0.000656f, 0.9996279f, 0.027284f },
	{ 0.000656f, 0.9996279f, 0.027284f },
	{ -0.0007119999f, 0.979178f, -0.203005f },
	{ -0.0007119999f, 0.979178f, -0.203005f },
	{ -0.0007119999f, 0.979178f, -0.203005f }
};

NJS_MODEL_SADX attach_00139A30 = { vertex_00139988, normal_001399DC, LengthOfArray<Sint32>(vertex_00139988), meshlist_00139958, matlist_00139918, LengthOfArray<Uint16>(meshlist_00139958), LengthOfArray<Uint16>(matlist_00139918),{ -0.139885f, 0.17345f, 2.158612f }, 2.190227f, NULL };

NJS_OBJECT object_00139A58 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00139A30, -0.118432f, 0, 0, 0xFFFFF4A0, 0x6D, 0xFFFFE112, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00139A8C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00139AA0[] = {
	4, 5, 6
};

Sint16 poly_00139AA6[] = {
	0, 1, 2, 3
};

NJS_TEX uv_00139AB0[] = {
	{ 0, 254 },
	{ 129, 1 },
	{ 254, 254 }
};

NJS_TEX uv_00139ABC[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

NJS_MESHSET_SADX meshlist_00139ACC[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00139AA0, NULL, NULL, NULL, uv_00139AB0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_00139AA6, NULL, NULL, NULL, uv_00139ABC, NULL }
};

NJS_VECTOR vertex_00139AFC[] = {
	{ -0.223142f, -0.001332f, -0.000319f },
	{ -0.351045f, -0.000975f, 1.983841f },
	{ 0.195435f, 0.00117f, 0.00009199999f },
	{ 0.275036f, 0.002765f, 1.981197f },
	{ -0.35104f, -0.001393f, 1.983908f },
	{ 0.00962f, 0.489735f, 4.262367f },
	{ 0.275046f, 0.0019f, 1.981337f }
};

NJS_VECTOR normal_00139B50[] = {
	{ -0.005977f, 0.999982f, -0.000565f },
	{ -0.005977f, 0.999982f, -0.000565f },
	{ -0.005977f, 0.999982f, -0.000565f },
	{ -0.005977f, 0.999982f, -0.000565f },
	{ -0.006004f, 0.977726f, -0.209801f },
	{ -0.006004f, 0.977726f, -0.209801f },
	{ -0.006004f, 0.977726f, -0.209801f }
};

NJS_MODEL_SADX attach_00139BA4 = { vertex_00139AFC, normal_00139B50, LengthOfArray<Sint32>(vertex_00139AFC), meshlist_00139ACC, matlist_00139A8C, LengthOfArray<Uint16>(meshlist_00139ACC), LengthOfArray<Uint16>(matlist_00139A8C),{ -0.038f, 0.244171f, 2.131024f }, 1.881475f, NULL };

NJS_OBJECT object_00139BCC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00139BA4, 0.570949f, 0, 0, 0xFFFFE2F9, 0x990, 0xFFFFE953, 1, 1, 1, NULL, &object_00139A58 };

NJS_MATERIAL matlist_00139C00[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00139C14[] = {
	8, 9, 10
};

Sint16 poly_00139C1A[] = {
	0, 1, 2, 3,
	4, 5, 6, 7
};

NJS_TEX uv_00139C2C[] = {
	{ 0, 254 },
	{ 127, 0 },
	{ 254, 254 }
};

NJS_TEX uv_00139C38[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_00139C58[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00139C14, NULL, NULL, NULL, uv_00139C2C, NULL },
	{ NJD_MESHSET_4 | 0, 2, poly_00139C1A, NULL, NULL, NULL, uv_00139C38, NULL }
};

NJS_VECTOR vertex_00139C88[] = {
	{ -0.231666f, -0.000251f, -0.000404f },
	{ -0.45354f, 0.052589f, 1.596351f },
	{ 0.275124f, 0.000266f, 0.000474f },
	{ 0.351457f, 0.05341f, 1.613967f },
	{ -0.453537f, 0.050646f, 1.596642f },
	{ -0.167809f, 0.55969f, 3.017464f },
	{ 0.351455f, 0.054568f, 1.613793f },
	{ 0.612429f, 0.568754f, 3.06082f },
	{ -0.167814f, 0.562382f, 3.017295f },
	{ 0.420098f, 0.486122f, 5.026084f },
	{ 0.612449f, 0.558324f, 3.061468f }
};

NJS_VECTOR normal_00139D0C[] = {
	{ -0.000553f, 0.999454f, -0.033021f },
	{ -0.000553f, 0.999454f, -0.033021f },
	{ -0.000553f, 0.999454f, -0.033021f },
	{ -0.000553f, 0.999454f, -0.033021f },
	{ 0.005147f, 0.941523f, -0.33691f },
	{ 0.005147f, 0.941523f, -0.33691f },
	{ 0.005147f, 0.941523f, -0.33691f },
	{ 0.005147f, 0.941523f, -0.33691f },
	{ 0.003102f, 0.9993089f, 0.037029f },
	{ 0.003102f, 0.9993089f, 0.037029f },
	{ 0.003102f, 0.9993089f, 0.037029f }
};

NJS_MODEL_SADX attach_00139D90 = { vertex_00139C88, normal_00139D0C, LengthOfArray<Sint32>(vertex_00139C88), meshlist_00139C58, matlist_00139C00, LengthOfArray<Uint16>(meshlist_00139C58), LengthOfArray<Uint16>(matlist_00139C00),{ 0.079455f, 0.284251f, 2.51284f }, 2.5053f, NULL };

NJS_OBJECT object_00139DB8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00139D90, -0.85676f, 0, 0, 0xFFFFF4A0, 0xFFFFFAC2, 0x1F49, 1, 1, 1, NULL, &object_00139BCC };

NJS_MATERIAL matlist_00139DEC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00139E00[] = {
	4, 5, 6
};

Sint16 poly_00139E06[] = {
	0, 1, 2, 3
};

NJS_TEX uv_00139E10[] = {
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 }
};

NJS_TEX uv_00139E1C[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_00139E2C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00139E00, NULL, NULL, NULL, uv_00139E10, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_00139E06, NULL, NULL, NULL, uv_00139E1C, NULL }
};

NJS_VECTOR vertex_00139E5C[] = {
	{ -0.223174f, 0.000133f, -0.0005589999f },
	{ -0.308796f, 0.07471f, 2.176243f },
	{ 0.267797f, -0.000176f, 0.000277f },
	{ 0.418642f, 0.07425199f, 2.174234f },
	{ -0.308796f, 0.07526699f, 2.176364f },
	{ -0.219653f, -0.493628f, 4.321472f },
	{ 0.418644f, 0.07540599f, 2.174485f }
};

NJS_VECTOR normal_00139EB0[] = {
	{ 0.000596f, 0.999414f, -0.034237f },
	{ 0.000596f, 0.999414f, -0.034237f },
	{ 0.000596f, 0.999414f, -0.034237f },
	{ 0.000596f, 0.999414f, -0.034237f },
	{ 0.000478f, 0.96659f, 0.256325f },
	{ 0.000478f, 0.96659f, 0.256325f },
	{ 0.000478f, 0.96659f, 0.256325f }
};

NJS_MODEL_SADX attach_00139F04 = { vertex_00139E5C, normal_00139EB0, LengthOfArray<Sint32>(vertex_00139E5C), meshlist_00139E2C, matlist_00139DEC, LengthOfArray<Uint16>(meshlist_00139E2C), LengthOfArray<Uint16>(matlist_00139DEC),{ 0.054924f, -0.209111f, 2.160456f }, 2.216993f, NULL };

NJS_OBJECT object_00139F2C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00139F04, -0.37795f, 0, 0, 0xFFFFF236, 0xFFFFF9E9, 0x13FF, 1, 1, 1, NULL, &object_00139DB8 };

NJS_MATERIAL matlist_00139F60[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00139F74[] = {
	4, 5, 6
};

Sint16 poly_00139F7A[] = {
	0, 1, 2, 3
};

NJS_TEX uv_00139F84[] = {
	{ 0, 254 },
	{ 129, 1 },
	{ 254, 254 }
};

NJS_TEX uv_00139F90[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

NJS_MESHSET_SADX meshlist_00139FA0[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00139F74, NULL, NULL, NULL, uv_00139F84, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_00139F7A, NULL, NULL, NULL, uv_00139F90, NULL }
};

NJS_VECTOR vertex_00139FD0[] = {
	{ -0.223142f, -0.001332f, -0.000319f },
	{ -0.353924f, 0.00587f, 1.711285f },
	{ 0.195435f, 0.00117f, 0.00009199999f },
	{ 0.272157f, 0.009610999f, 1.708641f },
	{ -0.353919f, 0.005453f, 1.711352f },
	{ 0.255428f, 0.34079f, 3.545804f },
	{ 0.272167f, 0.008745999f, 1.708781f }
};

NJS_VECTOR normal_0013A024[] = {
	{ -0.005985f, 0.999971f, -0.004668f },
	{ -0.005985f, 0.999971f, -0.004668f },
	{ -0.005985f, 0.999971f, -0.004668f },
	{ -0.005985f, 0.999971f, -0.004668f },
	{ -0.005906f, 0.984028f, -0.177918f },
	{ -0.005906f, 0.984028f, -0.177918f },
	{ -0.005906f, 0.984028f, -0.177918f }
};

NJS_MODEL_SADX attach_0013A078 = { vertex_00139FD0, normal_0013A024, LengthOfArray<Sint32>(vertex_00139FD0), meshlist_00139FA0, matlist_00139F60, LengthOfArray<Uint16>(meshlist_00139FA0), LengthOfArray<Uint16>(matlist_00139F60),{ -0.040879f, 0.169729f, 1.772742f }, 1.835801f, NULL };

NJS_OBJECT object_0013A0A0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013A078, -1.041677f, 0, 0, 0xFFFFE889, 0xFFFFEC3B, 0x2396, 1, 1, 1, NULL, &object_00139F2C };

NJS_MATERIAL matlist_0013A0D4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013A0E8[] = {
	4, 5, 6
};

Sint16 poly_0013A0EE[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013A0F8[] = {
	{ 0, 254 },
	{ 129, 1 },
	{ 254, 254 }
};

NJS_TEX uv_0013A104[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

NJS_MESHSET_SADX meshlist_0013A114[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013A0E8, NULL, NULL, NULL, uv_0013A0F8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0013A0EE, NULL, NULL, NULL, uv_0013A104, NULL }
};

NJS_VECTOR vertex_0013A144[] = {
	{ -0.223142f, -0.001332f, -0.000319f },
	{ -0.351045f, -0.000975f, 1.983841f },
	{ 0.195435f, 0.00117f, 0.00009199999f },
	{ 0.275036f, 0.002765f, 1.981197f },
	{ -0.351041f, -0.001393f, 1.983908f },
	{ 0.00962f, 0.489735f, 4.262367f },
	{ 0.275046f, 0.0019f, 1.981338f }
};

NJS_VECTOR normal_0013A198[] = {
	{ -0.005977f, 0.999982f, -0.000565f },
	{ -0.005977f, 0.999982f, -0.000565f },
	{ -0.005977f, 0.999982f, -0.000565f },
	{ -0.005977f, 0.999982f, -0.000565f },
	{ -0.006004f, 0.977726f, -0.209801f },
	{ -0.006004f, 0.977726f, -0.209801f },
	{ -0.006004f, 0.977726f, -0.209801f }
};

NJS_MODEL_SADX attach_0013A1EC = { vertex_0013A144, normal_0013A198, LengthOfArray<Sint32>(vertex_0013A144), meshlist_0013A114, matlist_0013A0D4, LengthOfArray<Uint16>(meshlist_0013A114), LengthOfArray<Uint16>(matlist_0013A0D4),{ -0.038f, 0.244171f, 2.131024f }, 2.133354f, NULL };

NJS_OBJECT object_0013A214 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013A1EC, -0.340407f, 0, 0, 0xFFFFED00, 0xFFFFFF61, 0xBF4, 1, 1, 1, NULL, &object_0013A0A0 };

NJS_MATERIAL matlist_0013A248[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013A25C[] = {
	8, 9, 10
};

Sint16 poly_0013A262[] = {
	0, 1, 2, 3,
	4, 5, 6, 7
};

NJS_TEX uv_0013A274[] = {
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 }
};

NJS_TEX uv_0013A280[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0013A2A0[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013A25C, NULL, NULL, NULL, uv_0013A274, NULL },
	{ NJD_MESHSET_4 | 0, 2, poly_0013A262, NULL, NULL, NULL, uv_0013A280, NULL }
};

NJS_VECTOR vertex_0013A2D0[] = {
	{ -0.173782f, 0.000012f, -0.00034f },
	{ -0.060945f, 0.201481f, 1.85101f },
	{ 0.231677f, 0.000012f, -0.00034f },
	{ 0.642757f, 0.20148f, 1.867232f },
	{ -0.060945f, 0.202702f, 1.851123f },
	{ 0.134729f, 0.161423f, 3.812315f },
	{ 0.642757f, 0.200752f, 1.867164f },
	{ 0.813747f, 0.160859f, 3.816952f },
	{ 0.134729f, 0.160311f, 3.811832f },
	{ 0.663584f, -0.660489f, 5.833624f },
	{ 0.813747f, 0.158437f, 3.815901f }
};

NJS_VECTOR normal_0013A354[] = {
	{ 0.001579f, 0.994155f, -0.107955f },
	{ 0.001579f, 0.994155f, -0.107955f },
	{ 0.001579f, 0.994155f, -0.107955f },
	{ 0.001579f, 0.994155f, -0.107955f },
	{ 0.001509f, 0.999786f, 0.020609f },
	{ 0.001509f, 0.999786f, 0.020609f },
	{ 0.001509f, 0.999786f, 0.020609f },
	{ 0.001509f, 0.999786f, 0.020609f },
	{ 0.000303f, 0.926583f, 0.376091f },
	{ 0.000303f, 0.926583f, 0.376091f },
	{ 0.000303f, 0.926583f, 0.376091f }
};

NJS_MODEL_SADX attach_0013A3D8 = { vertex_0013A2D0, normal_0013A354, LengthOfArray<Sint32>(vertex_0013A2D0), meshlist_0013A2A0, matlist_0013A248, LengthOfArray<Uint16>(meshlist_0013A2A0), LengthOfArray<Uint16>(matlist_0013A248),{ 0.319982f, -0.228893f, 2.916795f }, 2.970119f, NULL };

NJS_OBJECT object_0013A400 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013A3D8, 0.067324f, 0, 0, 0xFFFFE5B1, 0xFFFFF97C, 0xFFFFF8AB, 1, 1, 1, NULL, &object_0013A214 };

NJS_MATERIAL matlist_0013A434[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013A448[] = {
	4, 5, 6
};

Sint16 poly_0013A44E[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013A458[] = {
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 }
};

NJS_TEX uv_0013A464[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0013A474[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013A448, NULL, NULL, NULL, uv_0013A458, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0013A44E, NULL, NULL, NULL, uv_0013A464, NULL }
};

NJS_VECTOR vertex_0013A4A4[] = {
	{ -0.223174f, 0.000133f, -0.0005589999f },
	{ -0.420475f, 0.06712399f, 1.986514f },
	{ 0.267797f, -0.000176f, 0.000277f },
	{ 0.306963f, 0.06666499f, 1.984504f },
	{ -0.420475f, 0.067681f, 1.986635f },
	{ -0.055564f, -0.334707f, 3.864929f },
	{ 0.306965f, 0.067819f, 1.984755f }
};

NJS_VECTOR normal_0013A4F8[] = {
	{ 0.0005969999f, 0.999433f, -0.033657f },
	{ 0.0005969999f, 0.999433f, -0.033657f },
	{ 0.0005969999f, 0.999433f, -0.033657f },
	{ 0.0005969999f, 0.999433f, -0.033657f },
	{ 0.000354f, 0.977828f, 0.209411f },
	{ 0.000354f, 0.977828f, 0.209411f },
	{ 0.000354f, 0.977828f, 0.209411f }
};

NJS_MODEL_SADX attach_0013A54C = { vertex_0013A4A4, normal_0013A4F8, LengthOfArray<Sint32>(vertex_0013A4A4), meshlist_0013A474, matlist_0013A434, LengthOfArray<Uint16>(meshlist_0013A474), LengthOfArray<Uint16>(matlist_0013A434),{ -0.056755f, -0.133444f, 1.932185f }, 1.920347f, NULL };

NJS_OBJECT object_0013A574 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013A54C, 0.467697f, 0, 0, 0xFFFFEF72, 0x6D, 0xFFFFE112, 1, 1, 1, NULL, &object_0013A400 };

NJS_OBJECT Object_Grass1 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0013A574, NULL };

NJS_MKEY_A Grass1_Action_1_rot[] = {
	{ 0, 0xFFFFEF72, 0x6D, 0xFFFFE112 },
	{ 3, 0xFFFFE8CD, 0x6D, 0xFFFFE112 },
	{ 7, 0xFFFFED53, 0x6D, 0xFFFFE112 }
};

NJS_MKEY_A Grass1_Action_2_rot[] = {
	{ 0, 0xFFFFE5B1, 0xFFFFF97C, 0xFFFFF8AB },
	{ 4, 0xFFFFE001, 0xFFFFF97C, 0xFFFFF8AB },
	{ 7, 0xFFFFE4CD, 0xFFFFF97C, 0xFFFFF8AB }
};

NJS_MKEY_A Grass1_Action_3_rot[] = {
	{ 0, 0xFFFFED00, 0xFFFFFF61, 0xBF4 },
	{ 2, 0xFFFFEF81, 0xFFFFFF61, 0xBF4 },
	{ 5, 0xFFFFEE28, 0xFFFFFF61, 0xBF4 },
	{ 7, 0xFFFFEB79, 0xFFFFFF61, 0xBF4 }
};

NJS_MKEY_A Grass1_Action_4_rot[] = {
	{ 0, 0xFFFFE889, 0xFFFFEC3B, 0x2395 },
	{ 2, 0xFFFFEC17, 0xFFFFEC3B, 0x2395 },
	{ 5, 0xFFFFE71D, 0xFFFFEC3B, 0x2395 },
	{ 7, 0xFFFFE809, 0xFFFFEC3B, 0x2395 }
};

NJS_MKEY_A Grass1_Action_5_rot[] = {
	{ 0, 0xFFFFF236, 0xFFFFF9E9, 0x13FE },
	{ 5, 0xFFFFEF18, 0xFFFFF9E9, 0x13FE },
	{ 7, 0xFFFFF022, 0xFFFFF9E9, 0x13FE }
};

NJS_MKEY_A Grass1_Action_6_rot[] = {
	{ 0, 0xFFFFF4A0, 0xFFFFFAC2, 0x1F49 },
	{ 2, 0xFFFFF05C, 0xFFFFFAC2, 0x1F49 },
	{ 3, 0xFFFFEEF0, 0xFFFFFAC2, 0x1F49 },
	{ 5, 0xFFFFF1C8, 0xFFFFFAC2, 0x1F49 },
	{ 7, 0xFFFFF424, 0xFFFFFAC2, 0x1F49 }
};

NJS_MKEY_A Grass1_Action_7_rot[] = {
	{ 0, 0xFFFFE2F9, 0x990, 0xFFFFE953 },
	{ 2, 0xFFFFE588, 0x990, 0xFFFFE953 },
	{ 5, 0xFFFFEDA0, 0x990, 0xFFFFE953 },
	{ 7, 0xFFFFE858, 0x990, 0xFFFFE953 }
};

NJS_MKEY_A Grass1_Action_8_rot[] = {
	{ 0, 0xFFFFF4A0, 0x6D, 0xFFFFE112 },
	{ 5, 0xFFFFF8E4, 0x6D, 0xFFFFE112 },
	{ 7, 0xFFFFF5BB, 0x6D, 0xFFFFE112 }
};

NJS_MDATA2 Grass1_Action_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, Grass1_Action_1_rot, 0, LengthOfArray<Uint32>(Grass1_Action_1_rot) },
	{ NULL, Grass1_Action_2_rot, 0, LengthOfArray<Uint32>(Grass1_Action_2_rot) },
	{ NULL, Grass1_Action_3_rot, 0, LengthOfArray<Uint32>(Grass1_Action_3_rot) },
	{ NULL, Grass1_Action_4_rot, 0, LengthOfArray<Uint32>(Grass1_Action_4_rot) },
	{ NULL, Grass1_Action_5_rot, 0, LengthOfArray<Uint32>(Grass1_Action_5_rot) },
	{ NULL, Grass1_Action_6_rot, 0, LengthOfArray<Uint32>(Grass1_Action_6_rot) },
	{ NULL, Grass1_Action_7_rot, 0, LengthOfArray<Uint32>(Grass1_Action_7_rot) },
	{ NULL, Grass1_Action_8_rot, 0, LengthOfArray<Uint32>(Grass1_Action_8_rot) }
};

NJS_MOTION Grass1_Action = { Grass1_Action_mdat, 8, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

NJS_ACTION action_Grass1_Action = { &Object_Grass1, &Grass1_Action };

NJS_MATERIAL matlist_0013A5DC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013A5F0[] = {
	8, 9, 10
};

Sint16 poly_0013A5F6[] = {
	0, 1, 2, 3,
	4, 5, 6, 7
};

NJS_TEX uv_0013A608[] = {
	{ 0, 254 },
	{ 127, 0 },
	{ 254, 254 }
};

NJS_TEX uv_0013A614[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0013A634[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013A5F0, NULL, NULL, NULL, uv_0013A608, NULL },
	{ NJD_MESHSET_4 | 0, 2, poly_0013A5F6, NULL, NULL, NULL, uv_0013A614, NULL }
};

NJS_VECTOR vertex_0013A664[] = {
	{ -0.188741f, -0.000286f, -0.00037f },
	{ -0.37119f, -0.000578f, 1.777176f },
	{ 0.224147f, 0.000304f, 0.000435f },
	{ 0.284652f, 0.000358f, 1.793342f },
	{ -0.371187f, -0.002796f, 1.777443f },
	{ -0.224302f, 0.506469f, 3.858072f },
	{ 0.28465f, 0.001679f, 1.793182f },
	{ 0.41137f, 0.516809f, 3.897858f },
	{ -0.224306f, 0.50954f, 3.857917f },
	{ 0.395724f, 0.166013f, 6.302809f },
	{ 0.411386f, 0.50491f, 3.898452f }
};

NJS_VECTOR normal_0013A6E8[] = {
	{ -0.001428f, 0.999999f, 0.000018f },
	{ -0.001428f, 0.999999f, 0.000018f },
	{ -0.001428f, 0.999999f, 0.000018f },
	{ -0.001428f, 0.999999f, 0.000018f },
	{ -0.000924f, 0.971342f, -0.237685f },
	{ -0.000924f, 0.971342f, -0.237685f },
	{ -0.000924f, 0.971342f, -0.237685f },
	{ -0.000924f, 0.971342f, -0.237685f },
	{ -0.001687f, 0.990212f, 0.139561f },
	{ -0.001687f, 0.990212f, 0.139561f },
	{ -0.001687f, 0.990212f, 0.139561f }
};

NJS_MODEL_SADX attach_0013A76C = { vertex_0013A664, normal_0013A6E8, LengthOfArray<Sint32>(vertex_0013A664), meshlist_0013A634, matlist_0013A5DC, LengthOfArray<Uint16>(meshlist_0013A634), LengthOfArray<Uint16>(matlist_0013A5DC),{ 0.020098f, 0.257007f, 3.151219f }, 3.165798f, NULL };

NJS_OBJECT object_0013A794 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013A76C, -0.626032f, 0, 0, 0xFFFFF05C, 0xFFFFF717, 0x228C, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0013A7C8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013A7DC[] = {
	4, 5, 6
};

Sint16 poly_0013A7E2[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013A7EC[] = {
	{ 0, 254 },
	{ 129, 1 },
	{ 254, 254 }
};

NJS_TEX uv_0013A7F8[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 }
};

NJS_MESHSET_SADX meshlist_0013A808[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013A7DC, NULL, NULL, NULL, uv_0013A7EC, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0013A7E2, NULL, NULL, NULL, uv_0013A7F8, NULL }
};

NJS_VECTOR vertex_0013A838[] = {
	{ -0.181797f, -0.001519f, -0.000293f },
	{ -0.286001f, -0.001113f, 1.820482f },
	{ 0.159223f, 0.001335f, 0.000084f },
	{ 0.224075f, 0.003154f, 1.818055f },
	{ -0.285997f, -0.00159f, 1.820543f },
	{ 0.007838f, 0.558738f, 3.911382f },
	{ 0.224084f, 0.002168f, 1.818184f }
};

NJS_VECTOR normal_0013A88C[] = {
	{ -0.008369f, 0.999965f, -0.000702f },
	{ -0.008369f, 0.999965f, -0.000702f },
	{ -0.008369f, 0.999965f, -0.000702f },
	{ -0.008369f, 0.999965f, -0.000702f },
	{ -0.008308999f, 0.9661739f, -0.257759f },
	{ -0.008308999f, 0.9661739f, -0.257759f },
	{ -0.008308999f, 0.9661739f, -0.257759f }
};

NJS_MODEL_SADX attach_0013A8E0 = { vertex_0013A838, normal_0013A88C, LengthOfArray<Sint32>(vertex_0013A838), meshlist_0013A808, matlist_0013A7C8, LengthOfArray<Uint16>(meshlist_0013A808), LengthOfArray<Uint16>(matlist_0013A7C8),{ -0.030959f, 0.278574f, 1.955544f }, 1.851681f, NULL };

NJS_OBJECT object_0013A908 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013A8E0, -0.445753f, 0, 0, 0xFFFFEC17, 0xFFFFF874, 0x182D, 1, 1, 1, NULL, &object_0013A794 };

NJS_MATERIAL matlist_0013A93C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013A950[] = {
	8, 9, 10
};

Sint16 poly_0013A956[] = {
	0, 1, 2, 3,
	4, 5, 6, 7
};

NJS_TEX uv_0013A968[] = {
	{ 0, 254 },
	{ 120, 0 },
	{ 254, 254 }
};

NJS_TEX uv_0013A974[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0013A994[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013A950, NULL, NULL, NULL, uv_0013A968, NULL },
	{ NJD_MESHSET_4 | 0, 2, poly_0013A956, NULL, NULL, NULL, uv_0013A974, NULL }
};

NJS_VECTOR vertex_0013A9C4[] = {
	{ -0.176977f, -0.000404f, 0.000294f },
	{ -0.269398f, -0.000496f, 2.415215f },
	{ 0.224117f, 0.000496f, -0.000371f },
	{ 0.327469f, 0.000842f, 2.393732f },
	{ -0.269396f, -0.001342f, 2.415066f },
	{ -0.289403f, -0.772074f, 4.52672f },
	{ 0.327457f, 0.007024f, 2.394825f },
	{ 0.381803f, -0.78013f, 4.551806f },
	{ -0.289392f, -0.777912f, 4.525534f },
	{ -0.01435f, -0.905817f, 7.095845f },
	{ 0.381798f, -0.777799f, 4.552276f }
};

NJS_VECTOR normal_0013AA48[] = {
	{ -0.002244f, 0.999997f, -0.00048f },
	{ -0.002244f, 0.999997f, -0.00048f },
	{ -0.002244f, 0.999997f, -0.00048f },
	{ -0.002244f, 0.999997f, -0.00048f },
	{ -0.001539f, 0.939388f, 0.342853f },
	{ -0.001539f, 0.939388f, 0.342853f },
	{ -0.001539f, 0.939388f, 0.342853f },
	{ -0.001539f, 0.939388f, 0.342853f },
	{ -0.002158f, 0.99875f, 0.049931f },
	{ -0.002158f, 0.99875f, 0.049931f },
	{ -0.002158f, 0.99875f, 0.049931f }
};

NJS_MODEL_SADX attach_0013AACC = { vertex_0013A9C4, normal_0013AA48, LengthOfArray<Sint32>(vertex_0013A9C4), meshlist_0013A994, matlist_0013A93C, LengthOfArray<Uint16>(meshlist_0013A994), LengthOfArray<Uint16>(matlist_0013A93C),{ 0.0462f, -0.449396f, 3.547737f }, 3.591377f, NULL };

NJS_OBJECT object_0013AAF4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013AACC, -0.371686f, 0, 0, 0xFFFFE2B1, 0x38E, 0x888, 1, 1, 1, NULL, &object_0013A908 };

NJS_MATERIAL matlist_0013AB28[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013AB3C[] = {
	8, 9, 10
};

Sint16 poly_0013AB42[] = {
	0, 1, 2, 3,
	4, 5, 6, 7
};

NJS_TEX uv_0013AB54[] = {
	{ 0, 254 },
	{ 127, 0 },
	{ 254, 254 }
};

NJS_TEX uv_0013AB60[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0013AB80[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013AB3C, NULL, NULL, NULL, uv_0013AB54, NULL },
	{ NJD_MESHSET_4 | 0, 2, poly_0013AB42, NULL, NULL, NULL, uv_0013AB60, NULL }
};

NJS_VECTOR vertex_0013ABB0[] = {
	{ -0.224134f, -0.000878f, 0.000302f },
	{ -0.329225f, -0.001159f, 2.226517f },
	{ 0.200546f, 0.000786f, -0.000294f },
	{ 0.338456f, 0.001459f, 2.240466f },
	{ -0.329229f, -0.00042f, 2.226584f },
	{ -0.290913f, -0.29426f, 4.669006f },
	{ 0.338459f, 0.000793f, 2.240426f },
	{ 0.392004f, -0.290687f, 4.66061f },
	{ -0.290909f, -0.295444f, 4.668653f },
	{ 0.047398f, -1.604231f, 7.312853f },
	{ 0.392f, -0.289442f, 4.660981f }
};

NJS_VECTOR normal_0013AC34[] = {
	{ -0.003919f, 0.999992f, -0.00059f },
	{ -0.003919f, 0.999992f, -0.00059f },
	{ -0.003919f, 0.999992f, -0.00059f },
	{ -0.003919f, 0.999992f, -0.00059f },
	{ -0.003723f, 0.992809f, 0.119653f },
	{ -0.003723f, 0.992809f, 0.119653f },
	{ -0.003723f, 0.992809f, 0.119653f },
	{ -0.003723f, 0.992809f, 0.119653f },
	{ -0.002889f, 0.896074f, 0.443895f },
	{ -0.002889f, 0.896074f, 0.443895f },
	{ -0.002889f, 0.896074f, 0.443895f }
};

NJS_MODEL_SADX attach_0013ACB8 = { vertex_0013ABB0, normal_0013AC34, LengthOfArray<Sint32>(vertex_0013ABB0), meshlist_0013AB80, matlist_0013AB28, LengthOfArray<Uint16>(meshlist_0013AB80), LengthOfArray<Uint16>(matlist_0013AB28),{ 0.031387f, -0.801386f, 3.65628f }, 3.755561f, NULL };

NJS_OBJECT object_0013ACE0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013ACB8, 0, 0, 0, 0xFFFFF0AC, 0xFFFFF9C9, 0xC16, 1, 1, 1, NULL, &object_0013AAF4 };

NJS_MATERIAL matlist_0013AD14[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013AD28[] = {
	8, 9, 10
};

Sint16 poly_0013AD2E[] = {
	0, 1, 2, 3,
	4, 5, 6, 7
};

NJS_TEX uv_0013AD40[] = {
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 }
};

NJS_TEX uv_0013AD4C[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0013AD6C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013AD28, NULL, NULL, NULL, uv_0013AD40, NULL },
	{ NJD_MESHSET_4 | 0, 2, poly_0013AD2E, NULL, NULL, NULL, uv_0013AD4C, NULL }
};

NJS_VECTOR vertex_0013AD9C[] = {
	{ -0.141583f, 0.000014f, -0.00031f },
	{ -0.108275f, 0.000014f, 1.990158f },
	{ 0.18875f, 0.000014f, -0.00031f },
	{ 0.46504f, 0.000014f, 2.005044f },
	{ -0.108275f, 0.001408f, 1.990262f },
	{ 0.031602f, -0.323933f, 4.142911f },
	{ 0.46504f, -0.000817f, 2.004982f },
	{ 0.584807f, -0.324576f, 4.147166f },
	{ 0.031602f, -0.325202f, 4.142468f },
	{ 0.325681f, -1.721362f, 6.580912f },
	{ 0.584807f, -0.32734f, 4.146202f }
};

NJS_VECTOR normal_0013AE20[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.988771f, 0.149438f },
	{ 0, 0.988771f, 0.149438f },
	{ 0, 0.988771f, 0.149438f },
	{ 0, 0.988771f, 0.149438f },
	{ 0, 0.867819f, 0.49688f },
	{ 0, 0.867819f, 0.49688f },
	{ 0, 0.867819f, 0.49688f }
};

NJS_MODEL_SADX attach_0013AEA4 = { vertex_0013AD9C, normal_0013AE20, LengthOfArray<Sint32>(vertex_0013AD9C), meshlist_0013AD6C, matlist_0013AD14, LengthOfArray<Uint16>(meshlist_0013AD6C), LengthOfArray<Uint16>(matlist_0013AD14),{ 0.221612f, -0.8599769f, 3.290441f }, 3.398105f, NULL };

NJS_OBJECT object_0013AECC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013AEA4, 0.243035f, 0, 0, 0xFFFFE2D9, 0x138, 0, 1, 1, 1, NULL, &object_0013ACE0 };

NJS_MATERIAL matlist_0013AF00[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013AF14[] = {
	4, 5, 6
};

Sint16 poly_0013AF1A[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013AF24[] = {
	{ 0, 254 },
	{ 126, 0 },
	{ 254, 254 }
};

NJS_TEX uv_0013AF30[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0013AF40[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013AF14, NULL, NULL, NULL, uv_0013AF24, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0013AF1A, NULL, NULL, NULL, uv_0013AF30, NULL }
};

NJS_VECTOR vertex_0013AF70[] = {
	{ -0.181823f, 0.000151f, -0.0005129999f },
	{ -0.252795f, 0.000194f, 2.445228f },
	{ 0.218178f, -0.000201f, 0.000254f },
	{ 0.339859f, -0.000329f, 2.443384f },
	{ -0.252794f, 0.00083f, 2.445339f },
	{ 0.04265f, -0.822439f, 4.699994f },
	{ 0.33986f, 0.000988f, 2.443614f }
};

NJS_VECTOR normal_0013AFC4[] = {
	{ 0.000882f, 1, 0.000008f },
	{ 0.000882f, 1, 0.000008f },
	{ 0.000882f, 1, 0.000008f },
	{ 0.000882f, 1, 0.000008f },
	{ 0.000747f, 0.93937f, 0.342905f },
	{ 0.000747f, 0.93937f, 0.342905f },
	{ 0.000747f, 0.93937f, 0.342905f }
};

NJS_MODEL_SADX attach_0013B018 = { vertex_0013AF70, normal_0013AFC4, LengthOfArray<Sint32>(vertex_0013AF70), meshlist_0013AF40, matlist_0013AF00, LengthOfArray<Uint16>(meshlist_0013AF40), LengthOfArray<Uint16>(matlist_0013AF00),{ 0.043533f, -0.410726f, 2.349741f }, 2.401085f, NULL };

NJS_OBJECT object_0013B040 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013B018, 0.241642f, 0, 0, 0xFFFFF620, 0x6D, 0xFFFFFC5E, 1, 1, 1, NULL, &object_0013AECC };

NJS_MATERIAL matlist_0013B074[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013B088[] = {
	8, 9, 10
};

Sint16 poly_0013B08E[] = {
	0, 1, 2, 3,
	4, 5, 6, 7
};

NJS_TEX uv_0013B0A0[] = {
	{ 0, 254 },
	{ 127, 0 },
	{ 254, 254 }
};

NJS_TEX uv_0013B0AC[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0013B0CC[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013B088, NULL, NULL, NULL, uv_0013B0A0, NULL },
	{ NJD_MESHSET_4 | 0, 2, poly_0013B08E, NULL, NULL, NULL, uv_0013B0AC, NULL }
};

NJS_VECTOR vertex_0013B0FC[] = {
	{ -0.224099f, 0.002354f, 0.000875f },
	{ -0.281316f, 0.005407f, 2.724478f },
	{ 0.200558f, -0.002095f, -0.000786f },
	{ 0.386367f, -0.001574f, 2.736754f },
	{ -0.281295f, 0.007352f, 2.724682f },
	{ -0.283867f, -0.497743f, 5.104955f },
	{ 0.386354f, -0.002733f, 2.736633f },
	{ 0.399015f, -0.503342f, 5.094957f },
	{ -0.28386f, -0.497128f, 5.105031f },
	{ -0.036528f, -0.63348f, 8.523259f },
	{ 0.399008f, -0.503988f, 5.094873f }
};

NJS_VECTOR normal_0013B180[] = {
	{ 0.010472f, 0.999945f, -0.000901f },
	{ 0.010472f, 0.999945f, -0.000901f },
	{ 0.010472f, 0.999945f, -0.000901f },
	{ 0.010472f, 0.999945f, -0.000901f },
	{ 0.011059f, 0.978156f, 0.207577f },
	{ 0.011059f, 0.978156f, 0.207577f },
	{ 0.011059f, 0.978156f, 0.207577f },
	{ 0.011059f, 0.978156f, 0.207577f },
	{ 0.010619f, 0.9991789f, 0.039089f },
	{ 0.010619f, 0.9991789f, 0.039089f },
	{ 0.010619f, 0.9991789f, 0.039089f }
};

NJS_MODEL_SADX attach_0013B204 = { vertex_0013B0FC, normal_0013B180, LengthOfArray<Sint32>(vertex_0013B0FC), meshlist_0013B0CC, matlist_0013B074, LengthOfArray<Uint16>(meshlist_0013B0CC), LengthOfArray<Uint16>(matlist_0013B074),{ 0.057574f, -0.313064f, 4.261237f }, 4.24162f, NULL };

NJS_OBJECT object_0013B22C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013B204, 0.534961f, 0, 0, 0xFFFFF0EC, 0xFFFFFF3F, 0xFFFFE6C9, 1, 1, 1, NULL, &object_0013B040 };

NJS_MATERIAL matlist_0013B260[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013B274[] = {
	8, 9, 10
};

Sint16 poly_0013B27A[] = {
	0, 1, 2, 3,
	4, 5, 6, 7
};

NJS_TEX uv_0013B28C[] = {
	{ 0, 254 },
	{ 126, 0 },
	{ 253, 254 }
};

NJS_TEX uv_0013B298[] = {
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0013B2B8[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013B274, NULL, NULL, NULL, uv_0013B28C, NULL },
	{ NJD_MESHSET_4 | 0, 2, poly_0013B27A, NULL, NULL, NULL, uv_0013B298, NULL }
};

NJS_VECTOR vertex_0013B2E8[] = {
	{ -0.190583f, 0.000273f, -0.002317f },
	{ -0.291383f, 0.003234f, 2.222689f },
	{ 0.178117f, -0.000276f, 0.002151f },
	{ 0.28608f, 0.002393f, 2.244573f },
	{ -0.291386f, 0.002025f, 2.222769f },
	{ -0.369143f, 0.323419f, 4.655526f },
	{ 0.286082f, 0.003113f, 2.244525f },
	{ 0.294248f, 0.322171f, 4.661595f },
	{ -0.369143f, 0.324135f, 4.655571f },
	{ -0.174522f, -0.338528f, 7.160758f },
	{ 0.294249f, 0.323655f, 4.661688f }
};

NJS_VECTOR normal_0013B36C[] = {
	{ 0.001505f, 0.999998f, -0.001262f },
	{ 0.001505f, 0.999998f, -0.001262f },
	{ 0.001505f, 0.999998f, -0.001262f },
	{ 0.001505f, 0.999998f, -0.001262f },
	{ 0.003062f, 0.991394f, -0.130876f },
	{ 0.003062f, 0.991394f, -0.130876f },
	{ 0.003062f, 0.991394f, -0.130876f },
	{ 0.003062f, 0.991394f, -0.130876f },
	{ -0.00166f, 0.9667169f, 0.255841f },
	{ -0.00166f, 0.9667169f, 0.255841f },
	{ -0.00166f, 0.9667169f, 0.255841f }
};

NJS_MODEL_SADX attach_0013B3F0 = { vertex_0013B2E8, normal_0013B36C, LengthOfArray<Sint32>(vertex_0013B2E8), meshlist_0013B2B8, matlist_0013B260, LengthOfArray<Uint16>(meshlist_0013B2B8), LengthOfArray<Uint16>(matlist_0013B260),{ -0.037447f, -0.007196f, 3.579221f }, 3.542756f, NULL };

NJS_OBJECT object_0013B418 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013B3F0, 0.7646f, 0, 0, 0xFFFFEB61, 0x695, 0xFFFFDE6E, 1, 1, 1, NULL, &object_0013B22C };

NJS_OBJECT Object_Grass2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0013B418, NULL };

NJS_MKEY_A Grass2_Action_1_rot[] = {
	{ 0, 0xFFFFEE39, 0x695, 0xFFFFDE6E },
	{ 2, 0xFFFFEB61, 0x695, 0xFFFFDE6E },
	{ 6, 0xFFFFF112, 0x695, 0xFFFFDE6E },
	{ 7, 0xFFFFEFC4, 0x695, 0xFFFFDE6E }
};

NJS_MKEY_A Grass2_Action_2_rot[] = {
	{ 0, 0xFFFFEC17, 0xFFFFFF3F, 0xFFFFE6C9 },
	{ 3, 0xFFFFF27E, 0xFFFFFF3F, 0xFFFFE6C9 },
	{ 7, 0xFFFFEAAB, 0xFFFFFF3F, 0xFFFFE6C9 }
};

NJS_MKEY_A Grass2_Action_3_rot[] = {
	{ 0, 0xFFFFF4A0, 0x6D, 0xFFFFFC5E },
	{ 5, 0xFFFFF8E4, 0x6D, 0xFFFFFC5E },
	{ 7, 0xFFFFF5BB, 0x6D, 0xFFFFFC5E }
};

NJS_MKEY_A Grass2_Action_4_rot[] = {
	{ 0, 0xFFFFE5B1, 0x138, 0 },
	{ 4, 0xFFFFE001, 0x138, 0 },
	{ 7, 0xFFFFE4CD, 0x138, 0 }
};

NJS_MKEY_A Grass2_Action_5_rot[] = {
	{ 0, 0xFFFFF334, 0xFFFFF9C9, 0xC16 },
	{ 3, 0xFFFFEEF0, 0xFFFFF9C9, 0xC16 },
	{ 4, 0xFFFFED83, 0xFFFFF9C9, 0xC16 },
	{ 7, 0xFFFFF279, 0xFFFFF9C9, 0xC16 }
};

NJS_MKEY_A Grass2_Action_6_rot[] = {
	{ 0, 0xFFFFE223, 0x38E, 0x888 },
	{ 1, 0xFFFFE38F, 0x38E, 0x888 },
	{ 6, 0xFFFFDE95, 0x38E, 0x888 },
	{ 7, 0xFFFFE04F, 0x38E, 0x888 }
};

NJS_MKEY_A Grass2_Action_7_rot[] = {
	{ 0, 0xFFFFE889, 0xFFFFF874, 0x182D },
	{ 2, 0xFFFFEC17, 0xFFFFF874, 0x182D },
	{ 5, 0xFFFFE71D, 0xFFFFF874, 0x182D },
	{ 7, 0xFFFFE809, 0xFFFFF874, 0x182D }
};

NJS_MKEY_A Grass2_Action_8_rot[] = {
	{ 0, 0xFFFFF4A0, 0xFFFFF717, 0x228C },
	{ 2, 0xFFFFF05C, 0xFFFFF717, 0x228C },
	{ 3, 0xFFFFEEF0, 0xFFFFF717, 0x228C },
	{ 5, 0xFFFFF1C8, 0xFFFFF717, 0x228C },
	{ 7, 0xFFFFF424, 0xFFFFF717, 0x228C }
};

NJS_MDATA2 Grass2_Action_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, Grass2_Action_1_rot, 0, LengthOfArray<Uint32>(Grass2_Action_1_rot) },
	{ NULL, Grass2_Action_2_rot, 0, LengthOfArray<Uint32>(Grass2_Action_2_rot) },
	{ NULL, Grass2_Action_3_rot, 0, LengthOfArray<Uint32>(Grass2_Action_3_rot) },
	{ NULL, Grass2_Action_4_rot, 0, LengthOfArray<Uint32>(Grass2_Action_4_rot) },
	{ NULL, Grass2_Action_5_rot, 0, LengthOfArray<Uint32>(Grass2_Action_5_rot) },
	{ NULL, Grass2_Action_6_rot, 0, LengthOfArray<Uint32>(Grass2_Action_6_rot) },
	{ NULL, Grass2_Action_7_rot, 0, LengthOfArray<Uint32>(Grass2_Action_7_rot) },
	{ NULL, Grass2_Action_8_rot, 0, LengthOfArray<Uint32>(Grass2_Action_8_rot) }
};

NJS_MOTION Grass2_Action = { Grass2_Action_mdat, 8, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

NJS_ACTION action_Grass2_Action = { &Object_Grass2, &Grass2_Action };

NJS_MATERIAL matlist_0013B480[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 63, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013B494[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013B49C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013B4AC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013B494, NULL, NULL, NULL, uv_0013B49C, NULL }
};

NJS_VECTOR vertex_0013B4C4[] = {
	{ -1.143363f, 0.006037f, -2.081557f },
	{ -0.753747f, 0.006037f, 0.351718f },
	{ 1.365193f, 0.006037f, -2.081557f },
	{ 1.12221f, 0.006037f, 0.278122f }
};

NJS_VECTOR normal_0013B4F4[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0013B524 = { vertex_0013B4C4, normal_0013B4F4, LengthOfArray<Sint32>(vertex_0013B4C4), meshlist_0013B4AC, matlist_0013B480, LengthOfArray<Uint16>(meshlist_0013B4AC), LengthOfArray<Uint16>(matlist_0013B480),{ 0.110915f, 0.006037f, -0.8649189f }, 1.575613f, NULL };

NJS_OBJECT object_0013B54C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013B524, -0.598938f, -3.015959f, 1.174501f, 0xFFFFB778, 0xFFFF72FC, 0xFFFFF26A, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0013B580[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 64, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013B594[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013B59C[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0013B5AC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013B594, NULL, NULL, NULL, uv_0013B59C, NULL }
};

NJS_VECTOR vertex_0013B5C4[] = {
	{ -1.88149f, -0.005877f, -2.434647f },
	{ -0.851554f, -0.005879f, 0.766753f },
	{ 1.134758f, -0.005884f, -2.802624f },
	{ 1.465747f, -0.009590999f, 0.046306f }
};

NJS_VECTOR normal_0013B5F4[] = {
	{ 0.000786f, 1, 0.000436f },
	{ 0.000786f, 1, 0.000436f },
	{ 0.000786f, 1, 0.000436f },
	{ 0.000786f, 1, 0.000436f }
};

NJS_MODEL_SADX attach_0013B624 = { vertex_0013B5C4, normal_0013B5F4, LengthOfArray<Sint32>(vertex_0013B5C4), meshlist_0013B5AC, matlist_0013B580, LengthOfArray<Uint16>(meshlist_0013B5AC), LengthOfArray<Uint16>(matlist_0013B580),{ -0.207872f, -0.007734f, -1.017935f }, 1.775003f, NULL };

NJS_OBJECT object_0013B64C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013B624, 0.449741f, -2.045752f, 0.917326f, 0xFFFFBB06, 0xFFFF8809, 0xFFFFFDAD, 1, 1, 1, NULL, &object_0013B54C };

NJS_MATERIAL matlist_0013B680[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 64, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013B694[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013B69C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013B6AC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013B694, NULL, NULL, NULL, uv_0013B69C, NULL }
};

NJS_VECTOR vertex_0013B6C4[] = {
	{ -0.988042f, -0.001784f, -2.068568f },
	{ -1.503011f, -0.001784f, 0.396877f },
	{ 1.182182f, -0.001787f, -1.553401f },
	{ 1.108615f, -0.001787f, 0.249685f }
};

NJS_VECTOR normal_0013B6F4[] = {
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 }
};

NJS_MODEL_SADX attach_0013B724 = { vertex_0013B6C4, normal_0013B6F4, LengthOfArray<Sint32>(vertex_0013B6C4), meshlist_0013B6AC, matlist_0013B680, LengthOfArray<Uint16>(meshlist_0013B6AC), LengthOfArray<Uint16>(matlist_0013B680),{ -0.160414f, -0.001785f, -0.8358459f }, 1.522191f, NULL };

NJS_OBJECT object_0013B74C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013B724, -1.520725f, -1.772533f, 1.087937f, 0xFFFFBE94, 0xFFFF7280, 0xFFFFF698, 1, 1, 1, NULL, &object_0013B64C };

NJS_MATERIAL matlist_0013B780[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 63, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013B794[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013B79C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013B7AC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013B794, NULL, NULL, NULL, uv_0013B79C, NULL }
};

NJS_VECTOR vertex_0013B7C4[] = {
	{ -1.209884f, 0.010992f, -2.638319f },
	{ -1.159622f, 0.010992f, 0.380768f },
	{ 0.776422f, 0.010992f, -2.233548f },
	{ 1.348933f, 0.010992f, 0.380768f }
};

NJS_VECTOR normal_0013B7F4[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0013B824 = { vertex_0013B7C4, normal_0013B7F4, LengthOfArray<Sint32>(vertex_0013B7C4), meshlist_0013B7AC, matlist_0013B780, LengthOfArray<Uint16>(meshlist_0013B7AC), LengthOfArray<Uint16>(matlist_0013B780),{ 0.069524f, 0.010992f, -1.128775f }, 1.989287f, NULL };

NJS_OBJECT object_0013B84C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013B824, 0.53669f, -0.473045f, 1.132963f, 0xFFFFD1C8, 0xFFFF92CF, 0xBCB, 1, 1, 1, NULL, &object_0013B74C };

NJS_MATERIAL matlist_0013B880[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 64, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013B894[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013B89C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013B8AC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013B894, NULL, NULL, NULL, uv_0013B89C, NULL }
};

NJS_VECTOR vertex_0013B8C4[] = {
	{ -1.441811f, -0.040294f, -2.316642f },
	{ -1.441811f, -0.0403f, 0.308563f },
	{ 1.392856f, -0.040291f, -2.316642f },
	{ 1.392856f, -0.040297f, 0.30856f }
};

NJS_VECTOR normal_0013B8F4[] = {
	{ -0.00001f, 1, 0.000002f },
	{ -0.00001f, 1, 0.000002f },
	{ -0.00001f, 1, 0.000002f },
	{ -0.00001f, 1, 0.000002f }
};

NJS_MODEL_SADX attach_0013B924 = { vertex_0013B8C4, normal_0013B8F4, LengthOfArray<Sint32>(vertex_0013B8C4), meshlist_0013B8AC, matlist_0013B880, LengthOfArray<Uint16>(meshlist_0013B8AC), LengthOfArray<Uint16>(matlist_0013B880),{ -0.024477f, -0.040295f, -1.004039f }, 1.583282f, NULL };

NJS_OBJECT object_0013B94C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013B924, -0.682101f, -0.955139f, 1.203996f, 0xFFFFCD83, 0x7758, 0x208, 1, 1, 1, NULL, &object_0013B84C };

NJS_MATERIAL matlist_0013B980[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 64, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013B994[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013B99C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013B9AC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013B994, NULL, NULL, NULL, uv_0013B99C, NULL }
};

NJS_VECTOR vertex_0013B9C4[] = {
	{ -0.990173f, 0.042698f, -2.073704f },
	{ -1.505141f, 0.042697f, 0.39174f },
	{ 1.180051f, 0.042698f, -1.558537f },
	{ 1.106484f, 0.042697f, 0.244549f }
};

NJS_VECTOR normal_0013B9F4[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0013BA24 = { vertex_0013B9C4, normal_0013B9F4, LengthOfArray<Sint32>(vertex_0013B9C4), meshlist_0013B9AC, matlist_0013B980, LengthOfArray<Uint16>(meshlist_0013B9AC), LengthOfArray<Uint16>(matlist_0013B980),{ -0.162545f, 0.042698f, -0.840982f }, 1.688704f, NULL };

NJS_OBJECT object_0013BA4C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013BA24, 1.441353f, 0.107658f, 1.364924f, 0xFFFFB8E4, 0xFFFF98FC, 0x1C6F, 1, 1, 1, NULL, &object_0013B94C };

NJS_MATERIAL matlist_0013BA80[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 63, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013BA94[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013BA9C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013BAAC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013BA94, NULL, NULL, NULL, uv_0013BA9C, NULL }
};

NJS_VECTOR vertex_0013BAC4[] = {
	{ -1.346896f, -0.005729f, -2.050169f },
	{ -0.697861f, -0.005728f, 0.493499f },
	{ 1.76663f, -0.00573f, -2.22953f },
	{ 1.161658f, -0.005728f, 0.458386f }
};

NJS_VECTOR normal_0013BAF4[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0013BB24 = { vertex_0013BAC4, normal_0013BAF4, LengthOfArray<Sint32>(vertex_0013BAC4), meshlist_0013BAAC, matlist_0013BA80, LengthOfArray<Uint16>(meshlist_0013BAAC), LengthOfArray<Uint16>(matlist_0013BA80),{ 0.209867f, -0.005729f, -0.868015f }, 1.58321f, NULL };

NJS_OBJECT object_0013BB4C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013BB24, 0.346735f, 1.238233f, 1.463736f, 0xFFFFC5B1, 0xFFFF8A9D, 0x609, 1, 1, 1, NULL, &object_0013BA4C };

NJS_MATERIAL matlist_0013BB80[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 64, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013BB94[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013BB9C[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0013BBAC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013BB94, NULL, NULL, NULL, uv_0013BB9C, NULL }
};

NJS_VECTOR vertex_0013BBC4[] = {
	{ -1.202301f, -0.013819f, -2.772467f },
	{ -1.475848f, -0.010297f, 0.457052f },
	{ 1.22087f, -0.0103f, -2.99053f },
	{ 1.315492f, -0.010299f, 0.33244f }
};

NJS_VECTOR normal_0013BBF4[] = {
	{ -0.0007109999f, 1, -0.000557f },
	{ -0.0007109999f, 1, -0.000557f },
	{ -0.0007109999f, 1, -0.000557f },
	{ -0.0007109999f, 1, -0.000557f }
};

NJS_MODEL_SADX attach_0013BC24 = { vertex_0013BBC4, normal_0013BBF4, LengthOfArray<Sint32>(vertex_0013BBC4), meshlist_0013BBAC, matlist_0013BB80, LengthOfArray<Uint16>(meshlist_0013BBAC), LengthOfArray<Uint16>(matlist_0013BB80),{ -0.08017799f, -0.012058f, -1.266739f }, 2.045502f, NULL };

NJS_OBJECT object_0013BC4C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013BC24, -0.8312179f, 0.671631f, 0.960838f, 0xFFFFCB61, 0xFFFF6E9B, 0xFFFFF466, 1, 1, 1, NULL, &object_0013BB4C };

NJS_MATERIAL matlist_0013BC80[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 63, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013BC94[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013BC9C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013BCAC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013BC94, NULL, NULL, NULL, uv_0013BC9C, NULL }
};

NJS_VECTOR vertex_0013BCC4[] = {
	{ -1.109719f, -0.000522f, -2.123455f },
	{ -1.109719f, -0.000523f, 0.385101f },
	{ 1.398837f, -0.0005199999f, -2.123455f },
	{ 1.398837f, -0.000522f, 0.3851f }
};

NJS_VECTOR normal_0013BCF4[] = {
	{ -0.00001f, 1, 0.000001f },
	{ -0.00001f, 1, 0.000001f },
	{ -0.00001f, 1, 0.000001f },
	{ -0.00001f, 1, 0.000001f }
};

NJS_MODEL_SADX attach_0013BD24 = { vertex_0013BCC4, normal_0013BCF4, LengthOfArray<Sint32>(vertex_0013BCC4), meshlist_0013BCAC, matlist_0013BC80, LengthOfArray<Uint16>(meshlist_0013BCAC), LengthOfArray<Uint16>(matlist_0013BC80),{ 0.144559f, -0.000522f, -0.869177f }, 1.760556f, NULL };

NJS_OBJECT object_0013BD4C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013BD24, 1.269523f, 2.49223f, 1.026089f, 0xFFFFC16D, 0xFFFF9924, 0x15DD, 1, 1, 1, NULL, &object_0013BC4C };

NJS_MATERIAL matlist_0013BD80[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 64, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013BD94[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013BD9C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013BDAC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013BD94, NULL, NULL, NULL, uv_0013BD9C, NULL }
};

NJS_VECTOR vertex_0013BDC4[] = {
	{ -1.256432f, -0.027286f, -2.541985f },
	{ -1.256432f, -0.027286f, 0.367939f },
	{ 1.252123f, -0.027286f, -2.541985f },
	{ 1.252123f, -0.027286f, 0.367939f }
};

NJS_VECTOR normal_0013BDF4[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0013BE24 = { vertex_0013BDC4, normal_0013BDF4, LengthOfArray<Sint32>(vertex_0013BDC4), meshlist_0013BDAC, matlist_0013BD80, LengthOfArray<Uint16>(meshlist_0013BDAC), LengthOfArray<Uint16>(matlist_0013BD80),{ -0.002154f, -0.027286f, -1.087023f }, 1.657364f, NULL };

NJS_OBJECT object_0013BE4C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013BE24, 0.240307f, 3.232312f, 1.101854f, 0xFFFFD556, 0x82CD, 0x4F6, 1, 1, 1, NULL, &object_0013BD4C };

NJS_MATERIAL matlist_0013BE80[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 64, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013BE94[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013BE9C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013BEAC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013BE94, NULL, NULL, NULL, uv_0013BE9C, NULL }
};

NJS_VECTOR vertex_0013BEC4[] = {
	{ -1.187886f, -0.029186f, -2.751158f },
	{ -1.592504f, -0.029186f, 0.192652f },
	{ 1.75479f, -0.029185f, -1.868016f },
	{ 1.203038f, -0.029185f, 0.487033f }
};

NJS_VECTOR normal_0013BEF4[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0013BF24 = { vertex_0013BEC4, normal_0013BEF4, LengthOfArray<Sint32>(vertex_0013BEC4), meshlist_0013BEAC, matlist_0013BE80, LengthOfArray<Uint16>(meshlist_0013BEAC), LengthOfArray<Uint16>(matlist_0013BE80),{ 0.081143f, -0.029186f, -1.132062f }, 2.241189f, NULL };

NJS_OBJECT object_0013BF4C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013BF24, -1.193336f, 2.4956f, 1.203159f, 0xFFFFB778, 0xFFFF6A08, 0xFFFFE7B2, 1, 1, 1, NULL, &object_0013BE4C };

NJS_MATERIAL matlist_0013BF80[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 64, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013BF94[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013BF9C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013BFAC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013BF94, NULL, NULL, NULL, uv_0013BF9C, NULL }
};

NJS_VECTOR vertex_0013BFC4[] = {
	{ -1.441811f, -0.040294f, -2.316643f },
	{ -1.441811f, -0.0403f, 0.308563f },
	{ 1.392857f, -0.040291f, -2.316643f },
	{ 1.392857f, -0.040297f, 0.30856f }
};

NJS_VECTOR normal_0013BFF4[] = {
	{ -0.00001f, 1, 0.000002f },
	{ -0.00001f, 1, 0.000002f },
	{ -0.00001f, 1, 0.000002f },
	{ -0.00001f, 1, 0.000002f }
};

NJS_MODEL_SADX attach_0013C024 = { vertex_0013BFC4, normal_0013BFF4, LengthOfArray<Sint32>(vertex_0013BFC4), meshlist_0013BFAC, matlist_0013BF80, LengthOfArray<Uint16>(meshlist_0013BFAC), LengthOfArray<Uint16>(matlist_0013BF80),{ -0.024477f, -0.040296f, -1.00404f }, 2.211745f, NULL };

NJS_OBJECT object_0013C04C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013C024, 0.618525f, 4.609398f, 0.582022f, 0xFFFFCFA5, 0x9B19, 0x1334, 1, 1, 1, NULL, &object_0013BF4C };

NJS_MATERIAL matlist_0013C080[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 63, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013C094[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013C09C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013C0AC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013C094, NULL, NULL, NULL, uv_0013C09C, NULL }
};

NJS_VECTOR vertex_0013C0C4[] = {
	{ -1.105422f, 0.022425f, -2.147583f },
	{ -1.105421f, 0.022424f, 0.360969f },
	{ 1.403133f, 0.022423f, -2.147579f },
	{ 1.403134f, 0.022422f, 0.360973f }
};

NJS_VECTOR normal_0013C0F4[] = {
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 }
};

NJS_MODEL_SADX attach_0013C124 = { vertex_0013C0C4, normal_0013C0F4, LengthOfArray<Sint32>(vertex_0013C0C4), meshlist_0013C0AC, matlist_0013C080, LengthOfArray<Uint16>(meshlist_0013C0AC), LengthOfArray<Uint16>(matlist_0013C080),{ 0.148856f, 0.022423f, -0.8933049f }, 1.98678f, NULL };

NJS_OBJECT object_0013C14C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013C124, -0.483048f, 4.153161f, 0.542505f, 0xFFFFD82E, 0xFFFF6C45, 0xFFFFF9B0, 1, 1, 1, NULL, &object_0013C04C };

NJS_MATERIAL matlist_0013C180[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 62, NJD_D_100 | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013C194[] = {
	0, 1, 3, 4,
	1, 2, 4, 5
};

NJS_TEX uv_0013C1A4[] = {
	{ 149, 196 },
	{ 0, -949 },
	{ 1107, 92 },
	{ 1275, -1020 },
	{ 0, -949 },
	{ 234, -9 },
	{ 1275, -1020 },
	{ 1072, 255 }
};

NJS_MESHSET_SADX meshlist_0013C1C4[] = {
	{ NJD_MESHSET_4 | 0, 2, poly_0013C194, NULL, NULL, NULL, uv_0013C1A4, NULL }
};

NJS_VECTOR vertex_0013C1DC[] = {
	{ -1.291049f, 3.915165f, 0.305521f },
	{ -1.717434f, 0.8607399f, 0.453989f },
	{ -1.047219f, -3.244402f, 0.33212f },
	{ 1.442858f, 3.96398f, 0.318971f },
	{ 1.918969f, 0.879549f, 0.463035f },
	{ 1.340207f, -3.246054f, 0.297914f }
};

NJS_VECTOR normal_0013C224[] = {
	{ -0.004032f, 0.047566f, 0.9988599f },
	{ 0.000121f, 0.006389f, 0.99998f },
	{ 0.004273f, -0.034799f, 0.999385f },
	{ -0.004032f, 0.047566f, 0.9988599f },
	{ 0.000121f, 0.006389f, 0.99998f },
	{ 0.004273f, -0.034799f, 0.999385f }
};

NJS_MODEL_SADX attach_0013C26C = { vertex_0013C1DC, normal_0013C224, LengthOfArray<Sint32>(vertex_0013C1DC), meshlist_0013C1C4, matlist_0013C180, LengthOfArray<Uint16>(meshlist_0013C1C4), LengthOfArray<Uint16>(matlist_0013C180),{ 0.100768f, 0.358963f, 0.380475f }, 3.605962f, NULL };

NJS_OBJECT Object_Grass3 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0013C26C, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0013C14C, NULL };

NJS_MKEY_A Action_Grass3_1_rot[] = {
	{ 0, 0xFFFFD82E, 0xFFFF6C46, 0xFFFFF9B0 },
	{ 4, 0xFFFFDC72, 0xFFFF6C46, 0xFFFFF9B0 },
	{ 7, 0xFFFFD8D9, 0xFFFF6C46, 0xFFFFF9B0 }
};

NJS_MKEY_A Action_Grass3_2_rot[] = {
	{ 0, 0xFFFFCFA6, 0x9B19, 0x1334 },
	{ 2, 0xFFFFCC17, 0x9B19, 0x1334 },
	{ 6, 0xFFFFD27E, 0x9B19, 0x1334 },
	{ 7, 0xFFFFD138, 0x9B19, 0x1334 }
};

NJS_MKEY_A Action_Grass3_3_rot[] = {
	{ 0, 0xFFFFB778, 0xFFFF6A09, 0xFFFFE7B2 },
	{ 4, 0xFFFFB60C, 0xFFFF6A09, 0xFFFFE7B2 },
	{ 7, 0xFFFFB82E, 0xFFFF6A09, 0xFFFFE7B2 }
};

NJS_MKEY_A Action_Grass3_4_rot[] = {
	{ 0, 0xFFFFD556, 0x82CD, 0x4F6 },
	{ 3, 0xFFFFD778, 0x82CD, 0x4F6 },
	{ 6, 0xFFFFD4A0, 0x82CD, 0x4F6 },
	{ 7, 0xFFFFD4E0, 0x82CD, 0x4F6 }
};

NJS_MKEY_A Action_Grass3_5_rot[] = {
	{ 0, 0xFFFFC16D, 0xFFFF9925, 0x15DD },
	{ 4, 0xFFFFC5B1, 0xFFFF9925, 0x15DD },
	{ 7, 0xFFFFC217, 0xFFFF9925, 0x15DD }
};

NJS_MKEY_A Action_Grass3_6_rot[] = {
	{ 0, 0xFFFFCB61, 0xFFFF6E9B, 0xFFFFF466 },
	{ 3, 0xFFFFCFA6, 0xFFFF6E9B, 0xFFFFF466 },
	{ 6, 0xFFFFCCCE, 0xFFFF6E9B, 0xFFFFF466 },
	{ 7, 0xFFFFCBE1, 0xFFFF6E9B, 0xFFFFF466 }
};

NJS_MKEY_A Action_Grass3_7_rot[] = {
	{ 0, 0xFFFFC5B1, 0xFFFF8A9D, 0x609 },
	{ 3, 0xFFFFC2D9, 0xFFFF8A9D, 0x609 },
	{ 6, 0xFFFFC71D, 0xFFFF8A9D, 0x609 },
	{ 7, 0xFFFFC68C, 0xFFFF8A9D, 0x609 }
};

NJS_MKEY_A Action_Grass3_8_rot[] = {
	{ 0, 0xFFFFB8E4, 0xFFFF98FD, 0x1C6F },
	{ 3, 0xFFFFB60C, 0xFFFF98FD, 0x1C6F },
	{ 5, 0xFFFFB99A, 0xFFFF98FD, 0x1C6F },
	{ 7, 0xFFFFB934, 0xFFFF98FD, 0x1C6F }
};

NJS_MKEY_A Action_Grass3_9_rot[] = {
	{ 0, 0xFFFFCD84, 0x7757, 0x208 },
	{ 3, 0xFFFFD112, 0x7757, 0x208 },
	{ 4, 0xFFFFD05C, 0x7757, 0x208 },
	{ 7, 0xFFFFCDD3, 0x7757, 0x208 }
};

NJS_MKEY_A Action_Grass3_11_rot[] = {
	{ 0, 0xFFFFBE95, 0xFFFF7280, 0xFFFFF698 },
	{ 5, 0xFFFFC2D9, 0xFFFF7280, 0xFFFFF698 },
	{ 7, 0xFFFFBFB0, 0xFFFF7280, 0xFFFFF698 }
};

NJS_MKEY_A Action_Grass3_12_rot[] = {
	{ 0, 0xFFFFBB06, 0xFFFF8809, 0xFFFFFDAD },
	{ 2, 0xFFFFB82E, 0xFFFF8809, 0xFFFFFDAD },
	{ 6, 0xFFFFBE95, 0xFFFF8809, 0xFFFFFDAD },
	{ 7, 0xFFFFBCEC, 0xFFFF8809, 0xFFFFFDAD }
};

NJS_MKEY_A Action_Grass3_13_rot[] = {
	{ 0, 0xFFFFB778, 0xFFFF72FD, 0xFFFFF26A },
	{ 4, 0xFFFFBC73, 0xFFFF72FD, 0xFFFFF26A },
	{ 7, 0xFFFFB83F, 0xFFFF72FD, 0xFFFFF26A }
};

NJS_MDATA2 Action_Grass3_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, Action_Grass3_1_rot, 0, LengthOfArray<Uint32>(Action_Grass3_1_rot) },
	{ NULL, Action_Grass3_2_rot, 0, LengthOfArray<Uint32>(Action_Grass3_2_rot) },
	{ NULL, Action_Grass3_3_rot, 0, LengthOfArray<Uint32>(Action_Grass3_3_rot) },
	{ NULL, Action_Grass3_4_rot, 0, LengthOfArray<Uint32>(Action_Grass3_4_rot) },
	{ NULL, Action_Grass3_5_rot, 0, LengthOfArray<Uint32>(Action_Grass3_5_rot) },
	{ NULL, Action_Grass3_6_rot, 0, LengthOfArray<Uint32>(Action_Grass3_6_rot) },
	{ NULL, Action_Grass3_7_rot, 0, LengthOfArray<Uint32>(Action_Grass3_7_rot) },
	{ NULL, Action_Grass3_8_rot, 0, LengthOfArray<Uint32>(Action_Grass3_8_rot) },
	{ NULL, Action_Grass3_9_rot, 0, LengthOfArray<Uint32>(Action_Grass3_9_rot) },
	{ NULL, NULL, 0, 0 },
	{ NULL, Action_Grass3_11_rot, 0, LengthOfArray<Uint32>(Action_Grass3_11_rot) },
	{ NULL, Action_Grass3_12_rot, 0, LengthOfArray<Uint32>(Action_Grass3_12_rot) },
	{ NULL, Action_Grass3_13_rot, 0, LengthOfArray<Uint32>(Action_Grass3_13_rot) }
};

NJS_MOTION Action_Grass3 = { Action_Grass3_mdat, 8, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

NJS_ACTION action_Action_Grass3 = { &Object_Grass3, &Action_Grass3 };

NJS_MATERIAL matlist_0013C2C8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 64, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013C2DC[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013C2E4[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013C2F4[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013C2DC, NULL, NULL, NULL, uv_0013C2E4, NULL }
};

NJS_VECTOR vertex_0013C30C[] = {
	{ -0.6514159f, -0.016309f, -1.099972f },
	{ -0.544916f, -0.016309f, 0.160764f },
	{ 0.484583f, -0.016309f, -1.028945f },
	{ 0.6088319f, -0.016309f, 0.160764f }
};

NJS_VECTOR normal_0013C33C[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0013C36C = { vertex_0013C30C, normal_0013C33C, LengthOfArray<Sint32>(vertex_0013C30C), meshlist_0013C2F4, matlist_0013C2C8, LengthOfArray<Uint16>(meshlist_0013C2F4), LengthOfArray<Uint16>(matlist_0013C2C8),{ -0.021292f, -0.016309f, -0.469604f }, 0.7944f, NULL };

NJS_OBJECT object_0013C394 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013C36C, -0.187323f, -0.255283f, 0.679934f, 0xFFFFC71D, 0xFFFF6952, 0xFFFFFB67, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0013C3C8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 64, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013C3DC[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013C3E4[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0013C3F4[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013C3DC, NULL, NULL, NULL, uv_0013C3E4, NULL }
};

NJS_VECTOR vertex_0013C40C[] = {
	{ -0.534121f, -0.000965f, -1.118237f },
	{ -0.8125049f, -0.0009639999f, 0.214546f },
	{ 0.63907f, -0.000966f, -0.839745f },
	{ 0.599301f, -0.000966f, 0.134976f }
};

NJS_VECTOR normal_0013C43C[] = {
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 }
};

NJS_MODEL_SADX attach_0013C46C = { vertex_0013C40C, normal_0013C43C, LengthOfArray<Sint32>(vertex_0013C40C), meshlist_0013C3F4, matlist_0013C3C8, LengthOfArray<Uint16>(meshlist_0013C3F4), LengthOfArray<Uint16>(matlist_0013C3C8),{ -0.08671799f, -0.000965f, -0.451846f }, 0.869441f, NULL };

NJS_OBJECT object_0013C494 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013C46C, 0.465613f, 0.202819f, 0.559761f, 0xFFFFB8E4, 0xFFFF91B0, 0x15BC, 1, 1, 1, NULL, &object_0013C394 };

NJS_MATERIAL matlist_0013C4C8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 63, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013C4DC[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013C4E4[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013C4F4[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013C4DC, NULL, NULL, NULL, uv_0013C4E4, NULL }
};

NJS_VECTOR vertex_0013C50C[] = {
	{ -0.539923f, -0.004237f, -1.069298f },
	{ -0.377253f, -0.003097f, 0.266778f },
	{ 0.809075f, -0.004237f, -0.99827f },
	{ 0.627975f, -0.003097f, 0.247797f }
};

NJS_VECTOR normal_0013C53C[] = {
	{ 0.00002f, 1, -0.000883f },
	{ 0.00002f, 1, -0.000883f },
	{ 0.00002f, 1, -0.000883f },
	{ 0.00002f, 1, -0.000883f }
};

NJS_MODEL_SADX attach_0013C56C = { vertex_0013C50C, normal_0013C53C, LengthOfArray<Sint32>(vertex_0013C50C), meshlist_0013C4F4, matlist_0013C4C8, LengthOfArray<Uint16>(meshlist_0013C4F4), LengthOfArray<Uint16>(matlist_0013C4C8),{ 0.134576f, -0.003667f, -0.40126f }, 0.742179f, NULL };

NJS_OBJECT object_0013C594 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013C56C, 0.075069f, 0.452f, 0.650135f, 0xFFFFD112, 0xFFFF83DA, 0x243, 1, 1, 1, NULL, &object_0013C494 };

NJS_MATERIAL matlist_0013C5C8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 63, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013C5DC[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013C5E4[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0013C5F4[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013C5DC, NULL, NULL, NULL, uv_0013C5E4, NULL }
};

NJS_VECTOR vertex_0013C60C[] = {
	{ -0.5443349f, -0.000259f, -0.970138f },
	{ -0.5443349f, -0.00026f, 0.17594f },
	{ 0.686151f, -0.000258f, -0.970138f },
	{ 0.686151f, -0.000259f, 0.17594f }
};

NJS_VECTOR normal_0013C63C[] = {
	{ -0.00001f, 1, 0.000001f },
	{ -0.00001f, 1, 0.000001f },
	{ -0.00001f, 1, 0.000001f },
	{ -0.00001f, 1, 0.000001f }
};

NJS_MODEL_SADX attach_0013C66C = { vertex_0013C60C, normal_0013C63C, LengthOfArray<Sint32>(vertex_0013C60C), meshlist_0013C5F4, matlist_0013C5C8, LengthOfArray<Uint16>(meshlist_0013C5F4), LengthOfArray<Uint16>(matlist_0013C5C8),{ 0.070908f, -0.000259f, -0.397099f }, 0.881924f, NULL };

NJS_OBJECT object_0013C694 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013C66C, 0.673619f, 0.873271f, 0.366839f, 0xFFFFCB61, 0xFFFF993A, 0xD11, 1, 1, 1, NULL, &object_0013C594 };

NJS_MATERIAL matlist_0013C6C8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 64, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013C6DC[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013C6E4[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013C6F4[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013C6DC, NULL, NULL, NULL, uv_0013C6E4, NULL }
};

NJS_VECTOR vertex_0013C70C[] = {
	{ -0.535273f, 0.023082f, -1.121014f },
	{ -0.813657f, 0.023081f, 0.211769f },
	{ 0.637918f, 0.023082f, -0.842522f },
	{ 0.5981489f, 0.023081f, 0.1322f }
};

NJS_VECTOR normal_0013C73C[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0013C76C = { vertex_0013C70C, normal_0013C73C, LengthOfArray<Sint32>(vertex_0013C70C), meshlist_0013C6F4, matlist_0013C6C8, LengthOfArray<Uint16>(meshlist_0013C6F4), LengthOfArray<Uint16>(matlist_0013C6C8),{ -0.087869f, 0.023082f, -0.454622f }, 0.759948f, NULL };

NJS_OBJECT object_0013C794 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013C76C, 0.008006f, 1.213797f, 0.5675f, 0xFFFFD112, 0xFFFF84BE, 0xFFFFFFD0, 1, 1, 1, NULL, &object_0013C694 };

NJS_MATERIAL matlist_0013C7C8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 63, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013C7DC[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013C7E4[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013C7F4[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013C7DC, NULL, NULL, NULL, uv_0013C7E4, NULL }
};

NJS_VECTOR vertex_0013C80C[] = {
	{ -0.654045f, 0.005942f, -1.426236f },
	{ -0.626874f, 0.005942f, 0.205837f },
	{ 0.419722f, 0.005942f, -1.207423f },
	{ 0.729213f, 0.005942f, 0.205837f }
};

NJS_VECTOR normal_0013C83C[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0013C86C = { vertex_0013C80C, normal_0013C83C, LengthOfArray<Sint32>(vertex_0013C80C), meshlist_0013C7F4, matlist_0013C7C8, LengthOfArray<Uint16>(meshlist_0013C7F4), LengthOfArray<Uint16>(matlist_0013C7C8),{ 0.037584f, 0.005942f, -0.610199f }, 0.932533f, NULL };

NJS_OBJECT object_0013C894 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013C86C, -0.59675f, 1.005357f, 0.516748f, 0xFFFFD05C, 0xFFFF779E, 0xFFFFFB70, 1, 1, 1, NULL, &object_0013C794 };

NJS_MATERIAL matlist_0013C8C8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 63, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013C8DC[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013C8E4[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013C8F4[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013C8DC, NULL, NULL, NULL, uv_0013C8E4, NULL }
};

NJS_VECTOR vertex_0013C90C[] = {
	{ -0.597574f, 0.012123f, -1.160951f },
	{ -0.597574f, 0.012123f, 0.195135f },
	{ 0.758513f, 0.012122f, -1.160949f },
	{ 0.758513f, 0.012122f, 0.195137f }
};

NJS_VECTOR normal_0013C93C[] = {
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 },
	{ 0.000001f, 1, 0 }
};

NJS_MODEL_SADX attach_0013C96C = { vertex_0013C90C, normal_0013C93C, LengthOfArray<Sint32>(vertex_0013C90C), meshlist_0013C8F4, matlist_0013C8C8, LengthOfArray<Uint16>(meshlist_0013C8F4), LengthOfArray<Uint16>(matlist_0013C8C8),{ 0.080469f, 0.012122f, -0.482907f }, 1.126681f, NULL };

NJS_OBJECT object_0013C994 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013C96C, 0.350892f, 1.796696f, 0.292695f, 0xFFFFD8E4, 0xFFFF9931, 0x85E, 1, 1, 1, NULL, &object_0013C894 };

NJS_MATERIAL matlist_0013C9C8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 64, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013C9DC[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0013C9E4[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013C9F4[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013C9DC, NULL, NULL, NULL, uv_0013C9E4, NULL }
};

NJS_VECTOR vertex_0013CA0C[] = {
	{ -0.779421f, -0.021783f, -1.252342f },
	{ -0.779421f, -0.021786f, 0.166804f },
	{ 0.752958f, -0.021781f, -1.252342f },
	{ 0.752958f, -0.021784f, 0.166803f }
};

NJS_VECTOR normal_0013CA3C[] = {
	{ -0.00001f, 1, 0.000002f },
	{ -0.00001f, 1, 0.000002f },
	{ -0.00001f, 1, 0.000002f },
	{ -0.00001f, 1, 0.000002f }
};

NJS_MODEL_SADX attach_0013CA6C = { vertex_0013CA0C, normal_0013CA3C, LengthOfArray<Sint32>(vertex_0013CA0C), meshlist_0013C9F4, matlist_0013C9C8, LengthOfArray<Uint16>(meshlist_0013C9F4), LengthOfArray<Uint16>(matlist_0013C9C8),{ -0.013232f, -0.021783f, -0.542769f }, 1.172799f, NULL };

NJS_OBJECT object_0013CA94 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013CA6C, -0.321226f, 1.833f, 0.377731f, 0xFFFFCCCD, 0x6984, 0xFFFFE786, 1, 1, 1, NULL, &object_0013C994 };

NJS_OBJECT Object_Grass4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0013CA94, NULL };


NJS_MKEY_A Action_Grass4_1_rot[] = {
	{ 0, 0xFFFFCCCE, 0x6983, 0xFFFFE786 },
	{ 4, 0xFFFFD27E, 0x6983, 0xFFFFE786 },
	{ 7, 0xFFFFCDB1, 0x6983, 0xFFFFE786 }
};

NJS_MKEY_A Action_Grass4_2_rot[] = {
	{ 0, 0xFFFFD8E4, 0xFFFF9932, 0x85E },
	{ 3, 0xFFFFDBBC, 0xFFFF9932, 0x85E },
	{ 7, 0xFFFFD778, 0xFFFF9932, 0x85E }
};

NJS_MKEY_A Action_Grass4_3_rot[] = {
	{ 0, 0xFFFFD05C, 0xFFFF779F, 0xFFFFFB70 },
	{ 3, 0xFFFFD3EA, 0xFFFF779F, 0xFFFFFB70 },
	{ 6, 0xFFFFD334, 0xFFFF779F, 0xFFFFFB70 },
	{ 7, 0xFFFFD19A, 0xFFFF779F, 0xFFFFFB70 }
};

NJS_MKEY_A Action_Grass4_4_rot[] = {
	{ 0, 0xFFFFD112, 0xFFFF84BF, 0xFFFFFFD0 },
	{ 2, 0xFFFFCEF0, 0xFFFF84BF, 0xFFFFFFD0 },
	{ 5, 0xFFFFCE3A, 0xFFFF84BF, 0xFFFFFFD0 },
	{ 7, 0xFFFFD069, 0xFFFF84BF, 0xFFFFFFD0 }
};

NJS_MKEY_A Action_Grass4_5_rot[] = {
	{ 0, 0xFFFFCB61, 0xFFFF993A, 0xD11 },
	{ 2, 0xFFFFC889, 0xFFFF993A, 0xD11 },
	{ 6, 0xFFFFCC17, 0xFFFF993A, 0xD11 },
	{ 7, 0xFFFFCBDB, 0xFFFF993A, 0xD11 }
};

NJS_MKEY_A Action_Grass4_6_rot[] = {
	{ 0, 0xFFFFD112, 0xFFFF83DA, 0x243 },
	{ 5, 0xFFFFCE3A, 0xFFFF83DA, 0x243 },
	{ 7, 0xFFFFD055, 0xFFFF83DA, 0x243 }
};

NJS_MDATA2 Action_Grass4_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, Action_Grass4_1_rot, 0, LengthOfArray<Uint32>(Action_Grass4_1_rot) },
	{ NULL, Action_Grass4_2_rot, 0, LengthOfArray<Uint32>(Action_Grass4_2_rot) },
	{ NULL, Action_Grass4_3_rot, 0, LengthOfArray<Uint32>(Action_Grass4_3_rot) },
	{ NULL, Action_Grass4_4_rot, 0, LengthOfArray<Uint32>(Action_Grass4_4_rot) },
	{ NULL, Action_Grass4_5_rot, 0, LengthOfArray<Uint32>(Action_Grass4_5_rot) },
	{ NULL, Action_Grass4_6_rot, 0, LengthOfArray<Uint32>(Action_Grass4_6_rot) },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 }
};

NJS_MOTION Action_Grass4 = { Action_Grass4_mdat, 8, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

NJS_ACTION action_Action_Grass4 = { &Object_Grass4, &Action_Grass4 };

NJS_MATERIAL matlist_0012B014[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 15, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 16, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0012B03C[] = {
	0, 1, 3,
	0, 3, 2,
	2, 3, 5,
	2, 5, 4,
	6, 7, 9,
	6, 9, 8,
	8, 9, 11,
	8, 11, 10,
	12, 13, 15,
	12, 15, 14,
	16, 17, 19,
	16, 19, 18
};

Sint16 poly_0012B084[] = {
	14, 15, 17,
	14, 17, 16
};

NJS_TEX uv_0012B090[] = {
	{ 5, 10 },
	{ 5, 255 },
	{ 248, 255 },
	{ 5, 10 },
	{ 248, 255 },
	{ 248, 10 },
	{ 248, 10 },
	{ 248, 255 },
	{ 5, 255 },
	{ 248, 10 },
	{ 5, 255 },
	{ 5, 10 },
	{ 5, 10 },
	{ 5, 255 },
	{ 248, 255 },
	{ 5, 10 },
	{ 248, 255 },
	{ 248, 10 },
	{ 248, 10 },
	{ 248, 255 },
	{ 5, 255 },
	{ 248, 10 },
	{ 5, 255 },
	{ 5, 10 },
	{ 5, 10 },
	{ 5, 255 },
	{ 248, 255 },
	{ 5, 10 },
	{ 248, 255 },
	{ 248, 10 },
	{ 248, 10 },
	{ 248, 255 },
	{ 5, 255 },
	{ 248, 10 },
	{ 5, 255 },
	{ 5, 10 }
};

NJS_TEX uv_0012B120[] = {
	{ 3, 5 },
	{ 3, 255 },
	{ 504, 255 },
	{ 3, 5 },
	{ 504, 255 },
	{ 504, 5 }
};

NJS_MESHSET_SADX meshlist_0012B138[] = {
	{ NJD_MESHSET_3 | 0, 12, poly_0012B03C, NULL, NULL, NULL, uv_0012B090, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0012B084, NULL, NULL, NULL, uv_0012B120, NULL }
};

NJS_VECTOR vertex_0012B168[] = {
	{ -3.4123f, 2.882644f, 1.06f },
	{ -3.4123f, 0.000345f, 1.06f },
	{ -0.53f, 2.882644f, 0.53f },
	{ -0.53f, 0.000345f, 0.53f },
	{ 2.3523f, 2.882644f, 1.59f },
	{ 2.3523f, 0.000345f, 1.59f },
	{ -0.7623f, 2.882644f, 2.12f },
	{ -0.7623f, 0.000345f, 2.12f },
	{ 1.06f, 2.882644f, 0.53f },
	{ 1.06f, 0.000345f, 0.53f },
	{ 3.942299f, 2.882644f, 1.06f },
	{ 3.942299f, 0.000345f, 1.06f },
	{ -5.002779f, 4.833598f, 0.53f },
	{ -5.002779f, -0.00004f, 0.53f },
	{ -2.416801f, 4.833598f, 0 },
	{ -2.416801f, -0.00004f, 0 },
	{ 1.886801f, 4.833598f, 0 },
	{ 1.886801f, -0.00004f, 0 },
	{ 5.002779f, 4.833598f, 0.53f },
	{ 5.002779f, -0.00004f, 0.53f }
};

NJS_VECTOR normal_0012B258[] = {
	{ 0.180849f, 0, 0.983511f },
	{ 0.180849f, 0, 0.983511f },
	{ -0.175341f, 0, 0.984508f },
	{ 0.005691f, 0, 0.999984f },
	{ -0.345161f, 0, 0.938544f },
	{ -0.345161f, 0, 0.938544f },
	{ 0.657447f, 0, 0.753501f },
	{ 0.657447f, 0, 0.753501f },
	{ 0.108074f, 0, 0.9941429f },
	{ 0.414407f, 0, 0.910092f },
	{ -0.180849f, 0, 0.983511f },
	{ -0.180849f, 0, 0.983511f },
	{ 0.200778f, 0, 0.979637f },
	{ 0.200778f, 0, 0.979637f },
	{ 0.067231f, 0, 0.997737f },
	{ 0.134462f, 0, 0.990919f },
	{ -0.112142f, 0, 0.993692f },
	{ -0.056071f, 0, 0.998427f },
	{ -0.167683f, 0, 0.985841f },
	{ -0.167683f, 0, 0.985841f }
};

NJS_MODEL_SADX attach_0012B348 = { vertex_0012B168, normal_0012B258, LengthOfArray<Sint32>(vertex_0012B168), meshlist_0012B138, matlist_0012B014, LengthOfArray<Uint16>(meshlist_0012B138), LengthOfArray<Uint16>(matlist_0012B014),{ 0, 2.416797f, 1.06f }, 5.113844f, NULL };

NJS_OBJECT Object_Green0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0012B348, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001259E4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 81, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001259F8[] = {
	4, 1, 2, 3, 0
};

NJS_TEX uv_00125A04[] = {
	{ 124, 255 },
	{ 0, 114 },
	{ 255, 114 },
	{ 125, 0 }
};

NJS_MESHSET_SADX meshlist_00125A14[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001259F8, NULL, NULL, NULL, uv_00125A04, NULL }
};

NJS_VECTOR vertex_00125A2C[] = {
	{ -5.11415f, 4.605922f, -2.352875f },
	{ 0.000799f, -0.00042f, -0.000103f },
	{ -1.728102f, 2.44271f, -1.991534f },
	{ -1.867581f, 3.039817f, -0.582308f }
};

NJS_VECTOR normal_00125A5C[] = {
	{ 0.537604f, 0.794183f, -0.283295f },
	{ 0.855721f, 0.501418f, -0.127761f },
	{ 0.7158059f, 0.665602f, -0.211176f },
	{ 0.7158059f, 0.665602f, -0.211176f }
};

NJS_MODEL_SADX attach_00125A8C = { vertex_00125A2C, normal_00125A5C, LengthOfArray<Sint32>(vertex_00125A2C), meshlist_00125A14, matlist_001259E4, LengthOfArray<Uint16>(meshlist_00125A14), LengthOfArray<Uint16>(matlist_001259E4),{ -2.556676f, 2.302751f, -1.176489f }, 2.829183f, NULL };

NJS_OBJECT object_00125AB4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00125A8C, 0, 0, 0, 0xFFFFFF69, 0x36, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00125AE8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 81, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00125AFC[] = {
	4, 1, 3, 2, 0
};

NJS_TEX uv_00125B08[] = {
	{ 130, 255 },
	{ 0, 117 },
	{ 255, 117 },
	{ 129, 0 }
};

NJS_MESHSET_SADX meshlist_00125B18[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00125AFC, NULL, NULL, NULL, uv_00125B08, NULL }
};

NJS_VECTOR vertex_00125B30[] = {
	{ -1.160637f, 4.609148f, 4.474562f },
	{ 0.000388f, -0.000279f, -0.0006889999f },
	{ 0.06366599f, 2.75467f, 1.535196f },
	{ -1.41917f, 2.355025f, 1.591799f }
};

NJS_VECTOR normal_00125B60[] = {
	{ -0.231606f, 0.776315f, -0.5862539f },
	{ -0.163083f, 0.483276f, -0.860144f },
	{ -0.201561f, 0.64325f, -0.738649f },
	{ -0.201561f, 0.64325f, -0.738649f }
};

NJS_MODEL_SADX attach_00125B90 = { vertex_00125B30, normal_00125B60, LengthOfArray<Sint32>(vertex_00125B30), meshlist_00125B18, matlist_00125AE8, LengthOfArray<Uint16>(meshlist_00125B18), LengthOfArray<Uint16>(matlist_00125AE8),{ -0.677752f, 2.304434f, 2.236937f }, 3.212269f, NULL };

NJS_OBJECT object_00125BB8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00125B90, 0, 0, 0, 0x8D, 0, 0, 1, 1, 1, NULL, &object_00125AB4 };

NJS_MATERIAL matlist_00125BEC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 81, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00125C00[] = {
	4, 1, 3, 2, 0
};

NJS_TEX uv_00125C0C[] = {
	{ 130, 255 },
	{ 0, 119 },
	{ 255, 119 },
	{ 129, 0 }
};

NJS_MESHSET_SADX meshlist_00125C1C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00125C00, NULL, NULL, NULL, uv_00125C0C, NULL }
};

NJS_VECTOR vertex_00125C34[] = {
	{ 3.761473f, 5.487327f, -2.784561f },
	{ -0.000731f, -0.000557f, 0.00006599999f },
	{ 0.906256f, 2.720011f, -1.852713f },
	{ 1.448087f, 3.084954f, -0.461639f }
};

NJS_VECTOR normal_00125C64[] = {
	{ -0.681412f, 0.7281089f, 0.074397f },
	{ -0.869193f, 0.441464f, 0.222739f },
	{ -0.789179f, 0.595253f, 0.151227f },
	{ -0.789179f, 0.595253f, 0.151227f }
};

NJS_MODEL_SADX attach_00125C94 = { vertex_00125C34, normal_00125C64, LengthOfArray<Sint32>(vertex_00125C34), meshlist_00125C1C, matlist_00125BEC, LengthOfArray<Uint16>(meshlist_00125C1C), LengthOfArray<Uint16>(matlist_00125BEC),{ 1.880371f, 2.743385f, -1.392248f }, 3.076972f, NULL };

NJS_OBJECT object_00125CBC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00125C94, 0, 0, 0, 0x14E, 0, 0, 1, 1, 1, NULL, &object_00125BB8 };

NJS_MATERIAL matlist_00125CF0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 81, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00125D04[] = {
	4, 1, 3, 2, 0
};

NJS_TEX uv_00125D10[] = {
	{ 119, 255 },
	{ 5, 127 },
	{ 249, 126 },
	{ 109, 1 }
};

NJS_MESHSET_SADX meshlist_00125D20[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00125D04, NULL, NULL, NULL, uv_00125D10, NULL }
};

NJS_VECTOR vertex_00125D38[] = {
	{ 0.008006f, 1.188978f, -5.477577f },
	{ -0.000461f, 0.000017f, 0.0006809999f },
	{ -1.095906f, 1.523329f, -2.331606f },
	{ 1.147498f, 1.512485f, -2.351903f }
};

NJS_VECTOR normal_00125D68[] = {
	{ 0.003863f, 0.994534f, -0.104343f },
	{ 0.008977f, 0.839131f, 0.543855f },
	{ 0.006809f, 0.972433f, 0.233083f },
	{ 0.006809f, 0.972433f, 0.233083f }
};

NJS_MODEL_SADX attach_00125D98 = { vertex_00125D38, normal_00125D68, LengthOfArray<Sint32>(vertex_00125D38), meshlist_00125D20, matlist_00125CF0, LengthOfArray<Uint16>(meshlist_00125D20), LengthOfArray<Uint16>(matlist_00125CF0),{ 0.025796f, 0.761673f, -2.738448f }, 2.95517f, NULL };

NJS_OBJECT object_00125DC0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00125D98, 0, 0, 0, 0x56, 0xFFFFFFCA, 0xFFFFFFAA, 1, 1, 1, NULL, &object_00125CBC };

NJS_MATERIAL matlist_00125DF4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 81, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00125E08[] = {
	4, 1, 3, 2, 0
};

NJS_TEX uv_00125E14[] = {
	{ 130, 255 },
	{ 0, 97 },
	{ 255, 97 },
	{ 129, 0 }
};

NJS_MESHSET_SADX meshlist_00125E24[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00125E08, NULL, NULL, NULL, uv_00125E14, NULL }
};

NJS_VECTOR vertex_00125E3C[] = {
	{ -0.008171f, 1.248449f, 5.477577f },
	{ 0.000471f, 0.000017f, -0.0006809999f },
	{ 1.118424f, 1.523329f, 2.331606f },
	{ -1.171076f, 1.512485f, 2.351903f }
};

NJS_VECTOR normal_00125E6C[] = {
	{ -0.00396f, 0.996319f, 0.085636f },
	{ -0.008796f, 0.839133f, -0.543856f },
	{ -0.006743f, 0.9701999f, -0.24221f },
	{ -0.006743f, 0.9701999f, -0.24221f }
};

NJS_MODEL_SADX attach_00125E9C = { vertex_00125E3C, normal_00125E6C, LengthOfArray<Sint32>(vertex_00125E3C), meshlist_00125E24, matlist_00125DF4, LengthOfArray<Uint16>(meshlist_00125E24), LengthOfArray<Uint16>(matlist_00125DF4),{ -0.026326f, 0.761673f, 2.738448f }, 2.940516f, NULL };

NJS_OBJECT object_00125EC4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00125E9C, 0, 0, 0, 0xFFFFFE42, 0, 0x2E7, 1, 1, 1, NULL, &object_00125DC0 };

NJS_MATERIAL matlist_00125EF8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 81, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00125F0C[] = {
	4, 1, 3, 2, 0
};

NJS_TEX uv_00125F18[] = {
	{ 130, 255 },
	{ 0, 108 },
	{ 255, 108 },
	{ 129, 0 }
};

NJS_MESHSET_SADX meshlist_00125F28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00125F0C, NULL, NULL, NULL, uv_00125F18, NULL }
};

NJS_VECTOR vertex_00125F40[] = {
	{ 5.477577f, 1.636274f, 0.007678f },
	{ -0.0006809999f, 0.000017f, -0.000442f },
	{ 2.331606f, 1.523329f, -1.050868f },
	{ 2.351903f, 1.512485f, 1.10034f }
};

NJS_VECTOR normal_00125F70[] = {
	{ -0.03769f, 0.999275f, 0.005393f },
	{ -0.543853f, 0.839128f, 0.009361f },
	{ -0.301592f, 0.953407f, 0.007652f },
	{ -0.301592f, 0.953407f, 0.007652f }
};

NJS_MODEL_SADX attach_00125FA0 = { vertex_00125F40, normal_00125F70, LengthOfArray<Sint32>(vertex_00125F40), meshlist_00125F28, matlist_00125EF8, LengthOfArray<Uint16>(meshlist_00125F28), LengthOfArray<Uint16>(matlist_00125EF8),{ 2.738448f, 0.818146f, 0.024736f }, 2.942343f, NULL };

NJS_OBJECT object_00125FC8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00125FA0, 0, 0, 0, 0xB8, 0xCE, 0, 1, 1, 1, NULL, &object_00125EC4 };

NJS_MATERIAL matlist_00125FFC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 81, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00126010[] = {
	4, 1, 2, 3, 0
};

NJS_TEX uv_0012601C[] = {
	{ 124, 255 },
	{ 0, 98 },
	{ 255, 97 },
	{ 125, 0 }
};

NJS_MESHSET_SADX meshlist_0012602C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00126010, NULL, NULL, NULL, uv_0012601C, NULL }
};

NJS_VECTOR vertex_00126044[] = {
	{ -5.477577f, 1.270036f, 0.008060999f },
	{ 0.0006809999f, 0.000017f, -0.000464f },
	{ -2.331606f, 1.523329f, -1.103412f },
	{ -2.351903f, 1.512485f, 1.155357f }
};

NJS_VECTOR normal_00126074[] = {
	{ -0.07882199f, 0.99688f, 0.004078f },
	{ 0.543855f, 0.839132f, 0.008916f },
	{ 0.245525f, 0.969366f, 0.00686f },
	{ 0.245525f, 0.969366f, 0.00686f }
};

NJS_MODEL_SADX attach_001260A4 = { vertex_00126044, normal_00126074, LengthOfArray<Sint32>(vertex_00126044), meshlist_0012602C, matlist_00125FFC, LengthOfArray<Uint16>(meshlist_0012602C), LengthOfArray<Uint16>(matlist_00125FFC),{ -2.738448f, 0.761673f, 0.025973f }, 2.929877f, NULL };

NJS_OBJECT object_001260CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001260A4, 0, 0, 0, 0x4CB, 0xFFFFFC84, 0xFFFFFE67, 1, 1, 1, NULL, &object_00125FC8 };

NJS_OBJECT Object_WKusa1 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_001260CC, NULL };

NJS_MKEY_A Action_WKusa1_1_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0 },
	{ 4, 0xD71, 0xFFFFF639, 0xFFFFFB85 },
	{ 7, 0x4CB, 0xFFFFFC84, 0xFFFFFE67 }
};

NJS_MKEY_A Action_WKusa1_2_rot[] = {
	{ 0, 0, 0, 0 },
	{ 3, 0x6ED, 0x7BD, 0 },
	{ 7, 0xB8, 0xCE, 0 }
};

NJS_MKEY_A Action_WKusa1_3_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0 },
	{ 4, 0xFFFFFB1D, 0, 0x825 },
	{ 7, 0xFFFFFE42, 0, 0x2E7 }
};

NJS_MKEY_A Action_WKusa1_4_rot[] = {
	{ 0, 0, 0, 0 },
	{ 3, 0x342, 0xFFFFFDF7, 0xFFFFFCBE },
	{ 7, 0x56, 0xFFFFFFCA, 0xFFFFFFAA }
};

NJS_MKEY_A Action_WKusa1_5_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0 },
	{ 4, 0x3AA, 0, 0 },
	{ 7, 0x14E, 0, 0 }
};

NJS_MKEY_A Action_WKusa1_6_rot[] = {
	{ 0, 0, 0, 0 },
	{ 3, 0x54B, 0, 0 },
	{ 7, 0x8D, 0, 0 }
};

NJS_MKEY_A Action_WKusa1_7_rot[] = {
	{ 0, 0, 0, 0 },
	{ 3, 0xFFFFFA4C, 0x209, 0 },
	{ 7, 0xFFFFFF69, 0x36, 0 }
};

NJS_MDATA2 Action_WKusa1_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, Action_WKusa1_1_rot, 0, LengthOfArray<Uint32>(Action_WKusa1_1_rot) },
	{ NULL, Action_WKusa1_2_rot, 0, LengthOfArray<Uint32>(Action_WKusa1_2_rot) },
	{ NULL, Action_WKusa1_3_rot, 0, LengthOfArray<Uint32>(Action_WKusa1_3_rot) },
	{ NULL, Action_WKusa1_4_rot, 0, LengthOfArray<Uint32>(Action_WKusa1_4_rot) },
	{ NULL, Action_WKusa1_5_rot, 0, LengthOfArray<Uint32>(Action_WKusa1_5_rot) },
	{ NULL, Action_WKusa1_6_rot, 0, LengthOfArray<Uint32>(Action_WKusa1_6_rot) },
	{ NULL, Action_WKusa1_7_rot, 0, LengthOfArray<Uint32>(Action_WKusa1_7_rot) }
};

NJS_MOTION Action_WKusa1 = { Action_WKusa1_mdat, 8, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

NJS_ACTION action_Action_WKusa1 = { &Object_WKusa1, &Action_WKusa1 };
