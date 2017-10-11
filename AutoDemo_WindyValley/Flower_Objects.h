#pragma once

#include "SADXModLoader.h"

NJS_MATERIAL matlist_0010E01C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010E030[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010E038[] = {
	{ 6, 247 },
	{ 6, 6 },
	{ 247, 247 },
	{ 247, 6 }
};

NJS_MESHSET_SADX meshlist_0010E048[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010E030, NULL, NULL, NULL, uv_0010E038, NULL }
};

NJS_VECTOR vertex_0010E060[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010E090[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010E0C0 = { vertex_0010E060, normal_0010E090, LengthOfArray<Sint32>(vertex_0010E060), meshlist_0010E048, matlist_0010E01C, LengthOfArray<Uint16>(meshlist_0010E048), LengthOfArray<Uint16>(matlist_0010E01C),{ 0 }, 0.6317599f, NULL };

NJS_OBJECT object_0010E0E8 = { NJD_EVAL_BREAK, &attach_0010E0C0, 0.537416f, 0.112179f, -0.531957f, 0xFFFFC925, 0x301, 0xFFFFD238, 1.021024f, 0.457407f, 0.787671f, NULL, NULL };

NJS_MATERIAL matlist_0010E11C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010E130[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010E138[] = {
	{ 6, 247 },
	{ 6, 6 },
	{ 247, 247 },
	{ 247, 6 }
};

NJS_MESHSET_SADX meshlist_0010E148[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010E130, NULL, NULL, NULL, uv_0010E138, NULL }
};

NJS_VECTOR vertex_0010E160[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010E190[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010E1C0 = { vertex_0010E160, normal_0010E190, LengthOfArray<Sint32>(vertex_0010E160), meshlist_0010E148, matlist_0010E11C, LengthOfArray<Uint16>(meshlist_0010E148), LengthOfArray<Uint16>(matlist_0010E11C),{ 0 }, 0.626626f, NULL };

NJS_OBJECT object_0010E1E8 = { NJD_EVAL_BREAK, &attach_0010E1C0, 0.023993f, -0.30819f, -0.581139f, 0xFFFFB770, 0xFFFFF93B, 0xFFFFD11E, 1.021024f, 0.457407f, 0.787671f, NULL, &object_0010E0E8 };

NJS_MATERIAL matlist_0010E21C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010E230[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010E238[] = {
	{ 6, 247 },
	{ 6, 6 },
	{ 247, 247 },
	{ 247, 6 }
};

NJS_MESHSET_SADX meshlist_0010E248[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010E230, NULL, NULL, NULL, uv_0010E238, NULL }
};

NJS_VECTOR vertex_0010E260[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010E290[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010E2C0 = { vertex_0010E260, normal_0010E290, LengthOfArray<Sint32>(vertex_0010E260), meshlist_0010E248, matlist_0010E21C, LengthOfArray<Uint16>(meshlist_0010E248), LengthOfArray<Uint16>(matlist_0010E21C),{ 0 }, 1.386634f, NULL };

NJS_OBJECT object_0010E2E8 = { NJD_EVAL_BREAK, &attach_0010E2C0, -0.652512f, 0.017659f, -0.492539f, 0xFFFFB866, 0x3D1, 0xFFFFD1D7, 1.021024f, 0.457407f, 0.787671f, NULL, &object_0010E1E8 };

NJS_MATERIAL matlist_0010E31C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 62, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010E330[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010E338[] = {
	{ 5, 6 },
	{ 5, 249 },
	{ 249, 4 },
	{ 250, 249 }
};

NJS_MESHSET_SADX meshlist_0010E348[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010E330, NULL, NULL, NULL, uv_0010E338, NULL }
};

NJS_VECTOR vertex_0010E360[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010E390[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010E3C0 = { vertex_0010E360, normal_0010E390, LengthOfArray<Sint32>(vertex_0010E360), meshlist_0010E348, matlist_0010E31C, LengthOfArray<Uint16>(meshlist_0010E348), LengthOfArray<Uint16>(matlist_0010E31C),{ 0 }, 0.8918059f, NULL };

NJS_OBJECT object_0010E3E8 = { 0, &attach_0010E3C0, 0.099689f, 0.918695f, 0.310389f, 0x3FFF, 0xD174, 0, 1.12632f, 2.186239f, 1.46f, &object_0010E2E8, NULL };

NJS_MATERIAL matlist_0010E41C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010E430[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010E438[] = {
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_MESHSET_SADX meshlist_0010E448[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010E430, NULL, NULL, NULL, uv_0010E438, NULL }
};

NJS_VECTOR vertex_0010E460[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010E490[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010E4C0 = { vertex_0010E460, normal_0010E490, LengthOfArray<Sint32>(vertex_0010E460), meshlist_0010E448, matlist_0010E41C, LengthOfArray<Uint16>(meshlist_0010E448), LengthOfArray<Uint16>(matlist_0010E41C),{ 0 }, 1.233885f, NULL };

NJS_OBJECT object_0010E4E8 = { NJD_EVAL_BREAK, &attach_0010E4C0, 1.021277f, 0.321235f, 0.22695f, 0xA37, 0xFFFF3EE1, 0x145F, 1.728f, 1, 1.728f, NULL, &object_0010E3E8 };

NJS_MATERIAL matlist_0010E51C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010E530[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010E538[] = {
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_MESHSET_SADX meshlist_0010E548[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010E530, NULL, NULL, NULL, uv_0010E538, NULL }
};

NJS_VECTOR vertex_0010E560[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010E590[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010E5C0 = { vertex_0010E560, normal_0010E590, LengthOfArray<Sint32>(vertex_0010E560), meshlist_0010E548, matlist_0010E51C, LengthOfArray<Uint16>(meshlist_0010E548), LengthOfArray<Uint16>(matlist_0010E51C),{ 0 }, 1.684924f, NULL };

NJS_OBJECT object_0010E5E8 = { NJD_EVAL_BREAK, &attach_0010E5C0, -0.170212f, 0.254311f, 0.907801f, 0xFFFFF84B, 0xFFFEE818, 0x2DA, 1.728f, 1, 1.728f, NULL, &object_0010E4E8 };

NJS_MATERIAL matlist_0010E61C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010E630[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010E638[] = {
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_MESHSET_SADX meshlist_0010E648[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010E630, NULL, NULL, NULL, uv_0010E638, NULL }
};

NJS_VECTOR vertex_0010E660[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010E690[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010E6C0 = { vertex_0010E660, normal_0010E690, LengthOfArray<Sint32>(vertex_0010E660), meshlist_0010E648, matlist_0010E61C, LengthOfArray<Uint16>(meshlist_0010E648), LengthOfArray<Uint16>(matlist_0010E61C),{ 0 }, 1.701229f, NULL };

NJS_OBJECT object_0010E6E8 = { NJD_EVAL_BREAK, &attach_0010E6C0, -0.283688f, 0.321235f, -0.312057f, 0xA37, 0xFFFF9F71, 0xFFFFF1BE, 1.728f, 1, 1.728f, NULL, &object_0010E5E8 };

NJS_OBJECT Object_Flower0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0010E6E8, NULL };

NJS_MATERIAL matlist_0010E874[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010E888[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010E890[] = {
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_MESHSET_SADX meshlist_0010E8A0[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010E888, NULL, NULL, NULL, uv_0010E890, NULL }
};

NJS_VECTOR vertex_0010E8B8[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010E8E8[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010E918 = { vertex_0010E8B8, normal_0010E8E8, LengthOfArray<Sint32>(vertex_0010E8B8), meshlist_0010E8A0, matlist_0010E874, LengthOfArray<Uint16>(meshlist_0010E8A0), LengthOfArray<Uint16>(matlist_0010E874),{ 0 }, 1.233885f, NULL };

NJS_OBJECT object_0010E940 = { NJD_EVAL_BREAK, &attach_0010E918, 1.021277f, 0.321235f, 0.22695f, 0xA37, 0xFFFF3EE1, 0x145F, 1.728f, 1, 1.728f, NULL, NULL };

NJS_MATERIAL matlist_0010E974[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010E988[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010E990[] = {
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_MESHSET_SADX meshlist_0010E9A0[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010E988, NULL, NULL, NULL, uv_0010E990, NULL }
};

NJS_VECTOR vertex_0010E9B8[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010E9E8[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010EA18 = { vertex_0010E9B8, normal_0010E9E8, LengthOfArray<Sint32>(vertex_0010E9B8), meshlist_0010E9A0, matlist_0010E974, LengthOfArray<Uint16>(meshlist_0010E9A0), LengthOfArray<Uint16>(matlist_0010E974),{ 0 }, 1.684924f, NULL };

NJS_OBJECT object_0010EA40 = { NJD_EVAL_BREAK, &attach_0010EA18, -0.170212f, 0.254311f, 0.907801f, 0xFFFFF84B, 0xFFFEE818, 0x2DA, 1.728f, 1, 1.728f, NULL, &object_0010E940 };

NJS_MATERIAL matlist_0010EA74[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010EA88[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010EA90[] = {
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_MESHSET_SADX meshlist_0010EAA0[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010EA88, NULL, NULL, NULL, uv_0010EA90, NULL }
};

NJS_VECTOR vertex_0010EAB8[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010EAE8[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010EB18 = { vertex_0010EAB8, normal_0010EAE8, LengthOfArray<Sint32>(vertex_0010EAB8), meshlist_0010EAA0, matlist_0010EA74, LengthOfArray<Uint16>(meshlist_0010EAA0), LengthOfArray<Uint16>(matlist_0010EA74),{ 0 }, 1.701229f, NULL };

NJS_OBJECT object_0010EB40 = { NJD_EVAL_BREAK, &attach_0010EB18, -0.283688f, 0.321235f, -0.312057f, 0xA37, 0xFFFF9F71, 0xFFFFF1BE, 1.728f, 1, 1.728f, NULL, &object_0010EA40 };

NJS_MATERIAL matlist_0010EB74[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010EB88[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010EB90[] = {
	{ 6, 247 },
	{ 6, 6 },
	{ 247, 247 },
	{ 247, 6 }
};

NJS_MESHSET_SADX meshlist_0010EBA0[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010EB88, NULL, NULL, NULL, uv_0010EB90, NULL }
};

NJS_VECTOR vertex_0010EBB8[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010EBE8[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010EC18 = { vertex_0010EBB8, normal_0010EBE8, LengthOfArray<Sint32>(vertex_0010EBB8), meshlist_0010EBA0, matlist_0010EB74, LengthOfArray<Uint16>(meshlist_0010EBA0), LengthOfArray<Uint16>(matlist_0010EB74),{ 0 }, 0.824995f, NULL };

NJS_OBJECT object_0010EC40 = { NJD_EVAL_BREAK, &attach_0010EC18, -0.312057f, 0.6497509f, -0.624113f, 0xFFFFF509, 0xFFFFFF5E, 0x8E7, 1.15f, 1, 1.15f, NULL, &object_0010EB40 };

NJS_MATERIAL matlist_0010EC74[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010EC88[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010EC90[] = {
	{ 6, 247 },
	{ 6, 6 },
	{ 247, 247 },
	{ 247, 6 }
};

NJS_MESHSET_SADX meshlist_0010ECA0[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010EC88, NULL, NULL, NULL, uv_0010EC90, NULL }
};

NJS_VECTOR vertex_0010ECB8[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010ECE8[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010ED18 = { vertex_0010ECB8, normal_0010ECE8, LengthOfArray<Sint32>(vertex_0010ECB8), meshlist_0010ECA0, matlist_0010EC74, LengthOfArray<Uint16>(meshlist_0010ECA0), LengthOfArray<Uint16>(matlist_0010EC74),{ 0 }, 0.812243f, NULL };

NJS_OBJECT object_0010ED40 = { NJD_EVAL_BREAK, &attach_0010ED18, 0.652482f, 1.104833f, -0.22695f, 0xFFFFF72F, 0, 0xFFFFFA14, 1.15f, 1, 1.15f, NULL, &object_0010EC40 };

NJS_MATERIAL matlist_0010ED74[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0010ED88[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0010ED90[] = {
	{ 6, 247 },
	{ 6, 6 },
	{ 247, 247 },
	{ 247, 6 }
};

NJS_MESHSET_SADX meshlist_0010EDA0[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0010ED88, NULL, NULL, NULL, uv_0010ED90, NULL }
};

NJS_VECTOR vertex_0010EDB8[] = {
	{ -0.5f, 0, -0.5f },
	{ -0.5f, 0, 0.5f },
	{ 0.5f, 0, -0.5f },
	{ 0.5f, 0, 0.5f }
};

NJS_VECTOR normal_0010EDE8[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0010EE18 = { vertex_0010EDB8, normal_0010EDE8, LengthOfArray<Sint32>(vertex_0010EDB8), meshlist_0010EDA0, matlist_0010ED74, LengthOfArray<Uint16>(meshlist_0010EDA0), LengthOfArray<Uint16>(matlist_0010ED74),{ 0 }, 0.809331f, NULL };

NJS_OBJECT object_0010EE40 = { NJD_EVAL_BREAK, &attach_0010EE18, 0.056738f, 0.917446f, 0.680851f, 0x924, 0xFFFFFFAA, 0x378, 1.15f, 1, 1.15f, NULL, &object_0010ED40 };

NJS_OBJECT Object_Flower1 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0010EE40, NULL };

NJS_MKEY_A Action_Flower0_5_rot[] = {
	{ 0, 0xFFFFB914, 0x413, 0xFFFFD175 },
	{ 3, 0xFFFFB28F, 0x1A1, 0xFFFFD520 },
	{ 7, 0xFFFFB866, 0x3D1, 0xFFFFD1D7 }
};

NJS_MKEY_A Action_Flower0_6_rot[] = {
	{ 0, 0xFFFFB6A2, 0xFFFFF97C, 0xFFFFD175 },
	{ 3, 0xFFFFBE60, 0xFFFFF70A, 0xFFFFCE33 },
	{ 7, 0xFFFFB770, 0xFFFFF93B, 0xFFFFD11E }
};

NJS_MKEY_A Action_Flower0_7_rot[] = {
	{ 0, 0xFFFFC9C8, 0x342, 0xFFFFD175 },
	{ 3, 0xFFFFC3AB, 0xD0, 0xFFFFD8CB },
	{ 7, 0xFFFFC925, 0x301, 0xFFFFD238 }
};

NJS_MDATA2 Action_Flower0_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, Action_Flower0_5_rot, 0, LengthOfArray<Uint32>(Action_Flower0_5_rot) },
	{ NULL, Action_Flower0_6_rot, 0, LengthOfArray<Uint32>(Action_Flower0_6_rot) },
	{ NULL, Action_Flower0_7_rot, 0, LengthOfArray<Uint32>(Action_Flower0_7_rot) }
};

NJS_MOTION Action_Flower0 = { Action_Flower0_mdat, 8, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

NJS_ACTION action_Action_Flower0 = { &Object_Flower0, &Action_Flower0 };

NJS_MKEY_A Action_Flower1_1_rot[] = {
	{ 0, 0x9C7, 0, 0x342 },
	{ 3, 0x3AA, 0xFFFFFCBE, 0x54B },
	{ 7, 0x924, 0xFFFFFFAA, 0x378 }
};

NJS_MKEY_A Action_Flower1_2_rot[] = {
	{ 0, 0xFFFFF6A2, 0, 0xFFFFF97C },
	{ 3, 0xFFFFFBED, 0, 0xFFFFFF30 },
	{ 7, 0xFFFFF72F, 0, 0xFFFFFA14 }
};

NJS_MKEY_A Action_Flower1_3_rot[] = {
	{ 0, 0xFFFFF430, 0, 0x95E },
	{ 3, 0xFFFFFC56, 0xFFFFF9E4, 0x4E3 },
	{ 7, 0xFFFFF509, 0xFFFFFF5E, 0x8E7 }
};

NJS_MDATA2 Action_Flower1_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, Action_Flower1_1_rot, 0, LengthOfArray<Uint32>(Action_Flower1_1_rot) },
	{ NULL, Action_Flower1_2_rot, 0, LengthOfArray<Uint32>(Action_Flower1_2_rot) },
	{ NULL, Action_Flower1_3_rot, 0, LengthOfArray<Uint32>(Action_Flower1_3_rot) },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 }
};

NJS_MOTION Action_Flower1 = { Action_Flower1_mdat, 8, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

NJS_ACTION action_Action_Flower1 = { &Object_Flower1, &Action_Flower1 };

NJS_MATERIAL matlist_001241AC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 50, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 49, NJD_D_100 | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001241D4[] = {
	11, 10, 13,
	12, 11, 13,
	10, 9, 13,
	9, 12, 13
};

Sint16 poly_001241EC[] = {
	4, 7, 5, 8,
	0, 3, 1, 4,
	1, 4, 2, 5,
	3, 6, 4, 7
};

Sint16 poly_0012420C[] = {
	10, 11, 14,
	11, 12, 14,
	9, 10, 14,
	12, 9, 14
};

NJS_TEX uv_00124224[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 }
};

NJS_TEX uv_00124254[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_00124294[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_001241D4, NULL, NULL, NULL, uv_00124224, NULL },
	{ NJD_MESHSET_4 | 0, 4, poly_001241EC, NULL, NULL, NULL, uv_00124254, NULL },
	{ NJD_MESHSET_3 | 1, 4, poly_0012420C, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_001242DC[] = {
	{ 0.132642f, -0.00001f, 0.009621f },
	{ 0.108645f, 1.148431f, 0.065097f },
	{ 0.084648f, 2.469636f, 0.244532f },
	{ 0, -0.00001f, -0.123021f },
	{ 0, 1.153861f, -0.043412f },
	{ 0, 2.477244f, 0.160227f },
	{ -0.132642f, -0.00001f, 0.009621f },
	{ -0.108645f, 1.148431f, 0.065097f },
	{ -0.084648f, 2.469636f, 0.244532f },
	{ -0.2835f, 2.458383f, 0.257951f },
	{ 0, 2.432903f, 0.5403039f },
	{ 0.2835f, 2.458383f, 0.257951f },
	{ 0, 2.483865f, -0.024401f },
	{ 0, 1.91061f, 0.208518f },
	{ 0, 2.707372f, 0.280421f }
};

NJS_VECTOR normal_00124390[] = {
	{ 0.706615f, 0.048784f, -0.705915f },
	{ 0.706493f, 0.078342f, -0.703371f },
	{ 0.705748f, 0.107831f, -0.7002079f },
	{ 0, 0.06894299f, -0.997621f },
	{ 0, 0.110696f, -0.993854f },
	{ 0, 0.152204f, -0.988349f },
	{ -0.706615f, 0.048784f, -0.705915f },
	{ -0.706493f, 0.078342f, -0.703371f },
	{ -0.705748f, 0.107831f, -0.7002079f },
	{ -0.9739479f, 0.225855f, 0.020382f },
	{ 0, 0.138318f, 0.990388f },
	{ 0.9739479f, 0.225855f, 0.020382f },
	{ 0, 0.313392f, -0.9496239f },
	{ 0, -0.995953f, -0.089879f },
	{ 0, 0.995953f, 0.089879f }
};

NJS_MODEL_SADX Model_Tanpopostem = { vertex_001242DC, normal_00124390, LengthOfArray<Sint32>(vertex_001242DC), meshlist_00124294, matlist_001241AC, LengthOfArray<Uint16>(meshlist_00124294), LengthOfArray<Uint16>(matlist_001241AC),{ 0, 1.353685f, 0.208642f }, 1.393724f, NULL };

NJS_OBJECT Object_Tanpopostem = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &Model_Tanpopostem, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001244A0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 49, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001244B4[] = {
	1, 0, 25,
	3, 2, 26,
	5, 4, 27,
	7, 6, 28,
	9, 8, 29,
	11, 10, 24,
	13, 12, 30,
	15, 14, 31
};

Sint16 poly_001244E4[] = {
	0, 1, 17, 16,
	2, 3, 19, 18,
	4, 5, 16, 17,
	6, 7, 18, 19,
	8, 9, 21, 20,
	10, 11, 23, 22,
	12, 13, 20, 21,
	14, 15, 22, 23
};

NJS_TEX uv_00124524[] = {
	{ 254, 125 },
	{ 0, 125 },
	{ 127, 0 },
	{ 254, 125 },
	{ 0, 125 },
	{ 127, 0 },
	{ 254, 125 },
	{ 0, 125 },
	{ 127, 0 },
	{ 254, 125 },
	{ 0, 125 },
	{ 127, 0 },
	{ 254, 125 },
	{ 0, 125 },
	{ 127, 0 },
	{ 254, 125 },
	{ 0, 125 },
	{ 127, 0 },
	{ 254, 125 },
	{ 0, 125 },
	{ 127, 0 },
	{ 254, 125 },
	{ 0, 125 },
	{ 127, 0 }
};

NJS_TEX uv_00124584[] = {
	{ 0, 125 },
	{ 254, 125 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 125 },
	{ 254, 125 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 125 },
	{ 254, 125 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 125 },
	{ 254, 125 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 125 },
	{ 254, 125 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 125 },
	{ 254, 125 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 125 },
	{ 254, 125 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 125 },
	{ 254, 125 },
	{ 0, 255 },
	{ 254, 255 }
};

NJS_MESHSET_SADX meshlist_00124604[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001244B4, NULL, NULL, NULL, uv_00124524, NULL },
	{ NJD_MESHSET_4 | 0, 8, poly_001244E4, NULL, NULL, NULL, uv_00124584, NULL }
};

NJS_VECTOR vertex_00124634[] = {
	{ 1.02213f, 0.617332f, -0.485376f },
	{ 0.5130129f, 0.617332f, -0.9944929f },
	{ 0.513014f, 0.617332f, 0.9944929f },
	{ 1.02213f, 0.617332f, 0.485376f },
	{ -0.9668559f, 0.7173319f, 0.485376f },
	{ -0.457739f, 0.7173319f, 0.9944929f },
	{ -0.457739f, 0.517332f, -0.9944929f },
	{ -0.9668559f, 0.517332f, -0.485376f },
	{ 1.335669f, 0.617332f, 0.45f },
	{ 1.335669f, 0.617332f, -0.45f },
	{ -0.422362f, 0.517332f, 1.308032f },
	{ 0.477638f, 0.517332f, 1.308032f },
	{ -1.280394f, 0.417332f, -0.45f },
	{ -1.280394f, 0.417332f, 0.45f },
	{ 0.477637f, 0.417332f, -1.308032f },
	{ -0.422363f, 0.417332f, -1.308032f },
	{ -0.226921f, 0.246226f, -0.254558f },
	{ 0.282196f, 0.246226f, 0.254558f },
	{ 0.282196f, 0.246226f, -0.254558f },
	{ -0.226921f, 0.246226f, 0.254558f },
	{ 0.027637f, 0.000032f, -0.45f },
	{ 0.027637f, 0.000032f, 0.45f },
	{ 0.477637f, 0.000032f, 0 },
	{ -0.422363f, 0.000032f, 0 },
	{ 0.027638f, 0.353773f, 2.571079f },
	{ 1.532971f, 0.653773f, -1.505333f },
	{ 1.532971f, 0.453773f, 1.505333f },
	{ -1.477696f, 0.553773f, 1.505334f },
	{ -1.477696f, 0.453773f, -1.505333f },
	{ 2.598716f, 0.353773f, 0 },
	{ -2.543441f, 0.153773f, 0 },
	{ 0.027637f, 0.253774f, -2.571079f }
};

NJS_VECTOR normal_001247B4[] = {
	{ -0.131618f, 0.982524f, 0.131618f },
	{ -0.131618f, 0.982524f, 0.131618f },
	{ -0.06736799f, 0.995451f, -0.06736799f },
	{ -0.06736799f, 0.995451f, -0.06736799f },
	{ 0.09624f, 0.990695f, -0.09624f },
	{ 0.09624f, 0.990695f, -0.09624f },
	{ 0.06878199f, 0.995258f, 0.06878199f },
	{ 0.06878199f, 0.995258f, 0.06878199f },
	{ -0.117341f, 0.9930919f, 0 },
	{ -0.117341f, 0.9930919f, 0 },
	{ 0, 0.992333f, -0.123595f },
	{ 0, 0.992333f, -0.123595f },
	{ 0.051529f, 0.998671f, 0 },
	{ 0.051529f, 0.998671f, 0 },
	{ 0, 0.995951f, 0.08989999f },
	{ 0, 0.995951f, 0.08989999f },
	{ 0.029061f, 0.999155f, -0.029061f },
	{ 0.029061f, 0.999155f, -0.029061f },
	{ -0.030855f, 0.999048f, -0.030855f },
	{ -0.030855f, 0.999048f, -0.030855f },
	{ -0.066011f, 0.9978189f, 0 },
	{ -0.066011f, 0.9978189f, 0 },
	{ 0, 0.9994259f, -0.033884f },
	{ 0, 0.9994259f, -0.033884f },
	{ 0, 0.9917189f, 0.128423f },
	{ -0.023792f, 0.999434f, 0.023792f },
	{ 0.105646f, 0.988776f, 0.105646f },
	{ -0.105646f, 0.988776f, 0.105646f },
	{ -0.041449f, 0.9982809f, -0.041449f },
	{ 0.204269f, 0.978915f, 0 },
	{ -0.204269f, 0.978915f, 0 },
	{ 0, 0.9917189f, -0.128423f }
};

NJS_MODEL_SADX Model_Tanpopo = { vertex_00124634, normal_001247B4, LengthOfArray<Sint32>(vertex_00124634), meshlist_00124604, matlist_001244A0, LengthOfArray<Uint16>(meshlist_00124604), LengthOfArray<Uint16>(matlist_001244A0),{ 0.027637f, 0.358682f, 0 }, 3.636055f, NULL };

NJS_OBJECT Object_Tanpopo = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &Model_Tanpopo, 0, 0, 0, 0, 0, 0, 1, 1, 1, &Object_Tanpopostem, NULL };

NJS_MATERIAL matlist_00139818[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 51, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013982C[] = {
	0, 1, 2, 3
};

NJS_TEX uv_00139834[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_00139844[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0013982C, NULL, NULL, NULL, uv_00139834, NULL }
};

NJS_VECTOR vertex_0013985C[] = {
	{ -0.3f, 0.600004f, 0 },
	{ -0.3f, 0.000004f, 0 },
	{ 0.3f, 0.600004f, 0 },
	{ 0.3f, 0.000004f, 0 }
};

NJS_VECTOR normal_0013988C[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_001398BC = { vertex_0013985C, normal_0013988C, LengthOfArray<Sint32>(vertex_0013985C), meshlist_00139844, matlist_00139818, LengthOfArray<Uint16>(meshlist_00139844), LengthOfArray<Uint16>(matlist_00139818),{ 0, 0.300004f, 0 }, 0.3f, NULL };

NJS_OBJECT Particle_Tanpopo = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001398BC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
