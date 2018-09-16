#pragma once
#include "SADXModLoader.h"
#include "Skybox01.h"
#include "Skybox02.h"
#include "Skybox03.h"

NJS_TEXNAME WINDY01_SKY01_texnames[] = {
		{ "s_wt28" },
		{ "s_wt32" },
		{ "wv_nbg" },
		{ "sw_nbg2" }
};

NJS_TEXLIST BETAWINDY_BACK_texlist = { arrayptrandlength(WINDY01_SKY01_texnames) };

NJS_TEXNAME WINDY02_SKY01_texnames[] = {
		{ "tatu50" },
		{ "tatu61" }
};

NJS_TEXLIST BETAWINDY_BACK2_texlist = { arrayptrandlength(WINDY02_SKY01_texnames) };

NJS_TEXNAME WINDY03_SKY01_texnames[] = {
		{ "Sora96" },
		{ "Sora62" },
		{ "SoraTorn" }
};

NJS_TEXLIST BETAWINDY_BACK3_texlist = { arrayptrandlength(WINDY03_SKY01_texnames) };

NJS_TEXNAME WINDY01_texlist_entries[] = {
	{ "S_wt12" },
	{ "S_w0" },
	{ "S_wt10" },
	{ "S_m15" },
	{ "S_m17" },
	{ "s_g17" },
	{ "S_w12" },
	{ "Ami02" },
	{ "S_w58" },
	{ "S_w57" },
	{ "S_wt13" },
	{ "S_g23" },
	{ "S_wt0" },
	{ "S_w59" },
	{ "S_wt29" },
	{ "S_m25" },
	{ "S_m02" },
	{ "S_wt7" },
	{ "S_w56" },
	{ "S_wt4" },
	{ "S_m35" },
	{ "S_m41" },
	{ "S_wt18" },
	{ "S_wt17" },
	{ "S_wt14" },
	{ "S_g13" },
	{ "W_wv5" },
	{ "S_wt15" },
	{ "S_wt27" },
	{ "S_wt20" },
	{ "S_w3" },
	{ "S_wt11" },
	{ "S_wt19" },
	{ "S_wt24" },
	{ "S_wt26" },
	{ "S_wt25" },
	{ "S_m28" },
	{ "S_wt8" },
	{ "S_wt22" },
	{ "S_wt23" },
	{ "S_wt30" },
	{ "S_wt21" }
};

NJS_TEXLIST WINDY01_texlist = { arrayptrandlength(WINDY01_texlist_entries) };

NJS_TEXNAME WINDY02_texlist_entries[] = {
	{ "Ami02" },
	{ "iwa_l" },
	{ "S_g13" },
	{ "S_g23" },
	{ "S_g24" },
	{ "S_m28" },
	{ "S_m31" },
	{ "S_m41" },
	{ "S_m45" },
	{ "S_m49" },
	{ "S_w0" },
	{ "S_w3" },
	{ "S_w12" },
	{ "S_w14" },
	{ "S_w24" },
	{ "S_w51" },
	{ "S_w56" },
	{ "S_w57" },
	{ "S_w58" },
	{ "S_w59" },
	{ "S_wt0" },
	{ "S_wt4" },
	{ "S_wt8" },
	{ "S_wt23" },
	{ "S_wt24" }
};

NJS_TEXLIST WINDY02_texlist = { arrayptrandlength(WINDY02_texlist_entries) };

NJS_TEXNAME WINDY03_texlist_entries[] = {
	{ "W_wv6" },
	{ "S_w57" },
	{ "Metal01_64" },
	{ "S_g23" },
	{ "Rock03" },
	{ "W_wv4" },
	{ "W_wv1" },
	{ "S_m28" },
	{ "S_wt8" },
	{ "S_wt13" },
	{ "S_m26" },
	{ "S_w14" },
	{ "S_m71" },
	{ "S_w27" },
	{ "W_wv17" },
	{ "W_wv3" },
	{ "S_w3" },
	{ "S_m43" },
	{ "S_wt0" },
	{ "S_w58" },
	{ "S_wt29" },
	{ "S_wt11" },
	{ "S_g24" },
	{ "W_wv9" },
	{ "S_wt30" },
	{ "S_m41" },
	{ "S_m15" },
	{ "S_m40" },
	{ "W_wv8" },
	{ "W_wv10" },
	{ "S_wt7" },
	{ "S_w61" },
	{ "W_wv12" },
	{ "W_wv13" },
	{ "S_m25" },
	{ "W_wv19" },
	{ "S_g13" },
	{ "W_wv15" },
	{ "S_wt26" },
	{ "W_wv18" },
	{ "S_m02" },
	{ "S_wt24" },
	{ "S_w5" },
	{ "W_wv20" },
	{ "W_wv5" },
	{ "S_wt25" },
	{ "W_wv11" },
	{ "W_wv16" },
	{ "S_wt23" },
	{ "W_wv14" },
	{ "S_wt4" },
	{ "S_wt22" },
	{ "S_w0" },
	{ "S_wt14" },
	{ "S_wt27" }
};

NJS_TEXLIST WINDY03_texlist = { arrayptrandlength(WINDY03_texlist_entries) };

NJS_TEXNAME OBJWINDY_texlist_entries[] = {
	{ "Green_1" },
	{ "S_w59_1" },
	{ "S_w56_1" },
	{ "S_wt15_0" },
	{ "S_w12_1" },
	{ "O_wm14" },
	{ "S_m97" },
	{ "S_m96" },
	{ "O_wm12" },
	{ "S_m81" },
	{ "S_m20" },
	{ "S_m98" },
	{ "S_m99" },
	{ "S_m86" },
	{ "S_m34" },
	{ "Green01" },
	{ "Green00" },
	{ "Flo_leaf" },
	{ "Flower01" },
	{ "Flower00" },
	{ "W_tachikimiki" },
	{ "O_wm02" },
	{ "O_wm03" },
	{ "O_wm06" },
	{ "S_m38" },
	{ "S_m21" },
	{ "S_m73" },
	{ "S_m36" },
	{ "Wood7_64" },
	{ "Wall14_64" },
	{ "Wall01_64" },
	{ "S_w14" },
	{ "Wood1_064" },
	{ "Wood1_y64" },
	{ "Nuno13" },
	{ "Nuno12" },
	{ "Wood5_y64" },
	{ "O_wi04" },
	{ "Tx30" },
	{ "O_wi06" },
	{ "Tx030" },
	{ "O_wi05" },
	{ "Tt030" },
	{ "Tai_3" },
	{ "O_wm10" },
	{ "O_wm09" },
	{ "Wall53_64" },
	{ "Nuno56_64" },
	{ "O_wm07" },
	{ "Leaf1" },
	{ "Kuki" },
	{ "Tane" },
	{ "S_m37_0" },
	{ "O_wm20" },
	{ "S_m95" },
	{ "O_wi46" },
	{ "O_wi02" },
	{ "Flower" },
	{ "O_wi48" },
	{ "O_wi40" },
	{ "O_wi34" },
	{ "O_wi35" },
	{ "Flo_kuki" },
	{ "O_wm18" },
	{ "O_wm19" },
	{ "W_wv40" },
	{ "S_m90" },
	{ "S_m48" },
	{ "W_wv41" },
	{ "Nuno55_64" },
	{ "S_m89" },
	{ "S_m94" },
	{ "O_wm16" },
	{ "S_w57_2" },
	{ "Metal01_64_0" },
	{ "S_m47" },
	{ "O_wm15" },
	{ "Wall51_64" },
	{ "S_m87" },
	{ "S_m79" },
	{ "W_kimiki_0" },
	{ "W_kusa1_0" },
	{ "W_tachikiha" },
	{ "W_tachikiha1_0" },
	{ "W_tachikimik_0" },
	{ "O_wm01_0" },
	{ "S_g23_2" },
	{ "W_wv19_0" },
	{ "Rock03_0" },
	{ "W_wv4_0" },
	{ "W_wv3_0" },
	{ "S_m15_1" },
	{ "W_wv13_0" },
	{ "W_wv6_0" },
	{ "W_wv8_0" },
	{ "W_wv15_0" },
	{ "W_wv16_0" },
	{ "S_wt4_2" },
	{ "S_w0_2" },
	{ "W_wv1_0" },
	{ "W_wv9_0" },
	{ "S_g13_1" },
	{ "S_m28_2" },
	{ "S_m71_0" },
	{ "W_wv12_0" },
	{ "W_wv20_0" },
	{ "S_m41_2" },
	{ "W_wv10_0" },
	{ "W_wv11_0" },
	{ "W_wv14_!" },
	{ "S_wt8_1" },
	{ "S_wt3_1" },
	{ "S_wt30_1" },
	{ "S_wt24_2" },
	{ "S_wt25_1" },
	{ "W_wt0_2" },
	{ "S_wt23_2" },
	{ "S_m40_0" },
	{ "S_w58_2" },
	{ "S_wt11_1" },
	{ "W_wv5_1" },
	{ "S_wt27_2" },
	{ "win_pvr" },
	{ "Gear1" },
	{ "Gear2" },
	{ "Gear3" },
    { "Clear" }
};

