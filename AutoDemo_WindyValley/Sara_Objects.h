#include <SADXModLoader.h>

NJS_MATERIAL matlist_0013CAFC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 68, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 99, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013CB24[] = {
	15, 8, 7, 0,
	8, 9, 0, 1,
	9, 10, 1, 2,
	10, 11, 2, 3,
	11, 12, 3, 4,
	12, 13, 4, 5,
	13, 14, 5, 6,
	14, 15, 6, 7
};

Sint16 poly_0013CB64[] = {
	12, 11, 18,
	8, 15, 16,
	18, 13, 12,
	16, 9, 8
};

Sint16 poly_0013CB7C[] = {
	17, 14, 18, 13,
	17, 10, 16, 9,
	18, 11, 17, 10,
	16, 15, 17, 14
};

NJS_TEX uv_0013CB9C[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0 }
};

NJS_TEX uv_0013CC1C[] = {
	{ 1275, -486 },
	{ 1144, 7 },
	{ 1116, -446 },
	{ 0, -249 },
	{ 185, -762 },
	{ 222, -302 },
	{ 1116, -446 },
	{ 1089, -900 },
	{ 1275, -486 },
	{ 222, -302 },
	{ 260, 156 },
	{ 0, -249 }
};

NJS_TEX uv_0013CC4C[] = {
	{ 681, -382 },
	{ 609, -1020 },
	{ 1116, -446 },
	{ 1089, -900 },
	{ 681, -382 },
	{ 753, 254 },
	{ 222, -302 },
	{ 260, 156 },
	{ 1116, -446 },
	{ 1144, 7 },
	{ 681, -382 },
	{ 753, 254 },
	{ 222, -302 },
	{ 185, -762 },
	{ 681, -382 },
	{ 609, -1020 }
};

NJS_MESHSET_SADX meshlist_0013CC8C[] = {
	{ NJD_MESHSET_4 | 0, 8, poly_0013CB24, NULL, NULL, NULL, uv_0013CB9C, NULL },
	{ NJD_MESHSET_3 | 1, 4, poly_0013CB64, NULL, NULL, NULL, uv_0013CC1C, NULL },
	{ NJD_MESHSET_4 | 1, 4, poly_0013CB7C, NULL, NULL, NULL, uv_0013CC4C, NULL }
};

NJS_VECTOR vertex_0013CCD4[] = {
	{ -30.4267f, 0, -4.467865f },
	{ -18.69671f, 0, -17.12888f },
	{ 3.52887f, 0, -20.21701f },
	{ 21.12384f, 0, -12.4968f },
	{ 26.98907f, 0, 2.943542f },
	{ 18.65436f, 0, 15.91339f },
	{ -2.953552f, 0, 19.61908f },
	{ -22.09222f, 0, 11.59015f },
	{ -22.51576f, 1.148646f, -3.30622f },
	{ -13.83557f, 1.290538f, -12.67537f },
	{ 2.611364f, 1.432431f, -14.96059f },
	{ 15.63164f, 1.290538f, -9.247631f },
	{ 19.97192f, 1.148646f, 2.178222f },
	{ 13.80423f, 1.290538f, 11.77591f },
	{ -2.185628f, 1.432431f, 14.51812f },
	{ -16.34824f, 1.290538f, 8.576713f },
	{ -15.09191f, 1.858108f, -2.049329f },
	{ 0.212868f, 2, -0.221234f },
	{ 14.71793f, 1.858108f, 1.264138f }
};

NJS_VECTOR normal_0013CDB8[] = {
	{ -0.150842f, 0.988367f, -0.019437f },
	{ -0.08753099f, 0.978301f, -0.18779f },
	{ 0.033341f, 0.969376f, -0.243307f },
	{ 0.142838f, 0.97875f, -0.147124f },
	{ 0.170804f, 0.98515f, 0.017465f },
	{ 0.105622f, 0.977796f, 0.180993f },
	{ -0.028117f, 0.967333f, 0.251945f },
	{ -0.135204f, 0.977691f, 0.160749f },
	{ -0.122057f, 0.992406f, -0.015238f },
	{ -0.067407f, 0.99031f, -0.121415f },
	{ 0.019685f, 0.9893349f, -0.144323f },
	{ 0.11218f, 0.989181f, -0.094537f },
	{ 0.151337f, 0.988376f, 0.014479f },
	{ 0.086468f, 0.989204f, 0.118318f },
	{ -0.016488f, 0.9887469f, 0.148686f },
	{ -0.09846099f, 0.989976f, 0.101254f },
	{ -0.054232f, 0.9985059f, -0.006614f },
	{ 0.000576f, 1, -0.00022f },
	{ 0.074173f, 0.9972219f, 0.006824f }
};

NJS_MODEL_SADX attach_0013CE9C = { vertex_0013CCD4, normal_0013CDB8, LengthOfArray<Sint32>(vertex_0013CCD4), meshlist_0013CC8C, matlist_0013CAFC, LengthOfArray<Uint16>(meshlist_0013CC8C), LengthOfArray<Uint16>(matlist_0013CAFC),{ -1.718811f, 1, -0.298965f }, 44.94097f, NULL };

NJS_OBJECT Object_SaraB1 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013CE9C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0013CEF8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 65, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 99, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013CF20[] = {
	15, 8, 7, 0,
	8, 9, 0, 1,
	9, 10, 1, 2,
	10, 11, 2, 3,
	11, 12, 3, 4,
	12, 13, 4, 5,
	13, 14, 5, 6,
	14, 15, 6, 7
};

Sint16 poly_0013CF60[] = {
	12, 11, 18,
	8, 15, 16,
	18, 13, 12,
	16, 9, 8
};

Sint16 poly_0013CF78[] = {
	17, 14, 18, 13,
	17, 10, 16, 9,
	18, 11, 17, 10,
	16, 15, 17, 14
};

NJS_TEX uv_0013CF98[] = {
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 }
};

NJS_TEX uv_0013D018[] = {
	{ 1275, -486 },
	{ 1144, 7 },
	{ 1116, -446 },
	{ 0, -249 },
	{ 185, -762 },
	{ 222, -302 },
	{ 1116, -446 },
	{ 1089, -900 },
	{ 1275, -486 },
	{ 222, -302 },
	{ 260, 156 },
	{ 0, -249 }
};

NJS_TEX uv_0013D048[] = {
	{ 681, -382 },
	{ 609, -1020 },
	{ 1116, -446 },
	{ 1089, -900 },
	{ 681, -382 },
	{ 753, 254 },
	{ 222, -302 },
	{ 260, 156 },
	{ 1116, -446 },
	{ 1144, 7 },
	{ 681, -382 },
	{ 753, 254 },
	{ 222, -302 },
	{ 185, -762 },
	{ 681, -382 },
	{ 609, -1020 }
};

NJS_MESHSET_SADX meshlist_0013D088[] = {
	{ NJD_MESHSET_4 | 0, 8, poly_0013CF20, NULL, NULL, NULL, uv_0013CF98, NULL },
	{ NJD_MESHSET_3 | 1, 4, poly_0013CF60, NULL, NULL, NULL, uv_0013D018, NULL },
	{ NJD_MESHSET_4 | 1, 4, poly_0013CF78, NULL, NULL, NULL, uv_0013D048, NULL }
};

NJS_VECTOR vertex_0013D0D0[] = {
	{ -30.4267f, 0, -4.467865f },
	{ -18.69671f, 0, -17.12888f },
	{ 3.52887f, 0, -20.21701f },
	{ 21.12384f, 0, -12.4968f },
	{ 26.98907f, 0, 2.943542f },
	{ 18.65436f, 0, 15.91339f },
	{ -2.953552f, 0, 19.61908f },
	{ -22.09222f, 0, 11.59015f },
	{ -22.51576f, 1.148646f, -3.30622f },
	{ -13.83557f, 1.290538f, -12.67537f },
	{ 2.611364f, 1.432431f, -14.96059f },
	{ 15.63164f, 1.290538f, -9.247631f },
	{ 19.97192f, 1.148646f, 2.178222f },
	{ 13.80423f, 1.290538f, 11.77591f },
	{ -2.185628f, 1.432431f, 14.51812f },
	{ -16.34824f, 1.290538f, 8.576713f },
	{ -15.09191f, 1.858108f, -2.049329f },
	{ 0.212868f, 2, -0.221234f },
	{ 14.71793f, 1.858108f, 1.264138f }
};

NJS_VECTOR normal_0013D1B4[] = {
	{ -0.150842f, 0.988367f, -0.019437f },
	{ -0.08753099f, 0.978301f, -0.18779f },
	{ 0.033341f, 0.969376f, -0.243307f },
	{ 0.142838f, 0.97875f, -0.147124f },
	{ 0.170804f, 0.98515f, 0.017465f },
	{ 0.105622f, 0.977796f, 0.180993f },
	{ -0.028117f, 0.967333f, 0.251945f },
	{ -0.135204f, 0.977691f, 0.160749f },
	{ -0.122057f, 0.992406f, -0.015238f },
	{ -0.067407f, 0.99031f, -0.121415f },
	{ 0.019685f, 0.9893349f, -0.144323f },
	{ 0.11218f, 0.989181f, -0.094537f },
	{ 0.151337f, 0.988376f, 0.014479f },
	{ 0.086468f, 0.989204f, 0.118318f },
	{ -0.016488f, 0.9887469f, 0.148686f },
	{ -0.09846199f, 0.989976f, 0.101254f },
	{ -0.054232f, 0.9985059f, -0.006614f },
	{ 0.000576f, 1, -0.00022f },
	{ 0.074173f, 0.9972219f, 0.006824f }
};

NJS_MODEL_SADX attach_0013D298 = { vertex_0013D0D0, normal_0013D1B4, LengthOfArray<Sint32>(vertex_0013D0D0), meshlist_0013D088, matlist_0013CEF8, LengthOfArray<Uint16>(meshlist_0013D088), LengthOfArray<Uint16>(matlist_0013CEF8),{ -1.718811f, 1, -0.298965f }, 44.94097f, NULL };

NJS_OBJECT Object_SaraB2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013D298, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0013D2F4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 68, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 99, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013D31C[] = {
	11, 6, 5, 0,
	6, 7, 0, 1,
	7, 8, 1, 2,
	8, 9, 2, 3,
	9, 10, 3, 4,
	10, 11, 4, 5
};

Sint16 poly_0013D34C[] = {
	8, 7, 12,
	11, 10, 13,
	13, 6, 11,
	12, 9, 8
};

Sint16 poly_0013D364[] = {
	12, 7, 13, 6,
	13, 10, 12, 9
};

NJS_TEX uv_0013D374[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 }
};

NJS_TEX uv_0013D3D4[] = {
	{ 765, -82 },
	{ 541, 254 },
	{ 573, -123 },
	{ 0, -219 },
	{ 252, -510 },
	{ 196, -191 },
	{ 196, -191 },
	{ 140, 187 },
	{ 0, -219 },
	{ 573, -123 },
	{ 608, -502 },
	{ 765, -82 }
};

NJS_TEX uv_0013D404[] = {
	{ 573, -123 },
	{ 541, 254 },
	{ 196, -191 },
	{ 140, 187 },
	{ 196, -191 },
	{ 252, -510 },
	{ 573, -123 },
	{ 608, -502 }
};

NJS_MESHSET_SADX meshlist_0013D424[] = {
	{ NJD_MESHSET_4 | 0, 6, poly_0013D31C, NULL, NULL, NULL, uv_0013D374, NULL },
	{ NJD_MESHSET_3 | 1, 4, poly_0013D34C, NULL, NULL, NULL, uv_0013D3D4, NULL },
	{ NJD_MESHSET_4 | 1, 2, poly_0013D364, NULL, NULL, NULL, uv_0013D404, NULL }
};

NJS_VECTOR vertex_0013D46C[] = {
	{ -11.03937f, 0, -11.46658f },
	{ 5.695984f, 0, -13.43582f },
	{ 17.13813f, 0, -2.605133f },
	{ 9.141541f, 0, 11.42551f },
	{ -6.85553f, 0, 11.6716f },
	{ -18.51382f, 0, 1.809675f },
	{ -7.948349f, 1.380847f, -7.516355f },
	{ 4.101109f, 1.380847f, -8.934205f },
	{ 10.8318f, 1.380847f, -1.836846f },
	{ 6.121176f, 1.380847f, 7.003387f },
	{ -4.590463f, 1.380847f, 7.168168f },
	{ -12.18304f, 1.380847f, 1.043861f },
	{ 5.111142f, 1.62904f, -0.965409f },
	{ -6.269406f, 1.62904f, 0.461114f }
};

NJS_VECTOR normal_0013D514[] = {
	{ -0.138615f, 0.965974f, -0.218356f },
	{ 0.08271699f, 0.963193f, -0.255769f },
	{ 0.220199f, 0.974762f, -0.036755f },
	{ 0.120624f, 0.969167f, 0.214863f },
	{ -0.086941f, 0.9628119f, 0.255801f },
	{ -0.21142f, 0.9764259f, 0.043529f },
	{ -0.08152f, 0.989101f, -0.122612f },
	{ 0.050113f, 0.988156f, -0.145038f },
	{ 0.131297f, 0.991119f, -0.021053f },
	{ 0.07287499f, 0.989816f, 0.122283f },
	{ -0.052469f, 0.9875129f, 0.148542f },
	{ -0.125927f, 0.991648f, 0.027881f },
	{ 0.020943f, 0.999779f, -0.001977f },
	{ -0.020691f, 0.999762f, 0.006845f }
};

NJS_MODEL_SADX attach_0013D5BC = { vertex_0013D46C, normal_0013D514, LengthOfArray<Sint32>(vertex_0013D46C), meshlist_0013D424, matlist_0013D2F4, LengthOfArray<Uint16>(meshlist_0013D424), LengthOfArray<Uint16>(matlist_0013D2F4),{ -0.687844f, 0.8145199f, -0.882111f }, 31.80277f, NULL };

