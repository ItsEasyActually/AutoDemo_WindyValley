#pragma once

#include "SADXModLoader.h"

CollisionData BrPole_Collision[] = {
	{ 0, 6, 0x77, 0, 0, 0.0, 27.0, 0.0, 1.5, 20.0, 0.0, 0, 0, 0, 0 }
};


NJS_MATERIAL matlist_BrPoleFan[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 73, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_BrPoleFan1[] = {
	1, 6, 2, 7,
	2, 7, 3, 8,
	3, 8, 4, 9,
	4, 9, 1, 6
};

Sint16 poly_BrPoleFan2[] = {
	1, 13, 6, 12,
	2, 15, 7, 14,
	3, 17, 8, 16,
	4, 19, 9, 18
};

NJS_TEX uv_BrPoleFan1[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_TEX uv_BrPoleFan2[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_BrPoleFan[] = {
	{ NJD_MESHSET_4 | 0, 4, poly_BrPoleFan1, NULL, NULL, NULL, uv_BrPoleFan1, NULL },
	{ NJD_MESHSET_4 | 1, 4, poly_BrPoleFan2, NULL, NULL, NULL, uv_BrPoleFan2, NULL }
};

NJS_VECTOR vertex_BrPoleFan[] = {
	{ 0, 0, 1.5f }, //0
	{ 1, 0, 1 }, //1
	{ 1, 0, -1 }, //2   lower part of pentagon
	{ -1, 0, -1 }, //3
	{ -1, 0, 1 }, //4
	//The order for these goes like this: top middle, upper right, lower right, lower left, upper left
	{ 0, 2, 1.5f }, //5
	{ 1, 2, 1 }, //6
	{ 1, 2, -1 }, //7  upper part of pentagon
	{ -1, 2, -1 }, //8
	{ -1, 2, 1 }, //9

	//fan blades. Follows the same pattern as above. First two are for the top middle, and then top right, and so on
	{ 0, 2, 5.5f }, //10
	{ 0, 0, 5 }, //11

	{ 5, 2, 5 }, //12
	{ 5, 0, 4 }, //13

	{ 5, 2, -5 }, //14
	{ 5, 0, -4 }, //15

	{ -5, 2, -5 }, //16
	{ -5, 0, -4 }, //17

	{ -5, 2, 5 }, //18
	{ -5, 0, 4 } //19
};

NJS_VECTOR normal_BrPoleFan[] = {
	{ 0, -0.150147f, -0.988664f },
	{ 0, 0.463805f, -0.885937f },
	{ -0.940275f, -0.150147f, -0.305513f },
	{ -0.581122f, -0.150148f, 0.799846f },
	{ -0.842576f, 0.463805f, -0.273769f },
	{ 0.520741f, 0.463805f, 0.716738f },
	{ 0.940275f, -0.150147f, -0.305513f },
	{ 0.581122f, -0.150148f, 0.799846f },
	{ -0.520741f, 0.463805f, 0.716738f },
	{ 0, 1, 0 },
	{ 0.842577f, 0.463805f, -0.273769f },
	{ -0.297822f, -0.266732f, 0.9166009f },
	{ -0.952334f, -0.305058f, 0 },
	{ -0.952334f, -0.305058f, 0 },
	{ -0.952334f, -0.305059f, 0 },
	{ -0.952334f, -0.305058f, 0 },
	{ -0.297822f, -0.266732f, 0.9166f },
	{ -0.29333f, -0.314567f, -0.9027759f },
	{ -0.29333f, -0.314567f, -0.902777f },
	{ -0.29333f, -0.314567f, -0.902777f }
};

NJS_MODEL_SADX Model_BrPoleFan = { vertex_BrPoleFan, normal_BrPoleFan, LengthOfArray<Sint32>(vertex_BrPoleFan), meshlist_BrPoleFan, matlist_BrPoleFan, LengthOfArray<Uint16>(meshlist_BrPoleFan), LengthOfArray<Uint16>(matlist_BrPoleFan),{ 3.963485f, 16.95673f, -0.014102f }, 17.3283f, NULL };

NJS_OBJECT Object_BrPoleFan = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &Model_BrPoleFan, 0, 40, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };


NJS_MATERIAL matlist_BrPole[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 113, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 110, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 61, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 66, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_BrPole1[] = {
    0, 4, 1, 5,
    1, 5, 2, 6, //base pole (grass transition)
    2, 6, 3, 7,
    3, 7, 0, 4
};

Sint16 poly_BrPole2[] = {
	4, 8, 5, 9,
    5, 9, 6, 10, //base pole (main stone)
    6, 10, 7, 11,
    7, 11, 4, 8,
	8, 9, 11, 10
};

Sint16 poly_BrPole3[] = {
	3, 12, 13, 14,
    4, 12, 14, 17, 15,
    3, 15, 16, 17,
    //hexagons
    3, 18, 19, 20,
    4, 18, 20, 23, 21,
    3, 21, 22, 23,

	//connecting lower hexagon parts with base pole's top
	4, 14, 9, 15, 10,
	4, 12, 8, 17, 11
};

Sint16 poly_BrPole4[] = {
	3, 24, 25, 26,
    4, 24, 26, 29, 27,
    3, 27, 28, 29,
    //smaller hexagon
    
    //connecting smaller hexagon with larger one
    4, 24, 18, 25, 19,
    4, 25, 19, 26, 20,
	4, 26, 20, 27, 21,
    4, 27, 21, 28, 22,
    4, 28, 22, 29, 23,
    4, 29, 23, 24, 18
};

Sint16 poly_BrPole5[] = {
	24, 25, 30,
    25, 26, 30,
    26, 27, 30,
    27, 28, 30,
    28, 29, 30,
    29, 24, 30
};

NJS_TEX uv_BrPole1[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_TEX uv_BrPole2[] = {
	{ 0, 1275 },
	{ 0 },
	{ 255, 1275 },
	{ 255, 0 },
	{ 0, 1275 },
	{ 0 },
	{ 255, 1275 },
	{ 255, 0 },
	{ 0, 1275 },
	{ 0 },
	{ 255, 1275 },
	{ 255, 0 },
	{ 0, 1275 },
	{ 0 },
	{ 255, 1275 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_TEX uv_BrPole3[] = {
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

NJS_TEX uv_BrPole4[] = {
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },

	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },

	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },

	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },

	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },

	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },

	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },

	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },

	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 }
};

