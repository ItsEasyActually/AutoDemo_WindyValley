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

NJS_MESHSET meshlist_00139958[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013992C, NULL, NULL, NULL, uv_0013993C },
	{ NJD_MESHSET_4 | 0, 1, poly_00139932, NULL, NULL, NULL, uv_00139948 }
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

NJS_MODEL attach_00139A30 = { vertex_00139988, normal_001399DC, LengthOfArray<Sint32>(vertex_00139988), meshlist_00139958, matlist_00139918, LengthOfArray<Uint16>(meshlist_00139958), LengthOfArray<Uint16>(matlist_00139918),{ -0.139885f, 0.17345f, 2.158612f }, 2.190227f };

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

NJS_MESHSET meshlist_00139ACC[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00139AA0, NULL, NULL, NULL, uv_00139AB0 },
	{ NJD_MESHSET_4 | 0, 1, poly_00139AA6, NULL, NULL, NULL, uv_00139ABC }
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

NJS_MODEL attach_00139BA4 = { vertex_00139AFC, normal_00139B50, LengthOfArray<Sint32>(vertex_00139AFC), meshlist_00139ACC, matlist_00139A8C, LengthOfArray<Uint16>(meshlist_00139ACC), LengthOfArray<Uint16>(matlist_00139A8C),{ -0.038f, 0.244171f, 2.131024f }, 1.881475f };

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

NJS_MESHSET meshlist_00139C58[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00139C14, NULL, NULL, NULL, uv_00139C2C },
	{ NJD_MESHSET_4 | 0, 2, poly_00139C1A, NULL, NULL, NULL, uv_00139C38 }
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

NJS_MODEL attach_00139D90 = { vertex_00139C88, normal_00139D0C, LengthOfArray<Sint32>(vertex_00139C88), meshlist_00139C58, matlist_00139C00, LengthOfArray<Uint16>(meshlist_00139C58), LengthOfArray<Uint16>(matlist_00139C00),{ 0.079455f, 0.284251f, 2.51284f }, 2.5053f };

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

NJS_MESHSET meshlist_00139E2C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00139E00, NULL, NULL, NULL, uv_00139E10 },
	{ NJD_MESHSET_4 | 0, 1, poly_00139E06, NULL, NULL, NULL, uv_00139E1C }
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

NJS_MODEL attach_00139F04 = { vertex_00139E5C, normal_00139EB0, LengthOfArray<Sint32>(vertex_00139E5C), meshlist_00139E2C, matlist_00139DEC, LengthOfArray<Uint16>(meshlist_00139E2C), LengthOfArray<Uint16>(matlist_00139DEC),{ 0.054924f, -0.209111f, 2.160456f }, 2.216993f };

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

NJS_MESHSET meshlist_00139FA0[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00139F74, NULL, NULL, NULL, uv_00139F84 },
	{ NJD_MESHSET_4 | 0, 1, poly_00139F7A, NULL, NULL, NULL, uv_00139F90 }
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

NJS_MODEL attach_0013A078 = { vertex_00139FD0, normal_0013A024, LengthOfArray<Sint32>(vertex_00139FD0), meshlist_00139FA0, matlist_00139F60, LengthOfArray<Uint16>(meshlist_00139FA0), LengthOfArray<Uint16>(matlist_00139F60),{ -0.040879f, 0.169729f, 1.772742f }, 1.835801f };

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

NJS_MESHSET meshlist_0013A114[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013A0E8, NULL, NULL, NULL, uv_0013A0F8 },
	{ NJD_MESHSET_4 | 0, 1, poly_0013A0EE, NULL, NULL, NULL, uv_0013A104 }
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

NJS_MODEL attach_0013A1EC = { vertex_0013A144, normal_0013A198, LengthOfArray<Sint32>(vertex_0013A144), meshlist_0013A114, matlist_0013A0D4, LengthOfArray<Uint16>(meshlist_0013A114), LengthOfArray<Uint16>(matlist_0013A0D4),{ -0.038f, 0.244171f, 2.131024f }, 2.133354f };

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

NJS_MESHSET meshlist_0013A2A0[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013A25C, NULL, NULL, NULL, uv_0013A274 },
	{ NJD_MESHSET_4 | 0, 2, poly_0013A262, NULL, NULL, NULL, uv_0013A280 }
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

NJS_MODEL attach_0013A3D8 = { vertex_0013A2D0, normal_0013A354, LengthOfArray<Sint32>(vertex_0013A2D0), meshlist_0013A2A0, matlist_0013A248, LengthOfArray<Uint16>(meshlist_0013A2A0), LengthOfArray<Uint16>(matlist_0013A248),{ 0.319982f, -0.228893f, 2.916795f }, 2.970119f };

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

NJS_MESHSET meshlist_0013A474[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013A448, NULL, NULL, NULL, uv_0013A458 },
	{ NJD_MESHSET_4 | 0, 1, poly_0013A44E, NULL, NULL, NULL, uv_0013A464 }
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

NJS_MODEL attach_0013A54C = { vertex_0013A4A4, normal_0013A4F8, LengthOfArray<Sint32>(vertex_0013A4A4), meshlist_0013A474, matlist_0013A434, LengthOfArray<Uint16>(meshlist_0013A474), LengthOfArray<Uint16>(matlist_0013A434),{ -0.056755f, -0.133444f, 1.932185f }, 1.920347f };

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

NJS_MESHSET meshlist_0013A634[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013A5F0, NULL, NULL, NULL, uv_0013A608 },
	{ NJD_MESHSET_4 | 0, 2, poly_0013A5F6, NULL, NULL, NULL, uv_0013A614 }
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

