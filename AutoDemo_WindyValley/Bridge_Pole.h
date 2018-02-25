#include <SADXModLoader.h>

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
	20, 13, 24, 12,
	21, 15, 25, 14,
	22, 17, 26, 16,
	23, 19, 27, 18
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
	{ 0, 0, 1.5f }, //0		NOT USED ANYMORE
	{ 1, 0, 1 }, //1		
	{ 1, 0, -1 }, //2   lower part of pentagon
	{ -1, 0, -1 }, //3
	{ -1, 0, 1 }, //4
	//The order for these goes like this: top middle, upper right, lower right, lower left, upper left
	{ 0, 2, 1.5f }, //5		NOT USED ANYMORE
	{ 1, 2, 1 }, //6
	{ 1, 2, -1 }, //7  upper part of pentagon
	{ -1, 2, -1 }, //8
	{ -1, 2, 1 }, //9

	//Fan blades. Follows the same pattern as above. First two are for the top middle, and then top right, and so on
	{ 0, 2, 5.5f }, //10	NOT USED ANYMORE
	{ 0, 0, 5 }, //11		NOT USED ANYMORE

	{ 5, 2, 5 }, //12
	{ 5, 0, 4 }, //13

	{ 5, 2, -5 }, //14
	{ 5, 0, -4 }, //15

	{ -5, 2, -5 }, //16
	{ -5, 0, -4 }, //17

	{ -5, 2, 5 }, //18
	{ -5, 0, 4 }, //19

	//ends of fan blades
	{ 0.7f, 0, 0.7f }, //20		Same order as above, minus the top middle. So it starts at top right, then bottom right, and so on
	{ 0.7f, 0, -0.7f }, //21   
	{ -0.7f, 0, -0.7f }, //22
	{ -0.7f, 0, 0.7f }, //23

	{ 0.3f, 2, 0.3f }, //24
	{ 0.3f, 2, -0.3f }, //25  
	{ -0.3f, 2, -0.3f }, //26
	{ -0.3f, 2, 0.3f } //27
};

NJS_VECTOR normal_BrPoleFan[] = {
	{ 0.242577f, 0.463805f, -0.273769f }, //NOT USED ANYMORE
	{ 0.770454f, -0.30506f, -0.559768f },
	{ -0.29333f, -0.314567f, -0.902777f },
	{ -0.952334f, -0.305058f, 0 },
	{ 0.77751f, -0.276355f, 0.564895f },

	{ 0.242577f, 0.463805f, -0.273769f }, //NOT USED ANYMORE
	{ 0.770454f, -0.30506f, -0.559768f },
	{ -0.29333f, -0.314567f, -0.902777f },
	{ -0.952334f, -0.305058f, 0 },
	{ 0.77751f, -0.276355f, 0.564895f },


	{ 0.493267f, -0.163555f, 0.854364f }, //NOT USED ANYMORE
	{ 0.493267f, -0.163555f, 0.854364f }, //NOT USED ANYMORE

	{ 0.770454f, -0.30506f, -0.559768f },
	{ 0.770454f, -0.30506f, -0.559768f },

	{ -0.29333f, -0.314567f, -0.902777f },
	{ -0.29333f, -0.314567f, -0.902777f },

	{ -0.952334f, -0.305058f, 0 },
	{ -0.952334f, -0.305058f, 0 },

	{ 0.77751f, -0.276355f, 0.564895f },
	{ 0.77751f, -0.276355f, 0.564895f },


	{ 0.770454f, -0.30506f, -0.559768f },
	{ -0.29333f, -0.314567f, -0.902777f },
	{ -0.952334f, -0.305058f, 0 },
	{ 0.77751f, -0.276355f, 0.564895f },

	{ 0.770454f, -0.30506f, -0.559768f },
	{ -0.29333f, -0.314567f, -0.902777f },
	{ -0.952334f, -0.305058f, 0 },
	{ 0.77751f, -0.276355f, 0.564895f }

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
	{ 0, 254 },
	{ 254, 254 },
	{ 254, 1 },

	{ 0, 254 },
	{ 254, 254 },
	{ 254, 1 },

	{ 0, 254 },
	{ 254, 254 },
	{ 254, 1 },

	{ 0, 254 },
	{ 254, 254 },
	{ 254, 1 },

	{ 0, 254 },
	{ 254, 254 },
	{ 254, 1 },

	{ 0, 254 },
	{ 254, 254 },
	{ 254, 1 }
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
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },

	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },

	{ 0, 0.583945f, 0.811793f },
	{ 0, 0.583945f, -0.811793f },
	{ 0, -0.595736f, -0.80318f },
	{ 0, 0.318016f, -0.948085f },


	{ 0, 0.318016f, -0.948085f },
	{ 0, 0.290197f, 0.956967f },
	{ 0, 0.290197f, 0.956967f },
	{ 0, -0.595736f, 0.80318f },
	{ 0.503154f, -0.764012f, 0.403884f },
	{ 0.50163f, -0.758897f, -0.415263f },

	{ 0.515502f, 0.749842f, -0.414722f },
	{ 0.618377f, 0.376745f, 0.68969f },
	{ 0.610656f, 0.383063f, 0.693081f },
	{ 0.612783f, -0.391161f, 0.686651f },
	{ 0.517095f, -0.754882f, 0.403442f },
	{ 0.62064f, -0.384571f, -0.683309f },

	{ 0.686534f, 0.163555f, -0.948085f },
	{ 0.193267f, 0.163555f, 0.854364f },
	{ 0.193267f, 0.163555f, 0.854364f },
	{ 0.193267f, -0.163555f, 0.854364f },
	{ 0.193267f, -0.163555f, 0.854364f },
	{ 0.686534f, -0.163555f, -0.415263f },

	{ -0.986534f, 0.163555f, 0 }
};

NJS_MODEL_SADX attach_BrPole = { vertex_BrPole, normal_BrPole, LengthOfArray<Sint32>(vertex_BrPole), meshlist_BrPole, matlist_BrPole, LengthOfArray<Uint16>(meshlist_BrPole), LengthOfArray<Uint16>(matlist_BrPole),{ 3.963485f, 16.95673f, -0.014102f }, 17.3283f, NULL };

NJS_OBJECT Object_BrPole = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_BrPole, 0, 0, 0, 0, 0, 0, 1, 1, 1, &Object_BrPoleFan, NULL };