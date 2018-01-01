#pragma once

#include "SADXModLoader.h"

NJS_MATERIAL matlist_0012906C[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 15, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00129080[] = {
	1, 3, 2,
	2, 0, 1
};

NJS_TEX uv_0012908C[] = {
	{ 127, 0 },
	{ 255, 127 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0, 127 },
	{ 127, 0 }
};

NJS_MESHSET_SADX meshlist_001290A4[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_00129080, NULL, NULL, NULL, uv_0012908C, NULL }
};

NJS_VECTOR vertex_001290BC[] = {
	{ -2.067273f, 0, 0 },
	{ 0, -0.48f, 3.535534f },
	{ 0, -0.48f, -3.535534f },
	{ 2.067273f, 0, 0 }
};

NJS_VECTOR normal_001290EC[] = {
	{ 0.226173f, 0.974087f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.226173f, 0.974087f, 0 }
};

NJS_MODEL_SADX attach_0012911C = { vertex_001290BC, normal_001290EC, LengthOfArray<Sint32>(vertex_001290BC), meshlist_001290A4, matlist_0012906C, LengthOfArray<Uint16>(meshlist_001290A4), LengthOfArray<Uint16>(matlist_0012906C), { 0, -0.24f, 0 }, 1.723823f, NULL };

NJS_OBJECT Object_Leaf = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_0012911C, 0, 0, 0, 0, 0, 0, 0.4209f, 1, 0.4209f, NULL, NULL };
