#include "SADXModLoader.h"


NJS_MATERIAL matlist_8D56116200778712F82[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 124, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 123, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_WGearTriangles[] = {
	41, 44, 45, //Front Face
	41, 45, 46,
	41, 46, 47,
	41, 47, 48,
	41, 48, 49,
	41, 49, 42,
	41, 42, 43,
	41, 43, 44,
	32, 33, 34, //Back Face
	32, 34, 39,
	32, 39, 40,
	32, 40, 37,
	32, 37, 38,
	32, 38, 35,
	32, 35, 36,
	32, 36, 33
};

Sint16 poly_WGearQuads[] = {
	1, 0, 2, 7,		//Section 1
	3, 5, 4, 6,
	3, 1, 4, 2,
	0, 5, 7, 6,
	113, 107, 111, 108,
	113, 107, 109, 106,
	111, 108, 110, 112,
	113, 111, 109, 110,
	107, 108, 106, 112,
	2, 7, 8, 11,	//Section 2
	4, 6, 9, 10,
	8, 9, 2, 4,
	11, 10, 7, 6,
	105, 99, 103, 100,
	105, 99, 101, 98,
	103, 100, 102, 104,
	105, 103, 101, 102,
	99, 100, 98, 104,
	8, 11, 12, 15,	//Section 3
	9, 10, 13, 14,
	12, 13, 8, 9,
	15, 14, 11, 10,
	97, 91, 95, 92,
	97, 91, 93, 90,
	95, 92, 94, 96,
	97, 95, 93, 94,
	91, 92, 90, 96,
	12, 15, 16, 19,	//Section 4
	13, 14, 17, 18,
	16, 17, 12, 13,
	19, 18, 15, 14,
	89, 83, 87, 84,
	89, 83, 85, 82,
	87, 84, 86, 88,
	89, 87, 85, 86,
	83, 84, 82, 88,
	16, 19, 20, 23,	//Section 5
	17, 18, 21, 22,
	20, 21, 16, 17,
	23, 22, 19, 18,
	81, 75, 79, 76,
	81, 75, 77, 74,
	79, 76, 78, 80,
	81, 79, 77, 78,
	75, 76, 74, 80,
	20, 23, 24, 27,	//Section 6
	21, 22, 25, 26,
	24, 25, 20, 21,
	27, 26, 23, 22,
	73, 67, 71, 68,
	73, 67, 69, 66,
	71, 68, 70, 72,
	73, 71, 69, 70,
	67, 68, 66, 72,
	24, 27, 28, 31,	//Section 7
	25, 26, 29, 30,
	28, 29, 24, 25,
	31, 30, 27, 26,
	65, 59, 63, 60,
	65, 59, 61, 58,
	63, 60, 62, 64,
	65, 63, 61, 62,
	59, 60, 58, 64,
	1, 0, 28, 31,	//Section 8
	3, 5, 29, 30,
	1, 3, 28, 29,
	0, 5, 31, 30,
	57, 51, 55, 52,
	57, 51, 53, 50,
	55, 52, 54, 56,
	57, 55, 53, 54,
	51, 52, 50, 56
};

NJS_TEX uv_WGearTriangles[] = {
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

NJS_TEX uv_WGearQuads[] = {
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
		{ 1, 255 },
		{ 255, 255 },
		{ 0 },
		{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
		{ 1, 255 },
		{ 255, 255 },
		{ 0 },
		{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 },
	{ 1, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 1 }
};

NJS_MESHSET_SADX meshlist_8D5611620077871C669[] = {
	{ NJD_MESHSET_3 | 1, 16, poly_WGearTriangles, NULL, NULL, NULL, uv_WGearTriangles, NULL },
	{ NJD_MESHSET_4 | 0, 72, poly_WGearQuads, NULL, NULL, NULL, uv_WGearQuads, NULL }
};

NJS_VECTOR vertex_8D5611620077871C3A9[] = {
	{ -26.6986f, 64.9991f, 0 }, //0			Section 1, Middle-Top, Back-Left
	{ -26.6986f, 64.9991f, 39.9521f }, //1		Section 1, Middle-Top, Front-Left
	{ 27.0758f, 65.1402f, 39.9521f }, //2		Section 1, Middle-Top, Front-Right
	{ -23.7454f, 57.9221f, 39.9521f }, //3		Section 1, Middle-Bottom, Front-Left
	{ 24.1598f, 58.0478f, 39.9521f }, //4		Section 1, Middle-Bottom, Front-Right
	{ -23.7454f, 57.9221f, 0 }, //5				Section 1, Middle-Bottom, Back-Left
	{ 24.1598f, 58.0478f, 0 }, //6				Section 1, Middle-Bottom, Back-Right
	{ 27.0758f, 65.1402f, 0 }, //7				Section 1, Middle-Top, Back-Right
	{ 65.1998f, 27.2158f, 39.9521f }, //8		Section 2, Middle-Top, Front-Right
	{ 58.1228f, 24.2626f, 39.9521f }, //9		Section 2, Middle-Bottom, Front-Right
	{ 58.1228f, 24.2626f, 0 }, //10				Section 2, Middle-Bottom, Back-Right
	{ 65.1998f, 27.2158f, 0 }, //11				Section 2, Middle-Top, Back-Right
	{ 65.341f, -26.5586f, 39.9521f }, //12		Section 3, Middle-Top, Front-Right
	{ 58.2486f, -23.6426f, 39.9521f }, //13		Section 3, Middle-Bottom, Front-Right
	{ 58.2486f, -23.6426f, 0 }, //14			Section 3, Middle-Bottom, Back-Right
	{ 65.341f, -26.5585f, 0 }, //15				Section 3, Middle-Top, Back-Right
	{ 27.4165f, -64.6826f, 39.9521f }, //16		Section 4, Middle-Top, Front-Right
	{ 24.4634f, -57.6056f, 39.9521f }, //17		Section 4, Middle-Bottom, Front-Right
	{ 24.4634f, -57.6056f, 0 }, //18			Section 4, Middle-Bottom, Back-Right
	{ 27.4165f, -64.6826f, 0 }, //19			Section 4, Middle-Top, Back-Right
	{ -26.3578f, -64.8237f, 39.9521f }, //20	Section 5, Middle-Top, Front-Right
	{ -23.4418f, -57.7313f, 39.9521f },	//21	Section 5, Middle-Bottom, Front-Right
	{ -23.4418f, -57.7313f, 0 }, //22			Section 5, Middle-Bottom, Back-Right
	{ -26.3578f, -64.8237f, 0 }, //23			Section 5, Middle-Top, Back-Right
	{ -64.4818f, -26.8993f, 39.9521f }, //24	Section 6, Middle-Top, Front-Right
	{ -57.4049f, -23.9461f, 39.9521f }, //25	Section 6, Middle-Bottom, Front-Right
	{ -57.4049f, -23.9461f, 0 }, //26			Section 6, Middle-Bottom, Back-Right
	{ -64.4818f, -26.8993f, 0 }, //27			Section 6, Middle-Top, Back-Right
	{ -64.623f, 26.8751f, 39.9521f }, //28		Section 7, Middle-Top, Front-Right
	{ -57.5306f, 23.9591f, 39.9521f }, //29		Section 7, Middle-Bottom, Front-Right
	{ -57.5306f, 23.9591f, 0 }, //30			Section 7, Middle-Bottom, Back-Right
	{ -64.623f, 26.8751f, 0 }, //31				Section 7, Middle-Top, Back-Right
	{ 0.6994f, 1.2121f, 3.2543f }, //32 Back side Center Vertice
	{ -22.9769f, 60.9502f, 3.2543f }, //33 Back Face Top Left
	{ 24.0775f, 61.0737f, 3.2543f }, //34 Back Face Top Right
	{ -59.0387f, -22.4642f, 3.2543f }, //35 Back Face Middle Left Bottom
	{ -59.1622f, 24.5903f, 3.2543f }, //36 Back Face Middle Left Top
	{ 24.3757f, -58.5259f, 3.2543f }, //37 Back Face Bottom Right
	{ -22.6788f, -58.6494f, 3.2543f },// 38 Back Face Bottom Left
	{ 60.4374f, 24.8885f, 3.2543f }, //39 Back Face Middle Right Top
	{ 60.5609f, -22.166f, 3.2543f }, //40 Back Face Middle Right Bottom
	{ 0.6994f, 1.2121f, 37.064f }, //41 Front Face Center Vertice
	{ 60.5609f, -22.166f, 37.064f }, //42 Front Face Middle Right Bottom
	{ 60.4374f, 24.8885f, 37.064f }, //43 Front Face Middle Right Top
	{ 24.0775f, 61.0737f, 37.064f }, //44 Front Face Top Right
	{ -22.9769f, 60.9502f, 37.064f }, //45 Front Face Top Left
	{ -59.1622f, 24.5903f, 37.064f }, //46 Front Face Middle Left Top
	{ -59.0387f, -22.4642f, 37.064f }, //47 Front Face Middle Left Bottom
	{ -22.6788f, -58.6494f, 37.064f }, //48 Front Face Bottom Left
	{ 24.3757f, -58.5259f, 37.064f }, //49 Front Face Bottom Right
	{ -60.3497f, 31.1717f, 10.2597f }, //50		Section 8, Block, Bottom, Back-Left
	{ -70.8143f, 41.591f, 10.2597f }, //51		Section 8, Block, Top, Back-Left
	{ -41.9345f, 70.5963f, 10.2597f }, //52		Section 8, Block, Top, Back-Right
	{ -60.3497f, 31.1717f, 29.8423f }, //53		Section 8, Block, Bottom, Front-Left
	{ -31.4699f, 60.1769f, 29.8423f }, //54		Section 8, Block, Bottom, Front-Right
	{ -41.9345f, 70.5962f, 29.8423f }, //55		Section 8, Block, Top, Front-Right
	{ -31.4699f, 60.1769f, 10.2597f }, //56		Section 8, Block, Bottom, Back-Right
	{ -70.8143f, 41.591f, 29.8423f }, //57		Section 8, Block, Top, Front-Left
	{ -64.625f, -20.8399f, 10.2355f }, //58		Section 7, Block, Bottom, Back-Left
	{ -79.3919f, -20.8925f, 10.2355f }, //59	Section 7, Block, Top, Back-Left
	{ -79.5376f, 20.0382f, 10.2355f }, //60		Section 7, Block, Top, Back-Right
	{ -64.625f, -20.8399f, 29.8185f }, //61		Section 7, Block, Bottom, Front-Left
	{ -64.7707f, 20.0908f, 29.8185f }, //62		Section 7, Block, Bottom, Front-Right
	{ -79.5376f, 20.0382f, 29.8185f }, //63		Seciton 7, Block, Top, Front-Right
	{ -64.7707f, 20.0908f, 10.2355f }, //64		Section 7, Block, Bottom, Back-Right
	{ -79.3919f, -20.8925f, 29.8185f }, //65	Seciton 7, Block, Top, Front-Left
	{ -30.9589f, -60.3549f, 10.2217f }, //66	Section 6, Block, Bottom, Back-Left
	{ -41.4191f, -70.7783f, 10.2217f }, //67	Section 6, Block, Top, Back-Left
	{ -70.3106f, -41.7847f, 10.2217f }, //68	Section 6, Block, Top, Back-Right
	{ -30.9589f, -60.3549f, 29.8047f }, //69	Section 6, Block, Bottom, Front-Left
	{ -59.8503f, -31.3613f, 29.8047f }, //70	Section 6, Block, Bottom, Front-Right
	{ -70.3106f, -41.7847f, 29.8047f }, //71	Section 6, Block, Top, Front-Right
	{ -59.8503f, -31.3613f, 10.2217f }, //72	Section 6, Block, Bottom, Back-Right
	{ -41.4191f, -70.7783f, 29.8047f }, //73	Section 6, Block, Top, Front-Left
	{ 21.3438f, -64.5086f, 10.2306f }, //74		Section 5, Block, Bottom, Back-Left
	{ 21.3936f, -79.2755f, 10.2306f }, //75		Section 5, Block, Top, Back-Left
	{ -19.5371f, -79.4136f, 10.2306f }, //76	Section 5, Block, Top, Back-Right
	{ 21.3438f, -64.5086f, 29.8136f }, //77		Section 5, Block, Bottom, Front-Left
	{ -19.5869f, -64.6467f, 29.8136f }, //78	Section 5, Block, Bottom, Front-Right
	{ -19.5371f, -79.4136f, 29.8136f }, //79	Section 5, Block, Top, Front-Right
	{ -19.5869f, -64.6467f, 10.2306f }, //80	Section 5, Block, Bottom, Back-Right
	{ 21.3936f, -79.2755f, 29.8136f }, //81		Section 5, Block, Top, Front-Left
	{ 60.8718f, -30.9989f, 10.2278f }, //82		Section 4, Block, Bottom, Back-Left
	{ 71.3121f, -41.4423f, 10.2278f }, //83		Section 4, Block, Top, Back-Left
	{ 42.3655f, -70.3808f, 10.2278f }, //84		Section 4, Block, Top, Back-Right
	{ 60.8718f, -30.9989f, 29.8108f }, //85		Section 4, Block, Bottom, Front-Left
	{ 31.9251f, -59.9375f, 29.8108f }, //86		Section 4, Block, Bottom, Front-Right
	{ 42.3655f, -70.3808f, 29.8108f }, //87		Section 4, Block, Top, Front-Right
	{ 31.9251f, -59.9375f, 10.2278f }, //88		Section 4, Block, Bottom, Back-Right
	{ 71.3121f, -41.4423f, 29.8108f }, //89		Section 4, Block, Top, Front-Left
	{ 65.3688f, 21.0761f, 10.1502f }, //90		Section 3, Block, Bottom, Back-Left
	{ 80.1358f, 21.1105f, 10.1502f }, //91		Section 3, Block, Top, Back-Left
	{ 80.231f, -19.8204f, 10.1502f }, //92		Section 3, Block, Top, Back-Right
	{ 65.3688f, 21.0761f, 29.7332f }, //93		Section 3, Block, Bottom, Front-Left
	{ 65.464f, -19.8547f, 29.7332f }, //94		Section 3, Block, Bottom, Front-Right
	{ 80.231f, -19.8204f, 29.7332f }, //95		Section 3, Block, Top, Front-Right
	{ 65.464f, -19.8548f, 10.1502f }, //96		Section 3, Block, Bottom, Back-Right
	{ 80.1358f, 21.1105f, 29.7332f }, //97		Section 3, Block, Top, Front-Left
	{ 31.5015f, 60.7722f, 10.2306f }, //98		Section 2, Block, Bottom, Back-Left
	{ 41.9446f, 71.2128f, 10.2306f }, //99		Section 2, Block, Top, Back-Left
	{ 70.8838f, 42.2669f, 10.2306f }, //100		Section 2, Block, Top, Back-Right
	{ 31.5015f, 60.7722f, 29.8136f }, //101		Section 2, Block, Bottom, Front-Left
	{ 60.4408f, 31.8262f, 29.8136f }, //102		Section 2, Block, Bottom, Front-Right
	{ 70.8838f, 42.2669f, 29.8136f }, //103		Section 2, Block, Top, Front-Right
	{ 60.4408f, 31.8262f, 10.2306f }, //104		Section 2, Block, Bottom, Front-Right
	{ 41.9446f, 71.2128f, 29.8136f }, //105		Section 2, Block, Top, Front-Left
	{ -20.2471f, 65.2166f, 10.1502f }, //106	Section 1, Block, Bottom, Back-Left
	{ -20.2471f, 79.9836f, 10.1502f }, //107	Section 1, Block, Top, Back-Left
	{ 20.6839f, 79.9836f, 10.1502f }, //108		Section 1, Block, Top, Back-Right
	{ -20.2471f, 65.2166f, 29.7332f }, //109	Section 1, Block, Bottom, Front-Left
	{ 20.6839f, 65.2166f, 29.7332f }, //110		Section 1, Block, Bottom, Front-Right
	{ 20.6839f, 79.9836f, 29.7332f }, //111		Section 1, Block, Top, Front-Right
	{ 20.6839f, 65.2166f, 10.1502f }, //112		Section 1, Block, Bottom, Back-Right
	{ -20.2471f, 79.9836f, 29.7332f } //113		Section 1, Block, Top, Front-Left
};

NJS_VECTOR normal_8D5611620077871FD54[] = {
	{ -0.299f, 0.7165f, -0.6303f },
	{ -0.299f, 0.7165f, 0.6303f },
	{ 0.2952f, 0.7181f, 0.6303f },
	{ 0.2289f, -0.5485f, 0.8042f },
	{ -0.226f, -0.5497f, 0.8042f },
	{ 0.2289f, -0.5485f, -0.8042f },
	{ -0.226f, -0.5497f, -0.8042f },
	{ 0.2952f, 0.7181f, -0.6303f },
	{ 0.7165f, 0.299f, 0.6303f },
	{ -0.5485f, -0.2289f, 0.8042f },
	{ -0.5485f, -0.2289f, -0.8042f },
	{ 0.7165f, 0.299f, -0.6303f },
	{ 0.7181f, -0.2952f, 0.6303f },
	{ -0.5497f, 0.226f, 0.8042f },
	{ -0.5497f, 0.226f, -0.8042f },
	{ 0.7181f, -0.2952f, -0.6303f },
	{ 0.299f, -0.7165f, 0.6303f },
	{ -0.2289f, 0.5485f, 0.8042f },
	{ -0.2289f, 0.5485f, -0.8042f },
	{ 0.299f, -0.7165f, -0.6303f },
	{ -0.2952f, -0.7181f, 0.6303f },
	{ 0.226f, 0.5497f, 0.8042f },
	{ 0.226f, 0.5497f, -0.8042f },
	{ -0.2952f, -0.7181f, -0.6303f },
	{ -0.7165f, -0.299f, 0.6303f },
	{ 0.5485f, 0.2289f, 0.8042f },
	{ 0.5485f, 0.2289f, -0.8042f },
	{ -0.7165f, -0.299f, -0.6303f },
	{ -0.7181f, 0.2952f, 0.6303f },
	{ 0.5497f, -0.226f, 0.8042f },
	{ 0.5497f, -0.226f, -0.8042f },
	{ -0.7181f, 0.2952f, -0.6303f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.4989f, -0.5011f, -0.7071f },
	{ -0.8165f, -0.0019f, -0.5774f },
	{ -0.0019f, 0.8165f, -0.5773f },
	{ -0.4989f, -0.5011f, 0.7071f },
	{ 0.4989f, 0.5011f, 0.7071f },
	{ -0.0019f, 0.8165f, 0.5773f },
	{ 0.4989f, 0.5011f, -0.7071f },
	{ -0.8165f, -0.0017f, 0.5773f },
	{ 0.5794f, -0.5753f, -0.5774f },
	{ -0.5753f, -0.5794f, -0.5774f },
	{ -0.5794f, 0.5753f, -0.5774f },
	{ 0.5794f, -0.5753f, 0.5774f },
	{ 0.5753f, 0.5794f, 0.5774f },
	{ -0.5794f, 0.5753f, 0.5774f },
	{ 0.5753f, 0.5794f, -0.5774f },
	{ -0.5753f, -0.5794f, 0.5774f },
	{ 0.4991f, -0.5009f, -0.7071f },
	{ -0.0014f, -0.8165f, -0.5774f },
	{ -0.8165f, 0.0015f, -0.5773f },
	{ 0.4991f, -0.5009f, 0.7071f },
	{ -0.4991f, 0.5009f, 0.7071f },
	{ -0.8165f, 0.0014f, 0.5774f },
	{ -0.4992f, 0.5009f, -0.707f },
	{ -0.0014f, -0.8165f, 0.5774f },
	{ 0.7071f, 0.0024f, -0.7071f },
	{ 0.5793f, -0.5754f, -0.5774f },
	{ -0.5754f, -0.5793f, -0.5774f },
	{ 0.7071f, 0.0024f, 0.7071f },
	{ -0.7072f, -0.0024f, 0.707f },
	{ -0.5753f, -0.5793f, 0.5775f },
	{ -0.7071f, -0.0024f, -0.7071f },
	{ 0.5793f, -0.5754f, 0.5774f },
	{ 0.5001f, 0.4999f, -0.7071f },
	{ 0.8165f, -0.0001f, -0.5774f },
	{ -0.0001f, -0.8165f, -0.5774f },
	{ 0.5002f, 0.5f, 0.707f },
	{ -0.5001f, -0.4999f, 0.7071f },
	{ -0.0001f, -0.8165f, 0.5774f },
	{ -0.5001f, -0.4999f, -0.7071f },
	{ 0.8165f, -0.0002f, 0.5774f },
	{ -0.0016f, 0.7071f, -0.7071f },
	{ 0.576f, 0.5787f, -0.5774f },
	{ 0.5787f, -0.576f, -0.5774f },
	{ -0.0016f, 0.707f, 0.7072f },
	{ 0.0016f, -0.7071f, 0.7071f },
	{ 0.5787f, -0.576f, 0.5774f },
	{ 0.0016f, -0.7071f, -0.7071f },
	{ 0.576f, 0.5786f, 0.5774f },
	{ -0.4999f, 0.5f, -0.7072f },
	{ 0.0002f, 0.8166f, -0.5772f },
	{ 0.8165f, 0, -0.5774f },
	{ -0.4999f, 0.5001f, 0.7071f },
	{ 0.4999f, -0.5001f, 0.7071f },
	{ 0.8165f, -0.0001f, 0.5774f },
	{ 0.5f, -0.5001f, -0.707f },
	{ 0.0001f, 0.8165f, 0.5774f },
	{ -0.5774f, -0.5774f, -0.5774f },
	{ -0.5774f, 0.5774f, -0.5774f },
	{ 0.5774f, 0.5774f, -0.5774f },
	{ -0.5774f, -0.5774f, 0.5774f },
	{ 0.5774f, -0.5774f, 0.5774f },
	{ 0.5774f, 0.5774f, 0.5774f },
	{ 0.5774f, -0.5774f, -0.5774f },
	{ -0.5774f, 0.5774f, 0.5774f }
};

NJS_MODEL_SADX attach_8D5611620077871B048 = { vertex_8D5611620077871C3A9, normal_8D5611620077871FD54, LengthOfArray<Sint32>(vertex_8D5611620077871C3A9), meshlist_8D5611620077871C669, matlist_8D56116200778712F82, LengthOfArray<Uint16>(meshlist_8D5611620077871C669), LengthOfArray<Uint16>(matlist_8D56116200778712F82),{ -1.218411f, 2.956886f, 17.60363f }, 86.17998f, NULL };

NJS_OBJECT Object_WGEAR = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_8D5611620077871B048, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_8D560F2CEA4DFC40731[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 124, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
    { { 0xFFB2B2B2 }, { 0x00000000 }, 0, 125, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_BoltTube[] = {
	//Front part of tube
    1, 10, 2, 9,
    2, 9, 7, 16,
    7, 16, 8, 15,
    8, 15, 5, 14,
    5, 14, 6, 13,
    6, 13, 3, 12,
    3, 12, 4, 11,
    4, 11, 1, 10,
    //Back part of tube
    9, 17, 10, 18,
    10, 18, 11, 19,
    11, 19, 12, 20,
    12, 20, 13, 21,
    13, 21, 14, 22,
    14, 22, 15, 23,
    15, 23, 16, 24,
    16, 24, 9, 17
};

Sint16 poly_BoltFace[] = {
	0, 1, 2,
	0, 3, 4,
	0, 4, 1, //new bottom left
	0, 5, 6,
	0, 7, 8,
	0, 6, 3, //new top left
	0, 8, 5, //new top right
	0, 2, 7 //new bottom right
};

NJS_TEX uv_BoltFace[] = {
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
	{ 254, 1 },
	{ 0, 254 },
	{ 254, 254 },
	{ 254, 1 },
	{ 0, 254 },
	{ 254, 254 },
	{ 254, 1 }
};

NJS_TEX uv_BoltTube[] = {
	{ 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
    { 255, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_8D560F2CEA4DFC4E3AB[] = {
	{ NJD_MESHSET_4 | 0, 16, poly_BoltTube, NULL, NULL, NULL, uv_BoltTube, NULL },
    { NJD_MESHSET_3 | 1, 8, poly_BoltFace, NULL, NULL, NULL, uv_BoltFace, NULL }
};

NJS_VECTOR vertex_8D560F2CEA4DFC4B595[] = {
    //Front 'face' of the rod
	{ 0.4375f, -0.3048f, 70.9747f }, //0 Center vertice
	{ -19.0615f, -48.1203f, 70.9747f }, //1 Bottom Left Vertice
	{ 20.4603f, -47.9034f, 70.9747f }, //2 Bottom Right Vertice
	{ -47.378f, 19.1943f, 70.9747f }, //3 Middle Top Left Vertice
	{ -47.161f, -20.3275f, 70.9747f }, //4 Middle Bottom Left Vertice
	{ 19.9366f, 47.5107f, 70.9747f }, //5 Top Right Vertice
	{ -19.5852f, 47.2938f, 70.9747f }, //6 Top Left Vertice
	{ 48.253f, -19.8039f, 70.9747f }, //7 Middle Bottom Right Vertice
	{ 48.0361f, 19.718f, 70.9747f }, //8 Middle Top Right Vertice
    //Back 'tube' of the rod
	{ 20.4603f, -47.9033f, -178.8456f }, //9 Bottom Right
	{ -19.0615f, -48.1202f, -178.8456f }, //10 Bottom Left
	{ -47.161f, -20.3275f, -178.8456f }, //11 Middle Bottom Left
	{ -47.3779f, 19.1943f, -178.8456f }, //12 Middle Top Left
	{ -19.5852f, 47.2938f, -178.8456f }, //13 Top Left
	{ 19.9366f, 47.5107f, -178.8456f }, //14 Top Right
	{ 48.0361f, 19.718f, -178.8456f }, //15 Middle Top Right
	{ 48.253f, -19.8038f, -178.8456f }, //16 Middle Bottom Right
    //Back end of the 'tube' of the rod
	{ 20.4603f, -47.9033f, -358.666f }, //17 Bottom Right
	{ -19.0615f, -48.1202f, -358.666f }, //18 Bottom Left
	{ -47.161f, -20.3275f, -358.666f }, //19 Middle Bottom Left
	{ -47.3779f, 19.1943f, -358.666f }, //20 Middle Top Left
	{ -19.5852f, 47.2939f, -358.666f }, //21 Top Left
	{ 19.9366f, 47.5108f, -358.666f }, //22 Top Right
	{ 48.0361f, 19.718f, -358.666f }, //23 Middle Top Right
	{ 48.253f, -19.8038f, -358.666f } //24 Middle Bottom Right
};

NJS_VECTOR normal_8D560F2CEA4DFC429C6[] = {
	{ 0, 0, 1 },
	{ -0.2932f, -0.7189f, 0.6303f },
	{ 0.3011f, -0.7156f, 0.6303f },
	{ -0.7189f, 0.2932f, 0.6303f },
	{ -0.7156f, -0.3011f, 0.6303f },
	{ 0.2932f, 0.7189f, 0.6303f },
	{ -0.301f, 0.7156f, 0.6303f },
	{ 0.7189f, -0.2932f, 0.6303f },
	{ 0.7156f, 0.301f, 0.6303f },
	{ 0.3878f, -0.9217f, 0 },
	{ -0.3776f, -0.9259f, 0 },
	{ -0.9217f, -0.3878f, 0 },
	{ -0.9259f, 0.3776f, 0 },
	{ -0.3877f, 0.9218f, 0 },
	{ 0.3776f, 0.926f, 0 },
	{ 0.9218f, 0.3877f, 0 },
	{ 0.926f, -0.3776f, 0 },
	{ 0.3878f, -0.9217f, 0 },
	{ -0.3776f, -0.9259f, 0 },
	{ -0.9217f, -0.3878f, 0 },
	{ -0.9259f, 0.3776f, 0 },
	{ -0.3877f, 0.9218f, 0 },
	{ 0.3776f, 0.926f, 0 },
	{ 0.9218f, 0.3877f, 0 },
	{ 0.926f, -0.3776f, 0 }
};

NJS_MODEL_SADX attach_8D560F2CEA4DFC4824C = { vertex_8D560F2CEA4DFC4B595, normal_8D560F2CEA4DFC429C6, LengthOfArray<Sint32>(vertex_8D560F2CEA4DFC4B595), meshlist_8D560F2CEA4DFC4E3AB, matlist_8D560F2CEA4DFC40731, LengthOfArray<Uint16>(meshlist_8D560F2CEA4DFC4E3AB), LengthOfArray<Uint16>(matlist_8D560F2CEA4DFC40731), { 3.963363f, 1.178411f, -67.74783f }, 170.2083f, NULL };

NJS_OBJECT Object_WBOLT = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_8D560F2CEA4DFC4824C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };