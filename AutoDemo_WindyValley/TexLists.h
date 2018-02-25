#include <SADXModLoader.h>

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
	{ "S_wt21" },
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
	{ "S_wt24" },
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
	{ "S_wt27" },
};

NJS_TEXLIST WINDY03_texlist = { arrayptrandlength(WINDY03_texlist_entries) };

NJS_TEXNAME WINDY01_SKY01_texnames[] = {
	{ "s_wt28" },
	{ "wv_nbg" },
	{ "s_wt32" },
	{ "sw_nbg2" },
};

NJS_TEXLIST WINDY_BACK = { arrayptrandlength(WINDY01_SKY01_texnames) };

NJS_TEXNAME WINDY02_SKY01_texnames[] = {
	{ "tatu50" },
	{ "tatu61" },
	{ "tatu62" },
};

NJS_TEXLIST WINDY_BACK2 = { arrayptrandlength(WINDY02_SKY01_texnames) };

NJS_TEXNAME WINDY03_SKY01_texnames[] = {
	{ "Sora96" },
	{ "Sora62" },
};

NJS_TEXLIST WINDY_BACK3 = { arrayptrandlength(WINDY03_SKY01_texnames) };


PVMEntry WindyValleyObjectTextures[] = {
	{ "OBJ_WINDY", (TexList *)0xC055D4 },
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
	{ NULL, (TexList *)0x973FB0 },
	{ 0 }
};