NJS_OBJECT Object_SaraM1 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013D5BC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0013D618[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 65, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 99, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013D640[] = {
	11, 6, 5, 0,
	6, 7, 0, 1,
	7, 8, 1, 2,
	8, 9, 2, 3,
	9, 10, 3, 4,
	10, 11, 4, 5
};

Sint16 poly_0013D670[] = {
	8, 7, 12,
	11, 10, 13,
	13, 6, 11,
	12, 9, 8
};

Sint16 poly_0013D688[] = {
	12, 7, 13, 6,
	13, 10, 12, 9
};

NJS_TEX uv_0013D698[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

NJS_TEX uv_0013D6F8[] = {
	{ 765, -82 },
	{ 541, 254 },
	{ 573, -123 },
	{ 0, -219 },
	{ 252, -510 },
	{ 196, -191 },
	{ 196, -191 },
	{ 140, 187 },
	{ 0, -219 },
	{ 573, -123 },
	{ 608, -502 },
	{ 765, -82 }
};

NJS_TEX uv_0013D728[] = {
	{ 573, -123 },
	{ 541, 254 },
	{ 196, -191 },
	{ 140, 187 },
	{ 196, -191 },
	{ 252, -510 },
	{ 573, -123 },
	{ 608, -502 }
};

NJS_MESHSET_SADX meshlist_0013D748[] = {
	{ NJD_MESHSET_4 | 0, 6, poly_0013D640, NULL, NULL, NULL, uv_0013D698, NULL },
	{ NJD_MESHSET_3 | 1, 4, poly_0013D670, NULL, NULL, NULL, uv_0013D6F8, NULL },
	{ NJD_MESHSET_4 | 1, 2, poly_0013D688, NULL, NULL, NULL, uv_0013D728, NULL }
};

NJS_VECTOR vertex_0013D790[] = {
	{ -11.03937f, 0, -11.46658f },
	{ 5.695984f, 0, -13.43582f },
	{ 17.13813f, 0, -2.605133f },
	{ 9.141541f, 0, 11.42551f },
	{ -6.85553f, 0, 11.6716f },
	{ -18.51382f, 0, 1.809675f },
	{ -7.948349f, 1.380847f, -7.516355f },
	{ 4.101109f, 1.380847f, -8.934205f },
	{ 10.8318f, 1.380847f, -1.836846f },
	{ 6.121176f, 1.380847f, 7.003387f },
	{ -4.590463f, 1.380847f, 7.168168f },
	{ -12.18304f, 1.380847f, 1.043861f },
	{ 5.111142f, 1.62904f, -0.965409f },
	{ -6.269406f, 1.62904f, 0.461114f }
};

NJS_VECTOR normal_0013D838[] = {
	{ -0.138615f, 0.965974f, -0.218356f },
	{ 0.08271699f, 0.963193f, -0.255769f },
	{ 0.220199f, 0.974762f, -0.036755f },
	{ 0.120624f, 0.969167f, 0.214863f },
	{ -0.086941f, 0.9628119f, 0.255801f },
	{ -0.21142f, 0.9764259f, 0.043529f },
	{ -0.08152f, 0.989101f, -0.122612f },
	{ 0.050113f, 0.988156f, -0.145038f },
	{ 0.131297f, 0.991119f, -0.021053f },
	{ 0.07287499f, 0.989816f, 0.122283f },
	{ -0.052469f, 0.9875129f, 0.148542f },
	{ -0.125927f, 0.991648f, 0.027881f },
	{ 0.020943f, 0.999779f, -0.001977f },
	{ -0.020691f, 0.999762f, 0.006845f }
};

NJS_MODEL_SADX attach_0013D8E0 = { vertex_0013D790, normal_0013D838, LengthOfArray<Sint32>(vertex_0013D790), meshlist_0013D748, matlist_0013D618, LengthOfArray<Uint16>(meshlist_0013D748), LengthOfArray<Uint16>(matlist_0013D618),{ -0.687844f, 0.8145199f, -0.882111f }, 31.80277f, NULL };

NJS_OBJECT Object_SaraM2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013D8E0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0013D93C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 65, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 99, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013D964[] = {
	11, 6, 5, 0,
	6, 7, 0, 1,
	7, 8, 1, 2,
	8, 9, 2, 3,
	9, 10, 3, 4,
	10, 11, 4, 5
};

Sint16 poly_0013D994[] = {
	6, 11, 10,
	9, 8, 7
};

Sint16 poly_0013D9A0[] = {
	10, 9, 6, 7
};

NJS_TEX uv_0013D9A8[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

NJS_TEX uv_0013DA08[] = {
	{ 95, 177 },
	{ 0, -77 },
	{ 178, -255 },
	{ 426, -185 },
	{ 508, 92 },
	{ 312, 254 }
};

NJS_TEX uv_0013DA20[] = {
	{ 178, -255 },
	{ 426, -185 },
	{ 95, 177 },
	{ 312, 254 }
};

NJS_MESHSET_SADX meshlist_0013DA30[] = {
	{ NJD_MESHSET_4 | 0, 6, poly_0013D964, NULL, NULL, NULL, uv_0013D9A8, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0013D994, NULL, NULL, NULL, uv_0013DA08, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_0013D9A0, NULL, NULL, NULL, uv_0013DA20, NULL }
};

NJS_VECTOR vertex_0013DA78[] = {
	{ -6.132436f, 0, -5.544963f },
	{ 1.73389f, 0, -7.859076f },
	{ 8.906282f, 0, -2.999667f },
	{ 5.898614f, 0, 5.330721f },
	{ -3.124767f, 0, 7.413461f },
	{ -9.602851f, 0, 2.091116f },
	{ -3.976318f, 1.115506f, -3.595398f },
	{ 1.124268f, 1.115506f, -5.095886f },
	{ 5.774902f, 0.919723f, -1.945007f },
	{ 3.824707f, 1.115506f, 3.456482f },
	{ -2.026123f, 1.115506f, 4.806946f },
	{ -6.226562f, 0.919723f, 1.355896f }
};

NJS_VECTOR normal_0013DB08[] = {
	{ -0.219567f, 0.938825f, -0.265326f },
	{ 0.048759f, 0.936601f, -0.346988f },
	{ 0.285694f, 0.95398f, -0.091107f },
	{ 0.227101f, 0.934333f, 0.274676f },
	{ -0.067715f, 0.934435f, 0.349637f },
	{ -0.279974f, 0.957667f, 0.066997f },
	{ -0.125312f, 0.983528f, -0.130268f },
	{ 0.038245f, 0.983076f, -0.179163f },
	{ 0.208535f, 0.975755f, -0.06644399f },
	{ 0.127918f, 0.98272f, 0.133784f },
	{ -0.048829f, 0.982549f, 0.179482f },
	{ -0.206052f, 0.977305f, 0.049167f }
};

NJS_MODEL_SADX attach_0013DB98 = { vertex_0013DA78, normal_0013DB08, LengthOfArray<Sint32>(vertex_0013DA78), meshlist_0013DA30, matlist_0013D93C, LengthOfArray<Uint16>(meshlist_0013DA30), LengthOfArray<Uint16>(matlist_0013D93C),{ -0.348284f, 0.557753f, -0.222808f }, 21.99832f, NULL };

NJS_OBJECT Object_SaraS1 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013DB98, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0013DBF4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 68, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 99, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013DC1C[] = {
	11, 6, 5, 0,
	6, 7, 0, 1,
	7, 8, 1, 2,
	8, 9, 2, 3,
	9, 10, 3, 4,
	10, 11, 4, 5
};

Sint16 poly_0013DC4C[] = {
	6, 11, 10,
	9, 8, 7
};

Sint16 poly_0013DC58[] = {
	10, 9, 6, 7
};

NJS_TEX uv_0013DC60[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 }
};

NJS_TEX uv_0013DCC0[] = {
	{ 95, 177 },
	{ 0, -77 },
	{ 178, -255 },
	{ 426, -185 },
	{ 508, 92 },
	{ 312, 254 }
};

NJS_TEX uv_0013DCD8[] = {
	{ 178, -255 },
	{ 426, -185 },
	{ 95, 177 },
	{ 312, 254 }
};

NJS_MESHSET_SADX meshlist_0013DCE8[] = {
	{ NJD_MESHSET_4 | 0, 6, poly_0013DC1C, NULL, NULL, NULL, uv_0013DC60, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0013DC4C, NULL, NULL, NULL, uv_0013DCC0, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_0013DC58, NULL, NULL, NULL, uv_0013DCD8, NULL }
};

NJS_VECTOR vertex_0013DD30[] = {
	{ -6.132436f, 0, -5.544963f },
	{ 1.73389f, 0, -7.859076f },
	{ 8.906282f, 0, -2.999667f },
	{ 5.898614f, 0, 5.330721f },
	{ -3.124767f, 0, 7.413461f },
	{ -9.602851f, 0, 2.091116f },
	{ -3.976318f, 1.115506f, -3.595398f },
	{ 1.124268f, 1.115506f, -5.095886f },
	{ 5.774902f, 0.919723f, -1.945007f },
	{ 3.824707f, 1.115506f, 3.456482f },
	{ -2.026123f, 1.115506f, 4.806946f },
	{ -6.226562f, 0.919723f, 1.355896f }
};

NJS_VECTOR normal_0013DDC0[] = {
	{ -0.219567f, 0.938825f, -0.265326f },
	{ 0.048759f, 0.936601f, -0.346988f },
	{ 0.285694f, 0.95398f, -0.091107f },
	{ 0.227101f, 0.934333f, 0.274676f },
	{ -0.067715f, 0.934435f, 0.349637f },
	{ -0.279974f, 0.957667f, 0.066997f },
	{ -0.125312f, 0.983528f, -0.130268f },
	{ 0.038245f, 0.983076f, -0.179163f },
	{ 0.208535f, 0.975755f, -0.06644399f },
	{ 0.127918f, 0.98272f, 0.133784f },
	{ -0.048829f, 0.982549f, 0.179482f },
	{ -0.206052f, 0.977305f, 0.049167f }
};

NJS_MODEL_SADX attach_0013DE50 = { vertex_0013DD30, normal_0013DDC0, LengthOfArray<Sint32>(vertex_0013DD30), meshlist_0013DCE8, matlist_0013DBF4, LengthOfArray<Uint16>(meshlist_0013DCE8), LengthOfArray<Uint16>(matlist_0013DBF4),{ -0.348284f, 0.557753f, -0.222808f }, 21.99832f, NULL };

NJS_OBJECT Object_SaraS2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013DE50, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