NJS_TEXLIST OBJWINDY_texlist = { arrayptrandlength(OBJWINDY_texlist_entries) };

NJS_TEXNAME Tomado_texlist_entries[] = {
	{ "Tatu50" },
	{ "Tatu60" },
	{ "Tatu61" },
	{ "Tatu62" },
	{ "Noise45" }
};

NJS_TEXLIST Tomado_texlist = { arrayptrandlength(Tomado_texlist_entries) };

NJS_TEXNAME TomadoDebris_texlist_entries[] = {
	{ "O_wm01" },
	{ "S_m02" },
	{ "S_m79" },
	{ "S_w27" },
	{ "S_w57" },
	{ "S_w58" },
	{ "S_wt0" },
	{ "S_wt26" },
	{ "S_wt27" },
	{ "W_kimiki_0" },
	{ "W_kusa1" },
	{ "W_tachikiha" },
	{ "W_tachikiha1" },
	{ "W_tachikimiki2" }
};

NJS_TEXLIST TomadoDebris_texlist = { arrayptrandlength(TomadoDebris_texlist_entries) };

PVMEntry WindyValleyObjectTextures[] = {
	//{ "OBJ_WINDY", &OBJWINDY_texlist },
	{ "OBJ_WINDY_AD", (TexList *)0xC055D4 },
	{ "WINDY_E103", (TexList *)0xC409A4 },
	{ "E_SAI", (TexList *)0x38C8EA8 },
	{ "E_LEON", (TexList *)0x9599F4 },
	{ "OUM", (TexList *)0x9334EC },
	{ "KUJA", (TexList *)0x93142C },
	{ "MILESRACE", (TexList *)0x91BFC0 },
	{ "MOUNTAIN_MEXPLOSION", (TexList *)0xC3FEB0 },
	{ "TUBA", (TexList *)0x92F2BC },
	{ "E_SNAKE", (TexList *)0x94E640 },
	{ "MOGU", (TexList *)0x93ECEC },
	{ "KAOS_EME", (TexList *)0xC3FE20 },
	{ "GOMA", (TexList *)0x92ACE4 },
	{ "CHAOS_LIFEGAUGE", (TexList *)0x974000 },
	{ "Debris", &TomadoDebris_texlist },
	{ "Tomado", &Tomado_texlist },
	{ "WINDY_BACK_AD", &BETAWINDY_BACK_texlist },
	{ "WINDY_BACK2_AD", &BETAWINDY_BACK2_texlist },
	{ "WINDY_BACK3_AD", &BETAWINDY_BACK3_texlist },
	{ NULL, (TexList *)0x973FB0 },
	{ 0 }
};