NJS_MODEL attach_0013A76C = { vertex_0013A664, normal_0013A6E8, LengthOfArray<Sint32>(vertex_0013A664), meshlist_0013A634, matlist_0013A5DC, LengthOfArray<Uint16>(meshlist_0013A634), LengthOfArray<Uint16>(matlist_0013A5DC),{ 0.020098f, 0.257007f, 3.151219f }, 3.165798f };

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

NJS_MESHSET meshlist_0013A808[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013A7DC, NULL, NULL, NULL, uv_0013A7EC },
	{ NJD_MESHSET_4 | 0, 1, poly_0013A7E2, NULL, NULL, NULL, uv_0013A7F8 }
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

NJS_MODEL attach_0013A8E0 = { vertex_0013A838, normal_0013A88C, LengthOfArray<Sint32>(vertex_0013A838), meshlist_0013A808, matlist_0013A7C8, LengthOfArray<Uint16>(meshlist_0013A808), LengthOfArray<Uint16>(matlist_0013A7C8),{ -0.030959f, 0.278574f, 1.955544f }, 1.851681f };

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

NJS_MESHSET meshlist_0013A994[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013A950, NULL, NULL, NULL, uv_0013A968 },
	{ NJD_MESHSET_4 | 0, 2, poly_0013A956, NULL, NULL, NULL, uv_0013A974 }
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

NJS_MODEL attach_0013AACC = { vertex_0013A9C4, normal_0013AA48, LengthOfArray<Sint32>(vertex_0013A9C4), meshlist_0013A994, matlist_0013A93C, LengthOfArray<Uint16>(meshlist_0013A994), LengthOfArray<Uint16>(matlist_0013A93C),{ 0.0462f, -0.449396f, 3.547737f }, 3.591377f };

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

NJS_MESHSET meshlist_0013AB80[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013AB3C, NULL, NULL, NULL, uv_0013AB54 },
	{ NJD_MESHSET_4 | 0, 2, poly_0013AB42, NULL, NULL, NULL, uv_0013AB60 }
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

NJS_MODEL attach_0013ACB8 = { vertex_0013ABB0, normal_0013AC34, LengthOfArray<Sint32>(vertex_0013ABB0), meshlist_0013AB80, matlist_0013AB28, LengthOfArray<Uint16>(meshlist_0013AB80), LengthOfArray<Uint16>(matlist_0013AB28),{ 0.031387f, -0.801386f, 3.65628f }, 3.755561f };

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

NJS_MESHSET meshlist_0013AD6C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013AD28, NULL, NULL, NULL, uv_0013AD40 },
	{ NJD_MESHSET_4 | 0, 2, poly_0013AD2E, NULL, NULL, NULL, uv_0013AD4C }
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

NJS_MODEL attach_0013AEA4 = { vertex_0013AD9C, normal_0013AE20, LengthOfArray<Sint32>(vertex_0013AD9C), meshlist_0013AD6C, matlist_0013AD14, LengthOfArray<Uint16>(meshlist_0013AD6C), LengthOfArray<Uint16>(matlist_0013AD14),{ 0.221612f, -0.8599769f, 3.290441f }, 3.398105f };

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

NJS_MESHSET meshlist_0013AF40[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013AF14, NULL, NULL, NULL, uv_0013AF24 },
	{ NJD_MESHSET_4 | 0, 1, poly_0013AF1A, NULL, NULL, NULL, uv_0013AF30 }
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

NJS_MODEL attach_0013B018 = { vertex_0013AF70, normal_0013AFC4, LengthOfArray<Sint32>(vertex_0013AF70), meshlist_0013AF40, matlist_0013AF00, LengthOfArray<Uint16>(meshlist_0013AF40), LengthOfArray<Uint16>(matlist_0013AF00),{ 0.043533f, -0.410726f, 2.349741f }, 2.401085f };

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

NJS_MESHSET meshlist_0013B0CC[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013B088, NULL, NULL, NULL, uv_0013B0A0 },
	{ NJD_MESHSET_4 | 0, 2, poly_0013B08E, NULL, NULL, NULL, uv_0013B0AC }
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

NJS_MODEL attach_0013B204 = { vertex_0013B0FC, normal_0013B180, LengthOfArray<Sint32>(vertex_0013B0FC), meshlist_0013B0CC, matlist_0013B074, LengthOfArray<Uint16>(meshlist_0013B0CC), LengthOfArray<Uint16>(matlist_0013B074),{ 0.057574f, -0.313064f, 4.261237f }, 4.24162f };

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

NJS_MESHSET meshlist_0013B2B8[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0013B274, NULL, NULL, NULL, uv_0013B28C },
	{ NJD_MESHSET_4 | 0, 2, poly_0013B27A, NULL, NULL, NULL, uv_0013B298 }
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

NJS_MODEL attach_0013B3F0 = { vertex_0013B2E8, normal_0013B36C, LengthOfArray<Sint32>(vertex_0013B2E8), meshlist_0013B2B8, matlist_0013B260, LengthOfArray<Uint16>(meshlist_0013B2B8), LengthOfArray<Uint16>(matlist_0013B260),{ -0.037447f, -0.007196f, 3.579221f }, 3.542756f };

NJS_OBJECT object_0013B418 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013B3F0, 0.7646f, 0, 0, 0xFFFFEB61, 0x695, 0xFFFFDE6E, 1, 1, 1, NULL, &object_0013B22C };

NJS_OBJECT object_0013B44C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0013B418, NULL };

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

NJS_ACTION action_Grass2_Action = { &object_0013B44C, &Grass2_Action };