NJS_TEX uv_BrPole5[] = {
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },

	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },

	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },

	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },

	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },

	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 }
};

NJS_MESHSET_SADX meshlist_BrPole[] = {
	{ NJD_MESHSET_4 | 0, 4, poly_BrPole1, NULL, NULL, NULL, uv_BrPole1, NULL }, //correct amount of polygons
	{ NJD_MESHSET_4 | 1, 5, poly_BrPole2, NULL, NULL, NULL, uv_BrPole2, NULL }, //correct amount of polygons
	{ NJD_MESHSET_TRIMESH | 2, 8, poly_BrPole3, NULL, NULL, NULL, uv_BrPole3, NULL }, //correct amount of polygons
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_BrPole4, NULL, NULL, NULL, uv_BrPole4, NULL }, //correct amount of polygons
	{ NJD_MESHSET_3 | 3, 6, poly_BrPole5, NULL, NULL, NULL, uv_BrPole5, NULL } //correct amount of polygons
};

NJS_VECTOR vertex_BrPole[] = {
	{-1, 0, -1}, //0
    {-1, 0, 1}, //1
    {1, 0, 1}, //2
    {1, 0, -1}, //3
    {-1, 7, -1}, //4
    {-1, 7, 1}, //5
    {1, 7, 1},//6      Base Pole section
    {1, 7, -1}, //7
    {-1, 38.5f, -1}, //8
    {-1, 38.5f, 1}, //9
    {1, 38.5f, 1}, //10
    {1, 38.5f, -1}, //11
    
    {-2, 40, -2}, //12
    {-2.5f, 40, 0}, //13
    {-2, 40, 2}, //14
    {2, 40, 2}, //15    Lower Piece of hexagon
    {2.5f, 40, 0}, //16
    {2, 40, -2}, //17
    
    {-2, 42, -2}, //18
    {-2.5f, 42, 0}, //19
    {-2, 42, 2}, //20
    {2, 42, 2}, //21   Upper Piece of hexagon
    {2.5f, 42, 0}, //22
    {2, 42, -2}, //23
    
    {-0.5f, 43, -0.5f}, //24
    {-1, 43, 0}, //25
    {-0.5f, 43, 0.5f}, //26
    {0.5f, 43, 0.5f}, //27   Top Piece of hexagon (Smaller)
    {1, 43, 0}, //28
    {0.5f, 43, -0.5f}, //29
    
    {0, 46.2f, 0} //30   Very Top Point
};

NJS_VECTOR normal_BrPole[] = {
	{ 0.509855f, -0.095923f, 0.8548959f },
	{ 0.5711679f, 0.443265f, 0.690857f },
	{ 0.985003f, -0.172379f, -0.007439f },
	{ 0.980769f, 0.19517f, -0.0006659999f },
	{ 0.490487f, -0.071774f, -0.868488f },
	{ 0.5372919f, 0.422883f, -0.729717f },
	{ 0.565733f, 0.8243f, 0.021812f },
	{ -0.504843f, 0.100181f, -0.8573779f },
	{ -0.5046999f, 0.10429f, -0.856972f },
	{ -0.09134199f, 0.868566f, -0.487083f },
	{ 0.327107f, 0.943806f, 0.047236f },
	{ -0.984417f, 0.174984f, 0.017421f },
	{ -0.728858f, 0.682894f, 0.049212f },
	{ -0.4756f, 0.08135799f, 0.875891f },
	{ -0.361036f, 0.350459f, 0.864194f },
	{ -0.5051309f, 0.100167f, -0.85721f },
	{ -0.984192f, 0.176459f, 0.015088f },
	{ 0.478885f, -0.071055f, -0.874997f },
	{ -0.47366f, 0.081715f, 0.876909f },
	{ 0.984912f, -0.172613f, -0.012356f },
	{ 0.506975f, -0.095244f, 0.8566819f },
	{ 0.110062f, 0.911983f, 0.395188f },
	{ -0.157119f, -0.366294f, -0.917138f },
	{ -0.510318f, 0.182303f, -0.840441f },
	{ -0.153872f, 0.79119f, -0.591896f },
	{ -0.977152f, 0.056178f, -0.204981f },
	{ -0.603117f, 0.079225f, 0.793709f },
	{ -0.709593f, 0.493914f, 0.50252f },
	{ -0.6727059f, 0.6473359f, -0.358361f },
	{ 0.331276f, 0.41246f, 0.848606f },
	{ 0.336094f, 0.401476f, 0.851973f }
};

NJS_MODEL_SADX attach_BrPole = { vertex_BrPole, normal_BrPole, LengthOfArray<Sint32>(vertex_BrPole), meshlist_BrPole, matlist_BrPole, LengthOfArray<Uint16>(meshlist_BrPole), LengthOfArray<Uint16>(matlist_BrPole),{ 3.963485f, 16.95673f, -0.014102f }, 17.3283f, NULL };

NJS_OBJECT Object_BrPole = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_BrPole, 0, 0, 0, 0, 0, 0, 1, 1, 1, &Object_BrPoleFan, NULL };