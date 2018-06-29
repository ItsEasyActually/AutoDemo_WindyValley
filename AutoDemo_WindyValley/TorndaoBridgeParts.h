#include "SADXModLoader.h"

//Glass Shards 1-58
NJS_MATERIAL matlist_001998F8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE }
};

Sint16 poly_0019990C[] = {
	0, 1, 2
};

NJS_TEX uv_00199914[] = {
	{ 0 },
	{ 123, 255 },
	{ 255, 85 }
};

NJS_MESHSET_SADX meshlist_00199920[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019990C, NULL, NULL, NULL, uv_00199914, NULL }
};

NJS_VECTOR vertex_00199938[] = {
	{ -1.723123f, 1.000145f, 0.031984f },
	{ 0.292529f, -1.02134f, -0.509213f },
	{ 1.22804f, 1.169719f, 1.091116f }
};

NJS_VECTOR normal_0019995C[] = {
	{ -0.269283f, -0.490407f, 0.828847f },
	{ -0.269283f, -0.490407f, 0.828847f },
	{ -0.269283f, -0.490407f, 0.828847f }
};

NJS_MODEL_SADX attach_00199980 = { vertex_00199938, normal_0019995C, LengthOfArray<Sint32>(vertex_00199938), meshlist_00199920, matlist_001998F8, LengthOfArray<Uint16>(meshlist_00199920), LengthOfArray<Uint16>(matlist_001998F8),{ -0.247541f, 0.074189f, 0.290951f }, 1.678579f, NULL };

NJS_OBJECT object_001999A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00199980, 553.894f, -395.0995f, -2902.351f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001999DC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_001999F0[] = {
	0, 1, 2
};

NJS_TEX uv_001999F8[] = {
	{ 0, 96 },
	{ 73, 254 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00199A04[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_001999F0, NULL, NULL, NULL, uv_001999F8, NULL }
};

NJS_VECTOR vertex_00199A1C[] = {
	{ -1.58737f, -0.09327f, -0.43601f },
	{ -0.204537f, -0.416047f, 0.210713f },
	{ 3.16261f, 1.058623f, 0.417223f }
};

NJS_VECTOR normal_00199A40[] = {
	{ -0.268952f, 0.498715f, 0.823983f },
	{ -0.268952f, 0.498715f, 0.823983f },
	{ -0.268952f, 0.498715f, 0.823983f }
};

NJS_MODEL_SADX attach_00199A64 = { vertex_00199A1C, normal_00199A40, LengthOfArray<Sint32>(vertex_00199A1C), meshlist_00199A04, matlist_001999DC, LengthOfArray<Uint16>(meshlist_00199A04), LengthOfArray<Uint16>(matlist_001999DC),{ 0.7876199f, 0.321288f, -0.009393999f }, 2.412985f, NULL };

NJS_OBJECT object_00199A8C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00199A64, 553.6096f, -395.4309f, -2904.88f, 0, 0, 0, 1, 1, 1, NULL, &object_001999A8 };

NJS_MATERIAL matlist_00199AC0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_00199AD4[] = {
	0, 1, 2
};

NJS_TEX uv_00199ADC[] = {
	{ 0 },
	{ 117, 255 },
	{ 255, 47 }
};

NJS_MESHSET_SADX meshlist_00199AE8[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00199AD4, NULL, NULL, NULL, uv_00199ADC, NULL }
};

NJS_VECTOR vertex_00199B00[] = {
	{ -1.221951f, 0.126209f, -0.462417f },
	{ 0.004578f, -0.253396f, 0.16667f },
	{ 1.408903f, 0.462644f, 0.18349f }
};

NJS_VECTOR normal_00199B24[] = {
	{ -0.266206f, 0.502775f, 0.822406f },
	{ -0.266206f, 0.502775f, 0.822406f },
	{ -0.266206f, 0.502775f, 0.822406f }
};

NJS_MODEL_SADX attach_00199B48 = { vertex_00199B00, normal_00199B24, LengthOfArray<Sint32>(vertex_00199B00), meshlist_00199AE8, matlist_00199AC0, LengthOfArray<Uint16>(meshlist_00199AE8), LengthOfArray<Uint16>(matlist_00199AC0),{ 0.093476f, 0.104624f, -0.139464f }, 1.354475f, NULL };

NJS_OBJECT object_00199B70 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00199B48, 578.0273f, -395.6599f, -2915.632f, 0, 0, 0, 1, 1, 1, NULL, &object_00199A8C };

NJS_MATERIAL matlist_00199BA4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_00199BB8[] = {
	0, 1, 2
};

NJS_TEX uv_00199BC0[] = {
	{ 25, 0 },
	{ 0, 255 },
	{ 255, 21 }
};

NJS_MESHSET_SADX meshlist_00199BCC[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00199BB8, NULL, NULL, NULL, uv_00199BC0, NULL }
};

NJS_VECTOR vertex_00199BE4[] = {
	{ -0.391802f, 0.363266f, -0.301985f },
	{ -0.489951f, -0.694176f, 0.255481f },
	{ 0.93182f, 0.475991f, 0.0007f }
};

NJS_VECTOR normal_00199C08[] = {
	{ -0.234603f, 0.470283f, 0.850762f },
	{ -0.234603f, 0.470283f, 0.850762f },
	{ -0.234603f, 0.470283f, 0.850762f }
};

NJS_MODEL_SADX attach_00199C2C = { vertex_00199BE4, normal_00199C08, LengthOfArray<Sint32>(vertex_00199BE4), meshlist_00199BCC, matlist_00199BA4, LengthOfArray<Uint16>(meshlist_00199BCC), LengthOfArray<Uint16>(matlist_00199BA4),{ 0.220935f, -0.109092f, -0.023252f }, 0.763552f, NULL };

NJS_OBJECT object_00199C54 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00199C2C, 556.0768f, -394.8273f, -2909.506f, 0, 0, 0, 1, 1, 1, NULL, &object_00199B70 };

NJS_MATERIAL matlist_00199C88[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_00199C9C[] = {
	0, 1, 2
};

NJS_TEX uv_00199CA4[] = {
	{ 0 },
	{ 14, 246 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_00199CB0[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00199C9C, NULL, NULL, NULL, uv_00199CA4, NULL }
};

NJS_VECTOR vertex_00199CC8[] = {
	{ -1.649526f, 1.040434f, 0.074823f },
	{ -0.844798f, -0.998579f, -0.861901f },
	{ 2.766532f, 0.238105f, 1.020995f }
};

NJS_VECTOR normal_00199CEC[] = {
	{ -0.26669f, -0.487262f, 0.831536f },
	{ -0.26669f, -0.487262f, 0.831536f },
	{ -0.26669f, -0.487262f, 0.831536f }
};

NJS_MODEL_SADX attach_00199D10 = { vertex_00199CC8, normal_00199CEC, LengthOfArray<Sint32>(vertex_00199CC8), meshlist_00199CB0, matlist_00199C88, LengthOfArray<Uint16>(meshlist_00199CB0), LengthOfArray<Uint16>(matlist_00199C88),{ 0.558503f, 0.020927f, 0.079547f }, 2.40035f, NULL };

NJS_OBJECT object_00199D38 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00199D10, 556.1737f, -395.8528f, -2924.649f, 0, 0, 0, 1, 1, 1, NULL, &object_00199C54 };

NJS_MATERIAL matlist_00199D6C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_00199D80[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_00199D8C[] = {
	{ 19, 152 },
	{ 0, 255 },
	{ 255, 138 },
	{ 19, 152 },
	{ 255, 138 },
	{ 175, 0 }
};

NJS_MESHSET_SADX meshlist_00199DA4[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_00199D80, NULL, NULL, NULL, uv_00199D8C, NULL }
};

NJS_VECTOR vertex_00199DBC[] = {
	{ -0.746887f, -0.064117f, -0.275391f },
	{ -0.891418f, -0.4953f, -0.5869139f },
	{ 1.028503f, -0.00885f, 0.339844f },
	{ 0.4328f, 0.573425f, 0.495117f }
};

NJS_VECTOR normal_00199DEC[] = {
	{ -0.269652f, -0.499884f, 0.823045f },
	{ -0.26893f, -0.503202f, 0.8212579f },
	{ -0.269652f, -0.499884f, 0.823045f },
	{ -0.270371f, -0.496558f, 0.824821f }
};

NJS_MODEL_SADX attach_00199E1C = { vertex_00199DBC, normal_00199DEC, LengthOfArray<Sint32>(vertex_00199DBC), meshlist_00199DA4, matlist_00199D6C, LengthOfArray<Uint16>(meshlist_00199DA4), LengthOfArray<Uint16>(matlist_00199D6C),{ 0.068542f, 0.039062f, -0.045898f }, 1.101918f, NULL };

NJS_OBJECT object_00199E44 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00199E1C, 555.4745f, -395.381f, -2900.878f, 0, 0, 0, 1, 1, 1, NULL, &object_00199D38 };

NJS_MATERIAL matlist_00199E78[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_00199E8C[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_00199E98[] = {
	{ 45, 96 },
	{ 0, 255 },
	{ 255, 229 },
	{ 45, 96 },
	{ 255, 229 },
	{ 228, 0 }
};

NJS_MESHSET_SADX meshlist_00199EB0[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_00199E8C, NULL, NULL, NULL, uv_00199E98, NULL }
};

NJS_VECTOR vertex_00199EC8[] = {
	{ -1.03097f, 0.392841f, -0.571484f },
	{ -1.642878f, -0.874968f, -0.007049f },
	{ 1.785075f, -0.66858f, 0.98251f },
	{ 1.430219f, 1.159423f, -0.233298f }
};

NJS_VECTOR normal_00199EF8[] = {
	{ -0.268171f, 0.49688f, 0.825345f },
	{ -0.268171f, 0.49688f, 0.825345f },
	{ -0.268171f, 0.49688f, 0.825345f },
	{ -0.268171f, 0.49688f, 0.825345f }
};

NJS_MODEL_SADX attach_00199F28 = { vertex_00199EC8, normal_00199EF8, LengthOfArray<Sint32>(vertex_00199EC8), meshlist_00199EB0, matlist_00199E78, LengthOfArray<Uint16>(meshlist_00199EB0), LengthOfArray<Uint16>(matlist_00199E78),{ 0.071098f, 0.142228f, 0.205513f }, 1.881875f, NULL };

NJS_OBJECT object_00199F50 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00199F28, 552.1944f, -395.0698f, -2910.62f, 0, 0, 0, 1, 1, 1, NULL, &object_00199E44 };

NJS_MATERIAL matlist_00199F84[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_00199F98[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_00199FA4[] = {
	{ 0, 100 },
	{ 36, 255 },
	{ 199, 189 },
	{ 0, 100 },
	{ 199, 189 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00199FBC[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_00199F98, NULL, NULL, NULL, uv_00199FA4, NULL }
};

NJS_VECTOR vertex_00199FD4[] = {
	{ -0.815491f, 0.268677f, -0.430908f },
	{ -0.536194f, -0.828369f, 0.300537f },
	{ 0.713806f, -0.366455f, 0.475342f },
	{ 1.141156f, 0.980957f, -0.226951f }
};

NJS_VECTOR normal_0019A004[] = {
	{ -0.28181f, 0.494582f, 0.822175f },
	{ -0.292418f, 0.477845f, 0.8283449f },
	{ -0.28181f, 0.494582f, 0.822175f },
	{ -0.271081f, 0.511107f, 0.81565f }
};

NJS_MODEL_SADX attach_0019A034 = { vertex_00199FD4, normal_0019A004, LengthOfArray<Sint32>(vertex_00199FD4), meshlist_00199FBC, matlist_00199F84, LengthOfArray<Uint16>(meshlist_00199FBC), LengthOfArray<Uint16>(matlist_00199F84),{ 0.162833f, 0.076294f, 0.022217f }, 1.078173f, NULL };

NJS_OBJECT object_0019A05C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019A034, 567.6545f, -395.4119f, -2899.076f, 0, 0, 0, 1, 1, 1, NULL, &object_00199F50 };

NJS_MATERIAL matlist_0019A090[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019A0A4[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019A0B0[] = {
	{ 0 },
	{ 14, 253 },
	{ 255, 255 },
	{ 0 },
	{ 255, 255 },
	{ 199, 23 }
};

NJS_MESHSET_SADX meshlist_0019A0C8[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019A0A4, NULL, NULL, NULL, uv_0019A0B0, NULL }
};

NJS_VECTOR vertex_0019A0E0[] = {
	{ -1.528259f, 0.859253f, -1.016113f },
	{ -1.342712f, -0.733887f, 0.031738f },
	{ 1.768616f, -0.744507f, 1.025391f },
	{ 1.049866f, 0.710571f, -0.101562f }
};

NJS_VECTOR normal_0019A110[] = {
	{ -0.261194f, 0.507942f, 0.820837f },
	{ -0.260247f, 0.509244f, 0.820331f },
	{ -0.261194f, 0.507942f, 0.820837f },
	{ -0.26214f, 0.5066389f, 0.82134f }
};

NJS_MODEL_SADX attach_0019A140 = { vertex_0019A0E0, normal_0019A110, LengthOfArray<Sint32>(vertex_0019A0E0), meshlist_0019A0C8, matlist_0019A090, LengthOfArray<Uint16>(meshlist_0019A0C8), LengthOfArray<Uint16>(matlist_0019A090),{ 0.120178f, 0.057373f, 0.004639f }, 1.938886f, NULL };

NJS_OBJECT object_0019A168 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019A140, 560.0934f, -395.2778f, -2915.38f, 0, 0, 0, 1, 1, 1, NULL, &object_0019A05C };

NJS_MATERIAL matlist_0019A19C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019A1B0[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019A1BC[] = {
	{ 0, 85 },
	{ 40, 255 },
	{ 228, 250 },
	{ 0, 85 },
	{ 228, 250 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0019A1D4[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019A1B0, NULL, NULL, NULL, uv_0019A1BC, NULL }
};

NJS_VECTOR vertex_0019A1EC[] = {
	{ -2.223877f, 0.480957f, -0.959961f },
	{ -1.642878f, -0.874968f, -0.007049f },
	{ 1.049561f, -0.842529f, 0.739258f },
	{ 1.430219f, 1.159423f, -0.233298f }
};

NJS_VECTOR normal_0019A21C[] = {
	{ -0.246678f, 0.474647f, 0.844903f },
	{ -0.238624f, 0.487856f, 0.8396749f },
	{ -0.246678f, 0.474647f, 0.844903f },
	{ -0.254667f, 0.46131f, 0.849905f }
};

NJS_MODEL_SADX attach_0019A24C = { vertex_0019A1EC, normal_0019A21C, LengthOfArray<Sint32>(vertex_0019A1EC), meshlist_0019A1D4, matlist_0019A19C, LengthOfArray<Uint16>(meshlist_0019A1D4), LengthOfArray<Uint16>(matlist_0019A19C),{ -0.396829f, 0.142228f, -0.110352f }, 2.014937f, NULL };

NJS_OBJECT object_0019A274 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019A24C, 559.1699f, -396.0278f, -2919.576f, 0, 0, 0, 1, 1, 1, NULL, &object_0019A168 };

NJS_MATERIAL matlist_0019A2A8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019A2BC[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019A2C8[] = {
	{ 0, 61 },
	{ 37, 239 },
	{ 255, 255 },
	{ 0, 61 },
	{ 255, 255 },
	{ 205, 0 }
};

NJS_MESHSET_SADX meshlist_0019A2E0[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019A2BC, NULL, NULL, NULL, uv_0019A2C8, NULL }
};

NJS_VECTOR vertex_0019A2F8[] = {
	{ -1.991028f, 0.557526f, -0.363037f },
	{ -1.403137f, -0.611877f, -0.85083f },
	{ 2.005066f, -0.713074f, 0.179443f },
	{ 1.233582f, 0.962311f, 0.949951f }
};

NJS_VECTOR normal_0019A328[] = {
	{ -0.268921f, -0.492332f, 0.827823f },
	{ -0.266593f, -0.482139f, 0.834548f },
	{ -0.268921f, -0.492332f, 0.827823f },
	{ -0.271208f, -0.502449f, 0.82097f }
};

NJS_MODEL_SADX attach_0019A358 = { vertex_0019A2F8, normal_0019A328, LengthOfArray<Sint32>(vertex_0019A2F8), meshlist_0019A2E0, matlist_0019A2A8, LengthOfArray<Uint16>(meshlist_0019A2E0), LengthOfArray<Uint16>(matlist_0019A2A8),{ 0.007019f, 0.124619f, 0.049561f }, 2.191551f, NULL };

NJS_OBJECT object_0019A380 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019A358, 552.1112f, -395.3383f, -2908.056f, 0, 0, 0, 1, 1, 1, NULL, &object_0019A274 };

NJS_MATERIAL matlist_0019A3B4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019A3C8[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019A3D4[] = {
	{ 31, 0 },
	{ 0, 255 },
	{ 178, 213 },
	{ 31, 0 },
	{ 178, 213 },
	{ 255, 51 }
};

NJS_MESHSET_SADX meshlist_0019A3EC[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019A3C8, NULL, NULL, NULL, uv_0019A3D4, NULL }
};

NJS_VECTOR vertex_0019A404[] = {
	{ -1.339564f, 0.629322f, -0.804882f },
	{ -1.951472f, -0.638487f, -0.240447f },
	{ 1.476481f, -0.432099f, 0.749111f },
	{ 2.947205f, 0.37204f, 0.724121f }
};

NJS_VECTOR normal_0019A434[] = {
	{ -0.265429f, 0.501426f, 0.82348f },
	{ -0.268171f, 0.49688f, 0.825345f },
	{ -0.265429f, 0.501426f, 0.82348f },
	{ -0.262678f, 0.505955f, 0.8215899f }
};

NJS_MODEL_SADX attach_0019A464 = { vertex_0019A404, normal_0019A434, LengthOfArray<Sint32>(vertex_0019A404), meshlist_0019A3EC, matlist_0019A3B4, LengthOfArray<Uint16>(meshlist_0019A3EC), LengthOfArray<Uint16>(matlist_0019A3B4),{ 0.497866f, -0.004583f, -0.027885f }, 2.569623f, NULL };

NJS_OBJECT object_0019A48C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019A464, 575.6242f, -394.9664f, -2903.043f, 0, 0, 0, 1, 1, 1, NULL, &object_0019A380 };

NJS_MATERIAL matlist_0019A4C0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019A4D4[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019A4E0[] = {
	{ 0, 14 },
	{ 151, 255 },
	{ 255, 209 },
	{ 0, 14 },
	{ 255, 209 },
	{ 127, 0 }
};

NJS_MESHSET_SADX meshlist_0019A4F8[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019A4D4, NULL, NULL, NULL, uv_0019A4E0, NULL }
};

NJS_VECTOR vertex_0019A510[] = {
	{ -1.050232f, 0.66391f, 0.056641f },
	{ 0.148987f, -0.761871f, -0.41748f },
	{ 0.969299f, -0.492493f, 0.02832f },
	{ -0.040466f, 0.747528f, 0.432617f }
};

NJS_VECTOR normal_0019A540[] = {
	{ -0.273233f, -0.497336f, 0.8234079f },
	{ -0.277957f, -0.5054269f, 0.816874f },
	{ -0.273233f, -0.497336f, 0.8234079f },
	{ -0.268472f, -0.48918f, 0.829835f }
};

NJS_MODEL_SADX attach_0019A570 = { vertex_0019A510, normal_0019A540, LengthOfArray<Sint32>(vertex_0019A510), meshlist_0019A4F8, matlist_0019A4C0, LengthOfArray<Uint16>(meshlist_0019A4F8), LengthOfArray<Uint16>(matlist_0019A4C0),{ -0.040466f, -0.007172f, 0.007568f }, 1.095579f, NULL };

NJS_OBJECT object_0019A598 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019A570, 570.4844f, -395.3948f, -2891.017f, 0, 0, 0, 1, 1, 1, NULL, &object_0019A48C };

NJS_MATERIAL matlist_0019A5CC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019A5E0[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019A5EC[] = {
	{ 0 },
	{ 86, 170 },
	{ 255, 255 },
	{ 0 },
	{ 255, 255 },
	{ 179, 68 }
};

NJS_MESHSET_SADX meshlist_0019A604[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019A5E0, NULL, NULL, NULL, uv_0019A5EC, NULL }
};

NJS_VECTOR vertex_0019A61C[] = {
	{ -2.657349f, 1.570251f, 0.084229f },
	{ -0.903442f, -0.348053f, -0.484131f },
	{ 2.494995f, -1.298401f, 0.019287f },
	{ 0.975464f, 0.804688f, 0.773682f }
};

NJS_VECTOR normal_0019A64C[] = {
	{ -0.260062f, -0.485983f, 0.834379f },
	{ -0.259264f, -0.484573f, 0.835447f },
	{ -0.260062f, -0.485983f, 0.834379f },
	{ -0.26086f, -0.487392f, 0.833308f }
};

NJS_MODEL_SADX attach_0019A67C = { vertex_0019A61C, normal_0019A64C, LengthOfArray<Sint32>(vertex_0019A61C), meshlist_0019A604, matlist_0019A5CC, LengthOfArray<Uint16>(meshlist_0019A604), LengthOfArray<Uint16>(matlist_0019A5CC),{ -0.081177f, 0.135925f, 0.144775f }, 2.651827f, NULL };

NJS_OBJECT object_0019A6A4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019A67C, 569.1892f, -395.2914f, -2903.665f, 0, 0, 0, 1, 1, 1, NULL, &object_0019A598 };

NJS_MATERIAL matlist_0019A6D8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019A6EC[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019A6F8[] = {
	{ 28, 69 },
	{ 0, 174 },
	{ 255, 255 },
	{ 28, 69 },
	{ 255, 255 },
	{ 153, 0 }
};

NJS_MESHSET_SADX meshlist_0019A710[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019A6EC, NULL, NULL, NULL, uv_0019A6F8, NULL }
};

NJS_VECTOR vertex_0019A728[] = {
	{ -1.225586f, 0.5536799f, -0.060059f },
	{ -1.618164f, -0.296936f, -0.724121f },
	{ 1.881836f, -0.956177f, 0.025879f },
	{ 0.483398f, 1.120789f, 0.838379f }
};

NJS_VECTOR normal_0019A758[] = {
	{ -0.268734f, -0.5064459f, 0.819326f },
	{ -0.271072f, -0.511479f, 0.81542f },
	{ -0.268734f, -0.5064459f, 0.819326f },
	{ -0.266384f, -0.501389f, 0.823194f }
};

NJS_MODEL_SADX attach_0019A788 = { vertex_0019A728, normal_0019A758, LengthOfArray<Sint32>(vertex_0019A728), meshlist_0019A710, matlist_0019A6D8, LengthOfArray<Uint16>(meshlist_0019A710), LengthOfArray<Uint16>(matlist_0019A6D8),{ 0.131836f, 0.082306f, 0.057129f }, 1.916469f, NULL };

NJS_OBJECT object_0019A7B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019A788, 560.9079f, -395.4217f, -2912.587f, 0, 0, 0, 1, 1, 1, NULL, &object_0019A6A4 };

NJS_MATERIAL matlist_0019A7E4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019A7F8[] = {
	1, 2, 3,
	1, 3, 0
};

NJS_TEX uv_0019A804[] = {
	{ 146, 105 },
	{ 255, 255 },
	{ 171, 0 },
	{ 146, 105 },
	{ 171, 0 },
	{ 0, 98 }
};

NJS_MESHSET_SADX meshlist_0019A81C[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019A7F8, NULL, NULL, NULL, uv_0019A804, NULL }
};

NJS_VECTOR vertex_0019A834[] = {
	{ -2.066833f, -0.142303f, -0.757324f },
	{ -0.191833f, -0.195984f, -0.14209f },
	{ 1.194885f, -1.3349f, -0.387695f },
	{ 0.12262f, 0.6090389f, 0.404785f }
};

NJS_VECTOR normal_0019A864[] = {
	{ -0.288936f, -0.458174f, 0.8405899f },
	{ -0.266204f, -0.468344f, 0.84249f },
	{ -0.243306f, -0.478222f, 0.843864f },
	{ -0.266204f, -0.468344f, 0.84249f }
};

NJS_MODEL_SADX attach_0019A894 = { vertex_0019A834, normal_0019A864, LengthOfArray<Sint32>(vertex_0019A834), meshlist_0019A81C, matlist_0019A7E4, LengthOfArray<Uint16>(meshlist_0019A81C), LengthOfArray<Uint16>(matlist_0019A7E4),{ -0.435974f, -0.36293f, -0.17627f }, 1.731279f, NULL };

NJS_OBJECT object_0019A8BC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019A894, 575.8175f, -394.9003f, -2901.284f, 0, 0, 0, 1, 1, 1, NULL, &object_0019A7B0 };

NJS_MATERIAL matlist_0019A8F0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019A904[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019A910[] = {
	{ 47, 42 },
	{ 0, 255 },
	{ 233, 244 },
	{ 47, 42 },
	{ 233, 244 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0019A928[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019A904, NULL, NULL, NULL, uv_0019A910, NULL }
};

NJS_VECTOR vertex_0019A940[] = {
	{ -0.59906f, 0.697113f, -0.594238f },
	{ -0.958435f, -0.88269f, 0.234863f },
	{ 0.792725f, -0.803925f, 0.741211f },
	{ 0.957764f, 1.015839f, -0.301758f }
};

NJS_VECTOR normal_0019A970[] = {
	{ -0.259701f, 0.496243f, 0.828431f },
	{ -0.261883f, 0.494524f, 0.8287719f },
	{ -0.259701f, 0.496243f, 0.828431f },
	{ -0.257518f, 0.497958f, 0.828083f }
};

NJS_MODEL_SADX attach_0019A9A0 = { vertex_0019A940, normal_0019A970, LengthOfArray<Sint32>(vertex_0019A940), meshlist_0019A928, matlist_0019A8F0, LengthOfArray<Uint16>(meshlist_0019A928), LengthOfArray<Uint16>(matlist_0019A8F0),{ -0.000336f, 0.066574f, 0.07348599f }, 1.167823f, NULL };

NJS_OBJECT object_0019A9C8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019A9A0, 576.9532f, -395.2831f, -2897.342f, 0, 0, 0, 1, 1, 1, NULL, &object_0019A8BC };

NJS_MATERIAL matlist_0019A9FC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019AA10[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019AA1C[] = {
	{ 0 },
	{ 43, 220 },
	{ 255, 255 },
	{ 0 },
	{ 255, 255 },
	{ 135, 9 }
};

NJS_MESHSET_SADX meshlist_0019AA34[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019AA10, NULL, NULL, NULL, uv_0019AA1C, NULL }
};

NJS_VECTOR vertex_0019AA4C[] = {
	{ -1.883301f, 0.858582f, -1.123047f },
	{ -1.057129f, -0.6402889f, 0.07763699f },
	{ 2.993652f, -0.876404f, 1.524414f },
	{ 0.705811f, 0.795013f, -0.258789f }
};

NJS_VECTOR normal_0019AA7C[] = {
	{ -0.261243f, 0.513186f, 0.817553f },
	{ -0.26256f, 0.510963f, 0.818523f },
	{ -0.261243f, 0.513186f, 0.817553f },
	{ -0.259923f, 0.515406f, 0.8165759f }
};

NJS_MODEL_SADX attach_0019AAAC = { vertex_0019AA4C, normal_0019AA7C, LengthOfArray<Sint32>(vertex_0019AA4C), meshlist_0019AA34, matlist_0019A9FC, LengthOfArray<Uint16>(meshlist_0019AA34), LengthOfArray<Uint16>(matlist_0019A9FC),{ 0.555176f, -0.008911f, 0.200684f }, 2.774605f, NULL };

NJS_OBJECT object_0019AAD4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019AAAC, 545.9078f, -395.2675f, -2899.998f, 0, 0, 0, 1, 1, 1, NULL, &object_0019A9C8 };

NJS_MATERIAL matlist_0019AB08[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019AB1C[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019AB28[] = {
	{ 0, 35 },
	{ 69, 255 },
	{ 255, 113 },
	{ 0, 35 },
	{ 255, 113 },
	{ 177, 0 }
};

NJS_MESHSET_SADX meshlist_0019AB40[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019AB1C, NULL, NULL, NULL, uv_0019AB28, NULL }
};

NJS_VECTOR vertex_0019AB58[] = {
	{ -1.400574f, 1.012146f, 0.144775f },
	{ -0.527527f, -2.09256f, -1.466064f },
	{ 1.800598f, -0.08645599f, 0.50708f },
	{ 0.8259889f, 1.513672f, 1.19458f }
};

NJS_VECTOR normal_0019AB88[] = {
	{ -0.266954f, -0.507735f, 0.81911f },
{ -0.265381f, -0.501776f, 0.8232819f },
	{ -0.266954f, -0.507735f, 0.81911f },
	{ -0.268512f, -0.513667f, 0.814891f }
};

NJS_MODEL_SADX attach_0019ABB8 = { vertex_0019AB58, normal_0019AB88, LengthOfArray<Sint32>(vertex_0019AB58), meshlist_0019AB40, matlist_0019AB08, LengthOfArray<Uint16>(meshlist_0019AB40), LengthOfArray<Uint16>(matlist_0019AB08),{ 0.200012f, -0.289444f, -0.135742f }, 2.240755f, NULL };

NJS_OBJECT object_0019ABE0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019ABB8, 572.8212f, -394.5045f, -2895.849f, 0, 0, 0, 1, 1, 1, NULL, &object_0019AAD4 };

NJS_MATERIAL matlist_0019AC14[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019AC28[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019AC34[] = {
	{ 5, 0 },
	{ 0, 227 },
	{ 255, 255 },
	{ 5, 0 },
	{ 255, 255 },
	{ 248, 43 }
};

NJS_MESHSET_SADX meshlist_0019AC4C[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019AC28, NULL, NULL, NULL, uv_0019AC34, NULL }
};

NJS_VECTOR vertex_0019AC64[] = {
	{ -3.029236f, 0.628418f, -0.616699f },
	{ -3.169861f, -0.391724f, -1.262695f },
	{ 3.142639f, -0.514648f, 0.730469f },
	{ 2.988342f, 0.431763f, 1.202637f }
};

NJS_VECTOR normal_0019AC94[] = {
	{ -0.270814f, -0.476372f, 0.836498f },
	{ -0.271449f, -0.487923f, 0.829607f },
	{ -0.270814f, -0.476372f, 0.836498f },
	{ -0.27013f, -0.464735f, 0.8432389f }
};

NJS_MODEL_SADX attach_0019ACC4 = { vertex_0019AC64, normal_0019AC94, LengthOfArray<Sint32>(vertex_0019AC64), meshlist_0019AC4C, matlist_0019AC14, LengthOfArray<Uint16>(meshlist_0019AC4C), LengthOfArray<Uint16>(matlist_0019AC14),{ -0.013611f, 0.056885f, -0.030029f }, 3.388418f, NULL };

NJS_OBJECT object_0019ACEC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019ACC4, 556.5358f, -395.6027f, -2907.984f, 0, 0, 0, 1, 1, 1, NULL, &object_0019ABE0 };

NJS_MATERIAL matlist_0019AD20[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019AD34[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019AD40[] = {
	{ 119, 142 },
	{ 0, 255 },
	{ 255, 168 },
	{ 119, 142 },
	{ 255, 168 },
	{ 153, 0 }
};

NJS_MESHSET_SADX meshlist_0019AD58[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019AD34, NULL, NULL, NULL, uv_0019AD40, NULL }
};

NJS_VECTOR vertex_0019AD70[] = {
	{ -0.720825f, 0.052399f, -0.179199f },
	{ -2.946589f, -1.043486f, -0.263885f },
	{ 1.816284f, -0.19516f, 0.840332f },
	{ -0.074341f, 1.444885f, -0.822266f }
};

NJS_VECTOR normal_0019ADA0[] = {
	{ -0.278914f, 0.505128f, 0.8167329f },
	{ -0.279254f, 0.504012f, 0.817306f },
	{ -0.278914f, 0.505128f, 0.8167329f },
	{ -0.278574f, 0.5062439f, 0.816158f }
};

NJS_MODEL_SADX attach_0019ADD0 = { vertex_0019AD70, normal_0019ADA0, LengthOfArray<Sint32>(vertex_0019AD70), meshlist_0019AD58, matlist_0019AD20, LengthOfArray<Uint16>(meshlist_0019AD58), LengthOfArray<Uint16>(matlist_0019AD20),{ -0.5651529f, 0.2007f, 0.009032999f }, 2.522362f, NULL };

NJS_OBJECT object_0019ADF8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019ADD0, 559.0266f, -395.5046f, -2901.926f, 0, 0, 0, 1, 1, 1, NULL, &object_0019ACEC };

NJS_MATERIAL matlist_0019AE2C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019AE40[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019AE4C[] = {
	{ 0 },
	{ 35, 240 },
	{ 179, 255 },
	{ 0 },
	{ 179, 255 },
	{ 255, 150 }
};

NJS_MESHSET_SADX meshlist_0019AE64[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019AE40, NULL, NULL, NULL, uv_0019AE4C, NULL }
};

NJS_VECTOR vertex_0019AE7C[] = {
	{ -2.544678f, 1.149719f, -1.497559f },
	{ -1.7146f, -0.643677f, -0.169922f },
	{ 1.688232f, -0.74881f, 0.9931639f },
	{ 3.4729f, 0.030975f, 1.119629f }
};

NJS_VECTOR normal_0019AEAC[] = {
	{ -0.269751f, 0.487784f, 0.830242f },
	{ -0.268381f, 0.489835f, 0.829478f },
	{ -0.269751f, 0.487784f, 0.830242f },
	{ -0.271119f, 0.485729f, 0.831001f }
};

NJS_MODEL_SADX attach_0019AEDC = { vertex_0019AE7C, normal_0019AEAC, LengthOfArray<Sint32>(vertex_0019AE7C), meshlist_0019AE64, matlist_0019AE2C, LengthOfArray<Uint16>(meshlist_0019AE64), LengthOfArray<Uint16>(matlist_0019AE2C),{ 0.464111f, 0.200455f, -0.188965f }, 3.281041f, NULL };

NJS_OBJECT object_0019AF04 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019AEDC, 562.6469f, -395.5095f, -2908.121f, 0, 0, 0, 1, 1, 1, NULL, &object_0019ADF8 };

NJS_MATERIAL matlist_0019AF38[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019AF4C[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019AF58[] = {
	{ 0 },
	{ 48, 200 },
	{ 137, 255 },
	{ 0 },
	{ 137, 255 },
	{ 255, 18 }
};

NJS_MESHSET_SADX meshlist_0019AF70[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019AF4C, NULL, NULL, NULL, uv_0019AF58, NULL }
};

NJS_VECTOR vertex_0019AF88[] = {
	{ -3.514526f, 0.793762f, -1.592529f },
	{ -1.774658f, -0.515747f, -0.255859f },
	{ 1.397583f, -0.869354f, 0.942139f },
	{ 5.600708f, 0.670563f, 1.412354f }
};

NJS_VECTOR normal_0019AFB8[] = {
	{ -0.26238f, 0.491043f, 0.830682f },
	{ -0.255727f, 0.502964f, 0.825609f },
	{ -0.26238f, 0.491043f, 0.830682f },
	{ -0.268978f, 0.479018f, 0.835579f }
};

NJS_MODEL_SADX attach_0019AFE8 = { vertex_0019AF88, normal_0019AFB8, LengthOfArray<Sint32>(vertex_0019AF88), meshlist_0019AF70, matlist_0019AF38, LengthOfArray<Uint16>(meshlist_0019AF70), LengthOfArray<Uint16>(matlist_0019AF38),{ 1.043091f, -0.037796f, -0.09008799f }, 4.798875f, NULL };

NJS_OBJECT object_0019B010 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019AFE8, 557.8863f, -394.8954f, -2897.491f, 0, 0, 0, 1, 1, 1, NULL, &object_0019AF04 };

NJS_MATERIAL matlist_0019B044[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019B058[] = {
	0, 1, 2
};

NJS_TEX uv_0019B060[] = {
	{ 0 },
	{ 130, 255 },
	{ 255, 60 }
};

NJS_MESHSET_SADX meshlist_0019B06C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019B058, NULL, NULL, NULL, uv_0019B060, NULL }
};

NJS_VECTOR vertex_0019B084[] = {
	{ -1.529311f, 0.296577f, -0.6805069f },
	{ 0.027191f, -0.655401f, 0.411125f },
	{ 1.448963f, 0.514767f, 0.156344f }
};

NJS_VECTOR normal_0019B0A8[] = {
	{ -0.267662f, 0.5040089f, 0.8211769f },
	{ -0.267662f, 0.5040089f, 0.8211769f },
	{ -0.267662f, 0.5040089f, 0.8211769f }
};

NJS_MODEL_SADX attach_0019B0CC = { vertex_0019B084, normal_0019B0A8, LengthOfArray<Sint32>(vertex_0019B084), meshlist_0019B06C, matlist_0019B044, LengthOfArray<Uint16>(meshlist_0019B06C), LengthOfArray<Uint16>(matlist_0019B044),{ -0.040174f, -0.07031699f, -0.134691f }, 1.586f, NULL };

NJS_OBJECT object_0019B0F4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019B0CC, 584.0178f, -396.0811f, -2917.745f, 0, 0, 0, 1, 1, 1, NULL, &object_0019B010 };

NJS_MATERIAL matlist_0019B128[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019B13C[] = {
	0, 1, 2
};

NJS_TEX uv_0019B144[] = {
	{ 0 },
	{ 255, 254 },
	{ 230, 29 }
};

NJS_MESHSET_SADX meshlist_0019B150[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019B13C, NULL, NULL, NULL, uv_0019B144, NULL }
};

NJS_VECTOR vertex_0019B168[] = {
	{ -1.12304f, 0.150621f, -0.282077f },
	{ 0.634757f, -0.502588f, -0.083495f },
	{ 0.201168f, 0.501393f, 0.367913f }
};

NJS_VECTOR normal_0019B18C[] = {
	{ -0.275727f, -0.490709f, 0.826547f },
	{ -0.275727f, -0.490709f, 0.826547f },
	{ -0.275727f, -0.490709f, 0.826547f }
};

NJS_MODEL_SADX attach_0019B1B0 = { vertex_0019B168, normal_0019B18C, LengthOfArray<Sint32>(vertex_0019B168), meshlist_0019B150, matlist_0019B128, LengthOfArray<Uint16>(meshlist_0019B150), LengthOfArray<Uint16>(matlist_0019B128),{ -0.244141f, -0.000598f, 0.042918f }, 0.937054f, NULL };

NJS_OBJECT object_0019B1D8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019B1B0, 564.7723f, -394.9647f, -2911.042f, 0, 0, 0, 1, 1, 1, NULL, &object_0019B0F4 };

NJS_MATERIAL matlist_0019B20C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019B220[] = {
	0, 1, 2
};

NJS_TEX uv_0019B228[] = {
	{ 0, 68 },
	{ 208, 255 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0019B234[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019B220, NULL, NULL, NULL, uv_0019B228, NULL }
};

NJS_VECTOR vertex_0019B24C[] = {
	{ -1.197041f, 0.095102f, -0.457476f },
	{ 0.476846f, -1.093897f, 0.781619f },
	{ 0.773617f, 0.955373f, -0.361369f }
};

NJS_VECTOR normal_0019B270[] = {
	{ -0.258116f, 0.498845f, 0.827363f },
	{ -0.258116f, 0.498845f, 0.827363f },
	{ -0.258116f, 0.498845f, 0.827363f }
};

NJS_MODEL_SADX attach_0019B294 = { vertex_0019B24C, normal_0019B270, LengthOfArray<Sint32>(vertex_0019B24C), meshlist_0019B234, matlist_0019B20C, LengthOfArray<Uint16>(meshlist_0019B234), LengthOfArray<Uint16>(matlist_0019B20C),{ -0.211712f, -0.069262f, 0.162072f }, 1.197428f, NULL };

NJS_OBJECT object_0019B2BC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019B294, 563.0472f, -395.1972f, -2925.104f, 0, 0, 0, 1, 1, 1, NULL, &object_0019B1D8 };

NJS_MATERIAL matlist_0019B2F0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019B304[] = {
	0, 1, 2
};

NJS_TEX uv_0019B30C[] = {
	{ 0 },
	{ 162, 254 },
	{ 255, 190 }
};

NJS_MESHSET_SADX meshlist_0019B318[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019B304, NULL, NULL, NULL, uv_0019B30C, NULL }
};

NJS_VECTOR vertex_0019B330[] = {
	{ -2.516392f, 0.993834f, -0.240098f },
	{ 0.329277f, -0.8600709f, -0.422881f },
	{ 1.342968f, 0.25997f, 0.5775779f }
};

NJS_VECTOR normal_0019B354[] = {
	{ -0.269137f, -0.494592f, 0.826405f },
	{ -0.269137f, -0.494592f, 0.826405f },
	{ -0.269137f, -0.494592f, 0.826405f }
};

NJS_MODEL_SADX attach_0019B378 = { vertex_0019B330, normal_0019B354, LengthOfArray<Sint32>(vertex_0019B330), meshlist_0019B318, matlist_0019B2F0, LengthOfArray<Uint16>(meshlist_0019B318), LengthOfArray<Uint16>(matlist_0019B2F0),{ -0.5867119f, 0.06688099f, 0.077349f }, 1.993474f, NULL };

NJS_OBJECT object_0019B3A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019B378, 572.6773f, -395.3734f, -2914.855f, 0, 0, 0, 1, 1, 1, NULL, &object_0019B2BC };

NJS_MATERIAL matlist_0019B3D4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019B3E8[] = {
	0, 1, 2
};

NJS_TEX uv_0019B3F0[] = {
	{ 0 },
	{ 132, 255 },
	{ 255, 93 }
};

NJS_MESHSET_SADX meshlist_0019B3FC[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019B3E8, NULL, NULL, NULL, uv_0019B3F0, NULL }
};

NJS_VECTOR vertex_0019B414[] = {
	{ -1.733189f, 0.791624f, -0.09012999f },
	{ 0.299982f, -0.969326f, -0.489672f },
	{ 1.169153f, 0.967667f, 0.974924f }
};

NJS_VECTOR normal_0019B438[] = {
	{ -0.271454f, -0.500007f, 0.822378f },
	{ -0.271454f, -0.500007f, 0.822378f },
	{ -0.271454f, -0.500007f, 0.822378f }
};

NJS_MODEL_SADX attach_0019B45C = { vertex_0019B414, normal_0019B438, LengthOfArray<Sint32>(vertex_0019B414), meshlist_0019B3FC, matlist_0019B3D4, LengthOfArray<Uint16>(meshlist_0019B3FC), LengthOfArray<Uint16>(matlist_0019B3D4),{ -0.282018f, -0.000829f, 0.242626f }, 1.625473f, NULL };

NJS_OBJECT object_0019B484 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019B45C, 568.4465f, -395.6676f, -2916.431f, 0, 0, 0, 1, 1, 1, NULL, &object_0019B3A0 };

NJS_MATERIAL matlist_0019B4B8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019B4CC[] = {
	0, 1, 2
};

NJS_TEX uv_0019B4D4[] = {
	{ 0, 23 },
	{ 255, 254 },
	{ 235, 0 }
};

NJS_MESHSET_SADX meshlist_0019B4E0[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019B4CC, NULL, NULL, NULL, uv_0019B4D4, NULL }
};

NJS_VECTOR vertex_0019B4F8[] = {
	{ -2.162656f, 0.178883f, -0.813804f },
	{ 1.233795f, -0.964188f, 0.9806409f },
	{ 0.91544f, 0.871514f, -0.241138f }
};

NJS_VECTOR normal_0019B51C[] = {
	{ -0.26603f, 0.501702f, 0.823118f },
	{ -0.26603f, 0.501702f, 0.823118f },
	{ -0.26603f, 0.501702f, 0.823118f }
};

NJS_MODEL_SADX attach_0019B540 = { vertex_0019B4F8, normal_0019B51C, LengthOfArray<Sint32>(vertex_0019B4F8), meshlist_0019B4E0, matlist_0019B4B8, LengthOfArray<Uint16>(meshlist_0019B4E0), LengthOfArray<Uint16>(matlist_0019B4B8),{ -0.46443f, -0.046337f, 0.083419f }, 1.920683f, NULL };

NJS_OBJECT object_0019B568 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019B540, 554.6558f, -395.0672f, -2903.512f, 0, 0, 0, 1, 1, 1, NULL, &object_0019B484 };

NJS_MATERIAL matlist_0019B59C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019B5B0[] = {
	0, 1, 2
};

NJS_TEX uv_0019B5B8[] = {
	{ 0 },
	{ 15, 255 },
	{ 255, 46 }
};

NJS_MESHSET_SADX meshlist_0019B5C4[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019B5B0, NULL, NULL, NULL, uv_0019B5B8, NULL }
};

NJS_VECTOR vertex_0019B5DC[] = {
	{ -0.684292f, 0.675146f, -0.442235f },
	{ -0.464637f, -1.104056f, 0.426923f },
	{ 1.092417f, 0.58525f, 0.008951f }
};

NJS_VECTOR normal_0019B600[] = {
	{ -0.205103f, 0.409045f, 0.889165f },
	{ -0.205103f, 0.409045f, 0.889165f },
	{ -0.205103f, 0.409045f, 0.889165f }
};

NJS_MODEL_SADX attach_0019B624 = { vertex_0019B5DC, normal_0019B600, LengthOfArray<Sint32>(vertex_0019B5DC), meshlist_0019B5C4, matlist_0019B59C, LengthOfArray<Uint16>(meshlist_0019B5C4), LengthOfArray<Uint16>(matlist_0019B59C),{ 0.204063f, -0.214455f, -0.007656f }, 0.990073f, NULL };

NJS_OBJECT object_0019B64C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019B624, 573.3323f, -395.0158f, -2904.881f, 0, 0, 0, 1, 1, 1, NULL, &object_0019B568 };

NJS_MATERIAL matlist_0019B680[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019B694[] = {
	0, 1, 2
};

NJS_TEX uv_0019B69C[] = {
	{ 7, 0 },
	{ 0, 255 },
	{ 255, 91 }
};

NJS_MESHSET_SADX meshlist_0019B6A8[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019B694, NULL, NULL, NULL, uv_0019B69C, NULL }
};

NJS_VECTOR vertex_0019B6C0[] = {
	{ -0.464587f, 0.409525f, 0.097358f },
	{ -0.197031f, -0.6796359f, -0.46991f },
	{ 0.8186229f, 0.454585f, 0.533108f }
};

NJS_VECTOR normal_0019B6E4[] = {
	{ -0.263594f, -0.495741f, 0.827502f },
	{ -0.263594f, -0.495741f, 0.827502f },
	{ -0.263594f, -0.495741f, 0.827502f }
};

NJS_MODEL_SADX attach_0019B708 = { vertex_0019B6C0, normal_0019B6E4, LengthOfArray<Sint32>(vertex_0019B6C0), meshlist_0019B6A8, matlist_0019B680, LengthOfArray<Uint16>(meshlist_0019B6A8), LengthOfArray<Uint16>(matlist_0019B680),{ 0.177018f, -0.112526f, 0.031599f }, 0.814397f, NULL };

NJS_OBJECT object_0019B730 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019B708, 570.1222f, -394.8038f, -2901.925f, 0, 0, 0, 1, 1, 1, NULL, &object_0019B64C };

NJS_MATERIAL matlist_0019B764[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019B778[] = {
	0, 1, 2
};

NJS_TEX uv_0019B780[] = {
	{ 0, 64 },
	{ 47, 254 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0019B78C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019B778, NULL, NULL, NULL, uv_0019B780, NULL }
};

NJS_VECTOR vertex_0019B7A4[] = {
	{ -0.219014f, 0.183919f, 0.034096f },
	{ 0.120823f, -0.636664f, -0.354646f },
	{ 0.208775f, 0.670501f, 0.47013f }
};

NJS_VECTOR normal_0019B7C8[] = {
	{ -0.268675f, -0.5010059f, 0.822683f },
	{ -0.268675f, -0.5010059f, 0.822683f },
	{ -0.268675f, -0.5010059f, 0.822683f }
};

NJS_MODEL_SADX attach_0019B7EC = { vertex_0019B7A4, normal_0019B7C8, LengthOfArray<Sint32>(vertex_0019B7A4), meshlist_0019B78C, matlist_0019B764, LengthOfArray<Uint16>(meshlist_0019B78C), LengthOfArray<Uint16>(matlist_0019B764),{ -0.005119f, 0.016919f, 0.057742f }, 0.772853f, NULL };

NJS_OBJECT object_0019B814 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019B7EC, 564.0319f, -395.1292f, -2921.696f, 0, 0, 0, 1, 1, 1, NULL, &object_0019B730 };

NJS_MATERIAL matlist_0019B848[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019B85C[] = {
	0, 1, 2
};

NJS_TEX uv_0019B864[] = {
	{ 48, 0 },
	{ 0, 255 },
	{ 255, 77 }
};

NJS_MESHSET_SADX meshlist_0019B870[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019B85C, NULL, NULL, NULL, uv_0019B864, NULL }
};

NJS_VECTOR vertex_0019B888[] = {
	{ -0.635923f, 0.740925f, -0.664271f },
	{ -1.479662f, -1.029726f, 0.150212f },
	{ 3.209754f, 0.891337f, 0.476838f }
};

NJS_VECTOR normal_0019B8AC[] = {
	{ -0.263753f, 0.5039999f, 0.8224469f },
	{ -0.263753f, 0.5039999f, 0.8224469f },
	{ -0.263753f, 0.5039999f, 0.8224469f }
};

NJS_MODEL_SADX attach_0019B8D0 = { vertex_0019B888, normal_0019B8AC, LengthOfArray<Sint32>(vertex_0019B888), meshlist_0019B870, matlist_0019B848, LengthOfArray<Uint16>(meshlist_0019B870), LengthOfArray<Uint16>(matlist_0019B848),{ 0.865046f, -0.06919499f, -0.09371699f }, 2.413147f, NULL };

NJS_OBJECT object_0019B8F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019B8D0, 569.2907f, -395.2576f, -2923.045f, 0, 0, 0, 1, 1, 1, NULL, &object_0019B814 };

NJS_MATERIAL matlist_0019B92C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019B940[] = {
	0, 1, 2
};

NJS_TEX uv_0019B948[] = {
	{ 0 },
	{ 255, 254 },
	{ 254, 134 }
};

NJS_MESHSET_SADX meshlist_0019B954[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019B940, NULL, NULL, NULL, uv_0019B948, NULL }
};

NJS_VECTOR vertex_0019B96C[] = {
	{ -1.159009f, 0.346487f, -0.168452f },
	{ 0.5441549f, -0.359042f, -0.035257f },
	{ 0.383979f, 0.205402f, 0.237719f }
};

NJS_VECTOR normal_0019B990[] = {
	{ -0.264125f, -0.479632f, 0.836774f },
	{ -0.264125f, -0.479632f, 0.836774f },
	{ -0.264125f, -0.479632f, 0.836774f }
};

NJS_MODEL_SADX attach_0019B9B4 = { vertex_0019B96C, normal_0019B990, LengthOfArray<Sint32>(vertex_0019B96C), meshlist_0019B954, matlist_0019B92C, LengthOfArray<Uint16>(meshlist_0019B954), LengthOfArray<Uint16>(matlist_0019B92C),{ -0.307427f, -0.006278f, 0.034634f }, 0.875453f, NULL };

NJS_OBJECT object_0019B9DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019B9B4, 568.3022f, -395.0588f, -2902.669f, 0, 0, 0, 1, 1, 1, NULL, &object_0019B8F8 };

NJS_MATERIAL matlist_0019BA10[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019BA24[] = {
	0, 1, 2
};

NJS_TEX uv_0019BA2C[] = {
	{ 26, 117 },
	{ 255, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0019BA38[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019BA24, NULL, NULL, NULL, uv_0019BA2C, NULL }
};

NJS_VECTOR vertex_0019BA50[] = {
	{ -0.323448f, 0.109184f, -0.149016f },
	{ 0.992305f, -1.7314f, 1.350388f },
	{ -0.523312f, 1.807912f, -1.246471f }
};

NJS_VECTOR normal_0019BA74[] = {
	{ -0.234014f, 0.508009f, 0.828954f },
	{ -0.234014f, 0.508009f, 0.828954f },
	{ -0.234014f, 0.508009f, 0.828954f }
};

NJS_MODEL_SADX attach_0019BA98 = { vertex_0019BA50, normal_0019BA74, LengthOfArray<Sint32>(vertex_0019BA50), meshlist_0019BA38, matlist_0019BA10, LengthOfArray<Uint16>(meshlist_0019BA38), LengthOfArray<Uint16>(matlist_0019BA10),{ 0.234496f, 0.038256f, 0.051959f }, 2.194933f, NULL };

NJS_OBJECT object_0019BAC0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019BA98, 570.1355f, -395.0506f, -2892.22f, 0, 0, 0, 1, 1, 1, NULL, &object_0019B9DC };

NJS_MATERIAL matlist_0019BAF4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019BB08[] = {
	0, 1, 2
};

NJS_TEX uv_0019BB10[] = {
	{ 0 },
	{ 136, 255 },
	{ 255, 26 }
};

NJS_MESHSET_SADX meshlist_0019BB1C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019BB08, NULL, NULL, NULL, uv_0019BB10, NULL }
};

NJS_VECTOR vertex_0019BB34[] = {
	{ -1.604782f, 0.106852f, -0.447055f },
	{ 0.285845f, -0.789452f, -0.376948f },
	{ 1.196004f, 0.986791f, 0.990136f }
};

NJS_VECTOR normal_0019BB58[] = {
	{ -0.266793f, -0.498235f, 0.824975f },
	{ -0.266793f, -0.498235f, 0.824975f },
	{ -0.266793f, -0.498235f, 0.824975f }
};

NJS_MODEL_SADX attach_0019BB7C = { vertex_0019BB34, normal_0019BB58, LengthOfArray<Sint32>(vertex_0019BB34), meshlist_0019BB1C, matlist_0019BAF4, LengthOfArray<Uint16>(meshlist_0019BB1C), LengthOfArray<Uint16>(matlist_0019BAF4),{ -0.204389f, 0.09867f, 0.27154f }, 1.574014f, NULL };

NJS_OBJECT object_0019BBA4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019BB7C, 583.11f, -395.2183f, -2911.409f, 0, 0, 0, 1, 1, 1, NULL, &object_0019BAC0 };

NJS_MATERIAL matlist_0019BBD8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019BBEC[] = {
	0, 1, 2
};

NJS_TEX uv_0019BBF4[] = {
	{ 255, 0 },
	{ 0, 162 },
	{ 236, 255 }
};

NJS_MESHSET_SADX meshlist_0019BC00[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019BBEC, NULL, NULL, NULL, uv_0019BBF4, NULL }
};

NJS_VECTOR vertex_0019BC18[] = {
	{ 0.900908f, 1.193566f, -0.406157f },
	{ -1.503364f, -0.354946f, -0.280867f },
	{ 0.7896169f, -0.619625f, 0.599905f }
};

NJS_VECTOR normal_0019BC3C[] = {
	{ -0.265689f, 0.480156f, 0.835978f },
	{ -0.265689f, 0.480156f, 0.835978f },
	{ -0.265689f, 0.480156f, 0.835978f }
};

NJS_MODEL_SADX attach_0019BC60 = { vertex_0019BC18, normal_0019BC3C, LengthOfArray<Sint32>(vertex_0019BC18), meshlist_0019BC00, matlist_0019BBD8, LengthOfArray<Uint16>(meshlist_0019BC00), LengthOfArray<Uint16>(matlist_0019BBD8),{ -0.301228f, 0.28697f, 0.096874f }, 1.30313f, NULL };

NJS_OBJECT object_0019BC88 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019BC60, 582.455f, -396.0062f, -2912.038f, 0, 0, 0, 1, 1, 1, NULL, &object_0019BBA4 };

NJS_MATERIAL matlist_0019BCBC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019BCD0[] = {
	0, 1, 2
};

NJS_TEX uv_0019BCD8[] = {
	{ 0 },
	{ 128, 255 },
	{ 255, 96 }
};

NJS_MESHSET_SADX meshlist_0019BCE4[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019BCD0, NULL, NULL, NULL, uv_0019BCD8, NULL }
};

NJS_VECTOR vertex_0019BCFC[] = {
	{ -1.556312f, 0.144129f, -0.576605f },
	{ -0.027028f, -0.378084f, 0.218036f },
	{ 1.42614f, 0.350861f, 0.247556f }
};

NJS_VECTOR normal_0019BD20[] = {
	{ -0.263443f, 0.491566f, 0.830036f },
	{ -0.263443f, 0.491566f, 0.830036f },
	{ -0.263443f, 0.491566f, 0.830036f }
};

NJS_MODEL_SADX attach_0019BD44 = { vertex_0019BCFC, normal_0019BD20, LengthOfArray<Sint32>(vertex_0019BCFC), meshlist_0019BCE4, matlist_0019BCBC, LengthOfArray<Uint16>(meshlist_0019BCE4), LengthOfArray<Uint16>(matlist_0019BCBC),{ -0.065086f, -0.013612f, -0.164525f }, 1.547138f, NULL };

NJS_OBJECT object_0019BD6C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019BD44, 558.9965f, -395.9557f, -2925.979f, 0, 0, 0, 1, 1, 1, NULL, &object_0019BC88 };

NJS_MATERIAL matlist_0019BDA0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019BDB4[] = {
	0, 1, 2
};

NJS_TEX uv_0019BDBC[] = {
	{ 0 },
	{ 77, 255 },
	{ 255, 94 }
};

NJS_MESHSET_SADX meshlist_0019BDC8[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019BDB4, NULL, NULL, NULL, uv_0019BDBC, NULL }
};

NJS_VECTOR vertex_0019BDE0[] = {
	{ -1.542717f, -0.234781f, -0.653265f },
	{ -0.09349199f, -0.318055f, -0.221441f },
	{ 2.752211f, 1.157397f, 1.597547f }
};

NJS_VECTOR normal_0019BE04[] = {
	{ -0.274657f, -0.490128f, 0.827247f },
	{ -0.274657f, -0.490128f, 0.827247f },
	{ -0.274657f, -0.490128f, 0.827247f }
};

NJS_MODEL_SADX attach_0019BE28 = { vertex_0019BDE0, normal_0019BE04, LengthOfArray<Sint32>(vertex_0019BDE0), meshlist_0019BDC8, matlist_0019BDA0, LengthOfArray<Uint16>(meshlist_0019BDC8), LengthOfArray<Uint16>(matlist_0019BDA0),{ 0.604747f, 0.419671f, 0.472141f }, 2.424523f, NULL };

NJS_OBJECT object_0019BE50 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019BE28, 547.2411f, -395.2722f, -2897.331f, 0, 0, 0, 1, 1, 1, NULL, &object_0019BD6C };

NJS_MATERIAL matlist_0019BE84[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019BE98[] = {
	0, 1, 2
};

NJS_TEX uv_0019BEA0[] = {
	{ 0 },
	{ 106, 255 },
	{ 255, 39 }
};

NJS_MESHSET_SADX meshlist_0019BEAC[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019BE98, NULL, NULL, NULL, uv_0019BEA0, NULL }
};

NJS_VECTOR vertex_0019BEC4[] = {
	{ -1.458559f, 0.835953f, -0.908334f },
	{ -0.116754f, -1.117945f, 0.611698f },
	{ 1.568805f, 0.978351f, -0.09635299f }
};

NJS_VECTOR normal_0019BEE8[] = {
	{ -0.247957f, 0.483017f, 0.8397689f },
	{ -0.247957f, 0.483017f, 0.8397689f },
	{ -0.247957f, 0.483017f, 0.8397689f }
};

NJS_MODEL_SADX attach_0019BF0C = { vertex_0019BEC4, normal_0019BEE8, LengthOfArray<Sint32>(vertex_0019BEC4), meshlist_0019BEAC, matlist_0019BE84, LengthOfArray<Uint16>(meshlist_0019BEAC), LengthOfArray<Uint16>(matlist_0019BE84),{ 0.055123f, -0.06979699f, -0.148318f }, 1.693813f, NULL };

NJS_OBJECT object_0019BF34 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019BF0C, 577.637f, -395.5742f, -2903.212f, 0, 0, 0, 1, 1, 1, NULL, &object_0019BE50 };

NJS_MATERIAL matlist_0019BF68[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019BF7C[] = {
	0, 1, 2
};

NJS_TEX uv_0019BF84[] = {
	{ 0 },
	{ 120, 255 },
	{ 255, 146 }
};

NJS_MESHSET_SADX meshlist_0019BF90[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019BF7C, NULL, NULL, NULL, uv_0019BF84, NULL }
};

NJS_VECTOR vertex_0019BFA8[] = {
	{ -1.59385f, 0.188697f, -0.629685f },
	{ 0.050182f, -0.28981f, 0.200115f },
	{ 1.849467f, 0.332549f, 0.388901f }
};

NJS_VECTOR normal_0019BFCC[] = {
	{ -0.263144f, 0.512903f, 0.81712f },
	{ -0.263144f, 0.512903f, 0.81712f },
	{ -0.263144f, 0.512903f, 0.81712f }
};

NJS_MODEL_SADX attach_0019BFF0 = { vertex_0019BFA8, normal_0019BFCC, LengthOfArray<Sint32>(vertex_0019BFA8), meshlist_0019BF90, matlist_0019BF68, LengthOfArray<Uint16>(meshlist_0019BF90), LengthOfArray<Uint16>(matlist_0019BF68),{ 0.127808f, 0.02137f, -0.120392f }, 1.795423f, NULL };

NJS_OBJECT object_0019C018 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019BFF0, 552.3093f, -396.0464f, -2923.711f, 0, 0, 0, 1, 1, 1, NULL, &object_0019BF34 };

NJS_MATERIAL matlist_0019C04C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019C060[] = {
	0, 1, 2
};

NJS_TEX uv_0019C068[] = {
	{ 0 },
	{ 14, 251 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_0019C074[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019C060, NULL, NULL, NULL, uv_0019C068, NULL }
};

NJS_VECTOR vertex_0019C08C[] = {
	{ -1.688653f, 1.067167f, 0.079969f },
	{ -0.8878739f, -0.953706f, -0.8514749f },
	{ 2.700028f, 0.355355f, 1.099455f }
};

NJS_VECTOR normal_0019C0B0[] = {
	{ -0.271865f, -0.489587f, 0.8284889f },
	{ -0.271865f, -0.489587f, 0.8284889f },
	{ -0.271865f, -0.489587f, 0.8284889f }
};

NJS_MODEL_SADX attach_0019C0D4 = { vertex_0019C08C, normal_0019C0B0, LengthOfArray<Sint32>(vertex_0019C08C), meshlist_0019C074, matlist_0019C04C, LengthOfArray<Uint16>(meshlist_0019C074), LengthOfArray<Uint16>(matlist_0019C04C),{ 0.505687f, 0.05673f, 0.12399f }, 2.401383f, NULL };

NJS_OBJECT object_0019C0FC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019C0D4, 575.8379f, -395.5004f, -2913.924f, 0, 0, 0, 1, 1, 1, NULL, &object_0019C018 };

NJS_MATERIAL matlist_0019C130[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019C144[] = {
	0, 1, 2
};

NJS_TEX uv_0019C14C[] = {
	{ 16, 0 },
	{ 0, 255 },
	{ 255, 175 }
};

NJS_MESHSET_SADX meshlist_0019C158[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019C144, NULL, NULL, NULL, uv_0019C14C, NULL }
};

NJS_VECTOR vertex_0019C170[] = {
	{ -0.908987f, 0.695098f, 0.124237f },
	{ -0.694115f, -0.956924f, -0.760117f },
	{ 2.633997f, 0.800631f, 1.33355f }
};

NJS_VECTOR normal_0019C194[] = {
	{ -0.270242f, -0.481473f, 0.833758f },
	{ -0.270242f, -0.481473f, 0.833758f },
	{ -0.270242f, -0.481473f, 0.833758f }
};

NJS_MODEL_SADX attach_0019C1B8 = { vertex_0019C170, normal_0019C194, LengthOfArray<Sint32>(vertex_0019C170), meshlist_0019C158, matlist_0019C130, LengthOfArray<Uint16>(meshlist_0019C158), LengthOfArray<Uint16>(matlist_0019C130),{ 0.862505f, -0.07814699f, 0.286716f }, 2.057632f, NULL };

NJS_OBJECT object_0019C1E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019C1B8, 573.4606f, -395.3492f, -2918.773f, 0, 0, 0, 1, 1, 1, NULL, &object_0019C0FC };

NJS_MATERIAL matlist_0019C214[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019C228[] = {
	0, 1, 2
};

NJS_TEX uv_0019C230[] = {
	{ 0 },
	{ 160, 255 },
	{ 255, 2 }
};

NJS_MESHSET_SADX meshlist_0019C23C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019C228, NULL, NULL, NULL, uv_0019C230, NULL }
};

NJS_VECTOR vertex_0019C254[] = {
	{ -1.780166f, 0.6580409f, -0.944168f },
	{ 0.192451f, -1.411182f, 0.911526f },
	{ 1.21983f, 1.13931f, -0.271912f }
};

NJS_VECTOR normal_0019C278[] = {
	{ -0.264764f, 0.49159f, 0.8296019f },
	{ -0.264764f, 0.49159f, 0.8296019f },
	{ -0.264764f, 0.49159f, 0.8296019f }
};

NJS_MODEL_SADX attach_0019C29C = { vertex_0019C254, normal_0019C278, LengthOfArray<Sint32>(vertex_0019C254), meshlist_0019C23C, matlist_0019C214, LengthOfArray<Uint16>(meshlist_0019C23C), LengthOfArray<Uint16>(matlist_0019C214),{ -0.280168f, -0.135936f, -0.016321f }, 1.763779f, NULL };

NJS_OBJECT object_0019C2C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019C29C, 574.8454f, -395.1398f, -2916.958f, 0, 0, 0, 1, 1, 1, NULL, &object_0019C1E0 };

NJS_MATERIAL matlist_0019C2F8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019C30C[] = {
	0, 1, 2
};

NJS_TEX uv_0019C314[] = {
	{ 0 },
	{ 67, 246 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_0019C320[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019C30C, NULL, NULL, NULL, uv_0019C314, NULL }
};

NJS_VECTOR vertex_0019C338[] = {
	{ -0.746502f, 0.396726f, 0.001175f },
	{ -0.09024999f, -0.356043f, -0.242805f },
	{ 1.034722f, 0.027859f, 0.351581f }
};

NJS_VECTOR normal_0019C35C[] = {
	{ -0.265604f, -0.498922f, 0.8249429f },
	{ -0.265604f, -0.498922f, 0.8249429f },
	{ -0.265604f, -0.498922f, 0.8249429f }
};

NJS_MODEL_SADX attach_0019C380 = { vertex_0019C338, normal_0019C35C, LengthOfArray<Sint32>(vertex_0019C338), meshlist_0019C320, matlist_0019C2F8, LengthOfArray<Uint16>(meshlist_0019C320), LengthOfArray<Uint16>(matlist_0019C2F8),{ 0.14411f, 0.020341f, 0.054388f }, 0.938917f, NULL };

NJS_OBJECT object_0019C3A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019C380, 578.9055f, -395.6523f, -2906.866f, 0, 0, 0, 1, 1, 1, NULL, &object_0019C2C4 };

NJS_MATERIAL matlist_0019C3DC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019C3F0[] = {
	0, 1, 2
};

NJS_TEX uv_0019C3F8[] = {
	{ 0, 18 },
	{ 156, 255 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0019C404[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019C3F0, NULL, NULL, NULL, uv_0019C3F8, NULL }
};

NJS_VECTOR vertex_0019C41C[] = {
	{ -1.527576f, 0.679464f, -0.080525f },
	{ 0.745859f, -1.910867f, -0.882476f },
	{ 0.667756f, 1.802875f, 1.34454f }
};

NJS_VECTOR normal_0019C440[] = {
	{ -0.278078f, -0.498297f, 0.821202f },
	{ -0.278078f, -0.498297f, 0.821202f },
	{ -0.278078f, -0.498297f, 0.821202f }
};

NJS_MODEL_SADX attach_0019C464 = { vertex_0019C41C, normal_0019C440, LengthOfArray<Sint32>(vertex_0019C41C), meshlist_0019C404, matlist_0019C3DC, LengthOfArray<Uint16>(meshlist_0019C404), LengthOfArray<Uint16>(matlist_0019C3DC),{ -0.390858f, -0.053996f, 0.231032f }, 2.165159f, NULL };

NJS_OBJECT object_0019C48C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019C464, 566.5129f, -395.5131f, -2921.131f, 0, 0, 0, 1, 1, 1, NULL, &object_0019C3A8 };

NJS_MATERIAL matlist_0019C4C0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019C4D4[] = {
	0, 1, 2
};

NJS_TEX uv_0019C4DC[] = {
	{ 0 },
	{ 252, 254 },
	{ 255, 53 }
};

NJS_MESHSET_SADX meshlist_0019C4E8[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019C4D4, NULL, NULL, NULL, uv_0019C4DC, NULL }
};

NJS_VECTOR vertex_0019C500[] = {
	{ -1.107853f, 0.035596f, -0.347222f },
	{ 0.657785f, -0.352731f, -0.0023f },
	{ 0.458617f, 0.412132f, 0.400054f }
};

NJS_VECTOR normal_0019C524[] = {
	{ -0.270906f, -0.5024599f, 0.821063f },
	{ -0.270906f, -0.5024599f, 0.821063f },
	{ -0.270906f, -0.5024599f, 0.821063f }
};

NJS_MODEL_SADX attach_0019C548 = { vertex_0019C500, normal_0019C524, LengthOfArray<Sint32>(vertex_0019C500), meshlist_0019C4E8, matlist_0019C4C0, LengthOfArray<Uint16>(meshlist_0019C4E8), LengthOfArray<Uint16>(matlist_0019C4C0),{ -0.225034f, 0.0297f, 0.026416f }, 0.9586329f, NULL };

NJS_OBJECT object_0019C570 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019C548, 570.4878f, -394.8996f, -2889.55f, 0, 0, 0, 1, 1, 1, NULL, &object_0019C48C };

NJS_MATERIAL matlist_0019C5A4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019C5B8[] = {
	0, 1, 2
};

NJS_TEX uv_0019C5C0[] = {
	{ 0 },
	{ 78, 255 },
	{ 255, 50 }
};

NJS_MESHSET_SADX meshlist_0019C5CC[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019C5B8, NULL, NULL, NULL, uv_0019C5C0, NULL }
};

NJS_VECTOR vertex_0019C5E4[] = {
	{ -0.801605f, 0.117061f, -0.354903f },
	{ -0.039878f, -0.319956f, 0.166752f },
	{ 1.596856f, 0.432945f, 0.280945f }
};

NJS_VECTOR normal_0019C608[] = {
	{ -0.283097f, 0.490415f, 0.824227f },
	{ -0.283097f, 0.490415f, 0.824227f },
	{ -0.283097f, 0.490415f, 0.824227f }
};

NJS_MODEL_SADX attach_0019C62C = { vertex_0019C5E4, normal_0019C608, LengthOfArray<Sint32>(vertex_0019C5E4), meshlist_0019C5CC, matlist_0019C5A4, LengthOfArray<Uint16>(meshlist_0019C5CC), LengthOfArray<Uint16>(matlist_0019C5A4),{ 0.397625f, 0.056495f, -0.036979f }, 1.240693f, NULL };

NJS_OBJECT object_0019C654 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019C62C, 573.0934f, -395.3644f, -2891.049f, 0, 0, 0, 1, 1, 1, NULL, &object_0019C570 };

NJS_MATERIAL matlist_0019C688[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019C69C[] = {
	0, 1, 2
};

NJS_TEX uv_0019C6A4[] = {
	{ 0 },
	{ 124, 254 },
	{ 255, 213 }
};

NJS_MESHSET_SADX meshlist_0019C6B0[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019C69C, NULL, NULL, NULL, uv_0019C6A4, NULL }
};

NJS_VECTOR vertex_0019C6C8[] = {
	{ -1.281544f, 0.00354f, -0.42185f },
	{ 0.050483f, -0.200628f, -0.11484f },
	{ 1.230154f, 0.351683f, 0.595092f }
};

NJS_VECTOR normal_0019C6EC[] = {
	{ -0.266477f, -0.494366f, 0.827401f },
	{ -0.266477f, -0.494366f, 0.827401f },
	{ -0.266477f, -0.494366f, 0.827401f }
};

NJS_MODEL_SADX attach_0019C710 = { vertex_0019C6C8, normal_0019C6EC, LengthOfArray<Sint32>(vertex_0019C6C8), meshlist_0019C6B0, matlist_0019C688, LengthOfArray<Uint16>(meshlist_0019C6B0), LengthOfArray<Uint16>(matlist_0019C688),{ -0.025695f, 0.075527f, 0.08662099f }, 1.354871f, NULL };

NJS_OBJECT object_0019C738 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019C710, 549.6324f, -395.6213f, -2915.218f, 0, 0, 0, 1, 1, 1, NULL, &object_0019C654 };

NJS_MATERIAL matlist_0019C76C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019C780[] = {
	0, 1, 2
};

NJS_TEX uv_0019C788[] = {
	{ 0, 65 },
	{ 255, 255 },
	{ 205, 0 }
};

NJS_MESHSET_SADX meshlist_0019C794[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019C780, NULL, NULL, NULL, uv_0019C788, NULL }
};

NJS_VECTOR vertex_0019C7AC[] = {
	{ -0.595423f, -0.025441f, -0.217961f },
	{ 0.568665f, -0.456084f, -0.08013f },
	{ 0.08231299f, 0.546631f, 0.354854f }
};

NJS_VECTOR normal_0019C7D0[] = {
	{ -0.279948f, -0.493109f, 0.8236949f },
	{ -0.279948f, -0.493109f, 0.8236949f },
	{ -0.279948f, -0.493109f, 0.8236949f }
};

NJS_MODEL_SADX attach_0019C7F4 = { vertex_0019C7AC, normal_0019C7D0, LengthOfArray<Sint32>(vertex_0019C7AC), meshlist_0019C794, matlist_0019C76C, LengthOfArray<Uint16>(meshlist_0019C794), LengthOfArray<Uint16>(matlist_0019C76C),{ -0.013379f, 0.045273f, 0.06844699f }, 0.64867f, NULL };

NJS_OBJECT object_0019C81C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019C7F4, 545.0162f, -395.0502f, -2904.087f, 0, 0, 0, 1, 1, 1, NULL, &object_0019C738 };

NJS_MATERIAL matlist_0019C850[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019C864[] = {
	0, 1, 2
};

NJS_TEX uv_0019C86C[] = {
	{ 0 },
	{ 98, 255 },
	{ 255, 120 }
};

NJS_MESHSET_SADX meshlist_0019C878[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019C864, NULL, NULL, NULL, uv_0019C86C, NULL }
};

NJS_VECTOR vertex_0019C890[] = {
	{ -0.895156f, 0.148568f, -0.204419f },
	{ 0.102904f, -0.371681f, -0.186308f },
	{ 1.218092f, 0.516237f, 0.702308f }
};

NJS_VECTOR normal_0019C8B4[] = {
	{ -0.270387f, -0.489866f, 0.828808f },
	{ -0.270387f, -0.489866f, 0.828808f },
	{ -0.270387f, -0.489866f, 0.828808f }
};

NJS_MODEL_SADX attach_0019C8D8 = { vertex_0019C890, normal_0019C8B4, LengthOfArray<Sint32>(vertex_0019C890), meshlist_0019C878, matlist_0019C850, LengthOfArray<Uint16>(meshlist_0019C878), LengthOfArray<Uint16>(matlist_0019C850),{ 0.161468f, 0.07227799f, 0.248945f }, 1.149769f, NULL };

NJS_OBJECT object_0019C900 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019C8D8, 577.8609f, -395.9306f, -2919.678f, 0, 0, 0, 1, 1, 1, NULL, &object_0019C81C };

NJS_MATERIAL matlist_0019C934[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019C948[] = {
	0, 1, 2
};

NJS_TEX uv_0019C950[] = {
	{ 0 },
	{ 48, 254 },
	{ 255, 4 }
};

NJS_MESHSET_SADX meshlist_0019C95C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019C948, NULL, NULL, NULL, uv_0019C950, NULL }
};

NJS_VECTOR vertex_0019C974[] = {
	{ -0.539683f, 0.306292f, -0.420846f },
	{ -0.182783f, -0.549543f, 0.283466f },
	{ 1.238989f, 0.6206239f, 0.028685f }
};

NJS_VECTOR normal_0019C998[] = {
	{ -0.294636f, 0.530978f, 0.7945139f },
	{ -0.294636f, 0.530978f, 0.7945139f },
	{ -0.294636f, 0.530978f, 0.7945139f }
};

NJS_MODEL_SADX attach_0019C9BC = { vertex_0019C974, normal_0019C998, LengthOfArray<Sint32>(vertex_0019C974), meshlist_0019C95C, matlist_0019C934, LengthOfArray<Uint16>(meshlist_0019C95C), LengthOfArray<Uint16>(matlist_0019C934),{ 0.349653f, 0.035541f, -0.06868999f }, 0.956534f, NULL };

NJS_OBJECT object_0019C9E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019C9BC, 563.2441f, -395.2742f, -2895.522f, 0, 0, 0, 1, 1, 1, NULL, &object_0019C900 };

NJS_MATERIAL matlist_0019CA18[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019CA2C[] = {
	0, 1, 2
};

NJS_TEX uv_0019CA34[] = {
	{ 0 },
	{ 216, 255 },
	{ 255, 167 }
};

NJS_MESHSET_SADX meshlist_0019CA40[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019CA2C, NULL, NULL, NULL, uv_0019CA34, NULL }
};

NJS_VECTOR vertex_0019CA58[] = {
	{ -1.849557f, 0.082408f, -0.5568579f },
	{ 0.761748f, -0.289801f, 0.066056f },
	{ 1.044964f, 0.289297f, 0.5169629f }
};

NJS_VECTOR normal_0019CA7C[] = {
	{ -0.267711f, -0.507015f, 0.819309f },
	{ -0.267711f, -0.507015f, 0.819309f },
	{ -0.267711f, -0.507015f, 0.819309f }
};

NJS_MODEL_SADX attach_0019CAA0 = { vertex_0019CA58, normal_0019CA7C, LengthOfArray<Sint32>(vertex_0019CA58), meshlist_0019CA40, matlist_0019CA18, LengthOfArray<Uint16>(meshlist_0019CA40), LengthOfArray<Uint16>(matlist_0019CA18),{ -0.402297f, -0.000252f, -0.019948f }, 1.543633f, NULL };

NJS_OBJECT object_0019CAC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019CAA0, 548.3196f, -395.3414f, -2910.473f, 0, 0, 0, 1, 1, 1, NULL, &object_0019C9E4 };

NJS_MATERIAL matlist_0019CAFC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019CB10[] = {
	0, 1, 2
};

NJS_TEX uv_0019CB18[] = {
	{ 0, 254 },
	{ 149, 245 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0019CB24[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019CB10, NULL, NULL, NULL, uv_0019CB18, NULL }
};

NJS_VECTOR vertex_0019CB3C[] = {
	{ -2.104573f, -0.637437f, -0.28582f },
	{ 0.023002f, -0.217506f, 0.212174f },
	{ 1.537053f, 0.812026f, -0.002397f }
};

NJS_VECTOR normal_0019CB60[] = {
	{ -0.292559f, 0.587492f, 0.754495f },
	{ -0.292559f, 0.587492f, 0.754495f },
	{ -0.292559f, 0.587492f, 0.754495f }
};

NJS_MODEL_SADX attach_0019CB84 = { vertex_0019CB3C, normal_0019CB60, LengthOfArray<Sint32>(vertex_0019CB3C), meshlist_0019CB24, matlist_0019CAFC, LengthOfArray<Uint16>(meshlist_0019CB24), LengthOfArray<Uint16>(matlist_0019CAFC),{ -0.28376f, 0.087294f, -0.036823f }, 1.837751f, NULL };

NJS_OBJECT object_0019CBAC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019CB84, 553.5975f, -395.3137f, -2911.208f, 0, 0, 0, 1, 1, 1, NULL, &object_0019CAC8 };

NJS_MATERIAL matlist_0019CBE0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019CBF4[] = {
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_0019CC00[] = {
	{ 19, 81 },
	{ 0, 255 },
	{ 77, 229 },
	{ 19, 81 },
	{ 77, 229 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0019CC18[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_0019CBF4, NULL, NULL, NULL, uv_0019CC00, NULL }
};

NJS_VECTOR vertex_0019CC30[] = {
	{ -0.383728f, 0.457855f, 0.151367f },
	{ -0.559509f, -0.784058f, -0.621582f },
	{ 0.129944f, -0.6026f, -0.309082f },
	{ 1.723694f, 1.041962f, 1.192871f }
};

NJS_VECTOR normal_0019CC60[] = {
	{ -0.26221f, -0.488394f, 0.832296f },
	{ -0.251717f, -0.485458f, 0.837239f },
	{ -0.26221f, -0.488394f, 0.832296f },
	{ -0.272665f, -0.49126f, 0.827235f }
};

NJS_MODEL_SADX attach_0019CC90 = { vertex_0019CC30, normal_0019CC60, LengthOfArray<Sint32>(vertex_0019CC30), meshlist_0019CC18, matlist_0019CBE0, LengthOfArray<Uint16>(meshlist_0019CC18), LengthOfArray<Uint16>(matlist_0019CBE0),{ 0.582092f, 0.128952f, 0.285645f }, 1.458189f, NULL };

NJS_OBJECT object_0019CCB8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019CC90, 545.0972f, -395.4506f, -2905.435f, 0, 0, 0, 1, 1, 1, NULL, &object_0019CBAC };

NJS_MATERIAL matlist_0019CCEC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV }
};

Sint16 poly_0019CD00[] = {
	0, 1, 2
};

NJS_TEX uv_0019CD08[] = {
	{ 124, 0 },
	{ 0, 159 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_0019CD14[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0019CD00, NULL, NULL, NULL, uv_0019CD08, NULL }
};

NJS_VECTOR vertex_0019CD2C[] = {
	{ -0.367369f, 1.215135f, 0.626104f },
	{ -1.328311f, -0.670981f, -0.810908f },
	{ 1.702971f, -0.524642f, 0.192406f }
};

NJS_VECTOR normal_0019CD50[] = {
	{ -0.249549f, -0.503208f, 0.8273489f },
	{ -0.249549f, -0.503208f, 0.8273489f },
	{ -0.249549f, -0.503208f, 0.8273489f }
};

NJS_MODEL_SADX attach_0019CD74 = { vertex_0019CD2C, normal_0019CD50, LengthOfArray<Sint32>(vertex_0019CD2C), meshlist_0019CD14, matlist_0019CCEC, LengthOfArray<Uint16>(meshlist_0019CD14), LengthOfArray<Uint16>(matlist_0019CCEC),{ 0.18733f, 0.272077f, -0.092402f }, 1.67731f, NULL };

NJS_OBJECT object_0019CD9C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019CD74, 550.6826f, -395.407f, -2915.908f, 0, 0, 0, 1, 1, 1, NULL, &object_0019CCB8 };




//Destructable Bridge Pieces start here (Properly-placed pieces) 98-294
NJS_MATERIAL matlist_0017B68C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017B6A0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_0017B6CC[] = {
	{ 510, 255 },
	{ 504, 55 },
	{ 0, 80 },
	{ 510, 255 },
	{ 0, 80 },
	{ 0, 182 },
	{ 504, 55 },
	{ 488, 0 },
	{ 0, 56 },
	{ 504, 55 },
	{ 0, 56 },
	{ 0, 80 },
	{ 488, 0 },
	{ 510, 255 },
	{ 0, 182 },
	{ 488, 0 },
	{ 0, 182 },
	{ 0, 56 },
	{ 504, 55 },
	{ 510, 255 },
	{ 488, 0 }
};

NJS_MESHSET_SADX meshlist_0017B720[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0017B6A0, NULL, NULL, NULL, uv_0017B6CC, NULL }
};

NJS_VECTOR vertex_0017B738[] = {
	{ -12.48144f, 7.153873f, 33.12664f },
	{ -9.583572f, 6.797089f, 32.51068f },
	{ -10.49907f, 7.255811f, 35.32828f },
	{ -11.6273f, -4.401338f, 33.4036f },
	{ -10.3563f, -4.401338f, 33.13345f },
	{ -10.75784f, -4.401338f, 34.5303f }
};

NJS_VECTOR normal_0017B780[] = {
	{ -0.5409679f, 0.440588f, -0.716405f },
	{ 0.87345f, 0.416807f, -0.251707f },
	{ -0.276087f, 0.495452f, 0.8235919f },
	{ -0.983562f, -0.057514f, 0.171164f },
	{ 0.305368f, -0.073171f, -0.949419f },
	{ 0.678928f, -0.071594f, 0.730706f }
};

NJS_MODEL_SADX attach_0017B7C8 = { vertex_0017B738, normal_0017B780, LengthOfArray<Sint32>(vertex_0017B738), meshlist_0017B720, matlist_0017B68C, LengthOfArray<Uint16>(meshlist_0017B720), LengthOfArray<Uint16>(matlist_0017B68C),{ -11.03251f, 1.427237f, 33.91948f }, 5.996412f, NULL };

NJS_OBJECT object_0017B7F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017B7C8, 608.5784f, -391.21f, -3109.509f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017B824[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017B838[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017B868[] = {
	{ 254, 211 },
	{ 139, 212 },
	{ 140, 0 },
	{ 254, 211 },
	{ 140, 0 },
	{ 255, 64 },
	{ 139, 212 },
	{ 0, 255 },
	{ 0, 104 },
	{ 139, 212 },
	{ 0, 104 },
	{ 140, 0 },
	{ 0, 255 },
	{ 254, 211 },
	{ 255, 64 },
	{ 0, 255 },
	{ 255, 64 },
	{ 0, 104 },
	{ 254, 211 },
	{ 0, 255 },
	{ 139, 212 },
	{ 140, 0 },
	{ 0, 104 },
	{ 255, 64 }
};

NJS_MESHSET_SADX meshlist_0017B8C8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017B838, NULL, NULL, NULL, uv_0017B868, NULL }
};

NJS_VECTOR vertex_0017B8E0[] = {
	{ -10.65683f, 1.193703f, 32.77827f },
	{ -10.91165f, 0.420542f, 31.94799f },
	{ -10.27018f, 0.382008f, 32.91111f },
	{ -11.74048f, 1.2588f, 36.11945f },
	{ -11.67813f, 0.466586f, 34.31119f },
	{ -11.0219f, 0.427165f, 35.22883f }
};

NJS_VECTOR normal_0017B928[] = {
	{ 0.034011f, 0.918762f, -0.393345f },
	{ -0.079735f, -0.822441f, -0.563234f },
	{ 0.996747f, 0.08039699f, 0.005693f },
	{ 0.413508f, 0.671728f, 0.614648f },
	{ -0.9477479f, -0.306028f, -0.09011199f },
	{ 0.091677f, -0.964804f, 0.246471f }
};

NJS_MODEL_SADX attach_0017B970 = { vertex_0017B8E0, normal_0017B928, LengthOfArray<Sint32>(vertex_0017B8E0), meshlist_0017B8C8, matlist_0017B824, LengthOfArray<Uint16>(meshlist_0017B8C8), LengthOfArray<Uint16>(matlist_0017B824),{ -11.00533f, 0.820404f, 34.03371f }, 2.211457f, NULL };

NJS_OBJECT object_0017B998 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017B970, 645.467f, -386.3411f, -3105.156f, 0, 0, 0, 1, 1, 1, NULL, &object_0017B7F0 };

NJS_MATERIAL matlist_0017B9CC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017BA08[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

Sint16 poly_0017BA32[] = {
	3, 4, 5
};

NJS_TEX uv_0017BA38[] = {
	{ 370, 127 },
	{ 508, 127 },
	{ 508, 0 },
	{ 370, 127 },
	{ 508, 0 },
	{ 150, 0 },
	{ 204, 254 },
	{ 508, 255 },
	{ 508, 127 },
	{ 204, 254 },
	{ 508, 127 },
	{ 370, 127 },
	{ 150, 0 },
	{ 508, 0 },
	{ 508, 255 },
	{ 150, 0 },
	{ 508, 255 },
	{ 204, 254 },
	{ 370, 127 },
	{ 150, 0 },
	{ 204, 254 }
};

NJS_TEX uv_0017BA8C[] = {
	{ 127, 254 },
	{ 0 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0017BA98[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_0017BA08, NULL, NULL, NULL, uv_0017BA38, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_0017BA32, NULL, NULL, NULL, uv_0017BA8C, NULL }
};

NJS_VECTOR vertex_0017BAC8[] = {
	{ -13.22351f, -2.215031f, 32.88388f },
	{ -30.5727f, 2.157465f, 29.90117f },
	{ -24.92379f, 2.157466f, 26.42787f },
	{ -2.934377f, -2.215032f, 36.22703f },
	{ -2.154277f, 2.157467f, 33.82613f },
	{ -3.714475f, 2.157466f, 38.62793f }
};

NJS_VECTOR normal_0017BB10[] = {
	{ -0.178479f, -0.961956f, 0.206847f },
	{ -0.506351f, 0.631849f, 0.586834f },
	{ 0.160313f, -0.427652f, -0.889614f },
	{ 0.609338f, -0.749999f, -0.257312f },
	{ 0.609336f, 0.75f, -0.257311f },
	{ 0.207911f, 0.000001f, 0.978148f }
};

NJS_MODEL_SADX attach_0017BB58 = { vertex_0017BAC8, normal_0017BB10, LengthOfArray<Sint32>(vertex_0017BAC8), meshlist_0017BA98, matlist_0017B9CC, LengthOfArray<Uint16>(meshlist_0017BA98), LengthOfArray<Uint16>(matlist_0017B9CC),{ -16.36349f, -0.028782f, 32.5279f }, 15.46321f, NULL };

NJS_OBJECT object_0017BB80 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017BB58, 637.0249f, -397.373f, -3100.192f, 0, 0, 0, 1, 1, 1, NULL, &object_0017B998 };

NJS_MATERIAL matlist_0017BBB4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017BBF0[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_0017BC1A[] = {
	5, 4, 3
};

NJS_TEX uv_0017BC20[] = {
	{ 0 },
	{ 0, 127 },
	{ 370, 127 },
	{ 0 },
	{ 370, 127 },
	{ 150, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 205, 255 },
	{ 0, 127 },
	{ 205, 255 },
	{ 370, 127 },
	{ 0, 254 },
	{ 0 },
	{ 150, 0 },
	{ 0, 254 },
	{ 150, 0 },
	{ 205, 255 },
	{ 370, 127 },
	{ 205, 255 },
	{ 150, 0 }
};

NJS_TEX uv_0017BC74[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 254 }
};

NJS_MESHSET_SADX meshlist_0017BC80[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_0017BBF0, NULL, NULL, NULL, uv_0017BC20, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_0017BC1A, NULL, NULL, NULL, uv_0017BC74, NULL }
};

NJS_VECTOR vertex_0017BCB0[] = {
	{ 7.565812f, -2.214907f, 39.63946f },
	{ -9.783382f, 2.15759f, 36.65673f },
	{ -4.13447f, 2.157591f, 33.18344f },
	{ -20.18588f, -2.214906f, 30.62239f },
	{ -19.40578f, 2.157591f, 28.2215f },
	{ -20.96598f, 2.15759f, 33.02329f }
};

NJS_VECTOR normal_0017BCF8[] = {
	{ -0.06609f, -0.447663f, 0.891757f },
	{ -0.031023f, 0.9076419f, 0.418598f },
	{ 0.401663f, 0.522469f, -0.752126f },
	{ -0.34172f, -0.749999f, -0.5663289f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743144f, 0.000002f, 0.669131f }
};

NJS_MODEL_SADX attach_0017BD40 = { vertex_0017BCB0, normal_0017BCF8, LengthOfArray<Sint32>(vertex_0017BCB0), meshlist_0017BC80, matlist_0017BBB4, LengthOfArray<Uint16>(meshlist_0017BC80), LengthOfArray<Uint16>(matlist_0017BBB4),{ -6.700084f, -0.028658f, 33.93048f }, 15.36582f, NULL };

NJS_OBJECT object_0017BD68 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017BD40, 616.2348f, -397.373f, -3106.946f, 0, 0, 0, 1, 1, 1, NULL, &object_0017BB80 };

NJS_MATERIAL matlist_0017BD9C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017BDD8[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

Sint16 poly_0017BE02[] = {
	3, 4, 5
};

NJS_TEX uv_0017BE08[] = {
	{ 366, 127 },
	{ 508, 127 },
	{ 508, 0 },
	{ 366, 127 },
	{ 508, 0 },
	{ 406, 0 },
	{ 440, 254 },
	{ 508, 255 },
	{ 508, 127 },
	{ 440, 254 },
	{ 508, 127 },
	{ 366, 127 },
	{ 406, 0 },
	{ 508, 0 },
	{ 508, 255 },
	{ 406, 0 },
	{ 508, 255 },
	{ 440, 254 },
	{ 366, 127 },
	{ 406, 0 },
	{ 440, 254 }
};

NJS_TEX uv_0017BE5C[] = {
	{ 127, 254 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0017BE68[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_0017BDD8, NULL, NULL, NULL, uv_0017BE08, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_0017BE02, NULL, NULL, NULL, uv_0017BE5C, NULL }
};

NJS_VECTOR vertex_0017BE98[] = {
	{ -17.22885f, -2.215085f, 31.58179f },
	{ -14.94447f, 2.157411f, 34.97839f },
	{ -10.92426f, 2.157411f, 30.97591f },
	{ -6.567389f, -2.215086f, 35.0459f },
	{ -5.787292f, 2.157411f, 32.645f },
	{ -7.347491f, 2.157409f, 37.4468f }
};

NJS_VECTOR normal_0017BEE0[] = {
	{ -0.667968f, -0.698702f, 0.256193f },
	{ -0.337189f, 0.932512f, 0.129327f },
	{ 0.00694f, 0.297818f, -0.9545979f },
	{ 0.609337f, -0.749999f, -0.257312f },
	{ 0.609336f, 0.750001f, -0.257311f },
	{ 0.207911f, 0.000002f, 0.978148f }
};

NJS_MODEL_SADX attach_0017BF28 = { vertex_0017BE98, normal_0017BEE0, LengthOfArray<Sint32>(vertex_0017BE98), meshlist_0017BE68, matlist_0017BD9C, LengthOfArray<Uint16>(meshlist_0017BE68), LengthOfArray<Uint16>(matlist_0017BD9C),{ -11.50807f, -0.028837f, 34.21135f }, 6.572323f, NULL };

NJS_OBJECT object_0017BF50 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017BF28, 644.3107f, -397.5731f, -3110.253f, 0, 0, 0, 1, 1, 1, NULL, &object_0017BD68 };

NJS_MATERIAL matlist_0017BF84[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017BFC0[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_0017BFEA[] = {
	5, 4, 3
};

NJS_TEX uv_0017BFF0[] = {
	{ 2, 0 },
	{ 2, 127 },
	{ 366, 127 },
	{ 2, 0 },
	{ 366, 127 },
	{ 406, 0 },
	{ 2, 127 },
	{ 2, 255 },
	{ 440, 255 },
	{ 2, 127 },
	{ 440, 255 },
	{ 366, 127 },
	{ 2, 255 },
	{ 2, 0 },
	{ 406, 0 },
	{ 2, 255 },
	{ 406, 0 },
	{ 440, 255 },
	{ 366, 127 },
	{ 440, 255 },
	{ 406, 0 }
};

NJS_TEX uv_0017C044[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 254 }
};

NJS_MESHSET_SADX meshlist_0017C050[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_0017BFC0, NULL, NULL, NULL, uv_0017BFF0, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_0017BFEA, NULL, NULL, NULL, uv_0017C044, NULL }
};

NJS_VECTOR vertex_0017C080[] = {
	{ 1.971078f, -2.21497f, 37.82035f },
	{ 4.255465f, 2.157527f, 41.21697f },
	{ 8.275674f, 2.157527f, 37.21447f },
	{ -25.40881f, -2.214967f, 28.92409f },
	{ -24.62872f, 2.157531f, 26.52319f },
	{ -26.18891f, 2.15753f, 31.32499f }
};

NJS_VECTOR normal_0017C0C8[] = {
	{ 0.097945f, -0.846539f, 0.5232379f },
	{ 0.15767f, 0.515433f, 0.8423f },
	{ 0.626167f, -0.401752f, -0.668214f },
	{ -0.34172f, -0.75f, -0.5663289f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f }
};

NJS_MODEL_SADX attach_0017C110 = { vertex_0017C080, normal_0017C0C8, LengthOfArray<Sint32>(vertex_0017C080), meshlist_0017C050, matlist_0017BF84, LengthOfArray<Uint16>(meshlist_0017C050), LengthOfArray<Uint16>(matlist_0017BF84),{ -8.956618f, -0.028719f, 33.87008f }, 18.73311f, NULL };

NJS_OBJECT object_0017C138 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C110, 625.1107f, -397.5731f, -3116.491f, 0, 0, 0, 1, 1, 1, NULL, &object_0017BF50 };

NJS_MATERIAL matlist_0017C16C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017C180[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_0017C1AC[] = {
	{ 486, 255 },
	{ 510, 55 },
	{ 0, 67 },
	{ 486, 255 },
	{ 0, 67 },
	{ 0, 214 },
	{ 510, 55 },
	{ 510, 0 },
	{ 0, 26 },
	{ 510, 55 },
	{ 0, 26 },
	{ 0, 67 },
	{ 510, 0 },
	{ 486, 255 },
	{ 0, 214 },
	{ 510, 0 },
	{ 0, 214 },
	{ 0, 26 },
	{ 510, 55 },
	{ 486, 255 },
	{ 510, 0 }
};

NJS_MESHSET_SADX meshlist_0017C200[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0017C180, NULL, NULL, NULL, uv_0017C1AC, NULL }
};

NJS_VECTOR vertex_0017C218[] = {
	{ -11.86752f, 6.901765f, 33.3257f },
	{ -10.13897f, 6.901765f, 32.95829f },
	{ -10.68506f, 6.392074f, 34.63897f },
	{ -11.6273f, -4.401338f, 33.4036f },
	{ -10.3563f, -4.401338f, 33.13345f },
	{ -10.75784f, -4.401338f, 34.36924f }
};

NJS_VECTOR normal_0017C260[] = {
	{ -0.632551f, 0.528511f, -0.566176f },
	{ 0.888038f, 0.458935f, -0.027682f },
	{ -0.213513f, 0.413798f, 0.884976f },
	{ -0.978295f, -0.019675f, 0.206282f },
	{ 0.308935f, -0.020675f, -0.950858f },
	{ 0.670451f, -0.022685f, 0.741607f }
};

NJS_MODEL_SADX attach_0017C2A8 = { vertex_0017C218, normal_0017C260, LengthOfArray<Sint32>(vertex_0017C218), meshlist_0017C200, matlist_0017C16C, LengthOfArray<Uint16>(meshlist_0017C200), LengthOfArray<Uint16>(matlist_0017C16C),{ -11.00325f, 1.250214f, 33.79863f }, 5.713684f, NULL };

NJS_OBJECT object_0017C2D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C2A8, 643.283f, -391.21f, -3098.343f, 0, 0, 0, 1, 1, 1, NULL, &object_0017C138 };

NJS_MATERIAL matlist_0017C304[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017C318[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	1, 0, 2
};

NJS_TEX uv_0017C344[] = {
	{ 510, 255 },
	{ 510, 55 },
	{ 0, 83 },
	{ 510, 255 },
	{ 0, 83 },
	{ 0, 158 },
	{ 510, 55 },
	{ 510, 0 },
	{ 0, 62 },
	{ 510, 55 },
	{ 0, 62 },
	{ 0, 83 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 158 },
	{ 510, 0 },
	{ 0, 158 },
	{ 0, 62 },
	{ 0 },
	{ 0, 55 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_0017C398[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0017C318, NULL, NULL, NULL, uv_0017C344, NULL }
};

NJS_VECTOR vertex_0017C3B0[] = {
	{ -12.71067f, 7.809342f, 33.0523f },
	{ -9.376185f, 7.809342f, 32.34354f },
	{ -10.42962f, 7.809342f, 35.58567f },
	{ -11.61568f, -4.401338f, 33.40737f },
	{ -10.36681f, -4.401338f, 33.14191f },
	{ -10.76135f, -4.401338f, 34.35619f }
};

NJS_VECTOR normal_0017C3F8[] = {
	{ -0.599353f, 0.444615f, -0.665653f },
	{ 0.879932f, 0.436619f, -0.187307f },
	{ -0.277673f, 0.440481f, 0.853741f },
	{ -0.974902f, -0.08139899f, 0.207219f },
	{ 0.307568f, -0.086907f, -0.947549f },
	{ 0.666037f, -0.09261899f, 0.740146f }
};

NJS_MODEL_SADX attach_0017C440 = { vertex_0017C3B0, normal_0017C3F8, LengthOfArray<Sint32>(vertex_0017C3B0), meshlist_0017C398, matlist_0017C304, LengthOfArray<Uint16>(meshlist_0017C398), LengthOfArray<Uint16>(matlist_0017C304),{ -11.04343f, 1.704002f, 33.9646f }, 6.316898f, NULL };

NJS_OBJECT object_0017C468 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C440, 650.5882f, -391.61f, -3120.826f, 0, 0, 0, 1, 1, 1, NULL, &object_0017C2D0 };

NJS_MATERIAL matlist_0017C49C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017C4B0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0017C4D4[] = {
	{ 508, 255 },
	{ 508, 55 },
	{ 286, 55 },
	{ 508, 255 },
	{ 286, 55 },
	{ 286, 255 },
	{ 508, 55 },
	{ 508, 0 },
	{ 222, 0 },
	{ 508, 55 },
	{ 222, 0 },
	{ 286, 55 },
	{ 508, 0 },
	{ 508, 255 },
	{ 286, 255 },
	{ 508, 0 },
	{ 286, 255 },
	{ 222, 0 }
};

NJS_MESHSET_SADX meshlist_0017C51C[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0017C4B0, NULL, NULL, NULL, uv_0017C4D4, NULL }
};

NJS_VECTOR vertex_0017C534[] = {
	{ -11.83424f, 5.742086f, 33.33649f },
	{ -10.16908f, 5.742086f, 32.98256f },
	{ -10.69514f, 5.742086f, 34.6016f },
	{ -11.83424f, 1.298662f, 33.33649f },
	{ -10.16908f, 0.038661f, 32.98256f },
	{ -10.69514f, 1.298662f, 34.6016f }
};

NJS_VECTOR normal_0017C57C[] = {
	{ -0.66913f, 0, -0.7431459f },
	{ 0.978148f, 0, -0.207911f },
	{ -0.309017f, 0, 0.951057f },
	{ -0.978148f, 0, 0.207912f },
	{ 0.309018f, 0, -0.9510559f },
	{ 0.66913f, 0, 0.743145f }
};

NJS_MODEL_SADX attach_0017C5C4 = { vertex_0017C534, normal_0017C57C, LengthOfArray<Sint32>(vertex_0017C534), meshlist_0017C51C, matlist_0017C49C, LengthOfArray<Uint16>(meshlist_0017C51C), LengthOfArray<Uint16>(matlist_0017C49C),{ -11.00166f, 2.890374f, 33.79208f }, 2.96437f, NULL };

NJS_OBJECT object_0017C5EC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C5C4, 615.8836f, -391.61f, -3131.992f, 0, 0, 0, 1, 1, 1, NULL, &object_0017C468 };

NJS_MATERIAL matlist_0017C620[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017C634[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0017C658[] = {
	{ 288, 255 },
	{ 288, 55 },
	{ 2, 55 },
	{ 288, 255 },
	{ 2, 55 },
	{ 2, 255 },
	{ 288, 55 },
	{ 225, 0 },
	{ 2, 0 },
	{ 288, 55 },
	{ 2, 0 },
	{ 2, 55 },
	{ 225, 0 },
	{ 288, 255 },
	{ 2, 255 },
	{ 225, 0 },
	{ 2, 255 },
	{ 2, 0 }
};

NJS_MESHSET_SADX meshlist_0017C6A0[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0017C634, NULL, NULL, NULL, uv_0017C658, NULL }
};

NJS_VECTOR vertex_0017C6B8[] = {
	{ -11.83424f, 1.302088f, 33.33649f },
	{ -10.16908f, 0.042088f, 32.98256f },
	{ -10.69514f, 1.302088f, 34.6016f },
	{ -11.83424f, -4.401338f, 33.33649f },
	{ -10.16908f, -4.401338f, 32.98256f },
	{ -10.69514f, -4.401338f, 34.6016f }
};

NJS_VECTOR normal_0017C700[] = {
	{ -0.66913f, 0, -0.7431459f },
	{ 0.978148f, 0, -0.207911f },
	{ -0.309017f, 0, 0.9510559f },
	{ -0.978148f, 0, 0.207912f },
	{ 0.309018f, 0, -0.9510559f },
	{ 0.66913f, 0, 0.743145f }
};

NJS_MODEL_SADX attach_0017C748 = { vertex_0017C6B8, normal_0017C700, LengthOfArray<Sint32>(vertex_0017C6B8), meshlist_0017C6A0, matlist_0017C620, LengthOfArray<Uint16>(meshlist_0017C6A0), LengthOfArray<Uint16>(matlist_0017C620),{ -11.00166f, -1.549625f, 33.79208f }, 2.96437f, NULL };

NJS_OBJECT object_0017C770 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C748, 615.8836f, -391.61f, -3131.992f, 0, 0, 0, 1, 1, 1, NULL, &object_0017C5EC };

NJS_MATERIAL matlist_0017C7A4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017C7B8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017C7E8[] = {
	{ 252, 254 },
	{ 138, 255 },
	{ 140, -330 },
	{ 252, 254 },
	{ 140, -330 },
	{ 255, -510 },
	{ 138, 255 },
	{ 0, 254 },
	{ 2, -508 },
	{ 138, 255 },
	{ 2, -508 },
	{ 140, -330 },
	{ 0, 254 },
	{ 252, 254 },
	{ 255, -510 },
	{ 0, 254 },
	{ 255, -510 },
	{ 2, -508 },
	{ 252, 254 },
	{ 0, 254 },
	{ 138, 255 },
	{ 140, -330 },
	{ 2, -508 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_0017C848[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017C7B8, NULL, NULL, NULL, uv_0017C7E8, NULL }
};

NJS_VECTOR vertex_0017C860[] = {
	{ -9.17185f, 1.10462f, 28.20008f },
	{ -9.650431f, 0.3449f, 28.05966f },
	{ -8.787659f, 0.293072f, 28.3405f },
	{ -12.67251f, 0.769428f, 38.99342f },
	{ -14.22313f, 0.074108f, 42.15836f },
	{ -13.36036f, 0.02228f, 42.43919f }
};

NJS_VECTOR normal_0017C8A8[] = {
	{ -0.187681f, 0.806466f, -0.560704f },
	{ -0.289694f, -0.723632f, -0.6264459f },
	{ 0.9760579f, -0.027176f, -0.215808f },
	{ 0.32727f, 0.92395f, 0.198015f },
	{ -0.796324f, 0.587032f, -0.14581f },
	{ 0.734251f, -0.525269f, 0.43008f }
};

NJS_MODEL_SADX attach_0017C8F0 = { vertex_0017C860, normal_0017C8A8, LengthOfArray<Sint32>(vertex_0017C860), meshlist_0017C848, matlist_0017C7A4, LengthOfArray<Uint16>(meshlist_0017C848), LengthOfArray<Uint16>(matlist_0017C7A4),{ -11.5054f, 0.56345f, 35.24943f }, 7.686327f, NULL };

NJS_OBJECT object_0017C918 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C8F0, 654.5787f, -386.84f, -3133.199f, 0, 0, 0, 1, 1, 1, NULL, &object_0017C770 };

NJS_MATERIAL matlist_0017C94C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017C960[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017C990[] = {
	{ 253, 104 },
	{ 138, 255 },
	{ 139, -217 },
	{ 253, 104 },
	{ 139, -217 },
	{ 255, -510 },
	{ 138, 255 },
	{ 0, 104 },
	{ 1, -444 },
	{ 138, 255 },
	{ 1, -444 },
	{ 139, -217 },
	{ 0, 104 },
	{ 253, 104 },
	{ 255, -510 },
	{ 0, 104 },
	{ 255, -510 },
	{ 1, -444 },
	{ 253, 104 },
	{ 0, 104 },
	{ 138, 255 },
	{ 139, -217 },
	{ 1, -444 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_0017C9F0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017C960, NULL, NULL, NULL, uv_0017C990, NULL }
};

NJS_VECTOR vertex_0017CA08[] = {
	{ -8.198778f, 0.528826f, 25.20438f },
	{ -9.749397f, -0.166494f, 28.3693f },
	{ -8.886625f, -0.218322f, 28.65014f },
	{ -11.58064f, 1.249414f, 35.62624f },
	{ -13.68695f, 0.5874749f, 40.50449f },
	{ -13.28643f, 0.5634159f, 42.21057f }
};

NJS_VECTOR normal_0017CA50[] = {
	{ -0.76792f, 0.33201f, -0.547785f },
	{ -0.374749f, -0.911919f, -0.167234f },
	{ 0.8022439f, -0.5736499f, 0.165319f },
	{ 0.325929f, 0.937582f, 0.121287f },
	{ -0.882118f, 0.408201f, -0.23503f },
	{ 0.562288f, -0.713794f, 0.417529f }
};

NJS_MODEL_SADX attach_0017CA98 = { vertex_0017CA08, normal_0017CA50, LengthOfArray<Sint32>(vertex_0017CA08), meshlist_0017C9F0, matlist_0017C94C, LengthOfArray<Uint16>(meshlist_0017C9F0), LengthOfArray<Uint16>(matlist_0017C94C),{ -10.94286f, 0.515546f, 33.70747f }, 8.934983f, NULL };

NJS_OBJECT object_0017CAC0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017CA98, 650.0981f, -386.6f, -3119.414f, 0, 0, 0, 1, 1, 1, NULL, &object_0017C918 };

NJS_MATERIAL matlist_0017CAF4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017CB08[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017CB38[] = {
	{ 254, -177 },
	{ 138, 255 },
	{ 140, -508 },
	{ 254, -177 },
	{ 140, -508 },
	{ 255, -510 },
	{ 138, 255 },
	{ 0, -82 },
	{ 0, -464 },
	{ 138, 255 },
	{ 0, -464 },
	{ 140, -508 },
	{ 0, -82 },
	{ 254, -177 },
	{ 255, -510 },
	{ 0, -82 },
	{ 255, -510 },
	{ 0, -464 },
	{ 254, -177 },
	{ 0, -82 },
	{ 138, 255 },
	{ 140, -508 },
	{ 0, -464 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_0017CB98[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017CB08, NULL, NULL, NULL, uv_0017CB38, NULL }
};

NJS_VECTOR vertex_0017CBB0[] = {
	{ -8.167454f, 1.044253f, 25.10339f },
	{ -10.27376f, 0.382315f, 29.98163f },
	{ -9.873246f, 0.358255f, 31.68771f },
	{ -11.86974f, 1.266656f, 36.51837f },
	{ -12.12457f, 0.493496f, 35.68808f },
	{ -11.48309f, 0.454961f, 36.65121f }
};

NJS_VECTOR normal_0017CBF8[] = {
	{ -0.64766f, 0.661043f, -0.378891f },
	{ -0.286434f, -0.94972f, -0.126439f },
	{ 0.839025f, -0.497391f, 0.220544f },
	{ 0.079733f, 0.822442f, 0.563234f },
	{ -0.9967459f, -0.080399f, -0.005694f },
	{ -0.034012f, -0.918762f, 0.393344f }
};

NJS_MODEL_SADX attach_0017CC40 = { vertex_0017CBB0, normal_0017CBF8, LengthOfArray<Sint32>(vertex_0017CBB0), meshlist_0017CB98, matlist_0017CAF4, LengthOfArray<Uint16>(meshlist_0017CB98), LengthOfArray<Uint16>(matlist_0017CAF4),{ -10.14601f, 0.812456f, 30.8773f }, 6.103512f, NULL };

NJS_OBJECT object_0017CC68 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017CC40, 646.6826f, -386.4045f, -3108.893f, 0, 0, 0, 1, 1, 1, NULL, &object_0017CAC0 };

NJS_MATERIAL matlist_0017CC9C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017CCB0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017CCE0[] = {
	{ 253, 212 },
	{ 139, 143 },
	{ 140, -264 },
	{ 253, 212 },
	{ 140, -264 },
	{ 255, -510 },
	{ 139, 143 },
	{ 0, 255 },
	{ 1, -382 },
	{ 139, 143 },
	{ 1, -382 },
	{ 140, -264 },
	{ 0, 255 },
	{ 253, 212 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 1, -382 },
	{ 253, 212 },
	{ 0, 255 },
	{ 139, 143 },
	{ 140, -264 },
	{ 1, -382 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_0017CD40[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017CCB0, NULL, NULL, NULL, uv_0017CCE0, NULL }
};

NJS_VECTOR vertex_0017CD58[] = {
	{ -9.447733f, 1.121164f, 29.05117f },
	{ -9.385374f, 0.328949f, 27.24292f },
	{ -8.729143f, 0.289528f, 28.16057f },
	{ -11.42394f, 0.875766f, 35.14426f },
	{ -12.46558f, 0.149871f, 36.7399f },
	{ -12.21751f, 0.13497f, 38.91601f }
};

NJS_VECTOR normal_0017CDA0[] = {
	{ -0.08912899f, 0.972849f, -0.213591f },
	{ -0.315073f, -0.705073f, -0.635296f },
	{ 0.943015f, 0.319419f, 0.093241f },
	{ 0.163794f, 0.972655f, 0.164661f },
	{ -0.8865809f, 0.424716f, -0.183274f },
	{ 0.409346f, -0.821945f, 0.396033f }
};

NJS_MODEL_SADX attach_0017CDE8 = { vertex_0017CD58, normal_0017CDA0, LengthOfArray<Sint32>(vertex_0017CD58), meshlist_0017CD40, matlist_0017CC9C, LengthOfArray<Uint16>(meshlist_0017CD40), LengthOfArray<Uint16>(matlist_0017CC9C),{ -10.59736f, 0.628067f, 33.07946f }, 6.128259f, NULL };

NJS_OBJECT object_0017CE10 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017CDE8, 643.1719f, -386.213f, -3098.089f, 0, 0, 0, 1, 1, 1, NULL, &object_0017CC68 };

NJS_MATERIAL matlist_0017CE44[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017CE58[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017CE88[] = {
	{ 252, 225 },
	{ 139, -92 },
	{ 140, -537 },
	{ 252, 225 },
	{ 140, -537 },
	{ 255, -765 },
	{ 139, -92 },
	{ 0, 255 },
	{ 2, -682 },
	{ 139, -92 },
	{ 2, -682 },
	{ 140, -537 },
	{ 0, 255 },
	{ 252, 225 },
	{ 255, -765 },
	{ 0, 255 },
	{ 255, -765 },
	{ 2, -682 },
	{ 252, 225 },
	{ 0, 255 },
	{ 139, -92 },
	{ 140, -537 },
	{ 2, -682 },
	{ 255, -765 }
};

NJS_MESHSET_SADX meshlist_0017CEE8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017CE58, NULL, NULL, NULL, uv_0017CE88, NULL }
};

NJS_VECTOR vertex_0017CF00[] = {
	{ -9.897028f, 3.312294f, 30.44144f },
	{ -8.283166f, 2.426877f, 23.84954f },
	{ -7.599889f, 2.385831f, 24.68379f },
	{ -12.58011f, 3.453435f, 38.7103f },
	{ -13.93156f, 2.746151f, 41.26116f },
	{ -13.5581f, 2.723716f, 43.05063f }
};

NJS_VECTOR normal_0017CF48[] = {
	{ -0.215129f, 0.967087f, -0.135873f },
	{ -0.78186f, -0.495313f, -0.37863f },
	{ 0.87906f, 0.424924f, 0.216083f },
	{ 0.233552f, 0.961826f, 0.142631f },
	{ -0.868275f, 0.454696f, -0.198369f },
	{ 0.494362f, -0.7537f, 0.433062f }
};

NJS_MODEL_SADX attach_0017CF90 = { vertex_0017CF00, normal_0017CF48, LengthOfArray<Sint32>(vertex_0017CF00), meshlist_0017CEE8, matlist_0017CE44, LengthOfArray<Uint16>(meshlist_0017CEE8), LengthOfArray<Uint16>(matlist_0017CE44),{ -10.76573f, 2.919633f, 33.45008f }, 10.10898f, NULL };

NJS_OBJECT object_0017CFB8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017CF90, 643.2485f, -390.5852f, -3098.29f, 0, 0, 0, 1, 1, 1, NULL, &object_0017CE10 };

NJS_MATERIAL matlist_0017CFEC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017D000[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017D030[] = {
	{ 254, 203 },
	{ 139, 105 },
	{ 141, -510 },
	{ 254, 203 },
	{ 141, -510 },
	{ 255, -145 },
	{ 139, 105 },
	{ 0, 255 },
	{ 0, -110 },
	{ 139, 105 },
	{ 0, -110 },
	{ 141, -510 },
	{ 0, 255 },
	{ 254, 203 },
	{ 255, -145 },
	{ 0, 255 },
	{ 255, -145 },
	{ 0, -110 },
	{ 254, 203 },
	{ 0, 255 },
	{ 139, 105 },
	{ 141, -510 },
	{ 0, -110 },
	{ 255, -145 }
};

NJS_MESHSET_SADX meshlist_0017D090[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017D000, NULL, NULL, NULL, uv_0017D030, NULL }
};

NJS_VECTOR vertex_0017D0A8[] = {
	{ -10.54963f, 3.786001f, 32.44985f },
	{ -10.24385f, 2.979164f, 29.89108f },
	{ -9.651549f, 2.943583f, 31.00583f },
	{ -13.77245f, 3.525033f, 42.38654f },
	{ -12.15859f, 2.639616f, 35.79464f },
	{ -11.47531f, 2.598571f, 36.62889f }
};

NJS_VECTOR normal_0017D0F0[] = {
	{ -0.174143f, 0.964824f, -0.196948f },
	{ -0.367904f, -0.70755f, -0.60334f },
	{ 0.958104f, 0.248795f, 0.141907f },
	{ 0.848332f, 0.19605f, 0.491831f },
	{ -0.84457f, -0.489419f, -0.217186f },
	{ 0.276126f, -0.955293f, 0.105688f }
};

NJS_MODEL_SADX attach_0017D138 = { vertex_0017D0A8, normal_0017D0F0, LengthOfArray<Sint32>(vertex_0017D0A8), meshlist_0017D090, matlist_0017CFEC, LengthOfArray<Uint16>(meshlist_0017D090), LengthOfArray<Uint16>(matlist_0017CFEC),{ -11.712f, 3.192286f, 36.13881f }, 6.578677f, NULL };

NJS_OBJECT object_0017D160 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017D138, 647.1294f, -390.7989f, -3110.236f, 0, 0, 0, 1, 1, 1, NULL, &object_0017CFB8 };

NJS_MATERIAL matlist_0017D194[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017D1A8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017D1D8[] = {
	{ 254, 158 },
	{ 139, 255 },
	{ 140, -255 },
	{ 254, 158 },
	{ 140, -255 },
	{ 255, -146 },
	{ 139, 255 },
	{ 0, 253 },
	{ 0, -89 },
	{ 139, 255 },
	{ 0, -89 },
	{ 140, -255 },
	{ 0, 253 },
	{ 254, 158 },
	{ 255, -146 },
	{ 0, 253 },
	{ 255, -146 },
	{ 0, -89 },
	{ 254, 158 },
	{ 0, 253 },
	{ 139, 255 },
	{ 140, -255 },
	{ 0, -89 },
	{ 255, -146 }
};

NJS_MESHSET_SADX meshlist_0017D238[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017D1A8, NULL, NULL, NULL, uv_0017D1D8, NULL }
};

NJS_VECTOR vertex_0017D250[] = {
	{ -9.773247f, 3.284822f, 30.05629f },
	{ -10.25674f, 2.525398f, 29.93104f },
	{ -9.839017f, 2.500305f, 31.58404f },
	{ -12.16991f, 3.883363f, 37.44574f },
	{ -11.86413f, 3.076526f, 34.88697f },
	{ -11.27183f, 3.040945f, 36.00172f }
};

NJS_VECTOR normal_0017D298[] = {
	{ 0.17233f, 0.8743719f, -0.453626f },
	{ -0.168485f, -0.9613259f, -0.217867f },
	{ 0.968487f, -0.22034f, 0.116119f },
	{ 0.537314f, 0.743076f, 0.398913f },
	{ -0.94375f, -0.297391f, -0.144546f },
	{ -0.014103f, -0.975153f, 0.221083f }
};

NJS_MODEL_SADX attach_0017D2E0 = { vertex_0017D250, normal_0017D298, LengthOfArray<Sint32>(vertex_0017D250), meshlist_0017D238, matlist_0017D194, LengthOfArray<Uint16>(meshlist_0017D238), LengthOfArray<Uint16>(matlist_0017D194),{ -10.97158f, 3.191834f, 33.68839f }, 3.943791f, NULL };

NJS_OBJECT object_0017D308 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017D2E0, 648.752f, -390.8867f, -3115.229f, 0, 0, 0, 1, 1, 1, NULL, &object_0017D160 };

NJS_MATERIAL matlist_0017D33C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017D350[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017D380[] = {
	{ 254, 100 },
	{ 139, 190 },
	{ 140, -140 },
	{ 254, 100 },
	{ 140, -140 },
	{ 255, -255 },
	{ 139, 190 },
	{ 0, 255 },
	{ 0, -142 },
	{ 139, 190 },
	{ 0, -142 },
	{ 140, -140 },
	{ 0, 255 },
	{ 254, 100 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 0, -142 },
	{ 254, 100 },
	{ 0, 255 },
	{ 139, 190 },
	{ 140, -140 },
	{ 0, -142 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_0017D3E0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017D350, NULL, NULL, NULL, uv_0017D380, NULL }
};

NJS_VECTOR vertex_0017D3F8[] = {
	{ -9.886744f, 3.319723f, 30.412f },
	{ -10.10715f, 2.544494f, 29.47557f },
	{ -9.85662f, 2.529445f, 31.64409f },
	{ -11.19583f, 3.370311f, 34.44303f },
	{ -11.67933f, 2.610887f, 34.31778f },
	{ -11.2616f, 2.585794f, 35.97078f }
};

NJS_VECTOR normal_0017D440[] = {
	{ 0.166005f, 0.952993f, -0.253468f },
	{ 0.057116f, -0.9705189f, -0.234161f },
	{ 0.983616f, -0.086707f, 0.158055f },
	{ 0.03285f, 0.96886f, 0.245421f },
	{ -0.9651459f, 0.231578f, -0.121919f },
	{ -0.07369699f, -0.904647f, 0.419741f }
};

NJS_MODEL_SADX attach_0017D488 = { vertex_0017D3F8, normal_0017D440, LengthOfArray<Sint32>(vertex_0017D3F8), meshlist_0017D3E0, matlist_0017D33C, LengthOfArray<Uint16>(meshlist_0017D3E0), LengthOfArray<Uint16>(matlist_0017D33C),{ -10.76797f, 2.949878f, 32.72318f }, 3.373009f, NULL };

NJS_OBJECT object_0017D4B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017D488, 650.1773f, -390.9626f, -3119.614f, 0, 0, 0, 1, 1, 1, NULL, &object_0017D308 };

NJS_MATERIAL matlist_0017D4E4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017D4F8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017D528[] = {
	{ 253, 254 },
	{ 140, -210 },
	{ 140, -440 },
	{ 253, 254 },
	{ 140, -440 },
	{ 255, -510 },
	{ 140, -210 },
	{ 0, 255 },
	{ 1, -392 },
	{ 140, -210 },
	{ 1, -392 },
	{ 140, -440 },
	{ 0, 255 },
	{ 253, 254 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 1, -392 },
	{ 253, 254 },
	{ 0, 255 },
	{ 140, -210 },
	{ 140, -440 },
	{ 1, -392 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_0017D588[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017D4F8, NULL, NULL, NULL, uv_0017D528, NULL }
};

NJS_VECTOR vertex_0017D5A0[] = {
	{ -11.45996f, 3.386117f, 35.25592f },
	{ -9.519078f, 2.481056f, 27.65575f },
	{ -8.656307f, 2.429228f, 27.93658f },
	{ -12.65673f, 3.458009f, 38.94581f },
	{ -12.87713f, 2.682781f, 38.00939f },
	{ -12.6266f, 2.667731f, 40.17791f }
};

NJS_VECTOR normal_0017D5E8[] = {
	{ -0.24282f, 0.960322f, -0.137186f },
	{ -0.815551f, -0.453167f, -0.359884f },
	{ 0.867386f, 0.446296f, 0.220139f },
	{ -0.043543f, 0.971351f, 0.233626f },
	{ -0.983438f, 0.08979999f, -0.157435f },
	{ -0.169901f, -0.95093f, 0.258584f }
};

NJS_MODEL_SADX attach_0017D630 = { vertex_0017D5A0, normal_0017D5E8, LengthOfArray<Sint32>(vertex_0017D5A0), meshlist_0017D588, matlist_0017D4E4, LengthOfArray<Uint16>(meshlist_0017D588), LengthOfArray<Uint16>(matlist_0017D4E4),{ -10.76672f, 2.943619f, 33.91683f }, 6.607217f, NULL };

NJS_OBJECT object_0017D658 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017D630, 652.9542f, -391.1003f, -3128.144f, 0, 0, 0, 1, 1, 1, NULL, &object_0017D4B0 };

NJS_MATERIAL matlist_0017D68C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017D6A0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017D6D0[] = {
	{ 253, 170 },
	{ 139, 51 },
	{ 140, -139 },
	{ 253, 170 },
	{ 140, -139 },
	{ 255, -255 },
	{ 139, 51 },
	{ 0, 255 },
	{ 1, -208 },
	{ 139, 51 },
	{ 1, -208 },
	{ 140, -139 },
	{ 0, 255 },
	{ 253, 170 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 1, -208 },
	{ 253, 170 },
	{ 0, 255 },
	{ 139, 51 },
	{ 140, -139 },
	{ 1, -208 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_0017D730[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017D6A0, NULL, NULL, NULL, uv_0017D6D0, NULL }
};

NJS_VECTOR vertex_0017D748[] = {
	{ -10.5779f, 3.78773f, 32.53732f },
	{ -9.716434f, 2.492942f, 28.26523f },
	{ -9.409352f, 2.929065f, 30.25939f },
	{ -11.82384f, 3.408007f, 36.37883f },
	{ -12.74992f, 2.67517f, 37.61818f },
	{ -12.1945f, 2.641805f, 38.84664f }
};

NJS_VECTOR normal_0017D790[] = {
	{ -0.216103f, 0.962678f, -0.162941f },
	{ -0.341908f, -0.753016f, -0.562198f },
	{ 0.91587f, 0.356363f, 0.1849f },
	{ 0.210282f, 0.9448209f, 0.251185f },
	{ -0.9122519f, 0.39391f, -0.112393f },
	{ 0.715952f, -0.430892f, 0.5493129f }
};

NJS_MODEL_SADX attach_0017D7D8 = { vertex_0017D748, normal_0017D790, LengthOfArray<Sint32>(vertex_0017D748), meshlist_0017D730, matlist_0017D68C, LengthOfArray<Uint16>(meshlist_0017D730), LengthOfArray<Uint16>(matlist_0017D68C),{ -11.07964f, 3.140336f, 33.55594f }, 5.548164f, NULL };

NJS_OBJECT object_0017D800 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017D7D8, 609.2846f, -390.7818f, -3111.469f, 0, 0, 0, 1, 1, 1, NULL, &object_0017D658 };

NJS_MATERIAL matlist_0017D834[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017D848[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017D878[] = {
	{ 254, 109 },
	{ 139, 255 },
	{ 140, -255 },
	{ 254, 109 },
	{ 140, -255 },
	{ 255, -103 },
	{ 139, 255 },
	{ 0, 179 },
	{ 0, 5 },
	{ 139, 255 },
	{ 0, 5 },
	{ 140, -255 },
	{ 0, 179 },
	{ 254, 109 },
	{ 255, -103 },
	{ 0, 179 },
	{ 255, -103 },
	{ 0, 5 },
	{ 254, 109 },
	{ 0, 179 },
	{ 139, 255 },
	{ 140, -255 },
	{ 0, 5 },
	{ 255, -103 }
};

NJS_MESHSET_SADX meshlist_0017D8D8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017D848, NULL, NULL, NULL, uv_0017D878, NULL }
};

NJS_VECTOR vertex_0017D8F0[] = {
	{ -9.930917f, 3.310292f, 30.54508f },
	{ -10.79307f, 2.573614f, 31.58731f },
	{ -10.28928f, 2.543351f, 32.97497f },
	{ -12.54983f, 3.906155f, 38.61683f },
	{ -11.68836f, 2.611367f, 34.34473f },
	{ -11.38128f, 3.04749f, 36.33888f }
};

NJS_VECTOR normal_0017D938[] = {
	{ -0.32846f, 0.693371f, -0.6413659f },
	{ -0.06996699f, -0.990782f, -0.115995f },
	{ 0.914564f, -0.381212f, 0.135091f },
	{ 0.671563f, 0.6237f, 0.400003f },
	{ -0.858672f, -0.500294f, -0.111303f },
	{ 0.288586f, -0.923574f, 0.252445f }
};

NJS_MODEL_SADX attach_0017D980 = { vertex_0017D8F0, normal_0017D938, LengthOfArray<Sint32>(vertex_0017D8F0), meshlist_0017D8D8, matlist_0017D834, LengthOfArray<Uint16>(meshlist_0017D8D8), LengthOfArray<Uint16>(matlist_0017D834),{ -11.24037f, 3.224753f, 34.58096f }, 4.243001f, NULL };

NJS_OBJECT object_0017D9A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017D980, 611.259f, -390.8907f, -3117.545f, 0, 0, 0, 1, 1, 1, NULL, &object_0017D800 };

NJS_MATERIAL matlist_0017D9DC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017D9F0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017DA20[] = {
	{ 252, 151 },
	{ 139, 138 },
	{ 140, -394 },
	{ 252, 151 },
	{ 140, -394 },
	{ 255, -510 },
	{ 139, 138 },
	{ 0, 255 },
	{ 2, -454 },
	{ 139, 138 },
	{ 2, -454 },
	{ 140, -394 },
	{ 0, 255 },
	{ 252, 151 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 2, -454 },
	{ 252, 151 },
	{ 0, 255 },
	{ 139, 138 },
	{ 140, -394 },
	{ 2, -454 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_0017DA80[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017D9F0, NULL, NULL, NULL, uv_0017DA20, NULL }
};

NJS_VECTOR vertex_0017DA98[] = {
	{ -9.128584f, 3.24634f, 28.06849f },
	{ -8.85231f, 2.441275f, 25.60069f },
	{ -8.658335f, 2.429623f, 27.94358f },
	{ -12.56532f, 3.452791f, 38.66473f },
	{ -13.42747f, 2.716114f, 39.70696f },
	{ -12.92368f, 2.685851f, 41.09463f }
};

NJS_VECTOR normal_0017DAE0[] = {
	{ 0.061323f, 0.984982f, -0.161401f },
	{ -0.05202f, -0.940534f, -0.335693f },
	{ 0.9707789f, 0.157731f, 0.180854f },
	{ 0.177574f, 0.964659f, 0.19468f },
	{ -0.90425f, 0.402085f, -0.143737f },
	{ 0.278901f, -0.799464f, 0.532044f }
};

NJS_MODEL_SADX attach_0017DB28 = { vertex_0017DA98, normal_0017DAE0, LengthOfArray<Sint32>(vertex_0017DA98), meshlist_0017DA80, matlist_0017D9DC, LengthOfArray<Uint16>(meshlist_0017DA80), LengthOfArray<Uint16>(matlist_0017D9DC),{ -11.0429f, 2.941207f, 33.34766f }, 8.105759f, NULL };

NJS_OBJECT object_0017DB50 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017DB28, 613.8997f, -391.0299f, -3125.667f, 0, 0, 0, 1, 1, 1, NULL, &object_0017D9A8 };

NJS_MATERIAL matlist_0017DB84[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017DB98[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017DBC8[] = {
	{ 254, 145 },
	{ 139, 255 },
	{ 140, -255 },
	{ 254, 145 },
	{ 140, -255 },
	{ 255, -237 },
	{ 139, 255 },
	{ 0, 183 },
	{ 0, -96 },
	{ 139, 255 },
	{ 0, -96 },
	{ 140, -255 },
	{ 0, 183 },
	{ 254, 145 },
	{ 255, -237 },
	{ 0, 183 },
	{ 255, -237 },
	{ 0, -96 },
	{ 254, 145 },
	{ 0, 183 },
	{ 139, 255 },
	{ 140, -255 },
	{ 0, -96 },
	{ 255, -237 }
};

NJS_MESHSET_SADX meshlist_0017DC28[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017DB98, NULL, NULL, NULL, uv_0017DBC8, NULL }
};

NJS_VECTOR vertex_0017DC40[] = {
	{ -9.895026f, 3.292048f, 30.43165f },
	{ -10.71046f, 2.552564f, 31.32984f },
	{ -10.02718f, 2.511518f, 32.16409f },
	{ -12.31627f, 3.437496f, 37.89691f },
	{ -12.04f, 2.632431f, 35.4291f },
	{ -11.84602f, 2.620779f, 37.77199f }
};

NJS_VECTOR normal_0017DC88[] = {
	{ -0.351345f, 0.69667f, -0.625466f },
	{ -0.216932f, -0.942283f, -0.255037f },
	{ 0.902238f, -0.423721f, 0.080169f },
	{ 0.05202f, 0.940534f, 0.335694f },
	{ -0.97078f, -0.15773f, -0.180855f },
	{ -0.061323f, -0.984982f, 0.161401f }
};

NJS_MODEL_SADX attach_0017DCD0 = { vertex_0017DC40, normal_0017DC88, LengthOfArray<Sint32>(vertex_0017DC40), meshlist_0017DC28, matlist_0017DB84, LengthOfArray<Uint16>(meshlist_0017DC28), LengthOfArray<Uint16>(matlist_0017DB84),{ -11.10565f, 2.974507f, 34.16428f }, 3.924083f, NULL };

NJS_OBJECT object_0017DCF8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017DCD0, 617.0895f, -391.2118f, -3135.492f, 0, 0, 0, 1, 1, 1, NULL, &object_0017DB50 };

NJS_MATERIAL matlist_0017DD2C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017DD40[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017DD70[] = {
	{ 253, 190 },
	{ 139, 129 },
	{ 140, -148 },
	{ 253, 190 },
	{ 140, -148 },
	{ 255, -255 },
	{ 139, 129 },
	{ 0, 255 },
	{ 1, -218 },
	{ 139, 129 },
	{ 1, -218 },
	{ 140, -148 },
	{ 0, 255 },
	{ 253, 190 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 1, -218 },
	{ 253, 190 },
	{ 0, 255 },
	{ 139, 129 },
	{ 140, -148 },
	{ 1, -218 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_0017DDD0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017DD40, NULL, NULL, NULL, uv_0017DD70, NULL }
};

NJS_VECTOR vertex_0017DDE8[] = {
	{ -10.26209f, 3.314128f, 31.56329f },
	{ -10.12105f, 2.517187f, 29.51244f },
	{ -9.575463f, 2.484413f, 30.77124f },
	{ -11.62359f, 3.395916f, 35.7611f },
	{ -12.43903f, 2.656432f, 36.65929f },
	{ -11.75575f, 2.615386f, 37.49355f }
};

NJS_VECTOR normal_0017DE30[] = {
	{ -0.04903f, 0.97449f, -0.219009f },
	{ -0.321406f, -0.762815f, -0.56108f },
	{ 0.954177f, 0.273573f, 0.121259f },
	{ 0.216931f, 0.942283f, 0.255036f },
	{ -0.902238f, 0.42372f, -0.08017f },
	{ 0.351345f, -0.69667f, 0.625466f }
};

NJS_MODEL_SADX attach_0017DE78 = { vertex_0017DDE8, normal_0017DE30, LengthOfArray<Sint32>(vertex_0017DDE8), meshlist_0017DDD0, matlist_0017DD2C, LengthOfArray<Uint16>(meshlist_0017DDD0), LengthOfArray<Uint16>(matlist_0017DD2C),{ -11.00725f, 2.940165f, 33.50299f }, 4.239685f, NULL };

NJS_OBJECT object_0017DEA0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017DE78, 618.8208f, -391.3061f, -3140.82f, 0, 0, 0, 1, 1, 1, NULL, &object_0017DCF8 };

NJS_MATERIAL matlist_0017DED4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017DEE8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017DF18[] = {
	{ 253, 254 },
	{ 139, 158 },
	{ 139, -5 },
	{ 253, 254 },
	{ 139, -5 },
	{ 255, -510 },
	{ 139, 158 },
	{ 0, 255 },
	{ 1, -508 },
	{ 139, 158 },
	{ 1, -508 },
	{ 139, -5 },
	{ 0, 255 },
	{ 253, 254 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 1, -508 },
	{ 253, 254 },
	{ 0, 255 },
	{ 139, 158 },
	{ 139, -5 },
	{ 1, -508 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_0017DF78[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017DEE8, NULL, NULL, NULL, uv_0017DF18, NULL }
};

NJS_VECTOR vertex_0017DF90[] = {
	{ -10.35249f, 1.195583f, 31.84573f },
	{ -10.34669f, 0.406766f, 30.21185f },
	{ -9.483914f, 0.354937f, 30.49268f },
	{ -11.16688f, 1.224468f, 34.35298f },
	{ -14.1436f, 0.614818f, 41.91492f },
	{ -13.28083f, 0.56299f, 42.19576f }
};

NJS_VECTOR normal_0017DFD8[] = {
	{ -0.200733f, 0.94415f, -0.261318f },
	{ -0.626227f, -0.491269f, -0.605387f },
	{ 0.917752f, 0.3932f, 0.055895f },
	{ 0.357702f, 0.923378f, 0.139363f },
	{ -0.7984999f, 0.56138f, -0.217372f },
	{ 0.759356f, -0.544646f, 0.356006f }
};

NJS_MODEL_SADX attach_0017E020 = { vertex_0017DF90, normal_0017DFD8, LengthOfArray<Sint32>(vertex_0017DF90), meshlist_0017DF78, matlist_0017DED4, LengthOfArray<Uint16>(meshlist_0017DF78), LengthOfArray<Uint16>(matlist_0017DED4),{ -11.81376f, 0.789703f, 36.2038f }, 6.42897f, NULL };

NJS_OBJECT object_0017E048 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017E020, 608.3499f, -386.1997f, -3108.583f, 0, 0, 0, 1, 1, 1, NULL, &object_0017DEA0 };

NJS_MATERIAL matlist_0017E07C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017E090[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017E0C0[] = {
	{ 254, 254 },
	{ 140, 192 },
	{ 140, 0 },
	{ 254, 254 },
	{ 140, 0 },
	{ 255, 94 },
	{ 140, 192 },
	{ 0, 255 },
	{ 0, 94 },
	{ 140, 192 },
	{ 0, 94 },
	{ 140, 0 },
	{ 0, 255 },
	{ 254, 254 },
	{ 255, 94 },
	{ 0, 255 },
	{ 255, 94 },
	{ 0, 94 },
	{ 254, 254 },
	{ 0, 255 },
	{ 140, 192 },
	{ 140, 0 },
	{ 0, 94 },
	{ 255, 94 }
};

NJS_MESHSET_SADX meshlist_0017E120[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017E090, NULL, NULL, NULL, uv_0017E0C0, NULL }
};

NJS_VECTOR vertex_0017E138[] = {
	{ -10.72035f, 1.197645f, 32.97593f },
	{ -10.87683f, 0.418576f, 31.8424f },
	{ -10.01406f, 0.366748f, 32.12324f },
	{ -11.69828f, 1.256391f, 35.99112f },
	{ -11.69248f, 0.467574f, 34.35723f },
	{ -10.82971f, 0.415745f, 34.63807f }
};

NJS_VECTOR normal_0017E180[] = {
	{ -0.197182f, 0.922377f, -0.332174f },
	{ -0.535728f, -0.522603f, -0.663236f },
	{ 0.938931f, 0.343603f, -0.018605f },
	{ 0.627398f, 0.491119f, 0.604296f },
	{ -0.918067f, -0.392655f, -0.054546f },
	{ 0.209052f, -0.9403549f, 0.268383f }
};

NJS_MODEL_SADX attach_0017E1C8 = { vertex_0017E138, normal_0017E180, LengthOfArray<Sint32>(vertex_0017E138), meshlist_0017E120, matlist_0017E07C, LengthOfArray<Uint16>(meshlist_0017E120), LengthOfArray<Uint16>(matlist_0017E07C),{ -10.85617f, 0.811569f, 33.91676f }, 2.23888f, NULL };

NJS_OBJECT object_0017E1F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017E1C8, 609.7013f, -386.2614f, -3112.73f, 0, 0, 0, 1, 1, 1, NULL, &object_0017E048 };

NJS_MATERIAL matlist_0017E224[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017E238[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017E268[] = {
	{ 254, -80 },
	{ 138, 255 },
	{ 140, -255 },
	{ 254, -80 },
	{ 140, -255 },
	{ 255, -212 },
	{ 138, 255 },
	{ 0, 49 },
	{ 0, -212 },
	{ 138, 255 },
	{ 0, -212 },
	{ 140, -255 },
	{ 0, 49 },
	{ 254, -80 },
	{ 255, -212 },
	{ 0, 49 },
	{ 255, -212 },
	{ 0, -212 },
	{ 254, -80 },
	{ 0, 49 },
	{ 138, 255 },
	{ 140, -255 },
	{ 0, -212 },
	{ 255, -212 }
};

NJS_MESHSET_SADX meshlist_0017E2C8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017E238, NULL, NULL, NULL, uv_0017E268, NULL }
};

NJS_VECTOR vertex_0017E2E0[] = {
	{ -7.815669f, 0.724942f, 24.02033f },
	{ -9.813789f, -0.13983f, 28.56501f },
	{ -9.917329f, -0.13361f, 31.8252f },
	{ -11.60647f, 1.250874f, 35.70824f },
	{ -11.76295f, 0.471805f, 34.5747f },
	{ -10.90018f, 0.419977f, 34.85554f }
};

NJS_VECTOR normal_0017E328[] = {
	{ -0.593763f, 0.587625f, -0.549675f },
	{ -0.403372f, -0.910235f, -0.093613f },
	{ 0.850625f, -0.470332f, 0.235003f },
	{ 0.595965f, 0.51586f, 0.615398f },
	{ -0.915014f, -0.40283f, 0.021846f },
	{ -0.005327f, -0.933933f, 0.35741f }
};

NJS_MODEL_SADX attach_0017E370 = { vertex_0017E2E0, normal_0017E328, LengthOfArray<Sint32>(vertex_0017E2E0), meshlist_0017E2C8, matlist_0017E224, LengthOfArray<Uint16>(meshlist_0017E2C8), LengthOfArray<Uint16>(matlist_0017E224),{ -9.789309f, 0.555522f, 29.86429f }, 6.168265f, NULL };

NJS_OBJECT object_0017E398 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017E370, 610.5899f, -386.3051f, -3115.46f, 0, 0, 0, 1, 1, 1, NULL, &object_0017E1F0 };

NJS_MATERIAL matlist_0017E3CC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017E3E0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017E410[] = {
	{ 252, 144 },
	{ 138, 255 },
	{ 140, -372 },
	{ 252, 144 },
	{ 140, -372 },
	{ 255, -765 },
	{ 138, 255 },
	{ 0, 199 },
	{ 2, -613 },
	{ 138, 255 },
	{ 2, -613 },
	{ 140, -372 },
	{ 0, 199 },
	{ 252, 144 },
	{ 255, -765 },
	{ 0, 199 },
	{ 255, -765 },
	{ 2, -613 },
	{ 252, 144 },
	{ 0, 199 },
	{ 138, 255 },
	{ 140, -372 },
	{ 2, -613 },
	{ 255, -765 }
};

NJS_MESHSET_SADX meshlist_0017E470[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017E3E0, NULL, NULL, NULL, uv_0017E410, NULL }
};

NJS_VECTOR vertex_0017E488[] = {
	{ -8.262203f, 1.049826f, 25.39737f },
	{ -9.089933f, 0.311081f, 26.33346f },
	{ -8.578773f, 0.280375f, 27.69839f },
	{ -12.25954f, 0.991744f, 37.72209f },
	{ -14.25767f, 0.126971f, 42.26677f },
	{ -14.3612f, 0.133191f, 45.52696f }
};

NJS_VECTOR normal_0017E4D0[] = {
	{ -0.294711f, 0.8098029f, -0.507311f },
	{ -0.108104f, -0.973521f, -0.20142f },
	{ 0.914351f, -0.380711f, 0.137914f },
	{ 0.181695f, 0.976765f, 0.113651f },
	{ -0.872533f, 0.430973f, -0.230105f },
	{ 0.544383f, -0.780404f, 0.307598f }
};

NJS_MODEL_SADX attach_0017E518 = { vertex_0017E488, normal_0017E4D0, LengthOfArray<Sint32>(vertex_0017E488), meshlist_0017E470, matlist_0017E3CC, LengthOfArray<Uint16>(meshlist_0017E470), LengthOfArray<Uint16>(matlist_0017E3CC),{ -11.3117f, 0.588399f, 35.46217f }, 10.51654f, NULL };

NJS_OBJECT object_0017E540 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017E518, 615.0383f, -386.5529f, -3129.156f, 0, 0, 0, 1, 1, 1, NULL, &object_0017E398 };

NJS_MATERIAL matlist_0017E574[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017E588[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017E5B8[] = {
	{ 252, 188 },
	{ 139, -1 },
	{ 140, -404 },
	{ 252, 188 },
	{ 140, -404 },
	{ 255, -510 },
	{ 139, -1 },
	{ 0, 255 },
	{ 2, -456 },
	{ 139, -1 },
	{ 2, -456 },
	{ 140, -404 },
	{ 0, 255 },
	{ 252, 188 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 2, -456 },
	{ 252, 188 },
	{ 0, 255 },
	{ 139, -1 },
	{ 140, -404 },
	{ 2, -456 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_0017E618[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017E588, NULL, NULL, NULL, uv_0017E5B8, NULL }
};

NJS_VECTOR vertex_0017E630[] = {
	{ -9.605309f, 1.130631f, 29.538f },
	{ -8.343056f, 0.266337f, 24.03019f },
	{ -7.932704f, 0.241686f, 25.70594f },
	{ -12.33391f, 1.294544f, 37.95089f },
	{ -13.16164f, 0.5557989f, 38.88699f },
	{ -12.65048f, 0.5250919f, 40.25191f }
};

NJS_VECTOR normal_0017E678[] = {
	{ -0.15469f, 0.979f, -0.132774f },
	{ -0.6836219f, -0.608885f, -0.402392f },
	{ 0.900176f, 0.380789f, 0.211382f },
	{ 0.170442f, 0.9645489f, 0.201482f },
	{ -0.908685f, 0.394166f, -0.137569f },
	{ 0.252508f, -0.803765f, 0.538704f }
};

NJS_MODEL_SADX attach_0017E6C0 = { vertex_0017E630, normal_0017E678, LengthOfArray<Sint32>(vertex_0017E630), meshlist_0017E618, matlist_0017E574, LengthOfArray<Uint16>(meshlist_0017E618), LengthOfArray<Uint16>(matlist_0017E574),{ -10.54717f, 0.768115f, 32.14105f }, 8.521807f, NULL };

NJS_OBJECT object_0017E6E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017E6C0, 619.1165f, -386.7785f, -3141.71f, 0, 0, 0, 1, 1, 1, NULL, &object_0017E540 };

NJS_MATERIAL matlist_0017E71C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017E758[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0017E77C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017E788[] = {
	{ 0 },
	{ 0, 127 },
	{ 508, 127 },
	{ 0 },
	{ 508, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 508, 255 },
	{ 0, 127 },
	{ 508, 255 },
	{ 508, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 508, 255 }
};

NJS_TEX uv_0017E7D0[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0017E7E8[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_0017E758, NULL, NULL, NULL, uv_0017E788, NULL },
{ NJD_MESHSET_3 | 2, 2, poly_0017E77C, NULL, NULL, NULL, uv_0017E7D0, NULL }
};

NJS_VECTOR vertex_0017E818[] = {
	{ -29.98157f, -2.214997f, 27.43749f },
	{ -29.20147f, 2.157499f, 25.03658f },
	{ -30.76167f, 2.157498f, 29.83839f },
	{ 8.059773f, -2.214997f, 39.79786f },
	{ 8.839875f, 2.157499f, 37.39695f },
	{ 7.279674f, 2.157498f, 42.19877f }
};

NJS_VECTOR normal_0017E860[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_0017E8A8 = { vertex_0017E818, normal_0017E860, LengthOfArray<Sint32>(vertex_0017E818), meshlist_0017E7E8, matlist_0017E71C, LengthOfArray<Uint16>(meshlist_0017E7E8), LengthOfArray<Uint16>(matlist_0017E71C),{ -10.9609f, -0.028749f, 33.61768f }, 21.58021f, NULL };

NJS_OBJECT object_0017E8D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017E8A8, 636.9886f, -397.9731f, -3137.489f, 0, 0, 0, 1, 1, 1, NULL, &object_0017E6E8 };

NJS_MATERIAL matlist_0017E904[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017E940[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0017E964[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017E970[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 510, 255 },
	{ 0, 127 },
	{ 510, 255 },
	{ 510, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_0017E9B8[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0017E9D0[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_0017E940, NULL, NULL, NULL, uv_0017E970, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_0017E964, NULL, NULL, NULL, uv_0017E9B8, NULL }
};

NJS_VECTOR vertex_0017EA00[] = {
	{ -29.98146f, -2.214997f, 27.43752f },
	{ -29.20136f, 2.157499f, 25.03661f },
	{ -30.76156f, 2.157498f, 29.83843f },
	{ 8.059895f, -2.214997f, 39.7979f },
	{ 8.839997f, 2.157499f, 37.397f },
	{ 7.279794f, 2.157498f, 42.19881f }
};

NJS_VECTOR normal_0017EA48[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f },
	{ 0.34172f, -0.750001f, 0.566327f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_0017EA90 = { vertex_0017EA00, normal_0017EA48, LengthOfArray<Sint32>(vertex_0017EA00), meshlist_0017E9D0, matlist_0017E904, LengthOfArray<Uint16>(meshlist_0017E9D0), LengthOfArray<Uint16>(matlist_0017E904),{ -10.96078f, -0.028749f, 33.61771f }, 21.58021f, NULL };

NJS_OBJECT object_0017EAB8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017EA90, 635.1622f, -397.873f, -3131.868f, 0, 0, 0, 1, 1, 1, NULL, &object_0017E8D0 };

NJS_MATERIAL matlist_0017EAEC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017EB28[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0017EB4C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017EB58[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 510, 255 },
	{ 0, 127 },
	{ 510, 255 },
	{ 510, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_0017EBA0[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0017EBB8[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_0017EB28, NULL, NULL, NULL, uv_0017EB58, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_0017EB4C, NULL, NULL, NULL, uv_0017EBA0, NULL }
};

NJS_VECTOR vertex_0017EBE8[] = {
	{ -29.98146f, -2.214997f, 27.43752f },
	{ -29.20136f, 2.157499f, 25.03661f },
	{ -30.76156f, 2.157498f, 29.83843f },
	{ 8.059895f, -2.214997f, 39.7979f },
	{ 8.839997f, 2.157499f, 37.397f },
	{ 7.279794f, 2.157498f, 42.19881f }
};

NJS_VECTOR normal_0017EC30[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f },
	{ 0.34172f, -0.750001f, 0.566327f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_0017EC78 = { vertex_0017EBE8, normal_0017EC30, LengthOfArray<Sint32>(vertex_0017EBE8), meshlist_0017EBB8, matlist_0017EAEC, LengthOfArray<Uint16>(meshlist_0017EBB8), LengthOfArray<Uint16>(matlist_0017EAEC),{ -10.96078f, -0.028749f, 33.61771f }, 21.58021f, NULL };

NJS_OBJECT object_0017ECA0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017EC78, 633.336f, -397.773f, -3126.247f, 0, 0, 0, 1, 1, 1, NULL, &object_0017EAB8 };

NJS_MATERIAL matlist_0017ECD4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017ED10[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0017ED34[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017ED40[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 510, 255 },
	{ 0, 127 },
	{ 510, 255 },
	{ 510, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_0017ED88[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0017EDA0[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_0017ED10, NULL, NULL, NULL, uv_0017ED40, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_0017ED34, NULL, NULL, NULL, uv_0017ED88, NULL }
};

NJS_VECTOR vertex_0017EDD0[] = {
	{ -29.98146f, -2.214997f, 27.43752f },
	{ -29.20136f, 2.157499f, 25.03661f },
	{ -30.76156f, 2.157498f, 29.83843f },
	{ 8.059895f, -2.214997f, 39.7979f },
	{ 8.839997f, 2.157499f, 37.397f },
	{ 7.279794f, 2.157498f, 42.19881f }
};

NJS_VECTOR normal_0017EE18[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f },
	{ 0.34172f, -0.750001f, 0.566327f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_0017EE60 = { vertex_0017EDD0, normal_0017EE18, LengthOfArray<Sint32>(vertex_0017EDD0), meshlist_0017EDA0, matlist_0017ECD4, LengthOfArray<Uint16>(meshlist_0017EDA0), LengthOfArray<Uint16>(matlist_0017ECD4),{ -10.96078f, -0.028749f, 33.61771f }, 21.58021f, NULL };

NJS_OBJECT object_0017EE88 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017EE60, 631.5097f, -397.673f, -3120.626f, 0, 0, 0, 1, 1, 1, NULL, &object_0017ECA0 };

NJS_MATERIAL matlist_0017EEBC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017EEF8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0017EF1C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017EF28[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 510, 255 },
	{ 0, 127 },
	{ 510, 255 },
	{ 510, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_0017EF70[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0017EF88[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_0017EEF8, NULL, NULL, NULL, uv_0017EF28, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_0017EF1C, NULL, NULL, NULL, uv_0017EF70, NULL }
};

NJS_VECTOR vertex_0017EFB8[] = {
	{ -29.98146f, -2.214997f, 27.43752f },
	{ -29.20136f, 2.157499f, 25.03661f },
	{ -30.76156f, 2.157498f, 29.83843f },
	{ 8.059895f, -2.214997f, 39.7979f },
	{ 8.839997f, 2.157499f, 37.397f },
	{ 7.279794f, 2.157498f, 42.19881f }
};

NJS_VECTOR normal_0017F000[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f },
	{ 0.34172f, -0.750001f, 0.566327f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_0017F048 = { vertex_0017EFB8, normal_0017F000, LengthOfArray<Sint32>(vertex_0017EFB8), meshlist_0017EF88, matlist_0017EEBC, LengthOfArray<Uint16>(meshlist_0017EF88), LengthOfArray<Uint16>(matlist_0017EEBC),{ -10.96078f, -0.028749f, 33.61771f }, 21.58021f, NULL };

NJS_OBJECT object_0017F070 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017F048, 627.8571f, -397.4731f, -3109.385f, 0, 0, 0, 1, 1, 1, NULL, &object_0017EE88 };

NJS_MATERIAL matlist_0017F104[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017F118[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017F148[] = {
	{ 254, 154 },
	{ 139, 247 },
	{ 140, 41 },
	{ 254, 154 },
	{ 140, 41 },
	{ 255, 0 },
	{ 139, 247 },
	{ 0, 254 },
	{ 0, 18 },
	{ 139, 247 },
	{ 0, 18 },
	{ 140, 41 },
	{ 0, 254 },
	{ 254, 154 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0, 18 },
	{ 254, 154 },
	{ 0, 254 },
	{ 139, 247 },
	{ 140, 41 },
	{ 0, 18 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0017F1A8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017F118, NULL, NULL, NULL, uv_0017F148, NULL }
};

NJS_VECTOR vertex_0017F1C0[] = {
	{ 0.8890679f, 2.602614f, -2.645991f },
	{ 0.454746f, 1.840237f, -2.922868f },
	{ 0.796251f, 1.819722f, -1.034847f },
	{ -0.179839f, 2.889259f, 0.649696f },
	{ -0.7739829f, 2.136483f, 0.8655879f },
	{ -0.009563999f, 2.090563f, 1.449666f }
};

NJS_VECTOR normal_0017F208[] = {
	{ 0.161109f, 0.887193f, -0.432356f },
	{ -0.117495f, -0.972686f, -0.200194f },
	{ 0.962087f, -0.23317f, 0.141491f },
	{ 0.223768f, 0.891872f, 0.393055f },
	{ -0.954069f, 0.294934f, 0.052601f },
	{ 0.050715f, -0.7022679f, 0.710104f }
};

NJS_MODEL_SADX attach_0017F250 = { vertex_0017F1C0, normal_0017F208, LengthOfArray<Sint32>(vertex_0017F1C0), meshlist_0017F1A8, matlist_0017F104, LengthOfArray<Uint16>(meshlist_0017F1A8), LengthOfArray<Uint16>(matlist_0017F104),{ 0.057543f, 2.354491f, -0.736601f }, 2.339066f, NULL };

NJS_OBJECT object_0017F278 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017F250, 604.8201f, -388.4623f, -2980.035f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017F2AC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017F2C0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0017F2F0[] = {
	{ 254, 254 },
	{ 140, 192 },
	{ 140, 0 },
	{ 254, 254 },
	{ 140, 0 },
	{ 255, 66 },
	{ 140, 192 },
	{ 0, 254 },
	{ 0, 108 },
	{ 140, 192 },
	{ 0, 108 },
	{ 140, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 255, 66 },
	{ 0, 254 },
	{ 255, 66 },
	{ 0, 108 },
	{ 254, 254 },
	{ 0, 254 },
	{ 140, 192 },
	{ 140, 0 },
	{ 0, 108 },
	{ 255, 66 }
};

NJS_MESHSET_SADX meshlist_0017F350[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0017F2C0, NULL, NULL, NULL, uv_0017F2F0, NULL }
};

NJS_VECTOR vertex_0017F368[] = {
	{ 0.337475f, 0.492041f, -0.945528f },
	{ 0.215422f, -0.289095f, -2.185199f },
	{ 1.078193f, -0.340923f, -1.904363f },
	{ -0.7535599f, 0.557582f, 2.418387f },
	{ -0.6125219f, -0.239359f, 0.367543f },
	{ 0.014204f, -0.277008f, 1.376161f }
};

NJS_VECTOR normal_0017F3B0[] = {
	{ -0.199972f, 0.9276429f, -0.315421f },
	{ -0.558734f, -0.513594f, -0.651181f },
	{ 0.933746f, 0.357935f, -0.00031f },
	{ 0.438181f, 0.677793f, 0.590418f },
	{ -0.942636f, -0.314871f, -0.110877f },
	{ 0.093737f, -0.969661f, 0.225768f }
};

NJS_MODEL_SADX attach_0017F3F8 = { vertex_0017F368, normal_0017F3B0, LengthOfArray<Sint32>(vertex_0017F368), meshlist_0017F350, matlist_0017F2AC, LengthOfArray<Uint16>(meshlist_0017F350), LengthOfArray<Uint16>(matlist_0017F2AC),{ 0.162316f, 0.108329f, 0.116594f }, 2.477389f, NULL };

NJS_OBJECT object_0017F420 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017F3F8, 567.8082f, -383.939f, -2983.765f, 0, 0, 0, 1, 1, 1, NULL, &object_0017F278 };

NJS_MATERIAL matlist_0017F454[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017F490[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

Sint16 poly_0017F4BA[] = {
	3, 4, 5
};

NJS_TEX uv_0017F4C0[] = {
	{ 231, 127 },
	{ 504, 127 },
	{ 504, 0 },
	{ 231, 127 },
	{ 504, 0 },
	{ 236, 0 },
	{ 160, 255 },
	{ 504, 254 },
	{ 504, 127 },
	{ 160, 255 },
	{ 504, 127 },
	{ 231, 127 },
	{ 236, 0 },
	{ 504, 0 },
	{ 504, 254 },
	{ 236, 0 },
	{ 504, 254 },
	{ 160, 255 },
	{ 231, 127 },
	{ 236, 0 },
	{ 160, 255 }
};

NJS_TEX uv_0017F514[] = {
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0017F520[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_0017F490, NULL, NULL, NULL, uv_0017F4C0, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_0017F4BA, NULL, NULL, NULL, uv_0017F514, NULL }
};

NJS_VECTOR vertex_0017F550[] = {
	{ -9.778355f, -2.914999f, -3.176921f },
	{ -10.13996f, 1.457496f, -0.640044f },
	{ -14.3932f, 1.457499f, -7.330746f },
	{ 10.97376f, -2.914999f, 3.56585f },
	{ 11.75386f, 1.457497f, 1.164951f },
	{ 10.19366f, 1.457494f, 5.966752f }
};

NJS_VECTOR normal_0017F598[] = {
	{ -0.420272f, -0.738534f, 0.5272f },
	{ -0.5166349f, 0.559535f, 0.6480809f },
	{ -0.206586f, -0.290323f, -0.9343629f },
	{ 0.609337f, -0.749999f, -0.257312f },
	{ 0.609336f, 0.75f, -0.257311f },
	{ 0.207911f, 0, 0.978148f }
};

NJS_MODEL_SADX attach_0017F5E0 = { vertex_0017F550, normal_0017F598, LengthOfArray<Sint32>(vertex_0017F550), meshlist_0017F520, matlist_0017F454, LengthOfArray<Uint16>(meshlist_0017F520), LengthOfArray<Uint16>(matlist_0017F454),{ -1.319674f, -0.72875f, -0.6819969f }, 14.66709f, NULL };

NJS_OBJECT object_0017F608 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017F5E0, 603.0297f, -395.673f, -3005.595f, 0, 0, 0, 1, 1, 1, NULL, &object_0017F420 };

NJS_MATERIAL matlist_0017F63C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017F678[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_0017F6A2[] = {
	5, 4, 3
};

NJS_TEX uv_0017F6A8[] = {
	{ 0 },
	{ 0, 127 },
	{ 229, 127 },
	{ 0 },
	{ 229, 127 },
	{ 235, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 158, 254 },
	{ 0, 127 },
	{ 158, 254 },
	{ 229, 127 },
	{ 0, 255 },
	{ 0 },
	{ 235, 0 },
	{ 0, 255 },
	{ 235, 0 },
	{ 158, 254 },
	{ 229, 127 },
	{ 158, 254 },
	{ 235, 0 }
};

NJS_TEX uv_0017F6FC[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 }
};

NJS_MESHSET_SADX meshlist_0017F708[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_0017F678, NULL, NULL, NULL, uv_0017F6A8, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_0017F6A2, NULL, NULL, NULL, uv_0017F6FC, NULL }
};

NJS_VECTOR vertex_0017F738[] = {
	{ 9.6615f, -2.914955f, 3.137104f },
	{ 9.299888f, 1.457542f, 5.673982f },
	{ 5.046648f, 1.457543f, -1.016722f },
	{ -7.627676f, -2.914955f, -2.480491f },
	{ -6.847576f, 1.457543f, -4.881392f },
	{ -8.407777f, 1.457541f, -0.07958899f }
};

NJS_VECTOR normal_0017F780[] = {
	{ 0.401487f, -0.881537f, 0.248394f },
	{ 0.266549f, 0.949609f, 0.16491f },
	{ 0.519421f, 0.13971f, -0.84302f },
	{ -0.34172f, -0.749999f, -0.5663289f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0.000001f, 0.669131f }
};

NJS_MODEL_SADX attach_0017F7C8 = { vertex_0017F738, normal_0017F780, LengthOfArray<Sint32>(vertex_0017F738), meshlist_0017F708, matlist_0017F63C, LengthOfArray<Uint16>(meshlist_0017F708), LengthOfArray<Uint16>(matlist_0017F63C),{ 0.626862f, -0.7287059f, 0.396295f }, 10.46322f, NULL };

NJS_OBJECT object_0017F7F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017F7C8, 583.5901f, -395.673f, -3011.911f, 0, 0, 0, 1, 1, 1, NULL, &object_0017F608 };

NJS_MATERIAL matlist_0017F824[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017F838[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0017F85C[] = {
	{ 211, 254 },
	{ 251, 55 },
	{ 1, 55 },
	{ 211, 254 },
	{ 1, 55 },
	{ 1, 254 },
	{ 251, 55 },
	{ 272, 0 },
	{ 1, 0 },
	{ 251, 55 },
	{ 1, 0 },
	{ 1, 55 },
	{ 272, 0 },
	{ 211, 254 },
	{ 1, 254 },
	{ 272, 0 },
	{ 1, 254 },
	{ 1, 0 }
};

NJS_MESHSET_SADX meshlist_0017F8A4[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0017F838, NULL, NULL, NULL, uv_0017F85C, NULL }
};

NJS_VECTOR vertex_0017F8BC[] = {
	{ -0.654627f, 3.538108f, -0.212272f },
	{ 0.592232f, 4.050108f, -0.477301f },
	{ 0.198323f, 2.610108f, 0.7350259f },
	{ -0.654627f, -2.253315f, -0.212272f },
	{ 0.592232f, -2.253315f, -0.477301f },
	{ 0.198323f, -2.253315f, 0.7350259f }
};

NJS_VECTOR normal_0017F904[] = {
	{ -0.669131f, 0, -0.743145f },
	{ 0.978148f, 0, -0.207912f },
	{ -0.309017f, 0, 0.9510559f },
	{ -0.978148f, 0, 0.207912f },
	{ 0.309017f, 0, -0.951057f },
	{ 0.669131f, 0, 0.743145f }
};

NJS_MODEL_SADX attach_0017F94C = { vertex_0017F8BC, normal_0017F904, LengthOfArray<Sint32>(vertex_0017F8BC), meshlist_0017F8A4, matlist_0017F824, LengthOfArray<Uint16>(meshlist_0017F8A4), LengthOfArray<Uint16>(matlist_0017F824),{ -0.031198f, 0.898396f, 0.128863f }, 3.209487f, NULL };

NJS_OBJECT object_0017F974 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017F94C, 603.1082f, -391.6579f, -2974.639f, 0, 0, 0, 1, 1, 1, NULL, &object_0017F7F0 };

NJS_MATERIAL matlist_0017F9A8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017F9BC[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0017F9E0[] = {
	{ 510, 255 },
	{ 510, 55 },
	{ 0, 73 },
	{ 510, 255 },
	{ 0, 73 },
	{ 0, 193 },
	{ 510, 55 },
	{ 510, 0 },
	{ 0, 39 },
	{ 510, 55 },
	{ 0, 39 },
	{ 0, 73 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 193 },
	{ 510, 0 },
	{ 0, 193 },
	{ 0, 39 }
};

NJS_MESHSET_SADX meshlist_0017FA28[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0017F9BC, NULL, NULL, NULL, uv_0017F9E0, NULL }
};

NJS_VECTOR vertex_0017FA40[] = {
	{ -1.147499f, 5.042087f, -0.372093f },
	{ 1.038127f, 5.042087f, -0.8366629f },
	{ 0.347642f, 5.042087f, 1.288431f },
	{ -0.693266f, -5.101338f, -0.224802f },
	{ 0.627189f, -5.101338f, -0.505473f },
	{ 0.21003f, -5.101338f, 0.77841f }
};

NJS_VECTOR normal_0017FA88[] = {
	{ -0.668575f, -0.040722f, -0.742529f },
	{ 0.97708f, -0.046368f, -0.20776f },
	{ -0.308793f, -0.043584f, 0.95013f },
	{ -0.977335f, -0.04075f, 0.207738f },
	{ 0.308654f, -0.043528f, -0.950178f },
	{ 0.6683559f, -0.046396f, 0.742393f }
};

NJS_MODEL_SADX attach_0017FAD0 = { vertex_0017FA40, normal_0017FA88, LengthOfArray<Sint32>(vertex_0017FA40), meshlist_0017FA28, matlist_0017F9A8, LengthOfArray<Uint16>(meshlist_0017FA28), LengthOfArray<Uint16>(matlist_0017F9A8),{ -0.054686f, -0.029626f, 0.225884f }, 5.181816f, NULL };

NJS_OBJECT object_0017FAF8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017FAD0, 610.4739f, -389.1387f, -2997.018f, 0, 0, 0, 1, 1, 1, NULL, &object_0017F974 };

NJS_MATERIAL matlist_0017FB2C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017FB40[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	3, 4, 5
};

NJS_TEX uv_0017FB6C[] = {
	{ 510, 197 },
	{ 510, 72 },
	{ 0, 55 },
	{ 510, 197 },
	{ 0, 55 },
	{ 0, 255 },
	{ 510, 72 },
	{ 510, 37 },
	{ 0 },
	{ 510, 72 },
	{ 0 },
	{ 0, 55 },
	{ 510, 37 },
	{ 510, 197 },
	{ 0, 255 },
	{ 510, 37 },
	{ 0, 255 },
	{ 0 },
	{ 0, 55 },
	{ 0 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_0017FBC0[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0017FB40, NULL, NULL, NULL, uv_0017FB6C, NULL }
};

NJS_VECTOR vertex_0017FBD8[] = {
	{ -0.654628f, 6.655554f, -0.212273f },
	{ 0.5922329f, 6.655554f, -0.477301f },
	{ 0.198324f, 6.655554f, 0.7350259f },
	{ -1.047405f, -5.101338f, -0.339636f },
	{ 0.9475729f, -5.101338f, -0.7636819f },
	{ 0.317318f, -5.101338f, 1.176043f }
};

NJS_VECTOR normal_0017FC20[] = {
	{ -0.668821f, 0.030391f, -0.742802f },
	{ 0.977553f, 0.034608f, -0.207827f },
	{ -0.308892f, 0.03253f, 0.950541f },
	{ -0.858149f, -0.479906f, 0.182405f },
	{ 0.27131f, -0.4785f, -0.835122f },
	{ 0.588048f, -0.477074f, 0.653147f }
};

NJS_MODEL_SADX attach_0017FC68 = { vertex_0017FBD8, normal_0017FC20, LengthOfArray<Sint32>(vertex_0017FBD8), meshlist_0017FBC0, matlist_0017FB2C, LengthOfArray<Uint16>(meshlist_0017FBC0), LengthOfArray<Uint16>(matlist_0017FB2C),{ -0.049916f, 0.777108f, 0.20618f }, 5.957916f, NULL };

NJS_OBJECT object_0017FC90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017FC68, 568.4037f, -388.8098f, -2985.805f, 0, 0, 0, 1, 1, 1, NULL, &object_0017FAF8 };

NJS_MATERIAL matlist_0017FCC4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017FCD8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0017FCFC[] = {
	{ 508, 255 },
	{ 508, 55 },
	{ 344, 76 },
	{ 508, 255 },
	{ 344, 76 },
	{ 175, 183 },
	{ 508, 55 },
	{ 508, 0 },
	{ 175, 46 },
	{ 508, 55 },
	{ 175, 46 },
	{ 344, 76 },
	{ 508, 0 },
	{ 508, 255 },
	{ 175, 183 },
	{ 508, 0 },
	{ 175, 183 },
	{ 175, 46 }
};

NJS_MESHSET_SADX meshlist_0017FD44[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0017FCD8, NULL, NULL, NULL, uv_0017FCFC, NULL }
};

NJS_VECTOR vertex_0017FD5C[] = {
	{ -1.147499f, 5.042087f, -0.372093f },
	{ 1.038127f, 5.042087f, -0.8366629f },
	{ 0.347642f, 5.042087f, 1.288431f },
	{ -0.617884f, 1.750663f, -0.200358f },
	{ 0.558992f, -1.629338f, -0.450511f },
	{ 0.187192f, -1.629338f, 0.6937709f }
};

NJS_VECTOR normal_0017FDA4[] = {
	{ -0.791054f, -0.135885f, -0.596464f },
	{ 0.974804f, -0.082016f, -0.207437f },
	{ -0.351691f, -0.099836f, 0.930777f },
	{ -0.972096f, -0.115941f, 0.203929f },
	{ 0.123903f, -0.147461f, -0.981276f },
	{ 0.6686029f, -0.08195899f, 0.739089f }
};

NJS_MODEL_SADX attach_0017FDEC = { vertex_0017FD5C, normal_0017FDA4, LengthOfArray<Sint32>(vertex_0017FD5C), meshlist_0017FD44, matlist_0017FCC4, LengthOfArray<Uint16>(meshlist_0017FD44), LengthOfArray<Uint16>(matlist_0017FCC4),{ -0.054686f, 1.706375f, 0.225884f }, 3.500837f, NULL };

NJS_OBJECT object_0017FE14 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017FDEC, 575.7693f, -389.1387f, -3008.184f, 0, 0, 0, 1, 1, 1, NULL, &object_0017FC90 };

NJS_MATERIAL matlist_0017FE48[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017FE5C[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0017FE80[] = {
	{ 175, 238 },
	{ 344, 60 },
	{ 2, 55 },
	{ 175, 238 },
	{ 2, 55 },
	{ 2, 255 },
	{ 344, 60 },
	{ 175, 10 },
	{ 2, 0 },
	{ 344, 60 },
	{ 2, 0 },
	{ 2, 55 },
	{ 175, 10 },
	{ 175, 238 },
	{ 2, 255 },
	{ 175, 10 },
	{ 2, 255 },
	{ 2, 0 }
};

NJS_MESHSET_SADX meshlist_0017FEC8[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0017FE5C, NULL, NULL, NULL, uv_0017FE80, NULL }
};

NJS_VECTOR vertex_0017FEE0[] = {
	{ -0.617884f, 1.750087f, -0.200358f },
	{ 0.558992f, -1.629913f, -0.450511f },
	{ 0.187192f, -1.629913f, 0.6937709f },
	{ -0.693266f, -5.101338f, -0.224802f },
	{ 0.627189f, -5.101338f, -0.505473f },
	{ 0.21003f, -5.101338f, 0.77841f }
};

NJS_VECTOR normal_0017FF28[] = {
	{ -0.656108f, 0.013874f, -0.75454f },
	{ 0.977966f, 0.022498f, -0.207547f },
	{ -0.301469f, 0.017726f, 0.953311f },
	{ -0.9763899f, 0.013242f, 0.215608f },
	{ 0.325144f, 0.018141f, -0.9454899f },
	{ 0.668948f, 0.022516f, 0.742968f }
};

NJS_MODEL_SADX attach_0017FF70 = { vertex_0017FEE0, normal_0017FF28, LengthOfArray<Sint32>(vertex_0017FEE0), meshlist_0017FEC8, matlist_0017FE48, LengthOfArray<Uint16>(meshlist_0017FEC8), LengthOfArray<Uint16>(matlist_0017FE48),{ -0.033039f, -1.675626f, 0.136469f }, 3.48533f, NULL };

NJS_OBJECT object_0017FF98 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017FF70, 575.7693f, -389.1387f, -3008.184f, 0, 0, 0, 1, 1, 1, NULL, &object_0017FE14 };

NJS_MATERIAL matlist_0017FFCC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017FFE0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_0018000C[] = {
	{ 508, 255 },
	{ 508, 55 },
	{ 245, 71 },
	{ 508, 255 },
	{ 245, 71 },
	{ 205, 198 },
	{ 508, 55 },
	{ 508, 0 },
	{ 266, 36 },
	{ 508, 55 },
	{ 266, 36 },
	{ 245, 71 },
	{ 508, 0 },
	{ 508, 255 },
	{ 205, 198 },
	{ 508, 0 },
	{ 205, 198 },
	{ 266, 36 },
	{ 508, 55 },
	{ 508, 255 },
	{ 508, 0 }
};

NJS_MESHSET_SADX meshlist_00180060[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0017FFE0, NULL, NULL, NULL, uv_0018000C, NULL }
};

NJS_VECTOR vertex_00180078[] = {
	{ -1.027764f, 4.805127f, -0.333268f },
	{ 0.929804f, 4.805127f, -0.749362f },
	{ 0.311368f, 4.805127f, 1.15399f },
	{ -0.654627f, -1.397296f, -0.212272f },
	{ 0.592232f, -0.885296f, -0.477301f },
	{ 0.198323f, -2.325296f, 0.735025f }
};

NJS_VECTOR normal_001800C0[] = {
	{ -0.588716f, 0.463824f, -0.662028f },
	{ 0.867911f, 0.451222f, -0.207677f },
	{ -0.281445f, 0.466779f, 0.838395f },
	{ -0.978809f, -0.051425f, 0.198214f },
	{ 0.313226f, -0.061455f, -0.947688f },
	{ 0.686521f, -0.061859f, 0.724474f }
};

NJS_MODEL_SADX attach_00180108 = { vertex_00180078, normal_001800C0, LengthOfArray<Sint32>(vertex_00180078), meshlist_00180060, matlist_0017FFCC, LengthOfArray<Uint16>(meshlist_00180060), LengthOfArray<Uint16>(matlist_0017FFCC),{ -0.04898f, 1.239915f, 0.202314f }, 3.690029f, NULL };

NJS_OBJECT object_00180130 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00180108, 603.1082f, -386.7339f, -2974.639f, 0, 0, 0, 1, 1, 1, NULL, &object_0017FF98 };

NJS_MATERIAL matlist_00180164[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00180178[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001801A8[] = {
	{ 248, 221 },
	{ 136, 255 },
	{ 141, -1662 },
	{ 248, 221 },
	{ 141, -1662 },
	{ 255, -2040 },
	{ 136, 255 },
	{ 0, 240 },
	{ 5, -1887 },
	{ 136, 255 },
	{ 5, -1887 },
	{ 141, -1662 },
	{ 0, 240 },
	{ 248, 221 },
	{ 255, -2040 },
	{ 0, 240 },
	{ 255, -2040 },
	{ 5, -1887 },
	{ 248, 221 },
	{ 0, 240 },
	{ 136, 255 },
	{ 141, -1662 },
	{ 5, -1887 },
	{ 255, -2040 }
};

NJS_MESHSET_SADX meshlist_00180208[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00180178, NULL, NULL, NULL, uv_001801A8, NULL }
};

NJS_VECTOR vertex_00180220[] = {
	{ 7.843353f, 0.09308799f, -24.08244f },
	{ 7.271338f, -0.661018f, -23.93478f },
	{ 8.011168f, -0.705461f, -23.27489f },
	{ -4.689157f, 0.793848f, 14.54857f },
	{ -6.630724f, 0.122014f, 18.91888f },
	{ -6.766228f, 0.130154f, 22.27762f }
};

NJS_VECTOR normal_00180268[] = {
	{ -0.13701f, 0.736524f, -0.66239f },
	{ -0.164399f, -0.8963f, -0.411849f },
	{ 0.959496f, -0.277537f, -0.048381f },
	{ 0.22346f, 0.96932f, 0.102389f },
	{ -0.862797f, 0.446319f, -0.237444f },
	{ 0.493936f, -0.8046269f, 0.329549f }
};

NJS_MODEL_SADX attach_001802B0 = { vertex_00180220, normal_00180268, LengthOfArray<Sint32>(vertex_00180220), meshlist_00180208, matlist_00180164, LengthOfArray<Uint16>(meshlist_00180208), LengthOfArray<Uint16>(matlist_00180164),{ 0.622471f, 0.044194f, -0.902411f }, 24.32915f, NULL };

NJS_OBJECT object_001802D8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001802B0, 621.6642f, -385.0666f, -3031.927f, 0, 0, 0, 1, 1, 1, NULL, &object_00180130 };

NJS_MATERIAL matlist_0018030C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00180320[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00180350[] = {
	{ 254, -256 },
	{ 138, 255 },
	{ 140, -510 },
	{ 254, -256 },
	{ 140, -510 },
	{ 255, -438 },
	{ 138, 255 },
	{ 0, -49 },
	{ 0, -384 },
	{ 138, 255 },
	{ 0, -384 },
	{ 140, -510 },
	{ 0, -49 },
	{ 254, -256 },
	{ 255, -438 },
	{ 0, -49 },
	{ 255, -438 },
	{ 0, -384 },
	{ 254, -256 },
	{ 0, -49 },
	{ 138, 255 },
	{ 140, -510 },
	{ 0, -384 },
	{ 255, -438 }
};

NJS_MESHSET_SADX meshlist_001803B0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00180320, NULL, NULL, NULL, uv_00180350, NULL }
};

NJS_VECTOR vertex_001803C8[] = {
	{ 2.929347f, 0.336036f, -8.938107f },
	{ 0.987779f, -0.335798f, -4.567796f },
	{ 0.852276f, -0.327658f, -1.209049f },
	{ -0.753267f, 0.557258f, 2.416243f },
	{ -0.626982f, -0.238796f, 0.410884f },
	{ -0.024844f, -0.274968f, 1.495313f }
};

NJS_VECTOR normal_00180410[] = {
	{ -0.488815f, 0.807624f, -0.329854f },
	{ -0.224543f, -0.9691f, -0.102105f },
	{ 0.863718f, -0.444331f, 0.237827f },
	{ 0.390676f, 0.709108f, 0.586973f },
	{ -0.948057f, -0.29809f, -0.111041f },
	{ 0.076304f, -0.970895f, 0.227025f }
};

NJS_MODEL_SADX attach_00180458 = { vertex_001803C8, normal_00180410, LengthOfArray<Sint32>(vertex_001803C8), meshlist_001803B0, matlist_0018030C, LengthOfArray<Uint16>(meshlist_001803B0), LengthOfArray<Uint16>(matlist_0018030C),{ 1.08804f, 0.11073f, -3.260931f }, 5.968262f, NULL };

NJS_OBJECT object_00180480 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00180458, 614.0437f, -384.6184f, -3008.441f, 0, 0, 0, 1, 1, 1, NULL, &object_001802D8 };

NJS_MATERIAL matlist_001804B4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001804C8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001804F8[] = {
	{ 254, 191 },
	{ 139, 108 },
	{ 140, -185 },
	{ 254, 191 },
	{ 140, -185 },
	{ 255, -255 },
	{ 139, 108 },
	{ 0, 254 },
	{ 0, -120 },
	{ 139, 108 },
	{ 0, -120 },
	{ 140, -185 },
	{ 0, 254 },
	{ 254, 191 },
	{ 255, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 0, -120 },
	{ 254, 191 },
	{ 0, 254 },
	{ 139, 108 },
	{ 140, -185 },
	{ 0, -120 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00180558[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001804C8, NULL, NULL, NULL, uv_001804F8, NULL }
};

NJS_VECTOR vertex_00180570[] = {
	{ 0.631014f, 0.474255f, -1.853566f },
	{ 0.7573f, -0.3218f, -3.858925f },
	{ 1.359438f, -0.357971f, -2.774496f },
	{ -0.570667f, 0.202679f, 1.851495f },
	{ -0.778779f, -0.573288f, 0.877161f },
	{ -0.464321f, -0.592178f, 2.848573f }
};

NJS_VECTOR normal_001805B8[] = {
	{ -0.114599f, 0.973482f, -0.197991f },
	{ -0.200946f, -0.7593049f, -0.618933f },
	{ 0.951153f, 0.284918f, 0.118867f },
	{ -0.078898f, 0.938282f, 0.336752f },
	{ -0.990804f, 0.026686f, -0.132646f },
	{ -0.036426f, -0.966096f, 0.255602f }
};

NJS_MODEL_SADX attach_00180600 = { vertex_00180570, normal_001805B8, LengthOfArray<Sint32>(vertex_00180570), meshlist_00180558, matlist_001804B4, LengthOfArray<Uint16>(meshlist_00180558), LengthOfArray<Uint16>(matlist_001804B4),{ 0.290329f, -0.058961f, -0.5051759f }, 3.520046f, NULL };

NJS_OBJECT object_00180628 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00180600, 612.6567f, -384.5449f, -3004.174f, 0, 0, 0, 1, 1, 1, NULL, &object_00180480 };

NJS_MATERIAL matlist_0018065C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00180670[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001806A0[] = {
	{ 251, 175 },
	{ 138, 216 },
	{ 141, -803 },
	{ 251, 175 },
	{ 141, -803 },
	{ 255, -1020 },
	{ 138, 216 },
	{ 0, 255 },
	{ 3, -888 },
	{ 138, 216 },
	{ 3, -888 },
	{ 141, -803 },
	{ 0, 255 },
	{ 251, 175 },
	{ 255, -1020 },
	{ 0, 255 },
	{ 255, -1020 },
	{ 3, -888 },
	{ 251, 175 },
	{ 0, 255 },
	{ 138, 216 },
	{ 141, -803 },
	{ 3, -888 },
	{ 255, -1020 }
};

NJS_MESHSET_SADX meshlist_00180700[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00180670, NULL, NULL, NULL, uv_001806A0, NULL }
};

NJS_VECTOR vertex_00180718[] = {
	{ 4.567146f, -0.066285f, -13.98146f },
	{ 4.359035f, -0.842252f, -14.95579f },
	{ 4.673492f, -0.861142f, -12.98438f },
	{ -2.461838f, 0.281815f, 7.683129f },
	{ -3.528073f, -0.442602f, 9.354586f },
	{ -3.567683f, -0.440222f, 12.41767f }
};

NJS_VECTOR normal_00180760[] = {
	{ 0.161281f, 0.94947f, -0.269249f },
	{ 0.055594f, -0.9613889f, -0.26952f },
	{ 0.9881099f, -0.059135f, 0.141922f },
	{ 0.145851f, 0.98278f, 0.113448f },
	{ -0.900024f, 0.37606f, -0.220308f },
	{ 0.221739f, -0.917567f, 0.330004f }
};

NJS_MODEL_SADX attach_001807A8 = { vertex_00180718, normal_00180760, LengthOfArray<Sint32>(vertex_00180718), meshlist_00180700, matlist_0018065C, LengthOfArray<Uint16>(meshlist_00180700), LengthOfArray<Uint16>(matlist_0018065C),{ 0.552905f, -0.289663f, -1.269061f }, 14.29359f, NULL };

NJS_OBJECT object_001807D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001807A8, 607.5083f, -384.2743f, -2988.342f, 0, 0, 0, 1, 1, 1, NULL, &object_00180628 };

NJS_MATERIAL matlist_00180804[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00180818[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00180848[] = {
	{ 253, 32 },
	{ 138, 255 },
	{ 140, -376 },
	{ 253, 32 },
	{ 140, -376 },
	{ 255, -510 },
	{ 138, 255 },
	{ 0, 166 },
	{ 1, -390 },
	{ 138, 255 },
	{ 1, -390 },
	{ 140, -376 },
	{ 0, 166 },
	{ 253, 32 },
	{ 255, -510 },
	{ 0, 166 },
	{ 255, -510 },
	{ 1, -390 },
	{ 253, 32 },
	{ 0, 166 },
	{ 138, 255 },
	{ 140, -376 },
	{ 1, -390 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_001808A8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00180818, NULL, NULL, NULL, uv_00180848, NULL }
};

NJS_VECTOR vertex_001808C0[] = {
	{ 3.374479f, -0.06838699f, -10.3122f },
	{ 2.308245f, -0.7928039f, -8.640749f },
	{ 2.268636f, -0.790424f, -5.577664f },
	{ -0.877317f, 0.300521f, 2.793369f },
	{ -1.439497f, -0.454176f, 2.910707f },
	{ -1.378295f, -0.457852f, 5.662968f }
};

NJS_VECTOR normal_00180908[] = {
	{ -0.204134f, 0.912563f, -0.354341f },
	{ -0.174555f, -0.977983f, -0.114371f },
	{ 0.895986f, -0.385605f, 0.220267f },
	{ 0.06265f, 0.988611f, 0.136832f },
	{ -0.943697f, 0.262838f, -0.200877f },
	{ -0.121315f, -0.95128f, 0.283458f }
};

NJS_MODEL_SADX attach_00180950 = { vertex_001808C0, normal_00180908, LengthOfArray<Sint32>(vertex_001808C0), meshlist_001808A8, matlist_00180804, LengthOfArray<Uint16>(meshlist_001808A8), LengthOfArray<Uint16>(matlist_00180804),{ 0.967491f, -0.246142f, -2.324618f }, 8.342448f, NULL };

NJS_OBJECT object_00180978 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00180950, 601.6696f, -383.9335f, -2970.349f, 0, 0, 0, 1, 1, 1, NULL, &object_001807D0 };

NJS_MATERIAL matlist_001809AC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001809C0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001809F0[] = {
	{ 253, 51 },
	{ 139, 254 },
	{ 140, -376 },
	{ 253, 51 },
	{ 140, -376 },
	{ 255, -510 },
	{ 139, 254 },
	{ 0, 234 },
	{ 1, -366 },
	{ 139, 254 },
	{ 1, -366 },
	{ 140, -376 },
	{ 0, 234 },
	{ 253, 51 },
	{ 255, -510 },
	{ 0, 234 },
	{ 255, -510 },
	{ 1, -366 },
	{ 253, 51 },
	{ 0, 234 },
	{ 139, 254 },
	{ 140, -376 },
	{ 1, -366 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_00180A50[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001809C0, NULL, NULL, NULL, uv_001809F0, NULL }
};

NJS_VECTOR vertex_00180A68[] = {
	{ 2.153096f, 0.1383f, -6.544658f },
	{ 1.590916f, -0.616397f, -6.42732f },
	{ 1.652117f, -0.620073f, -3.675058f },
	{ -0.605009f, 0.548291f, 1.959214f },
	{ -1.036871f, -0.214234f, 1.674757f },
	{ -0.796178f, -0.228693f, 3.8736f }
};

NJS_VECTOR normal_00180AB0[] = {
	{ 0.09759799f, 0.938788f, -0.330382f },
	{ -0.129957f, -0.9814579f, -0.140897f },
	{ 0.935644f, -0.292217f, 0.197939f },
	{ 0.037105f, 0.98299f, 0.179871f },
	{ -0.962681f, 0.210286f, -0.17037f },
	{ -0.24728f, -0.918201f, 0.30945f }
};

NJS_MODEL_SADX attach_00180AF8 = { vertex_00180A68, normal_00180AB0, LengthOfArray<Sint32>(vertex_00180A68), meshlist_00180A50, matlist_001809AC, LengthOfArray<Uint16>(meshlist_00180A50), LengthOfArray<Uint16>(matlist_001809AC),{ 0.558112f, -0.035891f, -1.335529f }, 5.447818f, NULL };

NJS_OBJECT object_00180B20 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00180AF8, 598.6338f, -383.7704f, -2961.009f, 0, 0, 0, 1, 1, 1, NULL, &object_00180978 };

NJS_MATERIAL matlist_00180B54[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00180B68[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00180B98[] = {
	{ 250, 200 },
	{ 137, 116 },
	{ 142, -1664 },
	{ 250, 200 },
	{ 142, -1664 },
	{ 255, -1785 },
	{ 137, 116 },
	{ 0, 254 },
	{ 3, -1426 },
	{ 137, 116 },
	{ 3, -1426 },
	{ 142, -1664 },
	{ 0, 254 },
	{ 250, 200 },
	{ 255, -1785 },
	{ 0, 254 },
	{ 255, -1785 },
	{ 3, -1426 },
	{ 250, 200 },
	{ 0, 254 },
	{ 137, 116 },
	{ 142, -1664 },
	{ 3, -1426 },
	{ 255, -1785 }
};

NJS_MESHSET_SADX meshlist_00180BF8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00180B68, NULL, NULL, NULL, uv_00180B98, NULL }
};

NJS_VECTOR vertex_00180C10[] = {
	{ 4.891671f, 2.378227f, -14.98447f },
	{ 5.153191f, 1.574049f, -17.40679f },
	{ 5.725823f, 1.539649f, -16.23138f },
	{ -4.579927f, 3.183843f, 14.2157f },
	{ -3.792223f, 2.095389f, 10.17104f },
	{ -4.830108f, 2.410403f, 16.31204f }
};

NJS_VECTOR normal_00180C58[] = {
	{ -0.118571f, 0.9689609f, -0.216922f },
	{ -0.208295f, -0.809782f, -0.548513f },
	{ 0.937274f, 0.320893f, 0.136178f },
	{ -0.094693f, 0.99326f, 0.066843f },
	{ -0.967037f, -0.036198f, -0.252048f },
	{ 0.006122f, -0.993046f, 0.117566f }
};

NJS_MODEL_SADX attach_00180CA0 = { vertex_00180C10, normal_00180C58, LengthOfArray<Sint32>(vertex_00180C10), meshlist_00180BF8, matlist_00180B54, LengthOfArray<Uint16>(meshlist_00180BF8), LengthOfArray<Uint16>(matlist_00180B54),{ 0.447858f, 2.361746f, -0.547375f }, 17.66622f, NULL };

NJS_OBJECT object_00180CC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00180CA0, 595.5732f, -387.9928f, -2951.577f, 0, 0, 0, 1, 1, 1, NULL, &object_00180B20 };

NJS_MATERIAL matlist_00180CFC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00180D10[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00180D40[] = {
	{ 254, 89 },
	{ 140, 168 },
	{ 140, -255 },
	{ 254, 89 },
	{ 140, -255 },
	{ 255, -151 },
	{ 140, 168 },
	{ 0, 255 },
	{ 0, -84 },
	{ 140, 168 },
	{ 0, -84 },
	{ 140, -255 },
	{ 0, 255 },
	{ 254, 89 },
	{ 255, -151 },
	{ 0, 255 },
	{ 255, -151 },
	{ 0, -84 },
	{ 254, 89 },
	{ 0, 255 },
	{ 140, 168 },
	{ 140, -255 },
	{ 0, -84 },
	{ 255, -151 }
};

NJS_MESHSET_SADX meshlist_00180DA0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00180D10, NULL, NULL, NULL, uv_00180D40, NULL }
};

NJS_VECTOR vertex_00180DB8[] = {
	{ 0.855207f, 3.032106f, -2.539231f },
	{ 0.755283f, 2.24964f, -3.847132f },
	{ 0.905001f, 2.240647f, -1.367789f },
	{ -0.969752f, 2.714522f, 3.083843f },
	{ -0.708232f, 1.910343f, 0.661526f },
	{ -0.1356f, 1.875944f, 1.836928f }
};

NJS_VECTOR normal_00180E00[] = {
	{ 0.094895f, 0.980876f, -0.169931f },
	{ 0.306688f, -0.923525f, -0.230313f },
	{ 0.983076f, -0.040187f, 0.178734f },
	{ 0.3966f, 0.5951909f, 0.698896f },
	{ -0.918507f, -0.371156f, -0.136337f },
	{ 0.271052f, -0.944809f, 0.184027f }
};

NJS_MODEL_SADX attach_00180E48 = { vertex_00180DB8, normal_00180E00, LengthOfArray<Sint32>(vertex_00180DB8), meshlist_00180DA0, matlist_00180CFC, LengthOfArray<Uint16>(meshlist_00180DA0), LengthOfArray<Uint16>(matlist_00180CFC),{ -0.032375f, 2.454025f, -0.381645f }, 3.589993f, NULL };

NJS_OBJECT object_00180E70 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00180E48, 601.4196f, -388.326f, -2969.619f, 0, 0, 0, 1, 1, 1, NULL, &object_00180CC8 };

NJS_MATERIAL matlist_00180EA4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00180EB8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00180EE8[] = {
	{ 254, 213 },
	{ 139, 255 },
	{ 140, -190 },
	{ 254, 213 },
	{ 140, -190 },
	{ 255, -255 },
	{ 139, 255 },
	{ 0, 232 },
	{ 0, -119 },
	{ 139, 255 },
	{ 0, -119 },
	{ 140, -190 },
	{ 0, 232 },
	{ 254, 213 },
	{ 255, -255 },
	{ 0, 232 },
	{ 255, -255 },
	{ 0, -119 },
	{ 254, 213 },
	{ 0, 232 },
	{ 139, 255 },
	{ 140, -190 },
	{ 0, -119 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00180F48[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00180EB8, NULL, NULL, NULL, uv_00180EE8, NULL }
};

NJS_VECTOR vertex_00180F60[] = {
	{ 1.468585f, 2.838261f, -4.423617f },
	{ 0.874441f, 2.085484f, -4.207726f },
	{ 1.63886f, 2.039564f, -3.623647f },
	{ -0.879317f, 3.11596f, 2.806634f },
	{ -0.979241f, 2.333495f, 1.498732f },
	{ -0.829523f, 2.324501f, 3.978076f }
};

NJS_VECTOR normal_00180FA8[] = {
	{ -0.170647f, 0.70206f, -0.69137f },
	{ -0.222078f, -0.884944f, -0.409335f },
	{ 0.9505939f, -0.304751f, -0.059147f },
	{ -0.04275f, 0.977882f, 0.20474f },
	{ -0.982473f, 0.050251f, -0.179502f },
	{ -0.208296f, -0.9544629f, 0.213573f }
};

NJS_MODEL_SADX attach_00180FF0 = { vertex_00180F60, normal_00180FA8, LengthOfArray<Sint32>(vertex_00180F60), meshlist_00180F48, matlist_00180EA4, LengthOfArray<Uint16>(meshlist_00180F48), LengthOfArray<Uint16>(matlist_00180EA4),{ 0.329809f, 2.577762f, -0.222771f }, 4.400043f, NULL };

NJS_OBJECT object_00181018 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00180FF0, 603.1597f, -388.4111f, -2974.966f, 0, 0, 0, 1, 1, 1, NULL, &object_00180E70 };

NJS_MATERIAL matlist_0018104C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00181060[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00181090[] = {
	{ 253, 157 },
	{ 140, 14 },
	{ 140, -175 },
	{ 253, 157 },
	{ 140, -175 },
	{ 255, -255 },
	{ 140, 14 },
	{ 0, 254 },
	{ 1, -168 },
	{ 140, 14 },
	{ 1, -168 },
	{ 140, -175 },
	{ 0, 254 },
	{ 253, 157 },
	{ 255, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 1, -168 },
	{ 253, 157 },
	{ 0, 254 },
	{ 140, 14 },
	{ 140, -175 },
	{ 1, -168 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_001810F0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00181060, NULL, NULL, NULL, uv_00181090, NULL }
};

NJS_VECTOR vertex_00181108[] = {
	{ 0.409021f, 2.907963f, -1.166356f },
	{ 1.39097f, 2.060507f, -5.809923f },
	{ 1.663628f, 2.044128f, -3.709633f },
	{ -0.743485f, 2.700836f, 2.387086f },
	{ -1.177806f, 1.938458f, 2.110209f },
	{ -0.836302f, 1.917943f, 3.99823f }
};

NJS_VECTOR normal_00181150[] = {
	{ -0.12302f, 0.986655f, -0.106665f },
	{ -0.403006f, -0.809164f, -0.427597f },
	{ 0.92858f, 0.301089f, 0.216991f },
	{ 0.01186f, 0.962136f, 0.272312f },
	{ -0.974745f, 0.179625f, -0.132693f },
	{ -0.01603f, -0.932153f, 0.361711f }
};

NJS_MODEL_SADX attach_00181198 = { vertex_00181108, normal_00181150, LengthOfArray<Sint32>(vertex_00181108), meshlist_001810F0, matlist_0018104C, LengthOfArray<Uint16>(meshlist_001810F0), LengthOfArray<Uint16>(matlist_0018104C),{ 0.242911f, 2.412953f, -0.905846f }, 5.1057f, NULL };

NJS_OBJECT object_001811C0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00181198, 606.4553f, -388.5509f, -2985.066f, 0, 0, 0, 1, 1, 1, NULL, &object_00181018 };

NJS_MATERIAL matlist_001811F4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00181208[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00181238[] = {
	{ 253, -268 },
	{ 139, 37 },
	{ 141, -1020 },
	{ 253, -268 },
	{ 141, -1020 },
	{ 255, -863 },
	{ 139, 37 },
	{ 0, 255 },
	{ 2, -756 },
	{ 139, 37 },
	{ 2, -756 },
	{ 141, -1020 },
	{ 0, 255 },
	{ 253, -268 },
	{ 255, -863 },
	{ 0, 255 },
	{ 255, -863 },
	{ 2, -756 },
	{ 253, -268 },
	{ 0, 255 },
	{ 139, 37 },
	{ 141, -1020 },
	{ 2, -756 },
	{ 255, -863 }
};

NJS_MESHSET_SADX meshlist_00181298[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00181208, NULL, NULL, NULL, uv_00181238, NULL }
};

NJS_VECTOR vertex_001812B0[] = {
	{ 3.376783f, 2.453356f, -10.31636f },
	{ 4.105476f, 1.621113f, -14.17908f },
	{ 2.081612f, 1.742691f, -4.998077f },
	{ -2.457283f, 3.08018f, 7.671418f },
	{ -1.475333f, 2.232724f, 3.027852f },
	{ -1.202675f, 2.216345f, 5.128142f }
};

NJS_VECTOR normal_001812F8[] = {
	{ 0.204971f, 0.978003f, -0.038685f },
	{ -0.133943f, -0.988594f, -0.068854f },
	{ 0.9582779f, -0.081524f, 0.273966f },
	{ 0.5542769f, 0.745616f, 0.369911f },
	{ -0.927938f, -0.308264f, -0.209534f },
	{ -0.020916f, -0.993853f, 0.108717f }
};

NJS_MODEL_SADX attach_00181340 = { vertex_001812B0, normal_001812F8, LengthOfArray<Sint32>(vertex_001812B0), meshlist_00181298, matlist_001811F4, LengthOfArray<Uint16>(meshlist_00181298), LengthOfArray<Uint16>(matlist_001811F4),{ 0.824097f, 2.350646f, -3.253829f }, 11.40731f, NULL };

NJS_OBJECT object_00181368 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00181340, 609.3242f, -388.7135f, -2993.901f, 0, 0, 0, 1, 1, 1, NULL, &object_001811C0 };

NJS_MATERIAL matlist_0018139C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001813B0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001813E0[] = {
	{ 251, 189 },
	{ 138, 35 },
	{ 140, -741 },
	{ 251, 189 },
	{ 140, -741 },
	{ 255, -1020 },
	{ 138, 35 },
	{ 0, 255 },
	{ 1, -541 },
	{ 138, 35 },
	{ 1, -541 },
	{ 140, -741 },
	{ 0, 255 },
	{ 251, 189 },
	{ 255, -1020 },
	{ 0, 255 },
	{ 255, -1020 },
	{ 1, -541 },
	{ 251, 189 },
	{ 0, 255 },
	{ 138, 35 },
	{ 140, -741 },
	{ 1, -541 },
	{ 255, -1020 }
};

NJS_MESHSET_SADX meshlist_00181440[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001813B0, NULL, NULL, NULL, uv_001813E0, NULL }
};

NJS_VECTOR vertex_00181458[] = {
	{ 2.757475f, 1.966305f, -8.401072f },
	{ 3.609107f, 1.126677f, -12.64284f },
	{ 4.073552f, 1.098777f, -11.13387f },
	{ -1.932469f, 2.772018f, 6.053938f },
	{ -1.203776f, 1.939775f, 2.191217f },
	{ -3.22764f, 2.061353f, 11.37222f }
};

NJS_VECTOR normal_001814A0[] = {
	{ -0.08861899f, 0.984817f, -0.14927f },
	{ -0.81476f, -0.381294f, -0.436786f },
	{ 0.908379f, 0.372751f, 0.189481f },
	{ 0.005984f, 0.9998969f, 0.013008f },
	{ -0.9462799f, 0.161742f, -0.27999f },
	{ -0.376171f, -0.926542f, -0.0039f }
};

NJS_MODEL_SADX attach_001814E8 = { vertex_00181458, normal_001814A0, LengthOfArray<Sint32>(vertex_00181458), meshlist_00181440, matlist_0018139C, LengthOfArray<Uint16>(meshlist_00181440), LengthOfArray<Uint16>(matlist_0018139C),{ 0.422956f, 1.935398f, -0.635312f }, 12.55024f, NULL };

NJS_OBJECT object_00181510 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001814E8, 614.657f, -389.0228f, -3010.297f, 0, 0, 0, 1, 1, 1, NULL, &object_00181368 };

NJS_MATERIAL matlist_00181544[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00181558[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00181588[] = {
	{ 254, 192 },
	{ 139, 210 },
	{ 140, 14 },
	{ 254, 192 },
	{ 140, 14 },
	{ 255, 0 },
	{ 139, 210 },
	{ 0, 255 },
	{ 0, 43 },
	{ 139, 210 },
	{ 0, 43 },
	{ 140, 14 },
	{ 0, 255 },
	{ 254, 192 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0, 43 },
	{ 254, 192 },
	{ 0, 255 },
	{ 139, 210 },
	{ 140, 14 },
	{ 0, 43 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001815E8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00181558, NULL, NULL, NULL, uv_00181588, NULL }
};

NJS_VECTOR vertex_00181600[] = {
	{ 0.675798f, 2.615426f, -1.988234f },
	{ 0.52178f, 1.83621f, -3.129352f },
	{ 0.937049f, 1.811264f, -1.468763f },
	{ -0.7225879f, 2.69943f, 2.323313f },
	{ -0.98971f, 1.927008f, 1.530924f },
	{ -0.439207f, 1.893938f, 2.774555f }
};

NJS_VECTOR normal_00181648[] = {
	{ 0.126245f, 0.9511549f, -0.28172f },
	{ 0.033466f, -0.930668f, -0.364331f },
	{ 0.993259f, 0.022633f, 0.113689f },
	{ 0.0006429999f, 0.896422f, 0.443201f },
	{ -0.9986179f, 0.001072f, -0.052547f },
	{ -0.100377f, -0.921587f, 0.37497f }
};

NJS_MODEL_SADX attach_00181690 = { vertex_00181600, normal_00181648, LengthOfArray<Sint32>(vertex_00181600), meshlist_001815E8, matlist_00181544, LengthOfArray<Uint16>(meshlist_001815E8), LengthOfArray<Uint16>(matlist_00181544),{ -0.026331f, 2.255347f, -0.177399f }, 3.105247f, NULL };

NJS_OBJECT object_001816B8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00181690, 564.3491f, -388.325f, -2973.172f, 0, 0, 0, 1, 1, 1, NULL, &object_00181510 };

NJS_MATERIAL matlist_001816EC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00181700[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00181730[] = {
	{ 254, 120 },
	{ 139, 121 },
	{ 140, -226 },
	{ 254, 120 },
	{ 140, -226 },
	{ 255, -255 },
	{ 139, 121 },
	{ 0, 255 },
	{ 0, -154 },
	{ 139, 121 },
	{ 0, -154 },
	{ 140, -226 },
	{ 0, 255 },
	{ 254, 120 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 0, -154 },
	{ 254, 120 },
	{ 0, 255 },
	{ 139, 121 },
	{ 140, -226 },
	{ 0, -154 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00181790[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00181700, NULL, NULL, NULL, uv_00181730, NULL }
};

NJS_VECTOR vertex_001817A8[] = {
	{ 0.3844f, 2.63296f, -1.090073f },
	{ 0.50331f, 1.837348f, -3.072689f },
	{ 0.768591f, 1.821413f, -0.949655f },
	{ -1.166431f, 2.726121f, 3.691499f },
	{ -1.320449f, 1.946905f, 2.550382f },
	{ -0.90518f, 1.921959f, 4.210971f }
};

NJS_VECTOR normal_001817F0[] = {
	{ 0.08668099f, 0.978173f, -0.188848f },
	{ -0.005909f, -0.939734f, -0.341856f },
	{ 0.979327f, 0.119399f, 0.163287f },
	{ -0.033466f, 0.930668f, 0.364331f },
	{ -0.993259f, -0.022633f, -0.113689f },
	{ -0.126245f, -0.9511549f, 0.28172f }
};

NJS_MODEL_SADX attach_00181838 = { vertex_001817A8, normal_001817F0, LengthOfArray<Sint32>(vertex_001817A8), meshlist_00181790, matlist_001816EC, LengthOfArray<Uint16>(meshlist_00181790), LengthOfArray<Uint16>(matlist_001816EC),{ -0.275929f, 2.273767f, 0.569141f }, 3.788677f, NULL };

NJS_OBJECT object_00181860 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00181838, 566.1939f, -388.4261f, -2978.85f, 0, 0, 0, 1, 1, 1, NULL, &object_001816B8 };

NJS_MATERIAL matlist_00181894[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001818A8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001818D8[] = {
	{ 254, 149 },
	{ 139, 193 },
	{ 140, -254 },
	{ 254, 149 },
	{ 140, -254 },
	{ 255, -255 },
	{ 139, 193 },
	{ 0, 255 },
	{ 0, -129 },
	{ 139, 193 },
	{ 0, -129 },
	{ 140, -254 },
	{ 0, 255 },
	{ 254, 149 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 0, -129 },
	{ 254, 149 },
	{ 0, 255 },
	{ 139, 193 },
	{ 140, -254 },
	{ 0, -129 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00181938[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001818A8, NULL, NULL, NULL, uv_001818D8, NULL }
};

NJS_VECTOR vertex_00181950[] = {
	{ 0.6904809f, 2.249209f, -2.033703f },
	{ 0.509416f, 1.471618f, -3.091429f },
	{ 0.870591f, 1.449922f, -1.264056f },
	{ -1.433252f, 2.742121f, 4.514257f },
	{ -1.314342f, 1.946509f, 2.531642f },
	{ -1.04906f, 1.930573f, 4.654675f }
};

NJS_VECTOR normal_00181998[] = {
	{ 0.193756f, 0.934537f, -0.298496f },
	{ -0.108705f, -0.943477f, -0.313105f },
	{ 0.991754f, -0.025972f, 0.125495f },
	{ 0.067843f, 0.957822f, 0.27924f },
	{ -0.982191f, -0.077891f, -0.170977f },
	{ -0.209871f, -0.9579329f, 0.195752f }
};

NJS_MODEL_SADX attach_001819E0 = { vertex_00181950, normal_00181998, LengthOfArray<Sint32>(vertex_00181950), meshlist_00181938, matlist_00181894, LengthOfArray<Uint16>(meshlist_00181938), LengthOfArray<Uint16>(matlist_00181894),{ -0.28133f, 2.096021f, 0.7816229f }, 4.040718f, NULL };

NJS_OBJECT object_00181A08 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001819E0, 568.014f, -388.5258f, -2984.452f, 0, 0, 0, 1, 1, 1, NULL, &object_00181860 };

NJS_MATERIAL matlist_00181A3C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00181A50[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00181A80[] = {
	{ 253, 179 },
	{ 139, 117 },
	{ 140, -229 },
	{ 253, 179 },
	{ 140, -229 },
	{ 255, -255 },
	{ 139, 117 },
	{ 0, 255 },
	{ 1, -194 },
	{ 139, 117 },
	{ 1, -194 },
	{ 140, -229 },
	{ 0, 255 },
	{ 253, 179 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 1, -194 },
	{ 253, 179 },
	{ 0, 255 },
	{ 139, 117 },
	{ 140, -229 },
	{ 1, -194 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00181AE0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00181A50, NULL, NULL, NULL, uv_00181A80, NULL }
};

NJS_VECTOR vertex_00181AF8[] = {
	{ 1.077768f, 2.611315f, -3.2242f },
	{ 1.737614f, 1.783208f, -6.874648f },
	{ 1.978308f, 1.76875f, -4.675804f },
	{ -1.799558f, 2.398791f, 5.643565f },
	{ -1.980622f, 1.621199f, 4.585838f },
	{ -1.619447f, 1.599503f, 6.413211f }
};

NJS_VECTOR normal_00181B40[] = {
	{ -0.06870899f, 0.989442f, -0.127607f },
	{ -0.216869f, -0.8812619f, -0.419935f },
	{ 0.943405f, 0.264673f, 0.199836f },
	{ -0.060391f, 0.9353499f, 0.348529f },
	{ -0.992049f, -0.004216f, -0.12578f },
	{ -0.06917f, -0.958834f, 0.275414f }
};

NJS_MODEL_SADX attach_00181B88 = { vertex_00181AF8, normal_00181B40, LengthOfArray<Sint32>(vertex_00181AF8), meshlist_00181AE0, matlist_00181A3C, LengthOfArray<Uint16>(meshlist_00181AE0), LengthOfArray<Uint16>(matlist_00181A3C),{ -0.001157f, 2.105409f, -0.230719f }, 6.932654f, NULL };

NJS_OBJECT object_00181BB0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00181B88, 570.5066f, -388.6657f, -2992.127f, 0, 0, 0, 1, 1, 1, NULL, &object_00181A08 };

NJS_MATERIAL matlist_00181BE4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00181BF8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00181C28[] = {
	{ 254, 102 },
	{ 139, 255 },
	{ 140, -255 },
	{ 254, 102 },
	{ 140, -255 },
	{ 255, -177 },
	{ 139, 255 },
	{ 0, 183 },
	{ 0, -82 },
	{ 139, 255 },
	{ 0, -82 },
	{ 140, -255 },
	{ 0, 183 },
	{ 254, 102 },
	{ 255, -177 },
	{ 0, 183 },
	{ 255, -177 },
	{ 0, -82 },
	{ 254, 102 },
	{ 0, 183 },
	{ 139, 255 },
	{ 140, -255 },
	{ 0, -82 },
	{ 255, -177 }
};

NJS_MESHSET_SADX meshlist_00181C88[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00181BF8, NULL, NULL, NULL, uv_00181C28, NULL }
};

NJS_VECTOR vertex_00181CA0[] = {
	{ 1.784479f, 2.548886f, -5.407036f },
	{ 0.8362679f, 1.817379f, -4.099473f },
	{ 1.167937f, 1.797455f, -2.181128f },
	{ -1.576031f, 2.750759f, 4.954195f },
	{ -0.916185f, 1.922652f, 1.303747f },
	{ -0.675491f, 1.908193f, 3.502591f }
};

NJS_VECTOR normal_00181CE8[] = {
	{ -0.26112f, 0.854728f, -0.448617f },
	{ -0.166614f, -0.973726f, -0.155232f },
	{ 0.900688f, -0.394601f, 0.1818f },
	{ 0.35802f, 0.837204f, 0.413414f },
	{ -0.939608f, -0.281033f, -0.19534f },
	{ 0.045414f, -0.988992f, 0.140825f }
};

NJS_MODEL_SADX attach_00181D30 = { vertex_00181CA0, normal_00181CE8, LengthOfArray<Sint32>(vertex_00181CA0), meshlist_00181C88, matlist_00181BE4, LengthOfArray<Uint16>(meshlist_00181C88), LengthOfArray<Uint16>(matlist_00181BE4),{ 0.104224f, 2.274107f, -0.22642f }, 5.44622f, NULL };

NJS_OBJECT object_00181D58 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00181D30, 573.166f, -388.8061f, -3000.307f, 0, 0, 0, 1, 1, 1, NULL, &object_00181BB0 };

NJS_MATERIAL matlist_00181D8C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00181DA0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00181DD0[] = {
	{ 252, 155 },
	{ 140, -203 },
	{ 140, -378 },
	{ 252, 155 },
	{ 140, -378 },
	{ 255, -510 },
	{ 140, -203 },
	{ 0, 255 },
	{ 2, -440 },
	{ 140, -203 },
	{ 2, -440 },
	{ 140, -378 },
	{ 0, 255 },
	{ 252, 155 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 2, -440 },
	{ 252, 155 },
	{ 0, 255 },
	{ 140, -203 },
	{ 140, -378 },
	{ 2, -440 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_00181E30[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00181DA0, NULL, NULL, NULL, uv_00181DD0, NULL }
};

NJS_VECTOR vertex_00181E48[] = {
	{ -0.776864f, 2.714924f, 2.492627f },
	{ 2.270479f, 1.012726f, -8.519029f },
	{ 2.368562f, 1.006835f, -5.880483f },
	{ -2.124334f, 2.783848f, 6.64497f },
	{ -3.072545f, 2.05234f, 7.952533f },
	{ -2.740875f, 2.032416f, 9.870878f }
};

NJS_VECTOR normal_00181E90[] = {
	{ -0.123446f, 0.983481f, -0.13239f },
	{ -0.719239f, -0.629728f, -0.293492f },
	{ 0.935674f, 0.252193f, 0.246807f },
	{ 0.230363f, 0.956066f, 0.181302f },
	{ -0.9223289f, 0.340827f, -0.182062f },
	{ 0.040208f, -0.886841f, 0.460322f }
};

NJS_MODEL_SADX attach_00181ED8 = { vertex_00181E48, normal_00181E90, LengthOfArray<Sint32>(vertex_00181E48), meshlist_00181E30, matlist_00181D8C, LengthOfArray<Uint16>(meshlist_00181E30), LengthOfArray<Uint16>(matlist_00181D8C),{ -0.351991f, 1.895341f, 0.675925f }, 9.588983f, NULL };

NJS_OBJECT object_00181F00 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00181ED8, 577.0774f, -389.0314f, -3012.356f, 0, 0, 0, 1, 1, 1, NULL, &object_00181D58 };

NJS_MATERIAL matlist_00181F34[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00181F48[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00181F78[] = {
	{ 253, 198 },
	{ 139, 254 },
	{ 142, -510 },
	{ 253, 198 },
	{ 142, -510 },
	{ 255, -121 },
	{ 139, 254 },
	{ 0, 248 },
	{ 0, -13 },
	{ 139, 254 },
	{ 0, -13 },
	{ 142, -510 },
	{ 0, 248 },
	{ 253, 198 },
	{ 255, -121 },
	{ 0, 248 },
	{ 255, -121 },
	{ 0, -13 },
	{ 253, 198 },
	{ 0, 248 },
	{ 139, 254 },
	{ 142, -510 },
	{ 0, -13 },
	{ 255, -121 }
};

NJS_MESHSET_SADX meshlist_00181FD8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00181F48, NULL, NULL, NULL, uv_00181F78, NULL }
};

NJS_VECTOR vertex_00181FF0[] = {
	{ 1.162641f, 2.586303f, -3.488866f },
	{ 0.639802f, 1.829242f, -3.492825f },
	{ 1.148506f, 1.798684f, -2.120316f },
	{ -4.260805f, 2.9121f, 13.23287f },
	{ -1.213461f, 1.209902f, 2.221217f },
	{ -1.115378f, 1.20401f, 4.859764f }
};

NJS_VECTOR normal_00182038[] = {
	{ -0.072338f, 0.824083f, -0.561832f },
	{ 0.171282f, -0.944888f, -0.279015f },
	{ 0.9421329f, -0.325538f, 0.080069f },
	{ 0.822512f, 0.071458f, 0.564241f },
	{ -0.862404f, -0.45141f, -0.229103f },
	{ 0.303561f, -0.948249f, 0.093136f }
};

NJS_MODEL_SADX attach_00182080 = { vertex_00181FF0, normal_00182038, LengthOfArray<Sint32>(vertex_00181FF0), meshlist_00181FD8, matlist_00181F34, LengthOfArray<Uint16>(meshlist_00181FD8), LengthOfArray<Uint16>(matlist_00181F34),{ -1.549082f, 2.058055f, 4.870025f }, 8.791576f, NULL };

NJS_OBJECT object_001820A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00182080, 580.5631f, -389.2311f, -3023.094f, 0, 0, 0, 1, 1, 1, NULL, &object_00181F00 };

NJS_MATERIAL matlist_001820DC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001820F0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00182120[] = {
	{ 254, 180 },
	{ 139, 95 },
	{ 140, -149 },
	{ 254, 180 },
	{ 140, -149 },
	{ 255, -255 },
	{ 139, 95 },
	{ 0, 254 },
	{ 0, -162 },
	{ 139, 95 },
	{ 0, -162 },
	{ 140, -149 },
	{ 0, 254 },
	{ 254, 180 },
	{ 255, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 0, -162 },
	{ 254, 180 },
	{ 0, 254 },
	{ 139, 95 },
	{ 140, -149 },
	{ 0, -162 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00182180[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001820F0, NULL, NULL, NULL, uv_00182120, NULL }
};

NJS_VECTOR vertex_00182198[] = {
	{ 0.543999f, 2.62359f, -1.581335f },
	{ 0.68012f, 1.826945f, -3.617018f },
	{ 1.25767f, 1.79225f, -2.456778f },
	{ -0.389672f, 2.679677f, 1.29739f },
	{ -0.91251f, 1.922616f, 1.293431f },
	{ -0.403807f, 1.892058f, 2.66594f }
};

NJS_VECTOR normal_001821E0[] = {
	{ -0.065185f, 0.972661f, -0.222892f },
	{ -0.363651f, -0.731755f, -0.576449f },
	{ 0.9504049f, 0.288545f, 0.116071f },
	{ 0.061368f, 0.959398f, 0.275298f },
	{ -0.962967f, 0.253411f, -0.09207799f },
	{ -0.045515f, -0.868976f, 0.492756f }
};

NJS_MODEL_SADX attach_00182228 = { vertex_00182198, normal_001821E0, LengthOfArray<Sint32>(vertex_00182198), meshlist_00182180, matlist_001820DC, LengthOfArray<Uint16>(meshlist_00182180), LengthOfArray<Uint16>(matlist_001820DC),{ 0.17258f, 2.235964f, -0.475539f }, 3.323607f, NULL };

NJS_OBJECT object_00182250 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00182228, 582.118f, -389.3147f, -3027.878f, 0, 0, 0, 1, 1, 1, NULL, &object_001820A8 };

NJS_MATERIAL matlist_00182284[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00182298[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001822C8[] = {
	{ 254, 141 },
	{ 139, 232 },
	{ 140, 0 },
	{ 254, 141 },
	{ 140, 0 },
	{ 255, 48 },
	{ 139, 232 },
	{ 0, 255 },
	{ 0, 91 },
	{ 139, 232 },
	{ 0, 91 },
	{ 140, 0 },
	{ 0, 255 },
	{ 254, 141 },
	{ 255, 48 },
	{ 0, 255 },
	{ 255, 48 },
	{ 0, 91 },
	{ 254, 141 },
	{ 0, 255 },
	{ 139, 232 },
	{ 140, 0 },
	{ 0, 91 },
	{ 255, 48 }
};

NJS_MESHSET_SADX meshlist_00182328[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00182298, NULL, NULL, NULL, uv_001822C8, NULL }
};

NJS_VECTOR vertex_00182340[] = {
	{ 0.945785f, 2.615481f, -2.818059f },
	{ 0.6221099f, 1.846456f, -3.436083f },
	{ 0.730028f, 1.839974f, -0.827862f },
	{ -0.601088f, 2.692375f, 1.948353f },
	{ -0.464967f, 1.89573f, -0.08733f },
	{ 0.112582f, 1.861036f, 1.072909f }
};

NJS_VECTOR normal_00182388[] = {
	{ 0.156663f, 0.956858f, -0.244703f },
	{ 0.025681f, -0.985431f, -0.168123f },
	{ 0.967355f, -0.171812f, 0.186293f },
	{ 0.35996f, 0.72783f, 0.583689f },
	{ -0.9498219f, -0.290449f, -0.116092f },
	{ 0.07729299f, -0.971875f, 0.222452f }
};

NJS_MODEL_SADX attach_001823D0 = { vertex_00182340, normal_00182388, LengthOfArray<Sint32>(vertex_00182340), meshlist_00182328, matlist_00182284, LengthOfArray<Uint16>(meshlist_00182328), LengthOfArray<Uint16>(matlist_00182284),{ 0.172348f, 2.266175f, -0.743865f }, 2.801039f, NULL };

NJS_OBJECT object_001823F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001823D0, 583.2657f, -389.374f, -3031.406f, 0, 0, 0, 1, 1, 1, NULL, &object_00182250 };

NJS_MATERIAL matlist_0018242C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00182440[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00182470[] = {
	{ 253, 219 },
	{ 139, 89 },
	{ 140, -143 },
	{ 253, 219 },
	{ 140, -143 },
	{ 255, -255 },
	{ 139, 89 },
	{ 0, 254 },
	{ 1, -171 },
	{ 139, 89 },
	{ 1, -171 },
	{ 140, -143 },
	{ 0, 254 },
	{ 253, 219 },
	{ 255, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 1, -171 },
	{ 253, 219 },
	{ 0, 254 },
	{ 139, 89 },
	{ 140, -143 },
	{ 1, -171 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_001824D0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00182440, NULL, NULL, NULL, uv_00182470, NULL }
};

NJS_VECTOR vertex_001824E8[] = {
	{ 0.670681f, 0.471689f, -1.973037f },
	{ 1.254304f, -0.351839f, -5.388473f },
	{ 1.893323f, -0.390226f, -4.41776f },
	{ -0.816222f, 0.926344f, 2.611428f },
	{ -1.469376f, 0.177112f, 3.009264f },
	{ -1.142625f, 0.157484f, 4.942772f }
};

NJS_VECTOR normal_00182530[] = {
	{ -0.146588f, 0.968451f, -0.201532f },
	{ -0.746669f, -0.479992f, -0.460537f },
	{ 0.890967f, 0.4285f, 0.15022f },
	{ 0.07753f, 0.988771f, 0.127752f },
	{ -0.9271449f, 0.332687f, -0.1724f },
	{ -0.087966f, -0.8962179f, 0.434805f }
};

NJS_MODEL_SADX attach_00182578 = { vertex_001824E8, normal_00182530, LengthOfArray<Sint32>(vertex_001824E8), meshlist_001824D0, matlist_0018242C, LengthOfArray<Uint16>(meshlist_001824D0), LengthOfArray<Uint16>(matlist_0018242C),{ 0.211973f, 0.268059f, -0.222851f }, 5.432386f, NULL };

NJS_OBJECT object_001825A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00182578, 563.3405f, -383.7288f, -2970.05f, 0, 0, 0, 1, 1, 1, NULL, &object_001823F8 };

NJS_MATERIAL matlist_001825D4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001825E8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00182618[] = {
	{ 254, 224 },
	{ 139, 255 },
	{ 140, 0 },
	{ 254, 224 },
	{ 140, 0 },
	{ 255, 110 },
	{ 139, 255 },
	{ 0, 224 },
	{ 0, 139 },
	{ 139, 255 },
	{ 0, 139 },
	{ 140, 0 },
	{ 0, 224 },
	{ 254, 224 },
	{ 255, 110 },
	{ 0, 224 },
	{ 255, 110 },
	{ 0, 139 },
	{ 254, 224 },
	{ 0, 224 },
	{ 139, 255 },
	{ 140, 0 },
	{ 0, 139 },
	{ 255, 110 }
};

NJS_MESHSET_SADX meshlist_00182678[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001825E8, NULL, NULL, NULL, uv_00182618, NULL }
};

NJS_VECTOR vertex_00182690[] = {
	{ 0.6568829f, 0.472519f, -1.930797f },
	{ -0.047907f, -0.273611f, -1.373758f },
	{ 0.814864f, -0.325439f, -1.092921f },
	{ -1.270145f, 0.58828f, 4.010678f },
	{ -0.686523f, -0.235248f, 0.595243f },
	{ -0.047503f, -0.273635f, 1.565955f }
};

NJS_VECTOR normal_001826D8[] = {
	{ -0.39152f, 0.609834f, -0.6890669f },
	{ -0.29581f, -0.871178f, -0.391849f },
	{ 0.914557f, -0.396407f, -0.08029199f },
	{ 0.6613269f, 0.570871f, 0.486572f },
	{ -0.906941f, -0.386091f, -0.168501f },
	{ 0.163096f, -0.9715289f, 0.171848f }
};

NJS_MODEL_SADX attach_00182720 = { vertex_00182690, normal_001826D8, LengthOfArray<Sint32>(vertex_00182690), meshlist_00182678, matlist_001825D4, LengthOfArray<Uint16>(meshlist_00182678), LengthOfArray<Uint16>(matlist_001825D4),{ -0.227641f, 0.13142f, 1.03994f }, 3.148433f, NULL };

NJS_OBJECT object_00182748 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00182720, 565.2841f, -383.8357f, -2976.033f, 0, 0, 0, 1, 1, 1, NULL, &object_001825A0 };

NJS_MATERIAL matlist_0018277C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00182790[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001827C0[] = {
	{ 254, 224 },
	{ 140, 174 },
	{ 140, 30 },
	{ 254, 224 },
	{ 140, 30 },
	{ 255, 0 },
	{ 140, 174 },
	{ 0, 255 },
	{ 0 },
	{ 140, 174 },
	{ 0 },
	{ 140, 30 },
	{ 0, 255 },
	{ 254, 224 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 254, 224 },
	{ 0, 255 },
	{ 140, 174 },
	{ 140, 30 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00182820[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00182790, NULL, NULL, NULL, uv_001827C0, NULL }
};

NJS_VECTOR vertex_00182838[] = {
	{ 0.661591f, 0.508301f, -1.938264f },
	{ 0.8026299f, -0.288639f, -3.989109f },
	{ 1.429356f, -0.326288f, -2.980491f },
	{ -0.438979f, 0.53835f, 1.448394f },
	{ -1.143769f, -0.207781f, 2.005433f },
	{ -0.280998f, -0.259609f, 2.28627f }
};

NJS_VECTOR normal_00182880[] = {
	{ -0.095041f, 0.970551f, -0.221353f },
	{ -0.429955f, -0.67906f, -0.594993f },
	{ 0.9432819f, 0.312394f, 0.112376f },
	{ 0.295084f, 0.869241f, 0.396668f },
	{ -0.914953f, 0.39532f, 0.081138f },
	{ 0.397389f, -0.609961f, 0.685587f }
};

NJS_MODEL_SADX attach_001828C8 = { vertex_00182838, normal_00182880, LengthOfArray<Sint32>(vertex_00182838), meshlist_00182820, matlist_0018277C, LengthOfArray<Uint16>(meshlist_00182820), LengthOfArray<Uint16>(matlist_0018277C),{ 0.142794f, 0.106031f, -0.85142f }, 3.391231f, NULL };

NJS_OBJECT object_001828F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001828C8, 566.3823f, -383.892f, -2979.409f, 0, 0, 0, 1, 1, 1, NULL, &object_00182748 };

NJS_MATERIAL matlist_00182924[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00182938[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00182968[] = {
	{ 254, 116 },
	{ 139, 255 },
	{ 140, 0 },
	{ 254, 116 },
	{ 140, 0 },
	{ 255, 40 },
	{ 139, 255 },
	{ 0, 200 },
	{ 0, 40 },
	{ 139, 255 },
	{ 0, 40 },
	{ 140, 0 },
	{ 0, 200 },
	{ 254, 116 },
	{ 255, 40 },
	{ 0, 200 },
	{ 255, 40 },
	{ 0, 40 },
	{ 254, 116 },
	{ 0, 200 },
	{ 139, 255 },
	{ 140, 0 },
	{ 0, 40 },
	{ 255, 40 }
};

NJS_MESHSET_SADX meshlist_001829C8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00182938, NULL, NULL, NULL, uv_00182968, NULL }
};

NJS_VECTOR vertex_001829E0[] = {
	{ 1.382452f, 0.428963f, -4.167198f },
	{ 0.441617f, -0.302987f, -2.882378f },
	{ 0.5790409f, -0.311242f, -0.365128f },
	{ -0.819963f, 0.561267f, 2.623358f },
	{ -0.9420159f, -0.21987f, 1.383686f },
	{ -0.079246f, -0.271698f, 1.664523f }
};

NJS_VECTOR normal_00182A28[] = {
	{ -0.183381f, 0.9093159f, -0.373519f },
	{ -0.142546f, -0.981052f, -0.131219f },
	{ 0.90638f, -0.370125f, 0.203674f },
	{ 0.558734f, 0.513594f, 0.651181f },
	{ -0.933746f, -0.357935f, 0.000031f },
	{ 0.199972f, -0.9276429f, 0.315421f }
};

NJS_MODEL_SADX attach_00182A70 = { vertex_001829E0, normal_00182A28, LengthOfArray<Sint32>(vertex_001829E0), meshlist_001829C8, matlist_00182924, LengthOfArray<Uint16>(meshlist_001829C8), LengthOfArray<Uint16>(matlist_00182924),{ 0.220218f, 0.125012f, -0.77192f }, 3.588676f, NULL };

NJS_OBJECT object_00182A98 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00182A70, 568.9683f, -383.9989f, -2987.332f, 0, 0, 0, 1, 1, 1, NULL, &object_001828F0 };

NJS_MATERIAL matlist_00182ACC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00182AE0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00182B10[] = {
	{ 253, 113 },
	{ 138, 254 },
	{ 140, -96 },
	{ 253, 113 },
	{ 140, -96 },
	{ 255, -255 },
	{ 138, 254 },
	{ 0, 156 },
	{ 1, -158 },
	{ 138, 254 },
	{ 1, -158 },
	{ 140, -96 },
	{ 0, 156 },
	{ 253, 113 },
	{ 255, -255 },
	{ 0, 156 },
	{ 255, -255 },
	{ 1, -158 },
	{ 253, 113 },
	{ 0, 156 },
	{ 138, 254 },
	{ 140, -96 },
	{ 1, -158 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00182B70[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00182AE0, NULL, NULL, NULL, uv_00182B10, NULL }
};

NJS_VECTOR vertex_00182B88[] = {
	{ 1.98037f, 0.393043f, -6.011403f },
	{ 0.76169f, -0.322216f, -3.869923f },
	{ 1.304817f, -0.354843f, -2.603548f },
	{ -0.669548f, 0.552229f, 2.158907f },
	{ -1.610383f, -0.179721f, 3.443728f },
	{ -1.472959f, -0.187976f, 5.960978f }
};

NJS_VECTOR normal_00182BD0[] = {
	{ -0.515363f, 0.704399f, -0.488081f },
	{ -0.247461f, -0.954503f, -0.166396f },
	{ 0.86705f, -0.467314f, 0.17275f },
	{ 0.142546f, 0.981052f, 0.131219f },
	{ -0.90638f, 0.370125f, -0.203674f },
	{ 0.183381f, -0.9093159f, 0.373519f }
};

NJS_MODEL_SADX attach_00182C18 = { vertex_00182B88, normal_00182BD0, LengthOfArray<Sint32>(vertex_00182B88), meshlist_00182B70, matlist_00182ACC, LengthOfArray<Uint16>(meshlist_00182B70), LengthOfArray<Uint16>(matlist_00182ACC),{ 0.184994f, 0.098693f, -0.025213f }, 6.249644f, NULL };

NJS_OBJECT object_00182C40 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00182C18, 571.0228f, -384.1125f, -2993.656f, 0, 0, 0, 1, 1, 1, NULL, &object_00182A98 };

NJS_MATERIAL matlist_00182C74[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00182C88[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00182CB8[] = {
	{ 252, 146 },
	{ 139, -26 },
	{ 140, -358 },
	{ 252, 146 },
	{ 140, -358 },
	{ 255, -510 },
	{ 139, -26 },
	{ 0, 255 },
	{ 2, -464 },
	{ 139, -26 },
	{ 2, -464 },
	{ 140, -358 },
	{ 0, 255 },
	{ 252, 146 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 2, -464 },
	{ 252, 146 },
	{ 0, 255 },
	{ 139, -26 },
	{ 140, -358 },
	{ 2, -464 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_00182D18[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00182C88, NULL, NULL, NULL, uv_00182CB8, NULL }
};

NJS_VECTOR vertex_00182D30[] = {
	{ 1.405876f, 0.549426f, -4.240094f },
	{ 2.91155f, -0.329491f, -10.49843f },
	{ 3.014551f, -0.335678f, -7.875044f },
	{ -0.9293129f, 0.5679269f, 2.959836f },
	{ -2.147993f, -0.147332f, 5.101317f },
	{ -1.604867f, -0.179959f, 6.367692f }
};

NJS_VECTOR normal_00182D78[] = {
	{ -0.112003f, 0.987949f, -0.106831f },
	{ -0.559948f, -0.742034f, -0.368569f },
	{ 0.914382f, 0.334256f, 0.228426f },
	{ 0.251288f, 0.951896f, 0.175354f },
	{ -0.867652f, 0.467244f, -0.169894f },
	{ 0.543556f, -0.6879489f, 0.480908f }
};

NJS_MODEL_SADX attach_00182DC0 = { vertex_00182D30, normal_00182D78, LengthOfArray<Sint32>(vertex_00182D30), meshlist_00182D18, matlist_00182C74, LengthOfArray<Uint16>(meshlist_00182D18), LengthOfArray<Uint16>(matlist_00182C74),{ 0.433279f, 0.116125f, -2.065367f }, 8.819308f, NULL };

NJS_OBJECT object_00182DE8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00182DC0, 573.9348f, -384.2778f, -3002.625f, 0, 0, 0, 1, 1, 1, NULL, &object_00182C40 };

NJS_MATERIAL matlist_00182E1C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00182E58[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00182E7C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00182E88[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00182ED0[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00182EE8[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00182E58, NULL, NULL, NULL, uv_00182E88, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00182E7C, NULL, NULL, NULL, uv_00182ED0, NULL }
};

NJS_VECTOR vertex_00182F18[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00182F60[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00182FA8 = { vertex_00182F18, normal_00182F60, LengthOfArray<Sint32>(vertex_00182F18), meshlist_00182EE8, matlist_00182E1C, LengthOfArray<Uint16>(meshlist_00182EE8), LengthOfArray<Uint16>(matlist_00182E1C),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00182FD0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00182FA8, 593.1575f, -395.573f, -3002.589f, 0, 0, 0, 1, 1, 1, NULL, &object_00182DE8 };

NJS_MATERIAL matlist_00183004[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00183040[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00183064[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00183070[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_001830B8[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001830D0[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00183040, NULL, NULL, NULL, uv_00183070, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00183064, NULL, NULL, NULL, uv_001830B8, NULL }
};

NJS_VECTOR vertex_00183100[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00183148[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00183190 = { vertex_00183100, normal_00183148, LengthOfArray<Sint32>(vertex_00183100), meshlist_001830D0, matlist_00183004, LengthOfArray<Uint16>(meshlist_001830D0), LengthOfArray<Uint16>(matlist_00183004),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_001831B8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00183190, 591.3312f, -395.4729f, -2996.968f, 0, 0, 0, 1, 1, 1, NULL, &object_00182FD0 };

NJS_MATERIAL matlist_001831EC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00183228[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0018324C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00183258[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_001832A0[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001832B8[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00183228, NULL, NULL, NULL, uv_00183258, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_0018324C, NULL, NULL, NULL, uv_001832A0, NULL }
};

NJS_VECTOR vertex_001832E8[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00183330[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00183378 = { vertex_001832E8, normal_00183330, LengthOfArray<Sint32>(vertex_001832E8), meshlist_001832B8, matlist_001831EC, LengthOfArray<Uint16>(meshlist_001832B8), LengthOfArray<Uint16>(matlist_001831EC),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_001833A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00183378, 589.5049f, -395.373f, -2991.347f, 0, 0, 0, 1, 1, 1, NULL, &object_001831B8 };

NJS_MATERIAL matlist_001833D4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00183410[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00183434[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00183440[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00183488[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001834A0[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00183410, NULL, NULL, NULL, uv_00183440, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00183434, NULL, NULL, NULL, uv_00183488, NULL }
};

NJS_VECTOR vertex_001834D0[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00183518[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00183560 = { vertex_001834D0, normal_00183518, LengthOfArray<Sint32>(vertex_001834D0), meshlist_001834A0, matlist_001833D4, LengthOfArray<Uint16>(meshlist_001834A0), LengthOfArray<Uint16>(matlist_001833D4),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00183588 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00183560, 587.6786f, -395.273f, -2985.726f, 0, 0, 0, 1, 1, 1, NULL, &object_001833A0 };

NJS_MATERIAL matlist_001835BC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001835F8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0018361C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00183628[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00183670[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00183688[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_001835F8, NULL, NULL, NULL, uv_00183628, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_0018361C, NULL, NULL, NULL, uv_00183670, NULL }
};

NJS_VECTOR vertex_001836B8[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00183700[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00183748 = { vertex_001836B8, normal_00183700, LengthOfArray<Sint32>(vertex_001836B8), meshlist_00183688, matlist_001835BC, LengthOfArray<Uint16>(meshlist_00183688), LengthOfArray<Uint16>(matlist_001835BC),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00183770 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00183748, 585.8524f, -395.173f, -2980.105f, 0, 0, 0, 1, 1, 1, NULL, &object_00183588 };

NJS_MATERIAL matlist_001837A4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001837E0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00183804[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00183810[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00183858[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00183870[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_001837E0, NULL, NULL, NULL, uv_00183810, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00183804, NULL, NULL, NULL, uv_00183858, NULL }
};

NJS_VECTOR vertex_001838A0[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_001838E8[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00183930 = { vertex_001838A0, normal_001838E8, LengthOfArray<Sint32>(vertex_001838A0), meshlist_00183870, matlist_001837A4, LengthOfArray<Uint16>(meshlist_00183870), LengthOfArray<Uint16>(matlist_001837A4),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00183958 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00183930, 584.0261f, -395.073f, -2974.484f, 0, 0, 0, 1, 1, 1, NULL, &object_00183770 };

NJS_MATERIAL matlist_0018398C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001839C8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_001839EC[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001839F8[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00183A40[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00183A58[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_001839C8, NULL, NULL, NULL, uv_001839F8, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_001839EC, NULL, NULL, NULL, uv_00183A40, NULL }
};

NJS_VECTOR vertex_00183A88[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00183AD0[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00183B18 = { vertex_00183A88, normal_00183AD0, LengthOfArray<Sint32>(vertex_00183A88), meshlist_00183A58, matlist_0018398C, LengthOfArray<Uint16>(meshlist_00183A58), LengthOfArray<Uint16>(matlist_0018398C),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00183B40 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00183B18, 582.1998f, -394.9729f, -2968.864f, 0, 0, 0, 1, 1, 1, NULL, &object_00183958 };

NJS_MATERIAL matlist_00183BD4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00183BFC[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00183C20[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00183C2C[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00183C74[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00183C8C[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00183BFC, NULL, NULL, NULL, uv_00183C2C, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00183C20, NULL, NULL, NULL, uv_00183C74, NULL }
};

NJS_VECTOR vertex_00183CBC[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00183D04[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00183D4C = { vertex_00183CBC, normal_00183D04, LengthOfArray<Sint32>(vertex_00183CBC), meshlist_00183C8C, matlist_00183BD4, LengthOfArray<Uint16>(meshlist_00183C8C), LengthOfArray<Uint16>(matlist_00183BD4),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00183D74 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00183D4C, 520.1058f, -391.5726f, -2777.758f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00183DA8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00183DD0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00183DF4[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00183E00[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00183E48[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00183E60[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00183DD0, NULL, NULL, NULL, uv_00183E00, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00183DF4, NULL, NULL, NULL, uv_00183E48, NULL }
};

NJS_VECTOR vertex_00183E90[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00183ED8[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00183F20 = { vertex_00183E90, normal_00183ED8, LengthOfArray<Sint32>(vertex_00183E90), meshlist_00183E60, matlist_00183DA8, LengthOfArray<Uint16>(meshlist_00183E60), LengthOfArray<Uint16>(matlist_00183DA8),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00183F48 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00183F20, 523.7584f, -391.7727f, -2788.999f, 0, 0, 0, 1, 1, 1, NULL, &object_00183D74 };

NJS_MATERIAL matlist_00183F7C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00183FA4[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00183FC8[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00183FD4[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_0018401C[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00184034[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00183FA4, NULL, NULL, NULL, uv_00183FD4, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00183FC8, NULL, NULL, NULL, uv_0018401C, NULL }
};

NJS_VECTOR vertex_00184064[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_001840AC[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_001840F4 = { vertex_00184064, normal_001840AC, LengthOfArray<Sint32>(vertex_00184064), meshlist_00184034, matlist_00183F7C, LengthOfArray<Uint16>(meshlist_00184034), LengthOfArray<Uint16>(matlist_00183F7C),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_0018411C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001840F4, 529.2372f, -392.0728f, -2805.861f, 0, 0, 0, 1, 1, 1, NULL, &object_00183F48 };

NJS_MATERIAL matlist_00184150[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00184178[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0018419C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001841A8[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_001841F0[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00184208[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00184178, NULL, NULL, NULL, uv_001841A8, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0018419C, NULL, NULL, NULL, uv_001841F0, NULL }
};

NJS_VECTOR vertex_00184238[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00184280[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_001842C8 = { vertex_00184238, normal_00184280, LengthOfArray<Sint32>(vertex_00184238), meshlist_00184208, matlist_00184150, LengthOfArray<Uint16>(meshlist_00184208), LengthOfArray<Uint16>(matlist_00184150),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_001842F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001842C8, 531.0635f, -392.1727f, -2811.482f, 0, 0, 0, 1, 1, 1, NULL, &object_0018411C };

NJS_MATERIAL matlist_00184324[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018434C[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00184370[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018437C[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_001843C4[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001843DC[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018434C, NULL, NULL, NULL, uv_0018437C, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00184370, NULL, NULL, NULL, uv_001843C4, NULL }
};

NJS_VECTOR vertex_0018440C[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00184454[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_0018449C = { vertex_0018440C, normal_00184454, LengthOfArray<Sint32>(vertex_0018440C), meshlist_001843DC, matlist_00184324, LengthOfArray<Uint16>(meshlist_001843DC), LengthOfArray<Uint16>(matlist_00184324),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_001844C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018449C, 536.5423f, -392.4727f, -2828.344f, 0, 0, 0, 1, 1, 1, NULL, &object_001842F0 };

NJS_MATERIAL matlist_001844F8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00184520[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00184544[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00184550[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00184598[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001845B0[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00184520, NULL, NULL, NULL, uv_00184550, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00184544, NULL, NULL, NULL, uv_00184598, NULL }
};

NJS_VECTOR vertex_001845E0[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00184628[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00184670 = { vertex_001845E0, normal_00184628, LengthOfArray<Sint32>(vertex_001845E0), meshlist_001845B0, matlist_001844F8, LengthOfArray<Uint16>(meshlist_001845B0), LengthOfArray<Uint16>(matlist_001844F8),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00184698 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00184670, 538.3687f, -392.5728f, -2833.965f, 0, 0, 0, 1, 1, 1, NULL, &object_001844C4 };

NJS_MATERIAL matlist_001846CC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001846F4[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00184718[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00184724[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_0018476C[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00184784[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_001846F4, NULL, NULL, NULL, uv_00184724, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00184718, NULL, NULL, NULL, uv_0018476C, NULL }
};

NJS_VECTOR vertex_001847B4[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_001847FC[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00184844 = { vertex_001847B4, normal_001847FC, LengthOfArray<Sint32>(vertex_001847B4), meshlist_00184784, matlist_001846CC, LengthOfArray<Uint16>(meshlist_00184784), LengthOfArray<Uint16>(matlist_001846CC),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_0018486C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00184844, 540.1949f, -392.6727f, -2839.586f, 0, 0, 0, 1, 1, 1, NULL, &object_00184698 };

NJS_MATERIAL matlist_001848A0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001848C8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_001848EC[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001848F8[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00184940[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00184958[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_001848C8, NULL, NULL, NULL, uv_001848F8, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_001848EC, NULL, NULL, NULL, uv_00184940, NULL }
};

NJS_VECTOR vertex_00184988[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_001849D0[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00184A18 = { vertex_00184988, normal_001849D0, LengthOfArray<Sint32>(vertex_00184988), meshlist_00184958, matlist_001848A0, LengthOfArray<Uint16>(meshlist_00184958), LengthOfArray<Uint16>(matlist_001848A0),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00184A40 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00184A18, 543.8475f, -392.8727f, -2850.827f, 0, 0, 0, 1, 1, 1, NULL, &object_0018486C };

NJS_MATERIAL matlist_00184A74[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00184A9C[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00184AC0[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00184ACC[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00184B14[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00184B2C[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00184A9C, NULL, NULL, NULL, uv_00184ACC, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00184AC0, NULL, NULL, NULL, uv_00184B14, NULL }
};

NJS_VECTOR vertex_00184B5C[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00184BA4[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00184BEC = { vertex_00184B5C, normal_00184BA4, LengthOfArray<Sint32>(vertex_00184B5C), meshlist_00184B2C, matlist_00184A74, LengthOfArray<Uint16>(meshlist_00184B2C), LengthOfArray<Uint16>(matlist_00184A74),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00184C14 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00184BEC, 545.6738f, -392.9727f, -2856.448f, 0, 0, 0, 1, 1, 1, NULL, &object_00184A40 };

NJS_MATERIAL matlist_00184C48[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00184C70[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00184C94[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00184CA0[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00184CE8[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00184D00[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00184C70, NULL, NULL, NULL, uv_00184CA0, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00184C94, NULL, NULL, NULL, uv_00184CE8, NULL }
};

NJS_VECTOR vertex_00184D30[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00184D78[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00184DC0 = { vertex_00184D30, normal_00184D78, LengthOfArray<Sint32>(vertex_00184D30), meshlist_00184D00, matlist_00184C48, LengthOfArray<Uint16>(meshlist_00184D00), LengthOfArray<Uint16>(matlist_00184C48),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00184DE8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00184DC0, 547.5002f, -393.0728f, -2862.069f, 0, 0, 0, 1, 1, 1, NULL, &object_00184C14 };

NJS_MATERIAL matlist_00184E1C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00184E44[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00184E68[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00184E74[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00184EBC[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00184ED4[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00184E44, NULL, NULL, NULL, uv_00184E74, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00184E68, NULL, NULL, NULL, uv_00184EBC, NULL }
};

NJS_VECTOR vertex_00184F04[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00184F4C[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00184F94 = { vertex_00184F04, normal_00184F4C, LengthOfArray<Sint32>(vertex_00184F04), meshlist_00184ED4, matlist_00184E1C, LengthOfArray<Uint16>(meshlist_00184ED4), LengthOfArray<Uint16>(matlist_00184E1C),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00184FBC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00184F94, 549.3265f, -393.1727f, -2867.689f, 0, 0, 0, 1, 1, 1, NULL, &object_00184DE8 };

NJS_MATERIAL matlist_00184FF0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00185018[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0018503C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00185048[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00185090[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001850A8[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00185018, NULL, NULL, NULL, uv_00185048, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0018503C, NULL, NULL, NULL, uv_00185090, NULL }
};

NJS_VECTOR vertex_001850D8[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00185120[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00185168 = { vertex_001850D8, normal_00185120, LengthOfArray<Sint32>(vertex_001850D8), meshlist_001850A8, matlist_00184FF0, LengthOfArray<Uint16>(meshlist_001850A8), LengthOfArray<Uint16>(matlist_00184FF0),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00185190 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00185168, 552.9791f, -393.3729f, -2878.931f, 0, 0, 0, 1, 1, 1, NULL, &object_00184FBC };

NJS_MATERIAL matlist_001851C4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001851EC[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00185210[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018521C[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00185264[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0018527C[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_001851EC, NULL, NULL, NULL, uv_0018521C, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00185210, NULL, NULL, NULL, uv_00185264, NULL }
};

NJS_VECTOR vertex_001852AC[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_001852F4[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_0018533C = { vertex_001852AC, normal_001852F4, LengthOfArray<Sint32>(vertex_001852AC), meshlist_0018527C, matlist_001851C4, LengthOfArray<Uint16>(meshlist_0018527C), LengthOfArray<Uint16>(matlist_001851C4),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00185364 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018533C, 556.6316f, -393.5729f, -2890.172f, 0, 0, 0, 1, 1, 1, NULL, &object_00185190 };

NJS_MATERIAL matlist_00185398[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001853C0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_001853E4[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001853F0[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00185438[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00185450[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_001853C0, NULL, NULL, NULL, uv_001853F0, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_001853E4, NULL, NULL, NULL, uv_00185438, NULL }
};

NJS_VECTOR vertex_00185480[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_001854C8[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00185510 = { vertex_00185480, normal_001854C8, LengthOfArray<Sint32>(vertex_00185480), meshlist_00185450, matlist_00185398, LengthOfArray<Uint16>(meshlist_00185450), LengthOfArray<Uint16>(matlist_00185398),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00185538 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00185510, 558.4579f, -393.6729f, -2895.793f, 0, 0, 0, 1, 1, 1, NULL, &object_00185364 };

NJS_MATERIAL matlist_0018556C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00185594[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_001855B8[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001855C4[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_0018560C[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00185624[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00185594, NULL, NULL, NULL, uv_001855C4, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_001855B8, NULL, NULL, NULL, uv_0018560C, NULL }
};

NJS_VECTOR vertex_00185654[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_0018569C[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_001856E4 = { vertex_00185654, normal_0018569C, LengthOfArray<Sint32>(vertex_00185654), meshlist_00185624, matlist_0018556C, LengthOfArray<Uint16>(meshlist_00185624), LengthOfArray<Uint16>(matlist_0018556C),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_0018570C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001856E4, 560.2842f, -393.7729f, -2901.414f, 0, 0, 0, 1, 1, 1, NULL, &object_00185538 };

NJS_MATERIAL matlist_00185740[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00185768[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0018578C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00185798[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_001857E0[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001857F8[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00185768, NULL, NULL, NULL, uv_00185798, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0018578C, NULL, NULL, NULL, uv_001857E0, NULL }
};

NJS_VECTOR vertex_00185828[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00185870[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_001858B8 = { vertex_00185828, normal_00185870, LengthOfArray<Sint32>(vertex_00185828), meshlist_001857F8, matlist_00185740, LengthOfArray<Uint16>(meshlist_001857F8), LengthOfArray<Uint16>(matlist_00185740),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_001858E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001858B8, 562.1105f, -393.8729f, -2907.035f, 0, 0, 0, 1, 1, 1, NULL, &object_0018570C };

NJS_MATERIAL matlist_00185914[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00185928[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00185958[] = {
	{ 254, -410 },
	{ 137, 255 },
	{ 140, -484 },
	{ 254, -410 },
	{ 140, -484 },
	{ 255, -510 },
	{ 137, 255 },
	{ 0, -410 },
	{ 0, -486 },
	{ 137, 255 },
	{ 0, -486 },
	{ 140, -484 },
	{ 0, -410 },
	{ 254, -410 },
	{ 255, -510 },
	{ 0, -410 },
	{ 255, -510 },
	{ 0, -486 },
	{ 254, -410 },
	{ 0, -410 },
	{ 137, 255 },
	{ 140, -484 },
	{ 0, -486 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_001859B8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00185928, NULL, NULL, NULL, uv_00185958, NULL }
};

NJS_VECTOR vertex_001859D0[] = {
	{ 4.203572f, 0.503078f, -12.86575f },
	{ -0.565619f, -0.242451f, 0.222781f },
	{ 0.297152f, -0.294279f, 0.5036179f },
	{ -0.573209f, 0.546472f, 1.862173f },
	{ -1.051789f, -0.213246f, 1.721755f },
	{ -0.341464f, -0.255917f, 2.47262f }
};

NJS_VECTOR normal_00185A18[] = {
	{ -0.831763f, 0.438761f, -0.340086f },
	{ -0.364235f, -0.92243f, -0.128282f },
	{ 0.801042f, -0.550341f, 0.235493f },
	{ 0.11499f, 0.872991f, 0.473988f },
	{ -0.990829f, 0.125673f, 0.049648f },
	{ 0.03206f, -0.799204f, 0.600204f }
};

NJS_MODEL_SADX attach_00185A60 = { vertex_001859D0, normal_00185A18, LengthOfArray<Sint32>(vertex_001859D0), meshlist_001859B8, matlist_00185914, LengthOfArray<Uint16>(meshlist_001859B8), LengthOfArray<Uint16>(matlist_00185914),{ 1.575892f, 0.126097f, -5.196566f }, 8.10686f, NULL };

NJS_OBJECT object_00185A88 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00185A60, 536.4223f, -382.199f, -2887.146f, 0, 0, 0, 1, 1, 1, NULL, &object_001858E0 };

NJS_MATERIAL matlist_00185ABC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00185AD0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00185B00[] = {
	{ 254, 193 },
	{ 140, 255 },
	{ 140, 0 },
	{ 254, 193 },
	{ 140, 0 },
	{ 255, 108 },
	{ 140, 255 },
	{ 0, 253 },
	{ 0, 108 },
	{ 140, 255 },
	{ 0, 108 },
	{ 140, 0 },
	{ 0, 253 },
	{ 254, 193 },
	{ 255, 108 },
	{ 0, 253 },
	{ 255, 108 },
	{ 0, 108 },
	{ 254, 193 },
	{ 0, 253 },
	{ 140, 255 },
	{ 140, 0 },
	{ 0, 108 },
	{ 255, 108 }
};

NJS_MESHSET_SADX meshlist_00185B60[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00185AD0, NULL, NULL, NULL, uv_00185B00, NULL }
};

NJS_VECTOR vertex_00185B78[] = {
	{ 0.3126f, 0.493232f, -0.86909f },
	{ -0.16598f, -0.266487f, -1.009508f },
	{ 0.544345f, -0.309158f, -0.258645f },
	{ -0.333393f, 0.532037f, 1.122656f },
	{ -0.531669f, -0.24452f, 0.117996f },
	{ 0.331102f, -0.296348f, 0.398833f }
};

NJS_VECTOR normal_00185BC0[] = {
	{ -0.032061f, 0.799204f, -0.6002049f },
	{ -0.114803f, -0.877641f, -0.465367f },
	{ 0.983665f, -0.1717f, -0.054063f },
	{ 0.505124f, 0.536029f, 0.676404f },
	{ -0.945793f, -0.321814f, 0.043707f },
	{ 0.193702f, -0.914345f, 0.355602f }
};

NJS_MODEL_SADX attach_00185C08 = { vertex_00185B78, normal_00185BC0, LengthOfArray<Sint32>(vertex_00185B78), meshlist_00185B60, matlist_00185ABC, LengthOfArray<Uint16>(meshlist_00185B60), LengthOfArray<Uint16>(matlist_00185ABC),{ 0.006338f, 0.11144f, 0.056574f }, 1.194116f, NULL };

NJS_OBJECT object_00185C30 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00185C08, 535.5338f, -382.1552f, -2884.417f, 0, 0, 0, 1, 1, 1, NULL, &object_00185A88 };

NJS_MATERIAL matlist_00185C64[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00185C78[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00185CA8[] = {
	{ 254, 254 },
	{ 139, 202 },
	{ 140, 58 },
	{ 254, 254 },
	{ 140, 58 },
	{ 255, 0 },
	{ 139, 202 },
	{ 0, 255 },
	{ 0 },
	{ 139, 202 },
	{ 0 },
	{ 140, 58 },
	{ 0, 255 },
	{ 254, 254 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 255 },
	{ 139, 202 },
	{ 140, 58 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00185D08[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00185C78, NULL, NULL, NULL, uv_00185CA8, NULL }
};

NJS_VECTOR vertex_00185D20[] = {
	{ 0.435434f, 0.485943f, -1.248288f },
	{ 0.237158f, -0.290615f, -2.252948f },
	{ 1.099929f, -0.342443f, -1.972111f },
	{ -0.323663f, 0.531543f, 1.092185f },
	{ -1.104676f, -0.210008f, 1.884237f },
	{ -0.241905f, -0.261836f, 2.165073f }
};

NJS_VECTOR normal_00185D68[] = {
	{ -0.193702f, 0.914345f, -0.355603f },
	{ -0.505124f, -0.536029f, -0.676404f },
	{ 0.945793f, 0.321815f, -0.043707f },
	{ 0.304138f, 0.888834f, 0.342745f },
	{ -0.895324f, 0.4444f, 0.030062f },
	{ 0.454658f, -0.587195f, 0.669693f }
};

NJS_MODEL_SADX attach_00185DB0 = { vertex_00185D20, normal_00185D68, LengthOfArray<Sint32>(vertex_00185D20), meshlist_00185D08, matlist_00185C64, LengthOfArray<Uint16>(meshlist_00185D08), LengthOfArray<Uint16>(matlist_00185C64),{ -0.002373f, 0.09455f, -0.043937f }, 2.468738f, NULL };

NJS_OBJECT object_00185DD8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00185DB0, 534.7624f, -382.1187f, -2882.049f, 0, 0, 0, 1, 1, 1, NULL, &object_00185C30 };

NJS_MATERIAL matlist_00185E0C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00185E20[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00185E50[] = {
	{ 254, 198 },
	{ 140, 255 },
	{ 140, -255 },
	{ 254, 198 },
	{ 140, -255 },
	{ 255, -105 },
	{ 140, 255 },
	{ 0, 198 },
	{ 0, 9 },
	{ 140, 255 },
	{ 0, 9 },
	{ 140, -255 },
	{ 0, 198 },
	{ 254, 198 },
	{ 255, -105 },
	{ 0, 198 },
	{ 255, -105 },
	{ 0, 9 },
	{ 254, 198 },
	{ 0, 198 },
	{ 140, 255 },
	{ 140, -255 },
	{ 0, 9 },
	{ 255, -105 }
};

NJS_MESHSET_SADX meshlist_00185EB0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00185E20, NULL, NULL, NULL, uv_00185E50, NULL }
};

NJS_VECTOR vertex_00185EC8[] = {
	{ 0.868471f, 0.503949f, -2.574828f },
	{ 0.087458f, -0.237602f, -1.782776f },
	{ 0.950229f, -0.28943f, -1.50194f },
	{ -1.89473f, 0.382304f, 5.936625f },
	{ -0.93491f, -0.707379f, 1.361288f },
	{ -0.6966749f, -0.72169f, 3.567713f }
};

NJS_VECTOR normal_00185F10[] = {
	{ -0.5312459f, 0.583565f, -0.61419f },
	{ -0.142054f, -0.912711f, -0.383118f },
	{ 0.874809f, -0.482513f, -0.043469f },
	{ 0.438923f, 0.62437f, 0.646149f },
	{ -0.920862f, -0.337466f, -0.195269f },
	{ 0.228719f, -0.96865f, 0.09698f }
};

NJS_MODEL_SADX attach_00185F58 = { vertex_00185EC8, normal_00185F10, LengthOfArray<Sint32>(vertex_00185EC8), meshlist_00185EB0, matlist_00185E0C, LengthOfArray<Uint16>(meshlist_00185EB0), LengthOfArray<Uint16>(matlist_00185E0C),{ -0.47225f, -0.10887f, 1.680899f }, 4.487062f, NULL };

NJS_OBJECT object_00185F80 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00185F58, 533.5583f, -382.0949f, -2878.387f, 0, 0, 0, 1, 1, 1, NULL, &object_00185DD8 };

NJS_MATERIAL matlist_00185FB4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00185FC8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00185FF8[] = {
	{ 253, 155 },
	{ 139, 27 },
	{ 140, -306 },
	{ 253, 155 },
	{ 140, -306 },
	{ 255, -510 },
	{ 139, 27 },
	{ 0, 255 },
	{ 1, -312 },
	{ 139, 27 },
	{ 1, -312 },
	{ 140, -306 },
	{ 0, 255 },
	{ 253, 155 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 1, -312 },
	{ 253, 155 },
	{ 0, 255 },
	{ 139, 27 },
	{ 140, -306 },
	{ 1, -312 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_00186058[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00185FC8, NULL, NULL, NULL, uv_00185FF8, NULL }
};

NJS_VECTOR vertex_00186070[] = {
	{ 0.9993539f, 0.22448f, -2.983253f },
	{ 1.959174f, -0.865203f, -7.558589f },
	{ 2.197409f, -0.879514f, -5.352165f },
	{ -1.113043f, 0.578903f, 3.526801f },
	{ -1.626047f, -0.178748f, 3.492517f },
	{ -2.002512f, -0.156133f, 7.594207f }
};

NJS_VECTOR normal_001860B8[] = {
	{ -0.042796f, 0.985593f, -0.163629f },
	{ -0.610285f, -0.6924559f, -0.384783f },
	{ 0.947324f, 0.247886f, 0.202807f },
	{ 0.079711f, 0.993045f, 0.086645f },
	{ -0.942325f, 0.234008f, -0.239298f },
	{ -0.300769f, -0.939175f, 0.165799f }
};

NJS_MODEL_SADX attach_00186100 = { vertex_00186070, normal_001860B8, LengthOfArray<Sint32>(vertex_00186070), meshlist_00186058, matlist_00185FB4, LengthOfArray<Uint16>(meshlist_00186058), LengthOfArray<Uint16>(matlist_00185FB4),{ 0.097448f, -0.150306f, 0.017809f }, 7.862051f, NULL };

NJS_OBJECT object_00186128 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00186100, 530.6584f, -381.9401f, -2869.466f, 0, 0, 0, 1, 1, 1, NULL, &object_00185F80 };

NJS_MATERIAL matlist_0018615C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00186170[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001861A0[] = {
	{ 252, 67 },
	{ 138, 255 },
	{ 140, -549 },
	{ 252, 67 },
	{ 140, -549 },
	{ 255, -765 },
	{ 138, 255 },
	{ 0, 249 },
	{ 2, -709 },
	{ 138, 255 },
	{ 2, -709 },
	{ 140, -549 },
	{ 0, 249 },
	{ 252, 67 },
	{ 255, -765 },
	{ 0, 249 },
	{ 255, -765 },
	{ 2, -709 },
	{ 252, 67 },
	{ 0, 249 },
	{ 138, 255 },
	{ 140, -549 },
	{ 2, -709 },
	{ 255, -765 }
};

NJS_MESHSET_SADX meshlist_00186200[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00186170, NULL, NULL, NULL, uv_001861A0, NULL }
};

NJS_VECTOR vertex_00186218[] = {
	{ 3.44552f, 0.333051f, -10.52353f },
	{ 2.932516f, -0.424601f, -10.55782f },
	{ 2.556051f, -0.401985f, -6.456128f },
	{ -2.033699f, 1.121261f, 6.364987f },
	{ -3.601528f, 0.183419f, 9.582977f },
	{ -3.112495f, 0.154042f, 11.01613f }
};

NJS_VECTOR normal_00186260[] = {
	{ 0.05646f, 0.960803f, -0.271423f },
	{ -0.076878f, -0.992415f, -0.095929f },
	{ 0.925801f, -0.299506f, 0.230627f },
	{ 0.27051f, 0.948195f, 0.166583f },
	{ -0.895862f, 0.399601f, -0.194292f },
	{ 0.441717f, -0.777229f, 0.448108f }
};

NJS_MODEL_SADX attach_001862A8 = { vertex_00186218, normal_00186260, LengthOfArray<Sint32>(vertex_00186218), meshlist_00186200, matlist_0018615C, LengthOfArray<Uint16>(meshlist_00186200), LengthOfArray<Uint16>(matlist_0018615C),{ -0.078004f, 0.34833f, 0.229159f }, 11.34787f, NULL };

NJS_OBJECT object_001862D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001862A8, 526.0926f, -381.6949f, -2855.419f, 0, 0, 0, 1, 1, 1, NULL, &object_00186128 };

NJS_MATERIAL matlist_00186304[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00186318[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00186348[] = {
	{ 254, 19 },
	{ 139, 255 },
	{ 140, -255 },
	{ 254, 19 },
	{ 140, -255 },
	{ 255, -133 },
	{ 139, 255 },
	{ 0, 79 },
	{ 0, -111 },
	{ 139, 255 },
	{ 0, -111 },
	{ 140, -255 },
	{ 0, 79 },
	{ 254, 19 },
	{ 255, -133 },
	{ 0, 79 },
	{ 255, -133 },
	{ 0, -111 },
	{ 254, 19 },
	{ 0, 79 },
	{ 139, 255 },
	{ 140, -255 },
	{ 0, -111 },
	{ 255, -133 }
};

NJS_MESHSET_SADX meshlist_001863A8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00186318, NULL, NULL, NULL, uv_00186348, NULL }
};

NJS_VECTOR vertex_001863C0[] = {
	{ 2.01127f, 0.878486f, -6.105659f },
	{ 0.44344f, -0.059356f, -2.887668f },
	{ 0.9324729f, -0.088733f, -1.454511f },
	{ -1.172207f, 0.58261f, 3.709737f },
	{ -0.750865f, -0.231169f, 0.794651f },
	{ -0.025787f, -0.274726f, 1.500027f }
};

NJS_VECTOR normal_00186408[] = {
	{ -0.6188689f, 0.664435f, -0.418959f },
	{ -0.180317f, -0.966468f, -0.182826f },
	{ 0.867568f, -0.464476f, 0.177732f },
	{ 0.675798f, 0.403814f, 0.6166289f },
	{ -0.894002f, -0.422485f, -0.149224f },
	{ 0.244656f, -0.955744f, 0.163389f }
};

NJS_MODEL_SADX attach_00186450 = { vertex_001863C0, normal_00186408, LengthOfArray<Sint32>(vertex_001863C0), meshlist_001863A8, matlist_00186304, LengthOfArray<Uint16>(meshlist_001863A8), LengthOfArray<Uint16>(matlist_00186304),{ 0.419532f, 0.30188f, -1.197961f }, 5.159388f, NULL };

NJS_OBJECT object_00186478 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00186450, 522.0453f, -381.4615f, -2842.951f, 0, 0, 0, 1, 1, 1, NULL, &object_001862D0 };

NJS_MATERIAL matlist_001864AC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001864C0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001864F0[] = {
	{ 253, 229 },
	{ 139, 91 },
	{ 140, -450 },
	{ 253, 229 },
	{ 140, -450 },
	{ 255, -510 },
	{ 139, 91 },
	{ 0, 255 },
	{ 1, -356 },
	{ 139, 91 },
	{ 1, -356 },
	{ 140, -450 },
	{ 0, 255 },
	{ 253, 229 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 1, -356 },
	{ 253, 229 },
	{ 0, 255 },
	{ 139, 91 },
	{ 140, -450 },
	{ 1, -356 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_00186550[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001864C0, NULL, NULL, NULL, uv_001864F0, NULL }
};

NJS_VECTOR vertex_00186568[] = {
	{ 1.308504f, 0.453409f, -3.935797f },
	{ 1.729846f, -0.36037f, -6.850883f },
	{ 2.454923f, -0.403926f, -6.145507f },
	{ -1.667174f, 1.099241f, 5.23521f },
	{ -1.622029f, 0.308061f, 3.480026f },
	{ -1.602628f, 0.306896f, 6.361166f }
};

NJS_VECTOR normal_001865B0[] = {
	{ -0.141605f, 0.969058f, -0.202175f },
	{ -0.76114f, -0.433387f, -0.482536f },
	{ 0.8961909f, 0.420707f, 0.140884f },
	{ -0.038921f, 0.989126f, 0.14183f },
	{ -0.977464f, 0.056957f, -0.203271f },
	{ -0.24437f, -0.9542609f, 0.172249f }
};

NJS_MODEL_SADX attach_001865F8 = { vertex_00186568, normal_001865B0, LengthOfArray<Sint32>(vertex_00186568), meshlist_00186550, matlist_001864AC, LengthOfArray<Uint16>(meshlist_00186550), LengthOfArray<Uint16>(matlist_001864AC),{ 0.393875f, 0.347657f, -0.244859f }, 6.92001f, NULL };

NJS_OBJECT object_00186620 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001865F8, 519.5588f, -381.3315f, -2835.305f, 0, 0, 0, 1, 1, 1, NULL, &object_00186478 };

NJS_MATERIAL matlist_00186654[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00186668[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00186698[] = {
	{ 253, 131 },
	{ 139, 179 },
	{ 140, -442 },
	{ 253, 131 },
	{ 140, -442 },
	{ 255, -510 },
	{ 139, 179 },
	{ 0, 255 },
	{ 1, -440 },
	{ 139, 179 },
	{ 1, -440 },
	{ 140, -442 },
	{ 0, 255 },
	{ 253, 131 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 1, -440 },
	{ 253, 131 },
	{ 0, 255 },
	{ 139, 179 },
	{ 140, -442 },
	{ 1, -440 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_001866F8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00186668, NULL, NULL, NULL, uv_00186698, NULL }
};

NJS_VECTOR vertex_00186710[] = {
	{ 2.134083f, 0.89102f, -6.481333f },
	{ 2.179228f, 0.09983999f, -8.236516f },
	{ 2.19863f, 0.098674f, -5.355377f },
	{ -2.130007f, 0.640023f, 6.662148f },
	{ -2.58154f, -0.121321f, 6.438338f },
	{ -2.195777f, -0.144494f, 8.189898f }
};

NJS_VECTOR normal_00186758[] = {
	{ 0.135814f, 0.980687f, -0.14074f },
	{ 0.165252f, -0.967553f, -0.191134f },
	{ 0.980002f, 0.005272f, 0.19892f },
	{ 0.0032f, 0.967479f, 0.252931f },
	{ -0.970418f, 0.205901f, -0.126073f },
	{ 0.020365f, -0.917661f, 0.396841f }
};

NJS_MODEL_SADX attach_001867A0 = { vertex_00186710, normal_00186758, LengthOfArray<Sint32>(vertex_00186710), meshlist_001866F8, matlist_00186654, LengthOfArray<Uint16>(meshlist_001866F8), LengthOfArray<Uint16>(matlist_00186654),{ -0.191455f, 0.373263f, -0.023308f }, 8.553948f, NULL };

NJS_OBJECT object_001867C8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001867A0, 515.7519f, -381.1223f, -2823.587f, 0, 0, 0, 1, 1, 1, NULL, &object_00186620 };

NJS_MATERIAL matlist_001867FC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00186810[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00186840[] = {
	{ 254, 156 },
	{ 139, 250 },
	{ 140, -255 },
	{ 254, 156 },
	{ 140, -255 },
	{ 255, 17 },
	{ 139, 250 },
	{ 0, 254 },
	{ 0, 17 },
	{ 139, 250 },
	{ 0, 17 },
	{ 140, -255 },
	{ 0, 254 },
	{ 254, 156 },
	{ 255, 17 },
	{ 0, 254 },
	{ 255, 17 },
	{ 0, 17 },
	{ 254, 156 },
	{ 0, 254 },
	{ 139, 250 },
	{ 140, -255 },
	{ 0, 17 },
	{ 255, 17 }
};

NJS_MESHSET_SADX meshlist_001868A0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00186810, NULL, NULL, NULL, uv_00186840, NULL }
};

NJS_VECTOR vertex_001868B8[] = {
	{ 0.958526f, 0.454458f, -2.860026f },
	{ 0.506993f, -0.306885f, -3.083836f },
	{ 0.892756f, -0.330059f, -1.332274f },
	{ -1.477475f, 0.600794f, 4.650728f },
	{ -0.635677f, -0.238243f, 0.439281f },
	{ 0.227094f, -0.290071f, 0.720118f }
};

NJS_VECTOR normal_00186900[] = {
	{ 0.113484f, 0.913951f, -0.389634f },
	{ -0.022711f, -0.971244f, -0.237f },
	{ 0.968094f, -0.21404f, 0.130313f },
	{ 0.778331f, 0.458322f, 0.429118f },
	{ -0.879535f, -0.439808f, -0.181624f },
	{ 0.234205f, -0.957781f, 0.166744f }
};

NJS_MODEL_SADX attach_00186948 = { vertex_001868B8, normal_00186900, LengthOfArray<Sint32>(vertex_001868B8), meshlist_001868A0, matlist_001867FC, LengthOfArray<Uint16>(meshlist_001868A0), LengthOfArray<Uint16>(matlist_001867FC),{ -0.259474f, 0.135367f, 0.783446f }, 4.054458f, NULL };

NJS_OBJECT object_00186970 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00186948, 512.661f, -380.9463f, -2814.067f, 0, 0, 0, 1, 1, 1, NULL, &object_001867C8 };

NJS_MATERIAL matlist_001869A4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001869B8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001869E8[] = {
	{ 254, 254 },
	{ 140, 71 },
	{ 140, 0 },
	{ 254, 254 },
	{ 140, 0 },
	{ 255, 0 },
	{ 140, 71 },
	{ 0, 255 },
	{ 0, 68 },
	{ 140, 71 },
	{ 0, 68 },
	{ 140, 0 },
	{ 0, 255 },
	{ 254, 254 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0, 68 },
	{ 254, 254 },
	{ 0, 255 },
	{ 140, 71 },
	{ 140, 0 },
	{ 0, 68 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00186A48[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001869B8, NULL, NULL, NULL, uv_001869E8, NULL }
};

NJS_VECTOR vertex_00186A60[] = {
	{ 0.090032f, 0.52269f, -0.179788f },
	{ 0.931829f, -0.316347f, -4.391233f },
	{ 1.7946f, -0.368175f, -4.110397f },
	{ -0.41431f, 0.536958f, 1.372256f },
	{ -0.406047f, -0.252007f, -0.269212f },
	{ -0.030119f, -0.484983f, 1.512675f }
};

NJS_VECTOR normal_00186AA8[] = {
	{ -0.238464f, 0.9571249f, -0.164455f },
	{ -0.816883f, -0.362322f, -0.448804f },
	{ 0.902834f, 0.390422f, 0.180171f },
	{ 0.009811f, 0.911183f, 0.411884f },
	{ -0.984657f, -0.073597f, -0.158223f },
	{ -0.182688f, -0.9680459f, 0.171789f }
};

NJS_MODEL_SADX attach_00186AF0 = { vertex_00186A60, normal_00186AA8, LengthOfArray<Sint32>(vertex_00186A60), meshlist_00186A48, matlist_001869A4, LengthOfArray<Uint16>(meshlist_00186A48), LengthOfArray<Uint16>(matlist_001869A4),{ 0.690145f, 0.025987f, -1.439279f }, 3.151752f, NULL };

NJS_OBJECT object_00186B18 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00186AF0, 511.0874f, -380.8712f, -2809.236f, 0, 0, 0, 1, 1, 1, NULL, &object_00186970 };

NJS_MATERIAL matlist_00186B4C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00186B60[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00186B90[] = {
	{ 254, 177 },
	{ 139, 178 },
	{ 140, 97 },
	{ 254, 177 },
	{ 140, 97 },
	{ 255, 0 },
	{ 139, 178 },
	{ 0, 255 },
	{ 0, 54 },
	{ 139, 178 },
	{ 0, 54 },
	{ 140, 97 },
	{ 0, 255 },
	{ 254, 177 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0, 54 },
	{ 254, 177 },
	{ 0, 255 },
	{ 139, 178 },
	{ 140, 97 },
	{ 0, 54 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00186BF0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00186B60, NULL, NULL, NULL, uv_00186B90, NULL }
};

NJS_VECTOR vertex_00186C08[] = {
	{ 0.440816f, 0.485682f, -1.264381f },
	{ 0.449079f, -0.303282f, -2.905849f },
	{ 0.825007f, -0.536258f, -1.123963f },
	{ -0.07485899f, 0.51666f, 0.325565f },
	{ -0.821449f, -0.22696f, 1.011482f },
	{ -0.300451f, -0.258257f, 2.346086f }
};

NJS_VECTOR normal_00186C50[] = {
	{ 0.125231f, 0.967416f, -0.220051f },
	{ -0.242082f, -0.887025f, -0.393169f },
	{ 0.987121f, 0.073859f, 0.141906f },
	{ 0.184061f, 0.956012f, 0.228392f },
	{ -0.920869f, 0.369876f, -0.123255f },
	{ -0.12966f, -0.846773f, 0.51591f }
};

NJS_MODEL_SADX attach_00186C98 = { vertex_00186C08, normal_00186C50, LengthOfArray<Sint32>(vertex_00186C08), meshlist_00186BF0, matlist_00186B4C, LengthOfArray<Uint16>(meshlist_00186BF0), LengthOfArray<Uint16>(matlist_00186B4C),{ 0.001779f, -0.009799f, -0.279882f }, 2.751991f, NULL };

NJS_OBJECT object_00186CC0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00186C98, 510.2296f, -380.8293f, -2806.601f, 0, 0, 0, 1, 1, 1, NULL, &object_00186B18 };

NJS_MATERIAL matlist_00186CF4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00186D08[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00186D38[] = {
	{ 254, 155 },
	{ 139, 255 },
	{ 140, 0 },
	{ 254, 155 },
	{ 140, 0 },
	{ 255, 89 },
	{ 139, 255 },
	{ 0, 210 },
	{ 0, 89 },
	{ 139, 255 },
	{ 0, 89 },
	{ 140, 0 },
	{ 0, 210 },
	{ 254, 155 },
	{ 255, 89 },
	{ 0, 210 },
	{ 255, 89 },
	{ 0, 89 },
	{ 254, 155 },
	{ 0, 210 },
	{ 139, 255 },
	{ 140, 0 },
	{ 0, 89 },
	{ 255, 89 }
};

NJS_MESHSET_SADX meshlist_00186D98[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00186D08, NULL, NULL, NULL, uv_00186D38, NULL }
};

NJS_VECTOR vertex_00186DB0[] = {
	{ 0.78651f, 0.4647f, -2.330368f },
	{ 0.03992f, -0.278919f, -1.644451f },
	{ 0.560918f, -0.310216f, -0.309848f },
	{ -0.7815329f, 0.874485f, 2.504271f },
	{ -0.704424f, -0.234205f, 0.650534f },
	{ 0.158347f, -0.286033f, 0.931371f }
};

NJS_VECTOR normal_00186DF8[] = {
	{ -0.208171f, 0.722617f, -0.659158f },
	{ -0.14926f, -0.964336f, -0.218582f },
	{ 0.902851f, -0.413662f, 0.117236f },
	{ 0.67278f, 0.328147f, 0.663089f },
	{ -0.914816f, -0.40195f, -0.039328f },
	{ 0.210858f, -0.933181f, 0.291055f }
};

NJS_MODEL_SADX attach_00186E40 = { vertex_00186DB0, normal_00186DF8, LengthOfArray<Sint32>(vertex_00186DB0), meshlist_00186D98, matlist_00186CF4, LengthOfArray<Uint16>(meshlist_00186D98), LengthOfArray<Uint16>(matlist_00186CF4),{ 0.002488f, 0.282134f, 0.086951f }, 2.541202f, NULL };

NJS_OBJECT object_00186E68 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00186E40, 509.3657f, -380.7871f, -2803.948f, 0, 0, 0, 1, 1, 1, NULL, &object_00186CC0 };

NJS_MATERIAL matlist_00186E9C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00186EB0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00186EE0[] = {
	{ 254, 254 },
	{ 139, 179 },
	{ 140, 104 },
	{ 254, 254 },
	{ 140, 104 },
	{ 255, 0 },
	{ 139, 179 },
	{ 0, 254 },
	{ 0, 143 },
	{ 139, 179 },
	{ 0, 143 },
	{ 140, 104 },
	{ 0, 254 },
	{ 254, 254 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0, 143 },
	{ 254, 254 },
	{ 0, 254 },
	{ 139, 179 },
	{ 140, 104 },
	{ 0, 143 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00186F40[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00186EB0, NULL, NULL, NULL, uv_00186EE0, NULL }
};

NJS_VECTOR vertex_00186F58[] = {
	{ 0.320651f, 0.808428f, -0.8932f },
	{ 0.39776f, -0.300262f, -2.746937f },
	{ 1.260531f, -0.352091f, -2.4661f },
	{ -0.236824f, 0.841916f, 0.825626f },
	{ -0.420348f, -0.251117f, -0.224518f },
	{ -0.612404f, -0.23958f, 3.308592f }
};

NJS_VECTOR normal_00186FA0[] = {
	{ -0.271738f, 0.8971699f, -0.348201f },
	{ -0.582627f, -0.555752f, -0.593031f },
	{ 0.96465f, 0.261041f, 0.036175f },
	{ -0.032354f, 0.984961f, 0.16972f },
	{ -0.974779f, 0.020576f, -0.22222f },
	{ -0.135057f, -0.978406f, 0.156464f }
};

NJS_MODEL_SADX attach_00186FE8 = { vertex_00186F58, normal_00186FA0, LengthOfArray<Sint32>(vertex_00186F58), meshlist_00186F40, matlist_00186E9C, LengthOfArray<Uint16>(meshlist_00186F40), LengthOfArray<Uint16>(matlist_00186E9C),{ 0.324064f, 0.244913f, 0.280827f }, 3.169225f, NULL };

NJS_OBJECT object_00187010 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00186FE8, 508.2612f, -380.7305f, -2800.553f, 0, 0, 0, 1, 1, 1, NULL, &object_00186E68 };

NJS_MATERIAL matlist_00187044[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00187058[] = {
	2, 0, 3,
	2, 3, 5,
	1, 4, 3,
	1, 3, 0,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00187088[] = {
	{ 254, 76 },
	{ 139, 205 },
	{ 140, 11 },
	{ 254, 76 },
	{ 140, 11 },
	{ 255, 10 },
	{ 0, 255 },
	{ 2, -765 },
	{ 140, 11 },
	{ 0, 255 },
	{ 140, 11 },
	{ 139, 205 },
	{ 0, 255 },
	{ 254, 76 },
	{ 255, 10 },
	{ 0, 255 },
	{ 255, 10 },
	{ 2, -765 },
	{ 254, 76 },
	{ 0, 255 },
	{ 139, 205 },
	{ 140, 11 },
	{ 2, -765 },
	{ 255, 10 }
};

NJS_MESHSET_SADX meshlist_001870E8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00187058, NULL, NULL, NULL, uv_00187088, NULL }
};

NJS_VECTOR vertex_00187100[] = {
	{ 1.852067f, 0.716312f, -5.615333f },
	{ 1.668544f, -0.376721f, -6.665479f },
	{ 1.476488f, -0.365184f, -3.132366f },
	{ 0.70448f, 0.46966f, -2.077055f },
	{ -4.362226f, -0.224834f, 11.92878f },
	{ 1.088671f, -0.341888f, -1.936636f }
};

NJS_VECTOR normal_00187148[] = {
	{ 0.8478889f, 0.522232f, 0.09142099f },
	{ -0.493121f, -0.818814f, -0.293897f },
	{ 0.964171f, -0.13096f, 0.230703f },
	{ 0.354016f, 0.922348f, 0.154747f },
	{ 0.273661f, -0.36178f, 0.891193f },
	{ 0.791672f, -0.5365959f, 0.292095f }
};

NJS_MODEL_SADX attach_00187190 = { vertex_00187100, normal_00187148, LengthOfArray<Sint32>(vertex_00187100), meshlist_001870E8, matlist_00187044, LengthOfArray<Uint16>(meshlist_001870E8), LengthOfArray<Uint16>(matlist_00187044),{ -1.25508f, 0.169795f, 2.631653f }, 9.80259f, NULL };

NJS_OBJECT object_001871B8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00187190, 506.1697f, -380.6146f, -2794.114f, 0, 0, 0, 1, 1, 1, NULL, &object_00187010 };

NJS_MATERIAL matlist_001871EC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00187200[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00187230[] = {
	{ 250, 254 },
	{ 136, 255 },
	{ 140, -1647 },
	{ 250, 254 },
	{ 140, -1647 },
	{ 255, -1785 },
	{ 136, 255 },
	{ 0, -586 },
	{ 2, -1606 },
	{ 136, 255 },
	{ 2, -1606 },
	{ 140, -1647 },
	{ 0, -586 },
	{ 250, 254 },
	{ 255, -1785 },
	{ 0, -586 },
	{ 255, -1785 },
	{ 2, -1606 },
	{ 250, 254 },
	{ 0, -586 },
	{ 136, 255 },
	{ 140, -1647 },
	{ 2, -1606 },
	{ 255, -1785 }
};

NJS_MESHSET_SADX meshlist_00187290[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00187200, NULL, NULL, NULL, uv_00187230, NULL }
};

NJS_VECTOR vertex_001872A8[] = {
	{ 5.787706f, 0.19238f, -17.74439f },
	{ 0.7209989f, -0.502114f, -3.738548f },
	{ 6.171897f, -0.619167f, -17.60397f },
	{ -4.58699f, 0.787559f, 14.23803f },
	{ -4.836901f, 0.014103f, 13.39257f },
	{ -4.945357f, 0.020619f, 16.66792f }
};

NJS_VECTOR normal_001872F0[] = {
	{ -0.822096f, 0.47824f, -0.308941f },
	{ -0.6171409f, -0.75923f, -0.206659f },
	{ 0.859812f, -0.453226f, 0.235178f },
	{ -0.016236f, 0.991209f, 0.131308f },
	{ -0.971f, 0.106962f, -0.213816f },
	{ -0.030994f, -0.969179f, 0.244401f }
};

NJS_MODEL_SADX attach_00187338 = { vertex_001872A8, normal_001872F0, LengthOfArray<Sint32>(vertex_001872A8), meshlist_00187290, matlist_001871EC, LengthOfArray<Uint16>(meshlist_00187290), LengthOfArray<Uint16>(matlist_001871EC),{ 0.61327f, 0.08419599f, -0.538232f }, 18.08178f, NULL };

NJS_OBJECT object_00187360 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00187338, 501.0794f, -380.3378f, -2778.45f, 0, 0, 0, 1, 1, 1, NULL, &object_001871B8 };

NJS_MATERIAL matlist_00187394[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001873A8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001873D8[] = {
	{ 249, 220 },
	{ 138, 12 },
	{ 142, -1008 },
	{ 249, 220 },
	{ 142, -1008 },
	{ 255, -1020 },
	{ 138, 12 },
	{ 0, 254 },
	{ 5, -979 },
	{ 138, 12 },
	{ 5, -979 },
	{ 142, -1008 },
	{ 0, 254 },
	{ 249, 220 },
	{ 255, -1020 },
	{ 0, 254 },
	{ 255, -1020 },
	{ 5, -979 },
	{ 249, 220 },
	{ 0, 254 },
	{ 138, 12 },
	{ 142, -1008 },
	{ 5, -979 },
	{ 255, -1020 }
};

NJS_MESHSET_SADX meshlist_00187438[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001873A8, NULL, NULL, NULL, uv_001873D8, NULL }
};

NJS_VECTOR vertex_00187450[] = {
	{ 4.089021f, 2.43871f, -12.50705f },
	{ 6.128254f, 1.527741f, -20.41047f },
	{ 6.634498f, 1.49733f, -19.03038f },
	{ -6.511888f, 3.047478f, 20.17282f },
	{ -6.683116f, 2.269296f, 19.08477f },
	{ -6.245718f, 2.243021f, 20.67713f }
};

NJS_VECTOR normal_00187498[] = {
	{ -0.200359f, 0.971715f, -0.125006f },
	{ -0.770862f, -0.525588f, -0.359901f },
	{ 0.8815759f, 0.413925f, 0.226913f },
	{ -0.029228f, 0.9251609f, 0.378449f },
	{ -0.994172f, -0.021829f, -0.105574f },
	{ -0.12235f, -0.948019f, 0.293752f }
};

NJS_MODEL_SADX attach_001874E0 = { vertex_00187450, normal_00187498, LengthOfArray<Sint32>(vertex_00187450), meshlist_00187438, matlist_00187394, LengthOfArray<Uint16>(meshlist_00187438), LengthOfArray<Uint16>(matlist_00187394),{ -0.024309f, 2.272404f, 0.13333f }, 21.59603f, NULL };

NJS_OBJECT object_00187508 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001874E0, 542.6492f, -387.1476f, -2906.398f, 0, 0, 0, 1, 1, 1, NULL, &object_00187360 };

NJS_MATERIAL matlist_0018753C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00187550[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00187580[] = {
	{ 255, 177 },
	{ 140, 199 },
	{ 140, 0 },
	{ 255, 177 },
	{ 140, 0 },
	{ 254, 76 },
	{ 140, 199 },
	{ 0, 255 },
	{ 0, 142 },
	{ 140, 199 },
	{ 0, 142 },
	{ 140, 0 },
	{ 0, 255 },
	{ 255, 177 },
	{ 254, 76 },
	{ 0, 255 },
	{ 254, 76 },
	{ 0, 142 },
	{ 255, 177 },
	{ 0, 255 },
	{ 140, 199 },
	{ 140, 0 },
	{ 0, 142 },
	{ 254, 76 }
};

NJS_MESHSET_SADX meshlist_001875E0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00187550, NULL, NULL, NULL, uv_00187580, NULL }
};

NJS_VECTOR vertex_001875F8[] = {
	{ 0.26437f, 2.672319f, -0.714159f },
	{ 0.093141f, 1.894137f, -1.802209f },
	{ 0.530539f, 1.867862f, -0.20985f },
	{ -0.838419f, 2.706508f, 2.68008f },
	{ -0.527723f, 1.899376f, 0.106143f },
	{ -0.028855f, 1.869408f, 1.508976f }
};

NJS_VECTOR normal_00187640[] = {
	{ 0.115354f, 0.949958f, -0.290299f },
	{ 0.06375f, -0.922551f, -0.380572f },
	{ 0.994188f, 0.016227f, 0.10643f },
	{ 0.399183f, 0.7333789f, 0.55028f },
	{ -0.939137f, -0.309001f, -0.150133f },
	{ 0.093165f, -0.978521f, 0.183894f }
};

NJS_MODEL_SADX attach_00187688 = { vertex_001875F8, normal_00187640, LengthOfArray<Sint32>(vertex_001875F8), meshlist_001875E0, matlist_0018753C, LengthOfArray<Uint16>(meshlist_001875E0), LengthOfArray<Uint16>(matlist_0018753C),{ -0.15394f, 2.287185f, 0.438936f }, 2.343403f, NULL };

NJS_OBJECT object_001876B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00187688, 535.8661f, -386.7691f, -2885.515f, 0, 0, 0, 1, 1, 1, NULL, &object_00187508 };

NJS_MATERIAL matlist_001876E4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001876F8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00187728[] = {
	{ 252, 203 },
	{ 139, 144 },
	{ 141, -508 },
	{ 252, 203 },
	{ 141, -508 },
	{ 255, -510 },
	{ 139, 144 },
	{ 0, 255 },
	{ 2, -472 },
	{ 139, 144 },
	{ 2, -472 },
	{ 141, -508 },
	{ 0, 255 },
	{ 252, 203 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 2, -472 },
	{ 252, 203 },
	{ 0, 255 },
	{ 139, 144 },
	{ 141, -508 },
	{ 2, -472 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_00187788[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001876F8, NULL, NULL, NULL, uv_00187728, NULL }
};

NJS_VECTOR vertex_001877A0[] = {
	{ 1.945318f, 2.539223f, -5.902838f },
	{ 2.256014f, 1.73209f, -8.476773f },
	{ 2.754882f, 1.702122f, -7.073943f },
	{ -2.691312f, 3.183089f, 8.392965f },
	{ -2.90434f, 2.407418f, 7.433793f },
	{ -2.30712f, 2.371542f, 8.533383f }
};

NJS_VECTOR normal_001877E8[] = {
	{ -0.055557f, 0.978979f, -0.196247f },
	{ -0.457037f, -0.726265f, -0.5134749f },
	{ 0.938652f, 0.31197f, 0.146991f },
	{ 0.06358299f, 0.860414f, 0.505613f },
	{ -0.996673f, -0.072184f, -0.037841f },
	{ -0.080846f, -0.928133f, 0.363363f }
};

NJS_MODEL_SADX attach_00187830 = { vertex_001877A0, normal_001877E8, LengthOfArray<Sint32>(vertex_001877A0), meshlist_00187788, matlist_001876E4, LengthOfArray<Uint16>(meshlist_00187788), LengthOfArray<Uint16>(matlist_001876E4),{ -0.074729f, 2.442605f, 0.028305f }, 8.963477f, NULL };

NJS_OBJECT object_00187858 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00187830, 533.08f, -386.6115f, -2876.934f, 0, 0, 0, 1, 1, 1, NULL, &object_001876B0 };

NJS_MATERIAL matlist_0018788C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001878A0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001878D0[] = {
	{ 254, 158 },
	{ 140, 159 },
	{ 140, 56 },
	{ 254, 158 },
	{ 140, 56 },
	{ 255, 0 },
	{ 140, 159 },
	{ 0, 254 },
	{ 0, 45 },
	{ 140, 159 },
	{ 0, 45 },
	{ 140, 56 },
	{ 0, 254 },
	{ 254, 158 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0, 45 },
	{ 254, 158 },
	{ 0, 254 },
	{ 140, 159 },
	{ 140, 56 },
	{ 0, 45 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00187930[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001878A0, NULL, NULL, NULL, uv_001878D0, NULL }
};

NJS_VECTOR vertex_00187948[] = {
	{ 0.113153f, 3.014591f, -0.254451f },
	{ -0.09987599f, 2.238919f, -1.213624f },
	{ 0.497344f, 2.203043f, -0.114033f },
	{ -0.171395f, 3.031683f, 0.6228769f },
	{ -0.674563f, 2.273442f, 0.558269f },
	{ 0.062809f, 2.229146f, 1.22574f }
};

NJS_VECTOR normal_00187990[] = {
	{ 0.052421f, 0.933048f, -0.355912f },
	{ -0.056159f, -0.8444639f, -0.5326599f },
	{ 0.995406f, 0.088506f, 0.036515f },
	{ 0.142844f, 0.8704759f, 0.471028f },
	{ -0.978269f, 0.193904f, 0.073428f },
	{ 0.074387f, -0.7740099f, 0.6287889f }
};

NJS_MODEL_SADX attach_001879D8 = { vertex_00187948, normal_00187990, LengthOfArray<Sint32>(vertex_00187948), meshlist_00187930, matlist_0018788C, LengthOfArray<Uint16>(meshlist_00187930), LengthOfArray<Uint16>(matlist_0018788C),{ -0.088609f, 2.617363f, 0.006058f }, 1.353165f, NULL };

NJS_OBJECT object_00187A00 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001879D8, 530.2728f, -386.4526f, -2868.289f, 0, 0, 0, 1, 1, 1, NULL, &object_00187858 };

NJS_MATERIAL matlist_00187A34[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00187A48[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00187A78[] = {
	{ 254, 220 },
	{ 139, 255 },
	{ 140, 17 },
	{ 254, 220 },
	{ 140, 17 },
	{ 255, 0 },
	{ 139, 255 },
	{ 0, 248 },
	{ 0, 101 },
	{ 139, 255 },
	{ 0, 101 },
	{ 140, 17 },
	{ 0, 248 },
	{ 254, 220 },
	{ 255, 0 },
	{ 0, 248 },
	{ 255, 0 },
	{ 0, 101 },
	{ 254, 220 },
	{ 0, 248 },
	{ 139, 255 },
	{ 140, 17 },
	{ 0, 101 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00187AD8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00187A48, NULL, NULL, NULL, uv_00187A78, NULL }
};

NJS_VECTOR vertex_00187AF0[] = {
	{ 0.554449f, 2.988142f, -1.613971f },
	{ 0.051281f, 2.2299f, -1.678578f },
	{ 0.788653f, 2.185605f, -1.011107f },
	{ -0.514457f, 2.687018f, 1.681715f },
	{ -0.611923f, 1.904405f, 0.366233f },
	{ -0.20403f, 1.879902f, 2.049566f }
};

NJS_VECTOR normal_00187B38[] = {
	{ -0.149637f, 0.816238f, -0.558f },
	{ 0.036067f, -0.85861f, -0.511359f },
	{ 0.9818299f, -0.175026f, -0.07331999f },
	{ -0.096861f, 0.878404f, 0.468f },
	{ -0.991264f, -0.07687899f, -0.107168f },
	{ 0.08828f, -0.9744f, 0.206763f }
};

NJS_MODEL_SADX attach_00187B80 = { vertex_00187AF0, normal_00187B38, LengthOfArray<Sint32>(vertex_00187AF0), meshlist_00187AD8, matlist_00187A34, LengthOfArray<Uint16>(meshlist_00187AD8), LengthOfArray<Uint16>(matlist_00187A34),{ 0.088365f, 2.434022f, 0.185494f }, 1.991218f, NULL };

NJS_OBJECT object_00187BA8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00187B80, 529.5446f, -386.4185f, -2866.055f, 0, 0, 0, 1, 1, 1, NULL, &object_00187A00 };

NJS_MATERIAL matlist_00187BDC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00187BF0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00187C20[] = {
	{ 254, 179 },
	{ 140, 192 },
	{ 140, 0 },
	{ 254, 179 },
	{ 140, 0 },
	{ 255, 84 },
	{ 140, 192 },
	{ 0, 255 },
	{ 0, 109 },
	{ 140, 192 },
	{ 0, 109 },
	{ 140, 0 },
	{ 0, 255 },
	{ 254, 179 },
	{ 255, 84 },
	{ 0, 255 },
	{ 255, 84 },
	{ 0, 109 },
	{ 254, 179 },
	{ 0, 255 },
	{ 140, 192 },
	{ 140, 0 },
	{ 0, 109 },
	{ 255, 84 }
};

NJS_MESHSET_SADX meshlist_00187C80[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00187BF0, NULL, NULL, NULL, uv_00187C20, NULL }
};

NJS_VECTOR vertex_00187C98[] = {
	{ 0.309838f, 2.637502f, -0.860075f },
	{ 0.212372f, 1.854888f, -2.175557f },
	{ 0.6202649f, 1.830386f, -0.492225f },
	{ -0.845126f, 2.706882f, 2.700948f },
	{ -0.659829f, 1.907283f, 0.513644f },
	{ 0.052955f, 1.864465f, 1.256925f }
};

NJS_VECTOR normal_00187CE0[] = {
	{ 0.110071f, 0.959043f, -0.260999f },
	{ 0.021288f, -0.923902f, -0.382036f },
	{ 0.990934f, 0.061566f, 0.119411f },
	{ 0.571395f, 0.580788f, 0.5798219f },
	{ -0.924926f, -0.363388f, -0.111627f },
	{ 0.147772f, -0.963722f, 0.222269f }
};

NJS_MODEL_SADX attach_00187D28 = { vertex_00187C98, normal_00187CE0, LengthOfArray<Sint32>(vertex_00187C98), meshlist_00187C80, matlist_00187BDC, LengthOfArray<Uint16>(meshlist_00187C80), LengthOfArray<Uint16>(matlist_00187BDC),{ -0.112431f, 2.268634f, 0.262696f }, 2.545942f, NULL };

NJS_OBJECT object_00187D50 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00187D28, 528.7177f, -386.3786f, -2863.515f, 0, 0, 0, 1, 1, 1, NULL, &object_00187BA8 };

NJS_MATERIAL matlist_00187D84[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00187D98[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00187DC8[] = {
	{ 254, 221 },
	{ 139, 106 },
	{ 140, -99 },
	{ 254, 221 },
	{ 140, -99 },
	{ 255, -255 },
	{ 139, 106 },
	{ 0, 255 },
	{ 0, -125 },
	{ 139, 106 },
	{ 0, -125 },
	{ 140, -99 },
	{ 0, 255 },
	{ 254, 221 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 0, -125 },
	{ 254, 221 },
	{ 0, 255 },
	{ 139, 106 },
	{ 140, -99 },
	{ 0, -125 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00187E28[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00187D98, NULL, NULL, NULL, uv_00187DC8, NULL }
};

NJS_VECTOR vertex_00187E40[] = {
	{ 0.576724f, 2.637343f, -1.680308f },
	{ 0.7620209f, 1.837744f, -3.867612f },
	{ 1.474805f, 1.794926f, -3.12433f },
	{ -0.338237f, 2.310943f, 1.137771f },
	{ -0.929921f, 1.558018f, 1.346081f },
	{ -0.64251f, 1.540753f, 3.400885f }
};

NJS_VECTOR normal_00187E88[] = {
	{ -0.17154f, 0.970195f, -0.17116f },
	{ -0.416459f, -0.65363f, -0.6319259f },
	{ 0.927753f, 0.351881f, 0.124314f },
	{ 0.055085f, 0.967921f, 0.245142f },
	{ -0.947933f, 0.284365f, -0.143387f },
	{ 0.138842f, -0.9230739f, 0.358689f }
};

NJS_MODEL_SADX attach_00187ED0 = { vertex_00187E40, normal_00187E88, LengthOfArray<Sint32>(vertex_00187E40), meshlist_00187E28, matlist_00187D84, LengthOfArray<Uint16>(meshlist_00187E28), LengthOfArray<Uint16>(matlist_00187D84),{ 0.272442f, 2.089048f, -0.233363f }, 3.828008f, NULL };

NJS_OBJECT object_00187EF8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00187ED0, 527.2922f, -386.3123f, -2859.14f, 0, 0, 0, 1, 1, 1, NULL, &object_00187D50 };

NJS_MATERIAL matlist_00187F2C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00187F40[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00187F70[] = {
	{ 254, 142 },
	{ 139, 255 },
	{ 140, -255 },
	{ 254, 142 },
	{ 140, -255 },
	{ 255, -137 },
	{ 139, 255 },
	{ 0, 235 },
	{ 1, -137 },
	{ 139, 255 },
	{ 1, -137 },
	{ 140, -255 },
	{ 0, 235 },
	{ 254, 142 },
	{ 255, -137 },
	{ 0, 235 },
	{ 255, -137 },
	{ 1, -137 },
	{ 254, 142 },
	{ 0, 235 },
	{ 139, 255 },
	{ 140, -255 },
	{ 1, -137 },
	{ 255, -137 }
};

NJS_MESHSET_SADX meshlist_00187FD0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00187F40, NULL, NULL, NULL, uv_00187F70, NULL }
};

NJS_VECTOR vertex_00187FE8[] = {
	{ 1.614938f, 2.193796f, -4.884782f },
	{ 1.023254f, 1.440871f, -4.676471f },
	{ 1.310665f, 1.423606f, -2.621667f },
	{ -1.519361f, 2.747414f, 4.778992f },
	{ -1.272595f, 1.944122f, 2.402162f },
	{ -0.409824f, 1.892293f, 2.682998f }
};

NJS_VECTOR normal_00188030[] = {
	{ 0.09178399f, 0.902491f, -0.420815f },
	{ -0.142729f, -0.976666f, -0.160472f },
	{ 0.946022f, -0.280614f, 0.162166f },
	{ 0.709012f, 0.539378f, 0.454282f },
	{ -0.9047019f, -0.410325f, -0.11466f },
	{ 0.155541f, -0.959157f, 0.236274f }
};

NJS_MODEL_SADX attach_00188078 = { vertex_00187FE8, normal_00188030, LengthOfArray<Sint32>(vertex_00187FE8), meshlist_00187FD0, matlist_00187F2C, LengthOfArray<Uint16>(meshlist_00187FD0), LengthOfArray<Uint16>(matlist_00187F2C),{ 0.047788f, 2.08551f, -0.052895f }, 5.079692f, NULL };

NJS_OBJECT object_001880A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00188078, 525.3364f, -386.2046f, -2853.12f, 0, 0, 0, 1, 1, 1, NULL, &object_00187EF8 };

NJS_MATERIAL matlist_001880D4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001880E8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00188118[] = {
	{ 253, 254 },
	{ 139, 129 },
	{ 140, -255 },
	{ 253, 254 },
	{ 140, -255 },
	{ 255, -154 },
	{ 139, 129 },
	{ 0, 254 },
	{ 0, 5 },
	{ 139, 129 },
	{ 0, 5 },
	{ 140, -255 },
	{ 0, 254 },
	{ 253, 254 },
	{ 255, -154 },
	{ 0, 254 },
	{ 255, -154 },
	{ 0, 5 },
	{ 253, 254 },
	{ 0, 254 },
	{ 139, 129 },
	{ 140, -255 },
	{ 0, 5 },
	{ 255, -154 }
};

NJS_MESHSET_SADX meshlist_00188178[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001880E8, NULL, NULL, NULL, uv_00188118, NULL }
};

NJS_VECTOR vertex_00188190[] = {
	{ 0.347918f, 2.635273f, -0.97737f },
	{ 0.594685f, 1.831981f, -3.3542f },
	{ 1.457456f, 1.780153f, -3.073363f },
	{ -1.852037f, 2.523872f, 5.805602f },
	{ -0.835665f, 1.674348f, 1.055901f },
	{ -0.890027f, 1.677614f, 4.164472f }
};

NJS_VECTOR normal_001881D8[] = {
	{ -0.265132f, 0.939853f, -0.215364f },
	{ -0.602873f, -0.5526429f, -0.575439f },
	{ 0.9123819f, 0.391527f, 0.119438f },
	{ 0.311068f, 0.84489f, 0.435198f },
	{ -0.9225619f, -0.318554f, -0.217724f },
	{ 0.110239f, -0.988283f, 0.105569f }
};

NJS_MODEL_SADX attach_00188220 = { vertex_00188190, normal_001881D8, LengthOfArray<Sint32>(vertex_00188190), meshlist_00188178, matlist_001880D4, LengthOfArray<Uint16>(meshlist_00188178), LengthOfArray<Uint16>(matlist_001880D4),{ -0.19729f, 2.154811f, 1.225701f }, 4.869724f, NULL };

NJS_OBJECT object_00188248 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00188220, 523.4669f, -386.1019f, -2847.366f, 0, 0, 0, 1, 1, 1, NULL, &object_001880A0 };

NJS_MATERIAL matlist_0018827C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00188290[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001882C0[] = {
	{ 251, 149 },
	{ 138, 83 },
	{ 141, -718 },
	{ 251, 149 },
	{ 141, -718 },
	{ 255, -765 },
	{ 138, 83 },
	{ 0, 255 },
	{ 3, -742 },
	{ 138, 83 },
	{ 3, -742 },
	{ 141, -718 },
	{ 0, 255 },
	{ 251, 149 },
	{ 255, -765 },
	{ 0, 255 },
	{ 255, -765 },
	{ 3, -742 },
	{ 251, 149 },
	{ 0, 255 },
	{ 138, 83 },
	{ 141, -718 },
	{ 3, -742 },
	{ 255, -765 }
};

NJS_MESHSET_SADX meshlist_00188320[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00188290, NULL, NULL, NULL, uv_001882C0, NULL }
};

NJS_VECTOR vertex_00188338[] = {
	{ 3.339451f, 2.235808f, -10.19696f },
	{ 4.355824f, 1.386284f, -14.94666f },
	{ 4.301461f, 1.38955f, -11.83809f },
	{ -3.654149f, 2.875441f, 11.36149f },
	{ -4.339268f, 2.128129f, 11.85788f },
	{ -3.665825f, 2.087674f, 12.72246f }
};

NJS_VECTOR normal_00188380[] = {
	{ -0.021496f, 0.993102f, -0.115269f },
	{ -0.339659f, -0.882627f, -0.324964f },
	{ 0.938455f, 0.265875f, 0.220482f },
	{ 0.1742f, 0.940343f, 0.292248f },
	{ -0.926502f, 0.373455f, -0.046115f },
	{ 0.179258f, -0.7409419f, 0.647203f }
};

NJS_MODEL_SADX attach_001883C8 = { vertex_00188338, normal_00188380, LengthOfArray<Sint32>(vertex_00188338), meshlist_00188320, matlist_0018827C, LengthOfArray<Uint16>(meshlist_00188320), LengthOfArray<Uint16>(matlist_0018827C),{ 0.008277999f, 2.130863f, -1.112103f }, 14.50163f, NULL };

NJS_OBJECT object_001883F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001883C8, 518.2656f, -385.8187f, -2831.36f, 0, 0, 0, 1, 1, 1, NULL, &object_00188248 };

NJS_MATERIAL matlist_00188424[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00188438[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00188468[] = {
	{ 253, 177 },
	{ 139, 255 },
	{ 140, -138 },
	{ 253, 177 },
	{ 140, -138 },
	{ 255, -255 },
	{ 139, 255 },
	{ 0, 214 },
	{ 0, -175 },
	{ 139, 255 },
	{ 0, -175 },
	{ 140, -138 },
	{ 0, 214 },
	{ 253, 177 },
	{ 255, -255 },
	{ 0, 214 },
	{ 255, -255 },
	{ 0, -175 },
	{ 253, 177 },
	{ 0, 214 },
	{ 139, 255 },
	{ 140, -138 },
	{ 0, -175 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_001884C8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00188438, NULL, NULL, NULL, uv_00188468, NULL }
};

NJS_VECTOR vertex_001884E0[] = {
	{ 1.402386f, 2.571807f, -4.228956f },
	{ 0.717266f, 1.824495f, -3.732565f },
	{ 1.39071f, 1.78404f, -2.867987f },
	{ -0.630371f, 2.693919f, 2.038504f },
	{ -1.29582f, 1.945425f, 2.474247f },
	{ -0.846127f, 1.918411f, 4.028701f }
};

NJS_VECTOR normal_00188528[] = {
	{ -0.209093f, 0.736787f, -0.642981f },
	{ -0.173691f, -0.938728f, -0.297694f },
	{ 0.929377f, -0.366259f, 0.045952f },
	{ 0.109277f, 0.9710039f, 0.212627f },
	{ -0.9349999f, 0.328711f, -0.133133f },
	{ 0.06612799f, -0.8672799f, 0.49341f }
};

NJS_MODEL_SADX attach_00188570 = { vertex_001884E0, normal_00188528, LengthOfArray<Sint32>(vertex_001884E0), meshlist_001884C8, matlist_00188424, LengthOfArray<Uint16>(meshlist_001884C8), LengthOfArray<Uint16>(matlist_00188424),{ 0.053283f, 2.23898f, -0.100127f }, 4.343726f, NULL };

NJS_OBJECT object_00188598 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00188570, 513.2066f, -385.5244f, -2815.772f, 0, 0, 0, 1, 1, 1, NULL, &object_001883F0 };

NJS_MATERIAL matlist_001885CC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001885E0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00188610[] = {
	{ 254, 114 },
	{ 139, 255 },
	{ 140, 61 },
	{ 254, 114 },
	{ 140, 61 },
	{ 255, 0 },
	{ 139, 255 },
	{ 0, 210 },
	{ 0, 22 },
	{ 139, 255 },
	{ 0, 22 },
	{ 140, 61 },
	{ 0, 210 },
	{ 254, 114 },
	{ 255, 0 },
	{ 0, 210 },
	{ 255, 0 },
	{ 0, 22 },
	{ 254, 114 },
	{ 0, 210 },
	{ 139, 255 },
	{ 140, 61 },
	{ 0, 22 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00188670[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001885E0, NULL, NULL, NULL, uv_00188610, NULL }
};

NJS_VECTOR vertex_00188688[] = {
	{ 0.6877469f, 2.618807f, -2.024517f },
	{ 0.022298f, 1.870314f, -1.588774f },
	{ 0.47199f, 1.8433f, -0.03432f },
	{ -0.145354f, 2.664845f, 0.543387f },
	{ -0.7862149f, 1.914875f, 0.9033189f },
	{ -0.021796f, 1.868955f, 1.487398f }
};

NJS_VECTOR normal_001886D0[] = {
	{ -0.066966f, 0.86871f, -0.490773f },
	{ -0.106922f, -0.97109f, -0.213431f },
	{ 0.935393f, -0.327588f, 0.133139f },
	{ 0.205426f, 0.902805f, 0.377814f },
	{ -0.93807f, 0.344579f, 0.035901f },
	{ 0.23893f, -0.688046f, 0.685204f }
};

NJS_MODEL_SADX attach_00188718 = { vertex_00188688, normal_001886D0, LengthOfArray<Sint32>(vertex_00188688), meshlist_00188670, matlist_001885CC, LengthOfArray<Uint16>(meshlist_00188670), LengthOfArray<Uint16>(matlist_001885CC),{ -0.049234f, 2.254073f, -0.268559f }, 1.904255f, NULL };

NJS_OBJECT object_00188740 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00188718, 511.8862f, -385.4549f, -2811.711f, 0, 0, 0, 1, 1, 1, NULL, &object_00188598 };

NJS_MATERIAL matlist_00188774[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00188788[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001887B8[] = {
	{ 254, 208 },
	{ 139, 255 },
	{ 140, 0 },
	{ 254, 208 },
	{ 140, 0 },
	{ 255, 27 },
	{ 139, 255 },
	{ 0, 225 },
	{ 0, 64 },
	{ 139, 255 },
	{ 0, 64 },
	{ 140, 0 },
	{ 0, 225 },
	{ 254, 208 },
	{ 255, 27 },
	{ 0, 225 },
	{ 255, 27 },
	{ 0, 64 },
	{ 254, 208 },
	{ 0, 225 },
	{ 139, 255 },
	{ 140, 0 },
	{ 0, 64 },
	{ 255, 27 }
};

NJS_MESHSET_SADX meshlist_00188818[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00188788, NULL, NULL, NULL, uv_001887B8, NULL }
};

NJS_VECTOR vertex_00188830[] = {
	{ 0.7042069f, 2.621826f, -2.074231f },
	{ 0.063346f, 1.871855f, -1.7143f },
	{ 0.827765f, 1.825935f, -1.130221f },
	{ -0.741375f, 2.578871f, 2.381356f },
	{ -0.848676f, 1.796849f, 1.096199f },
	{ -0.197362f, 1.757724f, 2.029006f }
};

NJS_VECTOR normal_00188878[] = {
	{ -0.257892f, 0.705215f, -0.660427f },
	{ -0.176934f, -0.901366f, -0.395264f },
	{ 0.939181f, -0.341359f, -0.037601f },
	{ 0.206073f, 0.724822f, 0.657394f },
	{ -0.973299f, -0.225628f, -0.042205f },
	{ 0.063879f, -0.955878f, 0.286734f }
};

NJS_MODEL_SADX attach_001888C0 = { vertex_00188830, normal_00188878, LengthOfArray<Sint32>(vertex_00188830), meshlist_00188818, matlist_00188774, LengthOfArray<Uint16>(meshlist_00188818), LengthOfArray<Uint16>(matlist_00188774),{ -0.010455f, 2.189775f, 0.153563f }, 2.380255f, NULL };

NJS_OBJECT object_001888E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001888C0, 511.0346f, -385.4134f, -2809.096f, 0, 0, 0, 1, 1, 1, NULL, &object_00188740 };

NJS_MATERIAL matlist_0018891C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00188930[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00188960[] = {
	{ 255, 220 },
	{ 140, 195 },
	{ 140, 0 },
	{ 255, 220 },
	{ 140, 0 },
	{ 254, 117 },
	{ 140, 195 },
	{ 0, 255 },
	{ 0 },
	{ 140, 195 },
	{ 0 },
	{ 140, 0 },
	{ 0, 255 },
	{ 255, 220 },
	{ 254, 117 },
	{ 0, 255 },
	{ 254, 117 },
	{ 0 },
	{ 255, 220 },
	{ 0, 255 },
	{ 140, 195 },
	{ 140, 0 },
	{ 0 },
	{ 254, 117 }
};

NJS_MESHSET_SADX meshlist_001889C0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00188930, NULL, NULL, NULL, uv_00188960, NULL }
};

NJS_VECTOR vertex_001889D8[] = {
	{ 0.110678f, 2.547783f, -0.242602f },
	{ 0.003378f, 1.76576f, -1.52776f },
	{ 0.654692f, 1.726635f, -0.5949529f },
	{ -1.082367f, 2.599415f, 3.432136f },
	{ -1.560947f, 1.839696f, 3.291718f },
	{ 0.022253f, 1.74459f, 1.351305f }
};

NJS_VECTOR normal_00188A20[] = {
	{ -0.03503f, 0.95176f, -0.304836f },
	{ -0.228668f, -0.739152f, -0.633534f },
	{ 0.9757529f, 0.214297f, 0.044534f },
	{ 0.782991f, 0.460666f, 0.417986f },
	{ -0.923402f, -0.383431f, 0.017602f },
	{ 0.5294099f, -0.78914f, 0.31142f }
};

NJS_MODEL_SADX attach_00188A68 = { vertex_001889D8, normal_00188A20, LengthOfArray<Sint32>(vertex_001889D8), meshlist_001889C0, matlist_0018891C, LengthOfArray<Uint16>(meshlist_001889C0), LengthOfArray<Uint16>(matlist_0018891C),{ -0.453128f, 2.163025f, 0.952188f }, 2.716167f, NULL };

NJS_OBJECT object_00188A90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00188A68, 510.1767f, -385.3812f, -2806.471f, 0, 0, 0, 1, 1, 1, NULL, &object_001888E8 };

NJS_MATERIAL matlist_00188AC4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00188AD8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00188B08[] = {
	{ 253, 255 },
	{ 139, 102 },
	{ 140, -510 },
	{ 253, 255 },
	{ 140, -510 },
	{ 255, -418 },
	{ 139, 102 },
	{ 0, 101 },
	{ 1, -418 },
	{ 139, 102 },
	{ 1, -418 },
	{ 140, -510 },
	{ 0, 101 },
	{ 253, 255 },
	{ 255, -418 },
	{ 0, 101 },
	{ 255, -418 },
	{ 1, -418 },
	{ 253, 255 },
	{ 0, 101 },
	{ 139, 102 },
	{ 140, -510 },
	{ 1, -418 },
	{ 255, -418 }
};

NJS_MESHSET_SADX meshlist_00188B68[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00188AD8, NULL, NULL, NULL, uv_00188B08, NULL }
};

NJS_VECTOR vertex_00188B80[] = {
	{ 1.112222f, 2.475566f, -3.332915f },
	{ 0.633642f, 1.715847f, -3.473333f },
	{ 2.216842f, 1.620741f, -5.413746f },
	{ -1.769302f, 2.762428f, 5.550012f },
	{ -1.815133f, 1.976713f, 4.075328f },
	{ -0.9523619f, 1.924885f, 4.356164f }
};

NJS_VECTOR normal_00188BC8[] = {
	{ -0.523037f, 0.789747f, -0.32052f },
	{ -0.781859f, -0.473796f, -0.405232f },
	{ 0.918731f, 0.394604f, -0.01485f },
	{ 0.601922f, 0.520699f, 0.605444f },
	{ -0.924921f, -0.378593f, -0.034484f },
	{ 0.211972f, -0.931762f, 0.294768f }
};

NJS_MODEL_SADX attach_00188C10 = { vertex_00188B80, normal_00188BC8, LengthOfArray<Sint32>(vertex_00188B80), meshlist_00188B68, matlist_00188AC4, LengthOfArray<Uint16>(meshlist_00188B68), LengthOfArray<Uint16>(matlist_00188AC4),{ 0.200854f, 2.191585f, 0.068133f }, 5.840869f, NULL };

NJS_OBJECT object_00188C38 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00188C10, 507.9803f, -385.2591f, -2799.709f, 0, 0, 0, 1, 1, 1, NULL, &object_00188A90 };

NJS_MATERIAL matlist_00188C6C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00188C80[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00188CB0[] = {
	{ 251, 254 },
	{ 138, 196 },
	{ 141, -765 },
	{ 251, 254 },
	{ 141, -765 },
	{ 255, -710 },
	{ 138, 196 },
	{ 0, 254 },
	{ 3, -710 },
	{ 138, 196 },
	{ 3, -710 },
	{ 141, -765 },
	{ 0, 254 },
	{ 251, 254 },
	{ 255, -710 },
	{ 0, 254 },
	{ 255, -710 },
	{ 3, -710 },
	{ 251, 254 },
	{ 0, 254 },
	{ 138, 196 },
	{ 141, -765 },
	{ 3, -710 },
	{ 255, -710 }
};

NJS_MESHSET_SADX meshlist_00188D10[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00188C80, NULL, NULL, NULL, uv_00188CB0, NULL }
};

NJS_VECTOR vertex_00188D28[] = {
	{ 3.395398f, 2.472271f, -10.36936f },
	{ 3.349567f, 1.686557f, -11.84404f },
	{ 4.212338f, 1.634728f, -11.56321f },
	{ -3.600421f, 2.872488f, 11.19668f },
	{ -3.683134f, 2.088989f, 9.835709f },
	{ -2.820364f, 2.037161f, 10.11654f }
};

NJS_VECTOR normal_00188D70[] = {
	{ -0.206106f, 0.9362029f, -0.284683f },
	{ -0.602047f, -0.49857f, -0.6236719f },
	{ 0.924007f, 0.380767f, 0.035054f },
	{ 0.582459f, 0.503755f, 0.637944f },
	{ -0.928204f, -0.371581f, -0.019105f },
	{ 0.203236f, -0.9326209f, 0.298182f }
};

NJS_MODEL_SADX attach_00188DB8 = { vertex_00188D28, normal_00188D70, LengthOfArray<Sint32>(vertex_00188D28), meshlist_00188D10, matlist_00188C6C, LengthOfArray<Uint16>(meshlist_00188D10), LengthOfArray<Uint16>(matlist_00188C6C),{ 0.264602f, 2.253608f, -0.323683f }, 12.17801f, NULL };

NJS_OBJECT object_00188DE0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00188DB8, 502.8101f, -384.9679f, -2783.788f, 0, 0, 0, 1, 1, 1, NULL, &object_00188C38 };

NJS_MATERIAL matlist_00188E14[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00188E28[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00188E58[] = {
	{ 254, -306 },
	{ 139, 255 },
	{ 140, -510 },
	{ 254, -306 },
	{ 140, -510 },
	{ 255, -396 },
	{ 139, 255 },
	{ 0, 95 },
	{ 1, -396 },
	{ 139, 255 },
	{ 1, -396 },
	{ 140, -510 },
	{ 0, 95 },
	{ 254, -306 },
	{ 255, -396 },
	{ 0, 95 },
	{ 255, -396 },
	{ 1, -396 },
	{ 254, -306 },
	{ 0, 95 },
	{ 139, 255 },
	{ 140, -510 },
	{ 1, -396 },
	{ 255, -396 }
};

NJS_MESHSET_SADX meshlist_00188EB8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00188E28, NULL, NULL, NULL, uv_00188E58, NULL }
};

NJS_VECTOR vertex_00188ED0[] = {
	{ 2.613111f, 2.499076f, -7.962001f },
	{ 1.367385f, 1.785441f, -5.737129f },
	{ 0.280325f, 2.309094f, 0.555487f },
	{ -1.09655f, 3.180274f, 3.475745f },
	{ -1.0219f, 2.387321f, 1.629589f },
	{ -0.159129f, 2.335492f, 1.910426f }
};

NJS_VECTOR normal_00188F18[] = {
	{ -0.050208f, 0.9810989f, -0.186881f },
	{ 0.09170499f, -0.995209f, 0.033893f },
	{ 0.936094f, -0.213973f, 0.279183f },
	{ 0.6434619f, 0.554564f, 0.527651f },
	{ -0.907777f, -0.412934f, -0.073658f },
	{ 0.363069f, -0.877072f, 0.314525f }
};

NJS_MODEL_SADX attach_00188F60 = { vertex_00188ED0, normal_00188F18, LengthOfArray<Sint32>(vertex_00188ED0), meshlist_00188EB8, matlist_00188E14, LengthOfArray<Uint16>(meshlist_00188EB8), LengthOfArray<Uint16>(matlist_00188E14),{ 0.75828f, 2.482857f, -2.243128f }, 6.012145f, NULL };

NJS_OBJECT object_00188F88 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00188F60, 580.339f, -387.1942f, -2904.728f, 0, 0, 0, 1, 1, 1, NULL, &object_00188DE0 };

NJS_MATERIAL matlist_00188FBC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00188FD0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00189000[] = {
	{ 254, 254 },
	{ 139, 150 },
	{ 140, -255 },
	{ 254, 254 },
	{ 140, -255 },
	{ 255, -93 },
	{ 139, 150 },
	{ 0, 254 },
	{ 0, -11 },
	{ 139, 150 },
	{ 0, -11 },
	{ 140, -255 },
	{ 0, 254 },
	{ 254, 254 },
	{ 255, -93 },
	{ 0, 254 },
	{ 255, -93 },
	{ 0, -11 },
	{ 254, 254 },
	{ 0, 254 },
	{ 139, 150 },
	{ 140, -255 },
	{ 0, -11 },
	{ 255, -93 }
};

NJS_MESHSET_SADX meshlist_00189060[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00188FD0, NULL, NULL, NULL, uv_00189000, NULL }
};

NJS_VECTOR vertex_00189078[] = {
	{ 0.51132f, 3.083688f, -1.481992f },
	{ 0.58597f, 2.290735f, -3.328149f },
	{ 1.448741f, 2.238907f, -3.047312f },
	{ -1.607498f, 2.752618f, 5.050813f },
	{ -0.809959f, 1.91624f, 0.975826f },
	{ -0.37502f, 1.890113f, 2.575766f }
};

NJS_VECTOR normal_001890C0[] = {
	{ -0.281983f, 0.928543f, -0.24144f },
	{ -0.524012f, -0.544047f, -0.655305f },
	{ 0.937459f, 0.339732f, 0.075853f },
	{ 0.637498f, 0.434001f, 0.636584f },
	{ -0.881722f, -0.430946f, -0.191966f },
	{ 0.20555f, -0.972356f, 0.110782f }
};

NJS_MODEL_SADX attach_00189108 = { vertex_00189078, normal_001890C0, LengthOfArray<Sint32>(vertex_00189078), meshlist_00189060, matlist_00188FBC, LengthOfArray<Uint16>(meshlist_00189060), LengthOfArray<Uint16>(matlist_00188FBC),{ -0.07937799f, 2.4869f, 0.861332f }, 4.459443f, NULL };

NJS_OBJECT object_00189130 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00189108, 578.7286f, -387.1072f, -2899.773f, 0, 0, 0, 1, 1, 1, NULL, &object_00188F88 };

NJS_MATERIAL matlist_00189164[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00189178[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001891A8[] = {
	{ 253, 186 },
	{ 139, 51 },
	{ 140, -384 },
	{ 253, 186 },
	{ 140, -384 },
	{ 255, -500 },
	{ 139, 51 },
	{ 0, 254 },
	{ 2, -510 },
	{ 139, 51 },
	{ 2, -510 },
	{ 140, -384 },
	{ 0, 254 },
	{ 253, 186 },
	{ 255, -500 },
	{ 0, 254 },
	{ 255, -500 },
	{ 2, -510 },
	{ 253, 186 },
	{ 0, 254 },
	{ 139, 51 },
	{ 140, -384 },
	{ 2, -510 },
	{ 255, -500 }
};

NJS_MESHSET_SADX meshlist_00189208[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00189178, NULL, NULL, NULL, uv_001891A8, NULL }
};

NJS_VECTOR vertex_00189220[] = {
	{ 1.36075f, 2.590429f, -4.09751f },
	{ 2.158289f, 1.75405f, -8.172498f },
	{ 2.593228f, 1.727923f, -6.572557f },
	{ -1.366352f, 2.738222f, 4.307822f },
	{ -2.614537f, 2.024735f, 6.540275f },
	{ -1.700132f, 1.969805f, 6.661909f }
};

NJS_VECTOR normal_00189268[] = {
	{ -0.122772f, 0.9814799f, -0.147054f },
	{ -0.59018f, -0.670051f, -0.450243f },
	{ 0.915646f, 0.353031f, 0.192253f },
	{ 0.352128f, 0.909501f, 0.220938f },
	{ -0.8353119f, 0.537792f, -0.114164f },
	{ 0.669827f, -0.532592f, 0.517375f }
};

NJS_MODEL_SADX attach_001892B0 = { vertex_00189220, normal_00189268, LengthOfArray<Sint32>(vertex_00189220), meshlist_00189208, matlist_00189164, LengthOfArray<Uint16>(meshlist_00189208), LengthOfArray<Uint16>(matlist_00189164),{ -0.010654f, 2.233073f, -0.755295f }, 7.861018f, NULL };

NJS_OBJECT object_001892D8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001892B0, 575.7546f, -386.948f, -2890.624f, 0, 0, 0, 1, 1, 1, NULL, &object_00189130 };

NJS_MATERIAL matlist_0018930C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00189320[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00189350[] = {
	{ 254, 110 },
	{ 139, 254 },
	{ 140, -155 },
	{ 254, 110 },
	{ 140, -155 },
	{ 255, -255 },
	{ 139, 254 },
	{ 0, 99 },
	{ 0, -164 },
	{ 139, 254 },
	{ 0, -164 },
	{ 140, -155 },
	{ 0, 99 },
	{ 254, 110 },
	{ 255, -255 },
	{ 0, 99 },
	{ 255, -255 },
	{ 0, -164 },
	{ 254, 110 },
	{ 0, 99 },
	{ 139, 254 },
	{ 140, -155 },
	{ 0, -164 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_001893B0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00189320, NULL, NULL, NULL, uv_00189350, NULL }
};

NJS_VECTOR vertex_001893C8[] = {
	{ 1.725289f, 2.572631f, -5.221704f },
	{ 0.477104f, 1.859144f, -2.989252f },
	{ 1.39151f, 1.804214f, -2.867617f },
	{ -0.325879f, 3.22386f, 1.098827f },
	{ -0.8437999f, 2.466505f, 1.079706f },
	{ -0.433449f, 2.441854f, 2.755457f }
};

NJS_VECTOR normal_00189410[] = {
	{ -0.678762f, 0.356136f, -0.642222f },
	{ -0.429838f, -0.884731f, -0.180253f },
	{ 0.815037f, -0.56455f, 0.130376f },
	{ 0.09738199f, 0.974104f, 0.204056f },
	{ -0.970449f, 0.197858f, -0.138131f },
	{ -0.225495f, -0.8405049f, 0.492649f }
};

NJS_MODEL_SADX attach_00189458 = { vertex_001893C8, normal_00189410, LengthOfArray<Sint32>(vertex_001893C8), meshlist_001893B0, matlist_0018930C, LengthOfArray<Uint16>(meshlist_001893B0), LengthOfArray<Uint16>(matlist_0018930C),{ 0.440745f, 2.514037f, -1.233124f }, 4.190274f, NULL };

NJS_OBJECT object_00189480 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00189458, 572.6573f, -386.7813f, -2881.094f, 0, 0, 0, 1, 1, 1, NULL, &object_001892D8 };

NJS_MATERIAL matlist_001894B4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001894C8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001894F8[] = {
	{ 246, 177 },
	{ 135, 255 },
	{ 143, -2497 },
	{ 246, 177 },
	{ 143, -2497 },
	{ 255, -2805 },
	{ 135, 255 },
	{ 0, 248 },
	{ 8, -2713 },
	{ 135, 255 },
	{ 8, -2713 },
	{ 143, -2497 },
	{ 0, 248 },
	{ 246, 177 },
	{ 255, -2805 },
	{ 0, 248 },
	{ 255, -2805 },
	{ 8, -2713 },
	{ 246, 177 },
	{ 0, 248 },
	{ 135, 255 },
	{ 143, -2497 },
	{ 8, -2713 },
	{ 255, -2805 }
};

NJS_MESHSET_SADX meshlist_00189558[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001894C8, NULL, NULL, NULL, uv_001894F8, NULL }
};

NJS_VECTOR vertex_00189570[] = {
	{ 10.22312f, 2.618088f, -31.42065f },
	{ 9.705203f, 1.860732f, -31.43977f },
	{ 10.11555f, 1.836082f, -29.76402f },
	{ -7.523057f, 3.10804f, 23.28976f },
	{ -9.393317f, 2.431922f, 27.44023f },
	{ -9.113282f, 2.4151f, 29.51777f }
};

NJS_VECTOR normal_001895B8[] = {
	{ 0.075549f, 0.911675f, -0.403906f },
	{ -0.031616f, -0.972269f, -0.231717f },
	{ 0.962075f, -0.240717f, 0.128323f },
	{ 0.252377f, 0.959518f, 0.125026f },
	{ -0.843277f, 0.491575f, -0.217343f },
	{ 0.620568f, -0.688727f, 0.374901f }
};

NJS_MODEL_SADX attach_00189600 = { vertex_00189570, normal_001895B8, LengthOfArray<Sint32>(vertex_00189570), meshlist_00189558, matlist_001894B4, LengthOfArray<Uint16>(meshlist_00189558), LengthOfArray<Uint16>(matlist_001894B4),{ 0.414903f, 2.472061f, -0.960999f }, 32.01806f, NULL };

NJS_OBJECT object_00189628 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00189600, 562.1011f, -386.1762f, -2848.578f, 0, 0, 0, 1, 1, 1, NULL, &object_00189480 };

NJS_MATERIAL matlist_0018965C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00189670[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001896A0[] = {
	{ 253, -34 },
	{ 138, 255 },
	{ 141, -765 },
	{ 253, -34 },
	{ 141, -765 },
	{ 255, -566 },
	{ 138, 255 },
	{ 0, 50 },
	{ 1, -422 },
	{ 138, 255 },
	{ 1, -422 },
	{ 141, -765 },
	{ 0, 50 },
	{ 253, -34 },
	{ 255, -566 },
	{ 0, 50 },
	{ 255, -566 },
	{ 1, -422 },
	{ 253, -34 },
	{ 0, 50 },
	{ 138, 255 },
	{ 141, -765 },
	{ 1, -422 },
	{ 255, -566 }
};

NJS_MESHSET_SADX meshlist_00189700[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00189670, NULL, NULL, NULL, uv_001896A0, NULL }
};

NJS_VECTOR vertex_00189718[] = {
	{ 3.854076f, 2.444597f, -11.78399f },
	{ 1.983813f, 1.76848f, -7.633529f },
	{ 2.263848f, 1.751658f, -5.555982f },
	{ -3.119614f, 2.252584f, 9.713815f },
	{ -1.262332f, 1.352545f, 2.371391f },
	{ -1.383082f, 1.359799f, 5.684651f }
};

NJS_VECTOR normal_00189760[] = {
	{ -0.518047f, 0.813773f, -0.263441f },
	{ -0.095454f, -0.9897079f, -0.106616f },
	{ 0.862045f, -0.457483f, 0.218144f },
	{ 0.52607f, 0.741013f, 0.417313f },
	{ -0.911672f, -0.340502f, -0.230027f },
	{ 0.233916f, -0.966418f, 0.106392f }
};

NJS_MODEL_SADX attach_001897A8 = { vertex_00189718, normal_00189760, LengthOfArray<Sint32>(vertex_00189718), meshlist_00189700, matlist_0018965C, LengthOfArray<Uint16>(meshlist_00189700), LengthOfArray<Uint16>(matlist_0018965C),{ 0.367231f, 1.898571f, -1.035088f }, 11.30031f, NULL };

NJS_OBJECT object_001897D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001897A8, 550.7185f, -385.5119f, -2813.503f, 0, 0, 0, 1, 1, 1, NULL, &object_00189628 };

NJS_MATERIAL matlist_00189804[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00189818[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00189848[] = {
	{ 251, 95 },
	{ 139, -123 },
	{ 140, -989 },
	{ 251, 95 },
	{ 140, -989 },
	{ 255, -1275 },
	{ 139, -123 },
	{ 0, 255 },
	{ 3, -1181 },
	{ 139, -123 },
	{ 3, -1181 },
	{ 140, -989 },
	{ 0, 255 },
	{ 251, 95 },
	{ 255, -1275 },
	{ 0, 255 },
	{ 255, -1275 },
	{ 3, -1181 },
	{ 251, 95 },
	{ 0, 255 },
	{ 139, -123 },
	{ 140, -989 },
	{ 3, -1181 },
	{ 255, -1275 }
};

NJS_MESHSET_SADX meshlist_001898A8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00189818, NULL, NULL, NULL, uv_00189848, NULL }
};

NJS_VECTOR vertex_001898C0[] = {
	{ 2.833086f, 1.923073f, -8.635242f },
	{ 4.690369f, 1.023034f, -15.97767f },
	{ 4.569619f, 1.030288f, -12.66441f },
	{ -2.502742f, 2.778406f, 7.805995f },
	{ -4.159088f, 2.089438f, 11.2969f },
	{ -3.864301f, 2.07173f, 13.32897f }
};

NJS_VECTOR normal_00189908[] = {
	{ -0.09627599f, 0.988405f, -0.117416f },
	{ -0.6617849f, -0.670133f, -0.336099f },
	{ 0.906126f, 0.355085f, 0.229891f },
	{ 0.238477f, 0.9650789f, 0.1084f },
	{ -0.852969f, 0.474177f, -0.218175f },
	{ 0.447165f, -0.795573f, 0.408788f }
};

NJS_MODEL_SADX attach_00189950 = { vertex_001898C0, normal_00189908, LengthOfArray<Sint32>(vertex_001898C0), meshlist_001898A8, matlist_00189804, LengthOfArray<Uint16>(meshlist_001898A8), LengthOfArray<Uint16>(matlist_00189804),{ 0.26564f, 1.90072f, -1.324351f }, 15.30679f, NULL };

NJS_OBJECT object_00189978 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00189950, 544.7584f, -385.183f, -2795.157f, 0, 0, 0, 1, 1, 1, NULL, &object_001897D0 };

NJS_MATERIAL matlist_001899AC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001899C0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001899F0[] = {
	{ 254, -42 },
	{ 138, 255 },
	{ 141, -510 },
	{ 254, -42 },
	{ 141, -510 },
	{ 255, -374 },
	{ 138, 255 },
	{ 0, 54 },
	{ 1, -300 },
	{ 138, 255 },
	{ 1, -300 },
	{ 141, -510 },
	{ 0, 54 },
	{ 254, -42 },
	{ 255, -374 },
	{ 0, 54 },
	{ 255, -374 },
	{ 1, -300 },
	{ 254, -42 },
	{ 0, 54 },
	{ 138, 255 },
	{ 141, -510 },
	{ 1, -300 },
	{ 255, -374 }
};

NJS_MESHSET_SADX meshlist_00189A50[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001899C0, NULL, NULL, NULL, uv_001899F0, NULL }
};

NJS_VECTOR vertex_00189A68[] = {
	{ 2.769526f, 2.489774f, -8.444055f },
	{ 1.113179f, 1.800806f, -4.953145f },
	{ 1.407967f, 1.783097f, -2.921084f },
	{ -1.734327f, 2.353152f, 5.442369f },
	{ -0.981047f, 1.519433f, 1.503841f },
	{ -0.5461079f, 1.493305f, 3.103782f }
};

NJS_VECTOR normal_00189AB0[] = {
	{ -0.477827f, 0.835639f, -0.270903f },
	{ -0.122179f, -0.9840479f, -0.129314f },
	{ 0.8725269f, -0.440608f, 0.211096f },
	{ 0.5273269f, 0.667845f, 0.525272f },
	{ -0.922048f, -0.34021f, -0.184619f },
	{ 0.217125f, -0.966368f, 0.137804f }
};

NJS_MODEL_SADX attach_00189AF8 = { vertex_00189A68, normal_00189AB0, LengthOfArray<Sint32>(vertex_00189A68), meshlist_00189A50, matlist_001899AC, LengthOfArray<Uint16>(meshlist_00189A50), LengthOfArray<Uint16>(matlist_001899AC),{ 0.517599f, 1.99154f, -1.500843f }, 7.299294f, NULL };

NJS_OBJECT object_00189B20 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00189AF8, 539.4769f, -384.8948f, -2778.904f, 0, 0, 0, 1, 1, 1, NULL, &object_00189978 };

NJS_MATERIAL matlist_00189B54[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00189B68[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00189B98[] = {
	{ 253, 155 },
	{ 139, 20 },
	{ 142, -1275 },
	{ 253, 155 },
	{ 142, -1275 },
	{ 255, -470 },
	{ 139, 20 },
	{ 0, 255 },
	{ 1, -198 },
	{ 139, 20 },
	{ 1, -198 },
	{ 142, -1275 },
	{ 0, 255 },
	{ 253, 155 },
	{ 255, -470 },
	{ 0, 255 },
	{ 255, -470 },
	{ 1, -198 },
	{ 253, 155 },
	{ 0, 255 },
	{ 139, 20 },
	{ 142, -1275 },
	{ 1, -198 },
	{ 255, -470 }
};

NJS_MESHSET_SADX meshlist_00189BF8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00189B68, NULL, NULL, NULL, uv_00189B98, NULL }
};

NJS_VECTOR vertex_00189C10[] = {
	{ 0.239722f, 0.497516f, -0.64628f },
	{ 0.9733329f, -0.335022f, -4.52416f },
	{ 1.324672f, -0.356127f, -2.666463f },
	{ -6.422963f, 0.897757f, 19.89631f },
	{ -1.361859f, -0.194742f, 2.675774f },
	{ -1.898147f, -0.162526f, 7.270232f }
};

NJS_VECTOR normal_00189C58[] = {
	{ -0.090738f, 0.985199f, -0.145427f },
	{ -0.502197f, -0.742126f, -0.4439f },
	{ 0.9259149f, 0.324947f, 0.192591f },
	{ 0.7419749f, 0.6038989f, 0.291167f },
	{ -0.8852839f, -0.388023f, -0.256342f },
	{ 0.168386f, -0.981249f, 0.09379499f }
};

NJS_MODEL_SADX attach_00189CA0 = { vertex_00189C10, normal_00189C58, LengthOfArray<Sint32>(vertex_00189C10), meshlist_00189BF8, matlist_00189B54, LengthOfArray<Uint16>(meshlist_00189BF8), LengthOfArray<Uint16>(matlist_00189B54),{ -2.549145f, 0.270815f, 7.686077f }, 12.80998f, NULL };

NJS_OBJECT object_00189CC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00189CA0, 554.0643f, -381.3549f, -2823.865f, 0, 0, 0, 1, 1, 1, NULL, &object_00189B20 };

NJS_MATERIAL matlist_00189CFC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00189D10[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00189D40[] = {
	{ 254, -245 },
	{ 138, 254 },
	{ 140, -765 },
	{ 254, -245 },
	{ 140, -765 },
	{ 255, -641 },
	{ 138, 254 },
	{ 0, -136 },
	{ 0, -552 },
	{ 138, 254 },
	{ 0, -552 },
	{ 140, -765 },
	{ 0, -136 },
	{ 254, -245 },
	{ 255, -641 },
	{ 0, -136 },
	{ 255, -641 },
	{ 0, -552 },
	{ 254, -245 },
	{ 0, -136 },
	{ 138, 254 },
	{ 140, -765 },
	{ 0, -552 },
	{ 255, -641 }
};

NJS_MESHSET_SADX meshlist_00189DA0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00189D10, NULL, NULL, NULL, uv_00189D40, NULL }
};

NJS_VECTOR vertex_00189DB8[] = {
	{ 3.702143f, 0.782674f, -11.31502f },
	{ 1.000805f, 0.156481f, -4.602168f },
	{ 1.246416f, 0.141727f, -2.418486f },
	{ -2.102119f, 0.638377f, 6.574197f },
	{ -1.368509f, -0.194161f, 2.696318f },
	{ -1.017169f, -0.215267f, 4.554014f }
};

NJS_VECTOR normal_00189E00[] = {
	{ -0.370835f, 0.916786f, -0.148271f },
	{ -0.07547899f, -0.993208f, -0.088551f },
	{ 0.8602729f, -0.454135f, 0.231715f },
	{ 0.387279f, 0.785385f, 0.482892f },
	{ -0.9484349f, -0.265428f, -0.173262f },
	{ 0.209301f, -0.968278f, 0.136498f }
};

NJS_MODEL_SADX attach_00189E48 = { vertex_00189DB8, normal_00189E00, LengthOfArray<Sint32>(vertex_00189DB8), meshlist_00189DA0, matlist_00189CFC, LengthOfArray<Uint16>(meshlist_00189DA0), LengthOfArray<Uint16>(matlist_00189CFC),{ 0.800012f, 0.283704f, -2.370414f }, 9.403608f, NULL };

NJS_OBJECT object_00189E70 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00189E48, 556.4089f, -381.4861f, -2831.083f, 0, 0, 0, 1, 1, 1, NULL, &object_00189CC8 };

NJS_MATERIAL matlist_00189EA4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00189EB8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00189EE8[] = {
	{ 252, 179 },
	{ 138, 80 },
	{ 140, -312 },
	{ 252, 179 },
	{ 140, -312 },
	{ 255, -765 },
	{ 138, 80 },
	{ 0, 255 },
	{ 2, -665 },
	{ 138, 80 },
	{ 2, -665 },
	{ 140, -312 },
	{ 0, 255 },
	{ 252, 179 },
	{ 255, -765 },
	{ 0, 255 },
	{ 255, -765 },
	{ 2, -665 },
	{ 252, 179 },
	{ 0, 255 },
	{ 138, 80 },
	{ 140, -312 },
	{ 2, -665 },
	{ 255, -765 }
};

NJS_MESHSET_SADX meshlist_00189F48[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00189EB8, NULL, NULL, NULL, uv_00189EE8, NULL }
};

NJS_VECTOR vertex_00189F60[] = {
	{ 2.082862f, 0.386917f, -6.327994f },
	{ 2.703367f, -0.438826f, -9.857144f },
	{ 3.091589f, -0.462147f, -8.113166f },
	{ -0.390021f, 0.9923739f, 1.296474f },
	{ -3.091359f, 0.366181f, 8.009333f },
	{ -2.845748f, 0.351427f, 10.19302f }
};

NJS_VECTOR normal_00189FA8[] = {
	{ -0.111003f, 0.975112f, -0.191923f },
	{ -0.569779f, -0.686245f, -0.452128f },
	{ 0.932257f, 0.315568f, 0.176954f },
	{ 0.291552f, 0.9522229f, 0.090937f },
	{ -0.861352f, 0.44247f, -0.249584f },
	{ 0.577945f, -0.731126f, 0.362539f }
};

NJS_MODEL_SADX attach_00189FF0 = { vertex_00189F60, normal_00189FA8, LengthOfArray<Sint32>(vertex_00189F60), meshlist_00189F48, matlist_00189EA4, LengthOfArray<Uint16>(meshlist_00189F48), LengthOfArray<Uint16>(matlist_00189EA4),{ 0.000115f, 0.265114f, 0.167935f }, 10.49099f, NULL };

NJS_OBJECT object_0018A018 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00189FF0, 560.5122f, -381.6938f, -2843.694f, 0, 0, 0, 1, 1, 1, NULL, &object_00189E70 };

NJS_MATERIAL matlist_0018A04C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018A060[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018A090[] = {
	{ 253, 70 },
	{ 139, 173 },
	{ 141, -510 },
	{ 253, 70 },
	{ 141, -510 },
	{ 255, -386 },
	{ 139, 173 },
	{ 0, 254 },
	{ 1, -294 },
	{ 139, 173 },
	{ 1, -294 },
	{ 141, -510 },
	{ 0, 254 },
	{ 253, 70 },
	{ 255, -386 },
	{ 0, 254 },
	{ 255, -386 },
	{ 1, -294 },
	{ 253, 70 },
	{ 0, 254 },
	{ 139, 173 },
	{ 141, -510 },
	{ 1, -294 },
	{ 255, -386 }
};

NJS_MESHSET_SADX meshlist_0018A0F0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018A060, NULL, NULL, NULL, uv_0018A090, NULL }
};

NJS_VECTOR vertex_0018A108[] = {
	{ 1.763685f, 0.205161f, -5.343296f },
	{ 1.703102f, -0.579668f, -6.772494f },
	{ 1.631527f, -0.575368f, -3.610855f },
	{ -1.702555f, 0.6143759f, 5.343924f },
	{ -1.08205f, -0.211368f, 1.814773f },
	{ -0.693828f, -0.234689f, 3.558754f }
};

NJS_VECTOR normal_0018A150[] = {
	{ 0.202882f, 0.963836f, -0.172798f },
	{ -0.02506f, -0.987071f, -0.158312f },
	{ 0.975952f, -0.074856f, 0.204729f },
	{ 0.489507f, 0.768284f, 0.412459f },
	{ -0.935866f, -0.298999f, -0.186425f },
	{ 0.027564f, -0.987878f, 0.152763f }
};

NJS_MODEL_SADX attach_0018A198 = { vertex_0018A108, normal_0018A150, LengthOfArray<Sint32>(vertex_0018A108), meshlist_0018A0F0, matlist_0018A04C, LengthOfArray<Uint16>(meshlist_0018A0F0), LengthOfArray<Uint16>(matlist_0018A04C),{ 0.030565f, 0.017354f, -0.714285f }, 6.301257f, NULL };

NJS_OBJECT object_0018A1C0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018A198, 564.3003f, -381.9117f, -2855.364f, 0, 0, 0, 1, 1, 1, NULL, &object_0018A018 };

NJS_MATERIAL matlist_0018A1F4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018A208[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018A238[] = {
	{ 253, 254 },
{ 139, 170 },
{ 140, -141 },
{ 253, 254 },
{ 140, -141 },
{ 255, -255 },
{ 139, 170 },
{ 0, 255 },
{ 0, -51 },
{ 139, 170 },
{ 0, -51 },
{ 140, -141 },
{ 0, 255 },
{ 253, 254 },
{ 255, -255 },
{ 0, 255 },
{ 255, -255 },
{ 0, -51 },
{ 253, 254 },
{ 0, 255 },
{ 139, 170 },
{ 140, -141 },
{ 0, -51 },
{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_0018A298[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018A208, NULL, NULL, NULL, uv_0018A238, NULL }
};

NJS_VECTOR vertex_0018A2B0[] = {
	{ 0.750267f, 0.466847f, -2.220605f },
	{ 0.665096f, -0.316505f, -3.573992f },
	{ 1.527867f, -0.368333f, -3.293156f },
	{ -0.6776249f, 0.351631f, 2.181918f },
	{ -0.7382089f, -0.433198f, 0.75272f },
	{ -0.809783f, -0.428898f, 3.914359f }
};

NJS_VECTOR normal_0018A2F8[] = {
	{ -0.226585f, 0.930721f, -0.287086f },
	{ -0.490008f, -0.552738f, -0.674072f },
	{ 0.929025f, 0.369465f, 0.020174f },
	{ -0.072601f, 0.979886f, 0.185883f },
	{ -0.977518f, 0.063332f, -0.201116f },
	{ -0.07890499f, -0.9836349f, 0.161975f }
};

NJS_MODEL_SADX attach_0018A340 = { vertex_0018A2B0, normal_0018A2F8, LengthOfArray<Sint32>(vertex_0018A2B0), meshlist_0018A298, matlist_0018A1F4, LengthOfArray<Uint16>(meshlist_0018A298), LengthOfArray<Uint16>(matlist_0018A1F4),{ 0.359042f, 0.016825f, 0.170183f }, 3.922338f, NULL };

NJS_OBJECT object_0018A368 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018A340, 566.7435f, -382.0487f, -2862.887f, 0, 0, 0, 1, 1, 1, NULL, &object_0018A1C0 };

NJS_MATERIAL matlist_0018A39C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018A3B0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018A3E0[] = {
	{ 254, -56 },
	{ 139, 254 },
	{ 140, -510 },
	{ 254, -56 },
	{ 140, -510 },
	{ 255, -430 },
	{ 139, 254 },
	{ 0, 226 },
	{ 1, -430 },
	{ 139, 254 },
	{ 1, -430 },
	{ 140, -510 },
	{ 0, 226 },
	{ 254, -56 },
	{ 255, -430 },
	{ 0, 226 },
	{ 255, -430 },
	{ 1, -430 },
	{ 254, -56 },
	{ 0, 226 },
	{ 139, 254 },
	{ 140, -510 },
	{ 1, -430 },
	{ 255, -430 }
};

NJS_MESHSET_SADX meshlist_0018A440[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018A3B0, NULL, NULL, NULL, uv_0018A3E0, NULL }
};

NJS_VECTOR vertex_0018A458[] = {
	{ 2.493298f, 0.386274f, -7.589427f },
	{ 1.879484f, -0.365321f, -7.312888f },
	{ 1.357948f, -0.333991f, -2.763916f },
	{ -1.252226f, 0.587232f, 3.954451f },
	{ -1.337398f, -0.19612f, 2.601064f },
	{ -0.474627f, -0.247948f, 2.8819f }
};

NJS_VECTOR normal_0018A4A0[] = {
	{ 0.054116f, 0.982471f, -0.178388f },
	{ -0.050043f, -0.9952829f, -0.083115f },
	{ 0.932469f, -0.268688f, 0.241472f },
	{ 0.57819f, 0.50623f, 0.639865f },
	{ -0.928572f, -0.370715f, -0.018025f },
	{ 0.210515f, -0.930541f, 0.299629f }
};

NJS_MODEL_SADX attach_0018A4E8 = { vertex_0018A458, normal_0018A4A0, LengthOfArray<Sint32>(vertex_0018A458), meshlist_0018A440, matlist_0018A39C, LengthOfArray<Uint16>(meshlist_0018A440), LengthOfArray<Uint16>(matlist_0018A39C),{ 0.5779499f, 0.110955f, -1.817488f }, 6.081349f, NULL };

NJS_OBJECT object_0018A510 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018A4E8, 568.7487f, -382.1594f, -2869.059f, 0, 0, 0, 1, 1, 1, NULL, &object_0018A368 };

NJS_MATERIAL matlist_0018A544[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018A558[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018A588[] = {
	{ 251, -174 },
	{ 136, 255 },
	{ 140, -1070 },
	{ 251, -174 },
	{ 140, -1070 },
	{ 255, -1275 },
	{ 136, 255 },
	{ 0, -130 },
	{ 2, -1090 },
	{ 136, 255 },
	{ 2, -1090 },
	{ 140, -1070 },
	{ 0, -130 },
	{ 251, -174 },
	{ 255, -1275 },
	{ 0, -130 },
	{ 255, -1275 },
	{ 2, -1090 },
	{ 251, -174 },
	{ 0, -130 },
	{ 136, 255 },
	{ 140, -1070 },
	{ 2, -1090 },
	{ 255, -1275 }
};

NJS_MESHSET_SADX meshlist_0018A5E8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018A558, NULL, NULL, NULL, uv_0018A588, NULL }
};

NJS_VECTOR vertex_0018A600[] = {
	{ 7.274887f, 0.127176f, -22.32757f },
	{ 3.91459f, -0.688607f, -13.58299f },
	{ 4.447882f, -0.720643f, -12.28629f },
	{ -2.663584f, 0.672107f, 8.305414f },
	{ -3.277397f, -0.07948899f, 8.581952f },
	{ -3.798932f, -0.048158f, 13.13093f }
};

NJS_VECTOR normal_0018A648[] = {
	{ -0.813494f, 0.419734f, -0.402555f },
	{ -0.341242f, -0.931317f, -0.127288f },
	{ 0.808274f, -0.5437919f, 0.225792f },
	{ 0.08296899f, 0.992093f, 0.094165f },
	{ -0.944722f, 0.218683f, -0.24429f },
	{ -0.09869099f, -0.979082f, 0.177928f }
};

NJS_MODEL_SADX attach_0018A690 = { vertex_0018A600, normal_0018A648, LengthOfArray<Sint32>(vertex_0018A600), meshlist_0018A5E8, matlist_0018A544, LengthOfArray<Uint16>(meshlist_0018A5E8), LengthOfArray<Uint16>(matlist_0018A544),{ 1.737977f, -0.024268f, -4.598321f }, 18.57374f, NULL };

NJS_OBJECT object_0018A6B8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018A690, 573.913f, -382.4407f, -2884.951f, 0, 0, 0, 1, 1, 1, NULL, &object_0018A510 };

NJS_MATERIAL matlist_0018A6EC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018A700[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018A730[] = {
	{ 251, 183 },
	{ 139, -206 },
	{ 140, -799 },
	{ 251, 183 },
	{ 140, -799 },
	{ 255, -1275 },
	{ 139, -206 },
	{ 0, 254 },
	{ 3, -1160 },
	{ 139, -206 },
	{ 3, -1160 },
	{ 140, -799 },
	{ 0, 254 },
	{ 251, 183 },
	{ 255, -1275 },
	{ 0, 254 },
	{ 255, -1275 },
	{ 3, -1160 },
	{ 251, 183 },
	{ 0, 254 },
	{ 139, -206 },
	{ 140, -799 },
	{ 3, -1160 },
	{ 255, -1275 }
};

NJS_MESHSET_SADX meshlist_0018A790[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018A700, NULL, NULL, NULL, uv_0018A730, NULL }
};

NJS_VECTOR vertex_0018A7A8[] = {
	{ 1.807134f, 0.431438f, -5.475167f },
	{ 4.136508f, -0.697952f, -14.27315f },
	{ 4.566529f, -0.723784f, -12.65805f },
	{ -1.803396f, 0.9460199f, 5.651754f },
	{ -4.467851f, 0.317611f, 12.25089f },
	{ -4.30338f, 0.307732f, 14.68475f }
};

NJS_VECTOR normal_0018A7F0[] = {
	{ -0.207184f, 0.966997f, -0.148296f },
	{ -0.779263f, -0.525392f, -0.341632f },
	{ 0.898048f, 0.376845f, 0.226933f },
	{ 0.296876f, 0.949097f, 0.105262f },
	{ -0.863367f, 0.440107f, -0.246785f },
	{ 0.581836f, -0.732606f, 0.353206f }
};

NJS_MODEL_SADX attach_0018A838 = { vertex_0018A7A8, normal_0018A7F0, LengthOfArray<Sint32>(vertex_0018A7A8), meshlist_0018A790, matlist_0018A6EC, LengthOfArray<Uint16>(meshlist_0018A790), LengthOfArray<Uint16>(matlist_0018A6EC),{ 0.049339f, 0.111118f, 0.205798f }, 15.16728f, NULL };

NJS_OBJECT object_0018A860 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018A838, 541.7986f, -380.6763f, -2786.107f, 0, 0, 0, 1, 1, 1, NULL, &object_0018A6B8 };

NJS_MATERIAL matlist_0018A894[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018A8A8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018A8D8[] = {
	{ 252, 30 },
	{ 141, -630 },
	{ 142, -1275 },
	{ 252, 30 },
	{ 142, -1275 },
	{ 255, -895 },
	{ 141, -630 },
	{ 0, 255 },
	{ 2, -825 },
	{ 141, -630 },
	{ 2, -825 },
	{ 142, -1275 },
	{ 0, 255 },
	{ 252, 30 },
	{ 255, -895 },
	{ 0, 255 },
	{ 255, -895 },
	{ 2, -825 },
	{ 252, 30 },
	{ 0, 255 },
	{ 141, -630 },
	{ 142, -1275 },
	{ 2, -825 },
	{ 255, -895 }
};

NJS_MESHSET_SADX meshlist_0018A938[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018A8A8, NULL, NULL, NULL, uv_0018A8D8, NULL }
};

NJS_VECTOR vertex_0018A950[] = {
	{ -1.938215f, 0.6566139f, 6.074019f },
	{ 3.122889f, -0.435886f, -11.14652f },
	{ 2.586601f, -0.403669f, -6.552065f },
	{ -5.959363f, 0.870122f, 18.46697f },
	{ -3.62999f, -0.259268f, 9.668983f },
	{ -3.199968f, -0.2851f, 11.28409f }
};

NJS_VECTOR normal_0018A998[] = {
	{ -0.2199f, 0.969448f, -0.108696f },
	{ -0.675101f, -0.679382f, -0.28754f },
	{ 0.908694f, 0.324498f, 0.262633f },
	{ 0.83268f, 0.352066f, 0.427427f },
	{ -0.86382f, -0.452655f, -0.221177f },
	{ 0.2187f, -0.967465f, 0.127206f }
};

NJS_MODEL_SADX attach_0018A9E0 = { vertex_0018A950, normal_0018A998, LengthOfArray<Sint32>(vertex_0018A950), meshlist_0018A938, matlist_0018A894, LengthOfArray<Uint16>(meshlist_0018A938), LengthOfArray<Uint16>(matlist_0018A894),{ -1.418237f, 0.217118f, 3.660223f }, 15.48747f, NULL };

NJS_OBJECT object_0018AA08 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018A9E0, 549.5726f, -381.1143f, -2810.045f, 0, 0, 0, 1, 1, 1, NULL, &object_0018A860 };

NJS_MATERIAL matlist_0018AA3C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018AA50[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0018AA74[] = {
	{ 111, 255 },
	{ 214, 133 },
	{ 0, 33 },
	{ 111, 255 },
	{ 0, 33 },
	{ 0, 155 },
	{ 214, 133 },
	{ 168, 99 },
	{ 0 },
	{ 214, 133 },
	{ 0 },
	{ 0, 33 },
	{ 168, 99 },
	{ 111, 255 },
	{ 0, 155 },
	{ 168, 99 },
	{ 0, 155 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0018AABC[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018AA50, NULL, NULL, NULL, uv_0018AA74, NULL }
};

NJS_VECTOR vertex_0018AAD4[] = {
	{ -0.780298f, 3.05005f, -0.246885f },
	{ 0.699843f, 2.03005f, -0.561499f },
	{ 0.232236f, 0.76605f, 0.8776489f },
	{ -0.780298f, -1.701375f, -1.175271f },
	{ 0.699843f, -1.701375f, -1.489885f },
	{ 0.232236f, -1.701375f, -0.050737f }
};

NJS_VECTOR normal_0018AB1C[] = {
	{ -0.602973f, 0.180739f, -0.777018f },
	{ 0.974506f, 0.039313f, -0.220891f },
	{ -0.367586f, -0.273603f, 0.888832f },
	{ -0.98771f, -0.090706f, 0.127286f },
	{ 0.390503f, 0.195374f, -0.899632f },
	{ 0.687726f, -0.235752f, 0.6866249f }
};

NJS_MODEL_SADX attach_0018AB64 = { vertex_0018AAD4, normal_0018AB1C, LengthOfArray<Sint32>(vertex_0018AAD4), meshlist_0018AABC, matlist_0018AA3C, LengthOfArray<Uint16>(meshlist_0018AABC), LengthOfArray<Uint16>(matlist_0018AA3C),{ -0.040228f, 0.674338f, -0.306118f }, 2.654337f, NULL };

NJS_OBJECT object_0018AB8C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018AB64, 562.9261f, -390.2096f, -2851.027f, 0, 0, 0, 1, 1, 1, NULL, &object_0018AA08 };

NJS_MATERIAL matlist_0018ABC0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018ABD4[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0018ABF8[] = {
	{ 352, 234 },
	{ 268, 121 },
	{ 2, 55 },
	{ 352, 234 },
	{ 2, 55 },
	{ 2, 255 },
	{ 268, 121 },
	{ 338, 89 },
	{ 2, 0 },
	{ 268, 121 },
	{ 2, 0 },
	{ 2, 55 },
	{ 338, 89 },
	{ 352, 234 },
	{ 2, 255 },
	{ 338, 89 },
	{ 2, 255 },
	{ 2, 0 }
};

NJS_MESHSET_SADX meshlist_0018AC40[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018ABD4, NULL, NULL, NULL, uv_0018ABF8, NULL }
};

NJS_VECTOR vertex_0018AC58[] = {
	{ -0.713755f, 2.642082f, -0.228706f },
	{ 0.645724f, 4.282082f, -0.514253f },
	{ 0.216237f, 4.602082f, 0.791931f },
	{ -1.903011f, -3.593342f, -0.821703f },
	{ 0.489672f, -3.593342f, -1.324265f },
	{ -0.266226f, -3.593342f, 0.974619f }
};

NJS_VECTOR normal_0018ACA0[] = {
	{ -0.6946549f, 0.174345f, -0.697895f },
	{ 0.981521f, 0.002394f, -0.191337f },
	{ -0.37122f, 0.069043f, 0.925975f },
	{ -0.976658f, 0.16281f, 0.140111f },
	{ 0.254045f, 0.110204f, -0.960894f },
	{ 0.662358f, -0.023439f, 0.748821f }
};

NJS_MODEL_SADX attach_0018ACE8 = { vertex_0018AC58, normal_0018ACA0, LengthOfArray<Sint32>(vertex_0018AC58), meshlist_0018AC40, matlist_0018ABC0, LengthOfArray<Uint16>(meshlist_0018AC40), LengthOfArray<Uint16>(matlist_0018ABC0),{ -0.628643f, 0.50437f, -0.174823f }, 4.255871f, NULL };

NJS_OBJECT object_0018AD10 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018ACE8, 570.2313f, -388.7177f, -2873.51f, 0, 0, 0, 1, 1, 1, NULL, &object_0018AB8C };

NJS_MATERIAL matlist_0018AD44[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018AD58[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0018AD7C[] = {
	{ 262, 209 },
	{ 165, 45 },
	{ 0, 91 },
	{ 262, 209 },
	{ 0, 91 },
	{ 0, 255 },
	{ 165, 45 },
	{ 308, 0 },
	{ 0, 45 },
	{ 165, 45 },
	{ 0, 45 },
	{ 0, 91 },
	{ 308, 0 },
	{ 262, 209 },
	{ 0, 255 },
	{ 308, 0 },
	{ 0, 255 },
	{ 0, 45 }
};

NJS_MESHSET_SADX meshlist_0018ADC4[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018AD58, NULL, NULL, NULL, uv_0018AD7C, NULL }
};

NJS_VECTOR vertex_0018ADDC[] = {
	{ -0.565936f, -1.805913f, -0.183513f },
	{ 0.511995f, 1.078087f, -0.412634f },
	{ 0.171454f, 0.146087f, 0.635442f },
	{ -0.565936f, -5.101338f, 0.041856f },
	{ 0.511995f, -5.101338f, -0.187265f },
	{ 0.171454f, -5.101338f, 0.860811f }
};

NJS_VECTOR normal_0018AE24[] = {
	{ -0.63328f, -0.034822f, -0.773139f },
	{ 0.979821f, -0.006148f, -0.199782f },
	{ -0.343162f, 0.049404f, 0.9379759f },
	{ -0.98503f, 0.002157f, 0.172367f },
	{ 0.354097f, -0.051581f, -0.933785f },
	{ 0.664625f, 0.030911f, 0.746537f }
};

NJS_MODEL_SADX attach_0018AE6C = { vertex_0018ADDC, normal_0018AE24, LengthOfArray<Sint32>(vertex_0018ADDC), meshlist_0018ADC4, matlist_0018AD44, LengthOfArray<Uint16>(meshlist_0018ADC4), LengthOfArray<Uint16>(matlist_0018AD44),{ -0.026971f, -2.011626f, 0.224088f }, 3.154646f, NULL };

NJS_OBJECT object_0018AE94 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018AE6C, 520.9163f, -386.4097f, -2839.71f, 0, 0, 0, 1, 1, 1, NULL, &object_0018AD10 };

NJS_MATERIAL matlist_0018AEC8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018AEDC[] = {
	0, 3, 5,
	0, 5, 2,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_0018AF08[] = {
	{ 508, 55 },
	{ 59, 74 },
	{ 376, 188 },
	{ 508, 55 },
	{ 376, 188 },
	{ 486, 254 },
	{ 508, 55 },
	{ 508, 0 },
	{ 76, 43 },
	{ 508, 55 },
	{ 76, 43 },
	{ 59, 74 },
	{ 508, 0 },
	{ 486, 254 },
	{ 376, 188 },
	{ 508, 0 },
	{ 376, 188 },
	{ 76, 43 },
	{ 508, 55 },
	{ 486, 254 },
	{ 508, 0 }
};

NJS_MESHSET_SADX meshlist_0018AF5C[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018AEDC, NULL, NULL, NULL, uv_0018AF08, NULL }
};

NJS_VECTOR vertex_0018AF74[] = {
	{ -1.249072f, 6.73421f, -0.400237f },
	{ 1.130019f, 6.73421f, -0.8999439f },
	{ 0.378415f, 6.195474f, 1.385881f },
	{ -0.713755f, -3.765338f, -0.228707f },
	{ 0.645725f, -3.373338f, -0.514253f },
	{ 0.216237f, 3.662736f, 0.791932f }
};

NJS_VECTOR normal_0018AFBC[] = {
	{ -0.901266f, 0.403677f, -0.157365f },
	{ 0.9070089f, 0.421053f, -0.006929f },
	{ 0.178011f, 0.520773f, 0.8349299f },
	{ -0.965322f, -0.053391f, -0.255545f },
	{ 0.309201f, -0.049947f, -0.949684f },
	{ 0.201712f, -0.127743f, 0.971079f }
};

NJS_MODEL_SADX attach_0018B004 = { vertex_0018AF74, normal_0018AFBC, LengthOfArray<Sint32>(vertex_0018AF74), meshlist_0018AF5C, matlist_0018AEC8, LengthOfArray<Uint16>(meshlist_0018AF5C), LengthOfArray<Uint16>(matlist_0018AEC8),{ -0.059527f, 1.484436f, 0.242968f }, 5.372763f, NULL };

NJS_OBJECT object_0018B02C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018B004, 535.5267f, -387.2098f, -2884.676f, 0, 0, 0, 1, 1, 1, NULL, &object_0018AE94 };

NJS_MATERIAL matlist_0018B060[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018B074[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0018B098[] = {
	{ 219, 254 },
	{ 280, 55 },
	{ -1, 55 },
	{ 219, 254 },
	{ -1, 55 },
	{ -1, 255 },
	{ 280, 55 },
	{ 121, 0 },
	{ -1, 0 },
	{ 280, 55 },
	{ -1, 0 },
	{ -1, 55 },
	{ 121, 0 },
	{ 219, 254 },
	{ -1, 255 },
	{ 121, 0 },
	{ -1, 255 },
	{ -1, 0 }
};

NJS_MESHSET_SADX meshlist_0018B0E0[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018B074, NULL, NULL, NULL, uv_0018B098, NULL }
};

NJS_VECTOR vertex_0018B0F8[] = {
	{ -0.553265f, 4.054181f, -0.179404f },
	{ 0.500531f, 0.454181f, -0.403396f },
	{ 0.167615f, 2.678181f, 0.621215f },
	{ -0.553265f, -2.329243f, -0.179404f },
	{ 0.500531f, -2.329243f, -0.403396f },
	{ 0.167615f, -2.329243f, 0.621215f }
};

NJS_VECTOR normal_0018B140[] = {
	{ -0.669131f, 0, -0.743145f },
	{ 0.978148f, 0, -0.207912f },
	{ -0.309017f, 0, 0.9510559f },
	{ -0.978148f, 0, 0.207911f },
	{ 0.309017f, 0, -0.951057f },
	{ 0.669131f, 0, 0.743145f }
};

NJS_MODEL_SADX attach_0018B188 = { vertex_0018B0F8, normal_0018B140, LengthOfArray<Sint32>(vertex_0018B0F8), meshlist_0018B0E0, matlist_0018B060, LengthOfArray<Uint16>(meshlist_0018B0E0), LengthOfArray<Uint16>(matlist_0018B060),{ -0.026367f, 0.862469f, 0.10891f }, 3.23255f, NULL };

NJS_OBJECT object_0018B1B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018B188, 541.0106f, -388.3818f, -2783.578f, 0, 0, 0, 1, 1, 1, NULL, &object_0018B02C };

NJS_MATERIAL matlist_0018B1E4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018B1F8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0018B21C[] = {
	{ 510, 255 },
	{ 510, 55 },
	{ 0, 87 },
	{ 510, 255 },
	{ 0, 87 },
	{ 0, 186 },
	{ 510, 55 },
	{ 510, 0 },
	{ 0, 60 },
	{ 510, 55 },
	{ 0, 60 },
	{ 0, 87 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 186 },
	{ 510, 0 },
	{ 0, 186 },
	{ 0, 60 }
};

NJS_MESHSET_SADX meshlist_0018B264[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018B1F8, NULL, NULL, NULL, uv_0018B21C, NULL }
};

NJS_VECTOR vertex_0018B27C[] = {
	{ -1.100535f, 5.335536f, -0.356864f },
	{ 0.995639f, 5.335536f, -0.80242f },
	{ 0.333414f, 5.335536f, 1.235698f },
	{ 0.329814f, -5.101338f, -0.100183f },
	{ 1.367524f, -5.101338f, -0.320756f },
	{ 1.03969f, -5.101338f, 0.6882139f }
};

NJS_VECTOR normal_0018B2C4[] = {
	{ -0.6641679f, -0.109211f, -0.7395639f },
	{ 0.9778619f, 0.025257f, -0.207721f },
	{ -0.306889f, -0.070556f, 0.9491259f },
	{ -0.970376f, -0.127948f, 0.204939f },
	{ 0.308971f, -0.032857f, -0.9505039f },
	{ 0.670177f, 0.00642f, 0.742174f }
};

NJS_MODEL_SADX attach_0018B30C = { vertex_0018B27C, normal_0018B2C4, LengthOfArray<Sint32>(vertex_0018B27C), meshlist_0018B264, matlist_0018B1E4, LengthOfArray<Uint16>(meshlist_0018B264), LengthOfArray<Uint16>(matlist_0018B1E4),{ 0.133494f, 0.117099f, 0.216639f }, 5.317012f, NULL };

NJS_OBJECT object_0018B334 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018B30C, 542.8318f, -387.6098f, -2907.159f, 0, 0, 0, 1, 1, 1, NULL, &object_0018B1B0 };

NJS_MATERIAL matlist_0018B368[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018B37C[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0018B3A0[] = {
	{ 378, 254 },
	{ 61, 55 },
	{ 3, 55 },
	{ 378, 254 },
	{ 3, 55 },
	{ 3, 255 },
	{ 61, 55 },
	{ 77, 0 },
	{ 3, 0 },
	{ 61, 55 },
	{ 3, 0 },
	{ 3, 55 },
	{ 77, 0 },
	{ 378, 254 },
	{ 3, 255 },
	{ 77, 0 },
	{ 3, 255 },
	{ 3, 0 }
};

NJS_MESHSET_SADX meshlist_0018B3E8[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018B37C, NULL, NULL, NULL, uv_0018B3A0, NULL }
};

NJS_VECTOR vertex_0018B400[] = {
	{ -0.713755f, -3.757914f, -0.228707f },
	{ 0.645725f, -3.365914f, -0.514253f },
	{ 0.216237f, 3.662744f, 0.791932f },
	{ -0.713755f, -5.101338f, -0.228707f },
	{ 0.645725f, -5.101338f, -0.514253f },
	{ 0.216237f, -5.101338f, 0.791932f }
};

NJS_VECTOR normal_0018B448[] = {
	{ -0.6673239f, 0, -0.744767f },
	{ 0.978873f, 0, -0.204471f },
	{ -0.303403f, 0, 0.952862f },
	{ -0.976895f, 0, 0.213721f },
	{ 0.311306f, 0, -0.95031f },
	{ 0.666533f, 0, 0.7454759f }
};

NJS_MODEL_SADX attach_0018B490 = { vertex_0018B400, normal_0018B448, LengthOfArray<Sint32>(vertex_0018B400), meshlist_0018B3E8, matlist_0018B368, LengthOfArray<Uint16>(meshlist_0018B3E8), LengthOfArray<Uint16>(matlist_0018B368),{ -0.034015f, -0.719297f, 0.138839f }, 4.430448f, NULL };

NJS_OBJECT object_0018B4B8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018B490, 535.5267f, -387.2098f, -2884.676f, 0, 0, 0, 1, 1, 1, NULL, &object_0018B334 };

NJS_MATERIAL matlist_0018B4EC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018B500[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_0018B52C[] = {
	{ 510, 254 },
	{ 510, 84 },
	{ 0, 36 },
	{ 510, 254 },
	{ 0, 36 },
	{ 0, 166 },
	{ 510, 84 },
	{ 510, 36 },
	{ 0 },
	{ 510, 84 },
	{ 0 },
	{ 0, 36 },
	{ 510, 36 },
	{ 510, 254 },
	{ 0, 166 },
	{ 510, 36 },
	{ 0, 166 },
	{ 0 },
	{ 0, 84 },
	{ 0, 254 },
	{ 0, 36 }
};

NJS_MESHSET_SADX meshlist_0018B580[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018B500, NULL, NULL, NULL, uv_0018B52C, NULL }
};

NJS_VECTOR vertex_0018B598[] = {
	{ -1.01801f, 6.151345f, -0.330104f },
	{ 0.92098f, 6.151345f, -0.742249f },
	{ 0.308413f, 6.151345f, 1.143037f },
	{ -0.7771069f, -5.101338f, -0.7443309f },
	{ 0.703038f, -5.101338f, -1.058946f },
	{ 0.23543f, -5.101338f, 0.380205f }
};

NJS_VECTOR normal_0018B5E0[] = {
	{ -0.576012f, 0.508581f, -0.639966f },
	{ 0.851826f, 0.491562f, -0.180994f },
	{ -0.274465f, 0.458095f, 0.845469f },
	{ -0.977787f, -0.028577f, 0.207644f },
	{ 0.309022f, 0.020775f, -0.950828f },
	{ 0.668326f, -0.054626f, 0.74186f }
};

NJS_MODEL_SADX attach_0018B628 = { vertex_0018B598, normal_0018B5E0, LengthOfArray<Sint32>(vertex_0018B598), meshlist_0018B580, matlist_0018B4EC, LengthOfArray<Uint16>(meshlist_0018B580), LengthOfArray<Uint16>(matlist_0018B4EC),{ -0.048515f, 0.525003f, 0.042046f }, 5.733047f, NULL };

NJS_OBJECT object_0018B650 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018B628, 528.2215f, -386.8097f, -2862.193f, 0, 0, 0, 1, 1, 1, NULL, &object_0018B4B8 };

NJS_MATERIAL matlist_0018B684[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018B698[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0018B6BC[] = {
	{ 510, 254 },
	{ 510, 55 },
	{ 165, 55 },
	{ 510, 254 },
	{ 165, 55 },
	{ 262, 254 },
	{ 510, 55 },
	{ 510, 0 },
	{ 310, 0 },
	{ 510, 55 },
	{ 310, 0 },
	{ 165, 55 },
	{ 510, 0 },
	{ 510, 254 },
	{ 262, 254 },
	{ 510, 0 },
	{ 262, 254 },
	{ 310, 0 }
};

NJS_MESHSET_SADX meshlist_0018B704[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018B698, NULL, NULL, NULL, uv_0018B6BC, NULL }
};

NJS_VECTOR vertex_0018B71C[] = {
	{ -0.565936f, 5.042087f, -0.183513f },
	{ 0.511995f, 5.042087f, -0.412634f },
	{ 0.171454f, 5.042087f, 0.635442f },
	{ -0.565936f, -1.813337f, -0.183513f },
	{ 0.511995f, 1.070663f, -0.412634f },
	{ 0.171454f, 0.138663f, 0.635442f }
};

NJS_VECTOR normal_0018B764[] = {
	{ -0.669131f, 0, -0.743145f },
	{ 0.978148f, 0, -0.207912f },
	{ -0.309017f, 0, 0.9510559f },
	{ -0.978148f, 0, 0.207912f },
	{ 0.309017f, 0, -0.951057f },
	{ 0.669131f, 0, 0.743145f }
};

NJS_MODEL_SADX attach_0018B7AC = { vertex_0018B71C, normal_0018B764, LengthOfArray<Sint32>(vertex_0018B71C), meshlist_0018B704, matlist_0018B684, LengthOfArray<Uint16>(meshlist_0018B704), LengthOfArray<Uint16>(matlist_0018B684),{ -0.026971f, 1.614375f, 0.111404f }, 3.467532f, NULL };

NJS_OBJECT object_0018B7D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018B7AC, 520.9163f, -386.4097f, -2839.71f, 0, 0, 0, 1, 1, 1, NULL, &object_0018B650 };

NJS_MATERIAL matlist_0018B808[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018B81C[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	1, 0, 2
};

NJS_TEX uv_0018B848[] = {
	{ 492, 255 },
	{ 486, 59 },
	{ 0, 78 },
	{ 492, 255 },
	{ 0, 78 },
	{ 0, 205 },
	{ 486, 59 },
	{ 510, 0 },
	{ 0, 42 },
	{ 486, 59 },
	{ 0, 42 },
	{ 0, 78 },
	{ 510, 0 },
	{ 492, 255 },
	{ 0, 205 },
	{ 510, 0 },
	{ 0, 205 },
	{ 0, 42 },
	{ 510, 0 },
	{ 486, 59 },
	{ 492, 255 }
};

NJS_MESHSET_SADX meshlist_0018B89C[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018B81C, NULL, NULL, NULL, uv_0018B848, NULL }
};

NJS_VECTOR vertex_0018B8B4[] = {
	{ -1.086524f, 6.154319f, -0.352321f },
	{ 0.982963f, 6.680763f, -0.792204f },
	{ 0.296549f, 6.302607f, 1.099068f },
	{ -0.649982f, -5.101338f, -0.210766f },
	{ 0.58803f, -5.101338f, -0.473914f },
	{ 0.196916f, -5.101338f, 0.72981f }
};

NJS_VECTOR normal_0018B8FC[] = {
	{ -0.678455f, 0.454796f, -0.5769399f },
	{ 0.843898f, 0.521437f, -0.126251f },
	{ -0.345643f, 0.42316f, 0.837536f },
	{ -0.974448f, -0.031951f, 0.222328f },
	{ 0.31109f, -0.036607f, -0.949675f },
	{ 0.6573499f, -0.033104f, 0.752858f }
};

NJS_MODEL_SADX attach_0018B944 = { vertex_0018B8B4, normal_0018B8FC, LengthOfArray<Sint32>(vertex_0018B8B4), meshlist_0018B89C, matlist_0018B808, LengthOfArray<Uint16>(meshlist_0018B89C), LengthOfArray<Uint16>(matlist_0018B808),{ -0.05178f, 0.789713f, 0.153432f }, 5.966474f, NULL };

NJS_OBJECT object_0018B96C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018B944, 513.6111f, -386.0096f, -2817.227f, 0, 0, 0, 1, 1, 1, NULL, &object_0018B7D4 };

NJS_MATERIAL matlist_0018B9A0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018B9B4[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0
};

NJS_TEX uv_0018B9E0[] = {
	{ 492, 255 },
	{ 508, 55 },
	{ 276, 71 },
	{ 492, 255 },
	{ 276, 71 },
	{ 216, 200 },
	{ 508, 55 },
	{ 508, 0 },
	{ 119, 35 },
	{ 508, 55 },
	{ 119, 35 },
	{ 276, 71 },
	{ 508, 0 },
	{ 492, 255 },
	{ 216, 200 },
	{ 508, 0 },
	{ 216, 200 },
	{ 119, 35 },
	{ 492, 255 },
	{ 508, 0 },
	{ 508, 55 }
};

NJS_MESHSET_SADX meshlist_0018BA34[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018B9B4, NULL, NULL, NULL, uv_0018B9E0, NULL }
};

NJS_VECTOR vertex_0018BA4C[] = {
	{ -0.852029f, 4.419714f, -0.276283f },
	{ 0.7708189f, 4.419714f, -0.6212299f },
	{ 0.258127f, 4.052773f, 0.956671f },
	{ -0.553266f, -0.861311f, -0.179404f },
	{ 0.500532f, -4.461311f, -0.403396f },
	{ 0.167615f, -2.237311f, 0.621215f }
};

NJS_VECTOR normal_0018BA94[] = {
	{ -0.672615f, 0.485686f, -0.5582989f },
	{ 0.886376f, 0.460901f, -0.043679f },
	{ -0.238974f, 0.418327f, 0.876295f },
	{ -0.979686f, -0.047683f, 0.194788f },
	{ 0.24966f, -0.044967f, -0.967289f },
	{ 0.655432f, -0.042638f, 0.7540489f }
};

NJS_MODEL_SADX attach_0018BADC = { vertex_0018BA4C, normal_0018BA94, LengthOfArray<Sint32>(vertex_0018BA4C), meshlist_0018BA34, matlist_0018B9A0, LengthOfArray<Uint16>(meshlist_0018BA34), LengthOfArray<Uint16>(matlist_0018B9A0),{ -0.040605f, -0.020798f, 0.167721f }, 4.510068f, NULL };

NJS_OBJECT object_0018BB04 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018BADC, 541.0106f, -383.5617f, -2783.578f, 0, 0, 0, 1, 1, 1, NULL, &object_0018B96C };

NJS_MATERIAL matlist_0018BB38[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018BB4C[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0018BB70[] = {
	{ 510, 168 },
	{ 510, 36 },
	{ 0, 157 },
	{ 510, 168 },
	{ 0, 157 },
	{ 0, 255 },
	{ 510, 36 },
	{ 510, 0 },
	{ 0, 130 },
	{ 510, 36 },
	{ 0, 130 },
	{ 0, 157 },
	{ 510, 0 },
	{ 510, 168 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0, 130 }
};

NJS_MESHSET_SADX meshlist_0018BBB8[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018BB4C, NULL, NULL, NULL, uv_0018BB70, NULL }
};

NJS_VECTOR vertex_0018BBD0[] = {
	{ -1.012478f, 5.042087f, -0.328311f },
	{ 0.915975f, 5.042087f, -0.738216f },
	{ 0.306737f, 5.042087f, 1.136826f },
	{ -0.237377f, -5.101338f, 1.01786f },
	{ 1.195789f, -5.101338f, 0.713231f },
	{ 0.743022f, -5.101338f, 2.106704f }
};

NJS_VECTOR normal_0018BC18[] = {
	{ -0.666019f, -0.147923f, -0.7311209f },
	{ 0.979095f, -0.002095f, -0.203394f },
	{ -0.309165f, 0.077333f, 0.947859f },
	{ -0.9758919f, -0.046265f, 0.213294f },
	{ 0.310932f, -0.126218f, -0.942014f },
	{ 0.664979f, 0.099379f, 0.740221f }
};

NJS_MODEL_SADX attach_0018BC60 = { vertex_0018BBD0, normal_0018BC18, LengthOfArray<Sint32>(vertex_0018BBD0), meshlist_0018BBB8, matlist_0018BB38, LengthOfArray<Uint16>(meshlist_0018BBB8), LengthOfArray<Uint16>(matlist_0018BB38),{ 0.091656f, -0.029626f, 0.684244f }, 5.267426f, NULL };

NJS_OBJECT object_0018BC88 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018BC60, 506.306f, -385.6096f, -2794.744f, 0, 0, 0, 1, 1, 1, NULL, &object_0018BB04 };

NJS_MATERIAL matlist_0018BCBC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018BCD0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_0018BCFC[] = {
	{ 510, 219 },
	{ 494, 47 },
	{ 0, 171 },
	{ 510, 219 },
	{ 0, 171 },
	{ 0, 255 },
	{ 494, 47 },
	{ 494, 0 },
	{ 0, 147 },
	{ 494, 47 },
	{ 0, 147 },
	{ 0, 171 },
	{ 494, 0 },
	{ 510, 219 },
	{ 0, 255 },
	{ 494, 0 },
	{ 0, 255 },
	{ 0, 147 },
	{ 494, 47 },
	{ 510, 219 },
	{ 494, 0 }
};

NJS_MESHSET_SADX meshlist_0018BD50[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018BCD0, NULL, NULL, NULL, uv_0018BCFC, NULL }
};

NJS_VECTOR vertex_0018BD68[] = {
	{ -1.111431f, 6.562274f, -0.360398f },
	{ 1.005497f, 6.562274f, -0.810365f },
	{ 0.336715f, 6.907658f, 1.247933f },
	{ -0.544819f, -5.226841f, 0.794727f },
	{ 0.492891f, -5.226841f, 0.574155f },
	{ 0.165057f, -5.226841f, 1.583124f }
};

NJS_VECTOR normal_0018BDB0[] = {
	{ -0.5840999f, 0.391447f, -0.711053f },
	{ 0.852138f, 0.446395f, -0.273115f },
	{ -0.305197f, 0.54972f, 0.7776f },
	{ -0.977661f, -0.027055f, 0.208438f },
	{ 0.309659f, -0.124176f, -0.942704f },
	{ 0.668975f, 0.010983f, 0.743204f }
};

NJS_MODEL_SADX attach_0018BDF8 = { vertex_0018BD68, normal_0018BDB0, LengthOfArray<Sint32>(vertex_0018BD68), meshlist_0018BD50, matlist_0018BCBC, LengthOfArray<Uint16>(meshlist_0018BD50), LengthOfArray<Uint16>(matlist_0018BCBC),{ -0.052967f, 0.840408f, 0.38638f }, 6.184129f, NULL };

NJS_OBJECT object_0018BE20 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018BDF8, 577.5364f, -387.6098f, -2895.993f, 0, 0, 0, 1, 1, 1, NULL, &object_0018BC88 };

NJS_MATERIAL matlist_0018BE54[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018BE68[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_0018BE94[] = {
	{ 508, 255 },
	{ 508, 55 },
	{ 268, 72 },
	{ 508, 255 },
	{ 268, 72 },
	{ 354, 198 },
	{ 508, 55 },
	{ 508, 0 },
	{ 340, 36 },
	{ 508, 55 },
	{ 340, 36 },
	{ 268, 72 },
	{ 508, 0 },
	{ 508, 255 },
	{ 354, 198 },
	{ 508, 0 },
	{ 354, 198 },
	{ 340, 36 },
	{ 508, 55 },
	{ 508, 255 },
	{ 508, 0 }
};

NJS_MESHSET_SADX meshlist_0018BEE8[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018BE68, NULL, NULL, NULL, uv_0018BE94, NULL }
};

NJS_VECTOR vertex_0018BF00[] = {
	{ -1.127732f, 3.004225f, -0.361356f },
	{ 1.020243f, 3.004225f, -0.812519f },
	{ 0.341653f, 3.004225f, 1.25125f },
	{ -0.713754f, -2.56534f, -0.228706f },
	{ 0.645723f, -0.92534f, -0.5142519f },
	{ 0.216236f, -0.6053399f, 0.79193f }
};

NJS_VECTOR normal_0018BF48[] = {
	{ -0.5799069f, 0.455832f, -0.675222f },
	{ 0.887257f, 0.42522f, -0.178782f },
	{ -0.232196f, 0.415817f, 0.879307f },
	{ -0.960437f, -0.089453f, 0.263738f },
	{ 0.329491f, -0.089241f, -0.939932f },
	{ 0.659531f, -0.112578f, 0.743199f }
};

NJS_MODEL_SADX attach_0018BF90 = { vertex_0018BF00, normal_0018BF48, LengthOfArray<Sint32>(vertex_0018BF00), meshlist_0018BEE8, matlist_0018BE54, LengthOfArray<Uint16>(meshlist_0018BEE8), LengthOfArray<Uint16>(matlist_0018BE54),{ -0.053744f, 0.219442f, 0.219365f }, 2.969799f, NULL };

NJS_OBJECT object_0018BFB8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018BF90, 570.2313f, -383.5457f, -2873.51f, 0, 0, 0, 1, 1, 1, NULL, &object_0018BE20 };

NJS_MATERIAL matlist_0018BFEC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018C000[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_0018C02C[] = {
	{ 490, 255 },
	{ 508, 55 },
	{ 208, 71 },
	{ 490, 255 },
	{ 208, 71 },
	{ 108, 199 },
	{ 508, 55 },
	{ 496, 0 },
	{ 163, 35 },
	{ 508, 55 },
	{ 163, 35 },
	{ 208, 71 },
	{ 496, 0 },
	{ 490, 255 },
	{ 108, 199 },
	{ 496, 0 },
	{ 108, 199 },
	{ 163, 35 },
	{ 508, 55 },
	{ 490, 255 },
	{ 496, 0 }
};

NJS_MESHSET_SADX meshlist_0018C080[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018C000, NULL, NULL, NULL, uv_0018C02C, NULL }
};

NJS_VECTOR vertex_0018C098[] = {
	{ -1.213565f, 4.830764f, -0.388366f },
	{ 1.092793f, 4.560474f, -0.878598f },
	{ 0.364166f, 4.42533f, 1.363883f },
	{ -0.778825f, -2.037309f, -0.24924f },
	{ 0.701318f, -3.057309f, -0.563854f },
	{ 0.23371f, -4.321309f, 0.875294f }
};

NJS_VECTOR normal_0018C0E0[] = {
	{ -0.5795209f, 0.489551f, -0.6515329f },
	{ 0.8918689f, 0.43027f, -0.139415f },
	{ -0.214358f, 0.45173f, 0.86602f },
	{ -0.98092f, -0.052002f, 0.187328f },
	{ 0.295711f, -0.05798f, -0.9535159f },
	{ 0.680832f, -0.05567f, 0.730321f }
};

NJS_MODEL_SADX attach_0018C128 = { vertex_0018C098, normal_0018C0E0, LengthOfArray<Sint32>(vertex_0018C098), meshlist_0018C080, matlist_0018BFEC, LengthOfArray<Uint16>(meshlist_0018C080), LengthOfArray<Uint16>(matlist_0018BFEC),{ -0.060386f, 0.254728f, 0.242643f }, 4.711392f, NULL };

NJS_OBJECT object_0018C150 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018C128, 562.9261f, -385.1457f, -2851.027f, 0, 0, 0, 1, 1, 1, NULL, &object_0018BFB8 };

NJS_MATERIAL matlist_0018C184[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018C198[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_0018C1C4[] = {
	{ 510, 255 },
	{ 510, 117 },
	{ 0, 28 },
	{ 510, 255 },
	{ 0, 28 },
	{ 0, 131 },
	{ 510, 117 },
	{ 510, 79 },
	{ 0 },
	{ 510, 117 },
	{ 0 },
	{ 0, 28 },
	{ 510, 79 },
	{ 510, 255 },
	{ 0, 131 },
	{ 510, 79 },
	{ 0, 131 },
	{ 0 },
	{ 0, 117 },
	{ 0, 255 },
	{ 0, 79 }
};

NJS_MESHSET_SADX meshlist_0018C218[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018C198, NULL, NULL, NULL, uv_0018C1C4, NULL }
};

NJS_VECTOR vertex_0018C230[] = {
	{ -0.882861f, 6.453871f, -0.28628f },
	{ 0.798712f, 6.453871f, -0.64371f },
	{ 0.267469f, 6.453871f, 0.99129f },
	{ -0.662146f, -5.101338f, -1.116187f },
	{ 0.599034f, -5.101338f, -1.384259f },
	{ 0.200601f, -5.101338f, -0.158009f }
};

NJS_VECTOR normal_0018C278[] = {
	{ -0.568994f, 0.526448f, -0.6317419f },
	{ 0.848454f, 0.497879f, -0.179559f },
	{ -0.27734f, 0.436847f, 0.855714f },
	{ -0.977564f, -0.033607f, 0.20794f },
	{ 0.309383f, 0.055493f, -0.949317f },
	{ 0.667664f, -0.077507f, 0.7404169f }
};

NJS_MODEL_SADX attach_0018C2C0 = { vertex_0018C230, normal_0018C278, LengthOfArray<Sint32>(vertex_0018C230), meshlist_0018C218, matlist_0018C184, LengthOfArray<Uint16>(meshlist_0018C218), LengthOfArray<Uint16>(matlist_0018C184),{ -0.042074f, 0.676266f, -0.196484f }, 5.898427f, NULL };

NJS_OBJECT object_0018C2E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018C2C0, 555.6209f, -386.4097f, -2828.544f, 0, 0, 0, 1, 1, 1, NULL, &object_0018C150 };

NJS_MATERIAL matlist_0018C31C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018C330[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0018C354[] = {
	{ 510, 233 },
	{ 510, 61 },
	{ 0, 55 },
	{ 510, 233 },
	{ 0, 55 },
	{ 0, 255 },
	{ 510, 61 },
	{ 510, 14 },
	{ 0 },
	{ 510, 61 },
	{ 0 },
	{ 0, 55 },
	{ 510, 14 },
	{ 510, 233 },
	{ 0, 255 },
	{ 510, 14 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0018C39C[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018C330, NULL, NULL, NULL, uv_0018C354, NULL }
};

NJS_VECTOR vertex_0018C3B4[] = {
	{ -0.667087f, 5.042087f, -0.216313f },
	{ 0.6035039f, 5.042087f, -0.486385f },
	{ 0.202098f, 5.042087f, 0.749016f },
	{ -0.775417f, -5.101338f, -0.25144f },
	{ 0.701509f, -5.101338f, -0.565371f },
	{ 0.234918f, -5.101338f, 0.8706509f }
};

NJS_VECTOR normal_0018C3FC[] = {
	{ -0.669099f, 0.009718999f, -0.7431099f },
	{ 0.9780869f, 0.011069f, -0.207903f },
	{ -0.309004f, 0.010404f, 0.951004f },
	{ -0.978101f, 0.009725999f, 0.207902f },
	{ 0.308996f, 0.010391f, -0.9510069f },
	{ 0.669086f, 0.011076f, 0.743102f }
};

NJS_MODEL_SADX attach_0018C444 = { vertex_0018C3B4, normal_0018C3FC, LengthOfArray<Sint32>(vertex_0018C3B4), meshlist_0018C39C, matlist_0018C31C, LengthOfArray<Uint16>(meshlist_0018C39C), LengthOfArray<Uint16>(matlist_0018C31C),{ -0.036954f, -0.029626f, 0.15264f }, 5.12229f, NULL };

NJS_OBJECT object_0018C46C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018C444, 548.3158f, -386.0096f, -2806.061f, 0, 0, 0, 1, 1, 1, NULL, &object_0018C2E8 };

NJS_MATERIAL matlist_0018C4A0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018C4C8[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

Sint16 poly_0018C4F2[] = {
	3, 4, 5
};

NJS_TEX uv_0018C4F8[] = {
	{ 172, 127 },
	{ 508, 127 },
	{ 508, 0 },
	{ 172, 127 },
	{ 508, 0 },
	{ 0 },
	{ 107, 254 },
	{ 510, 254 },
	{ 508, 127 },
	{ 107, 254 },
	{ 508, 127 },
	{ 172, 127 },
	{ 0 },
	{ 508, 0 },
	{ 510, 254 },
	{ 0 },
	{ 510, 254 },
	{ 107, 254 },
	{ 172, 127 },
	{ 0 },
	{ 107, 254 }
};

NJS_TEX uv_0018C54C[] = {
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0018C558[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018C4C8, NULL, NULL, NULL, uv_0018C4F8, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_0018C4F2, NULL, NULL, NULL, uv_0018C54C, NULL }
};

NJS_VECTOR vertex_0018C588[] = {
	{ -6.117823f, -2.914959f, -1.989693f },
	{ -19.69716f, 1.457535f, -3.747508f },
	{ -10.11904f, 1.457537f, -5.944139f },
	{ 19.01987f, -2.914959f, 6.178042f },
	{ 19.79997f, 1.457536f, 3.777139f },
	{ 18.23977f, 1.457535f, 8.57895f }
};

NJS_VECTOR normal_0018C5D0[] = {
	{ -0.183749f, -0.9803579f, 0.071661f },
	{ -0.472488f, 0.861859f, 0.184269f },
	{ 0.156524f, -0.300003f, -0.941009f },
	{ 0.609337f, -0.75f, -0.257311f },
	{ 0.609337f, 0.75f, -0.257311f },
	{ 0.207912f, -0.00001f, 0.978148f }
};

NJS_MODEL_SADX attach_0018C618 = { vertex_0018C588, normal_0018C5D0, LengthOfArray<Sint32>(vertex_0018C588), meshlist_0018C558, matlist_0018C4A0, LengthOfArray<Uint16>(meshlist_0018C558), LengthOfArray<Uint16>(matlist_0018C4A0),{ 0.051406f, -0.7287109f, 1.317406f }, 21.04126f, NULL };

NJS_OBJECT object_0018C640 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018C618, 554.8054f, -393.4729f, -2884.552f, 0, 0, 0, 1, 1, 1, NULL, &object_0018C46C };

NJS_MATERIAL matlist_0018C674[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018C69C[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_0018C6C6[] = {
	5, 4, 3
};

NJS_TEX uv_0018C6CC[] = {
	{ 1, 0 },
	{ 1, 127 },
	{ 174, 127 },
	{ 1, 0 },
	{ 174, 127 },
	{ 3, 0 },
	{ 1, 127 },
	{ 1, 255 },
	{ 110, 254 },
	{ 1, 127 },
	{ 110, 254 },
	{ 174, 127 },
	{ 1, 255 },
	{ 1, 0 },
	{ 3, 0 },
	{ 1, 255 },
	{ 3, 0 },
	{ 110, 254 },
	{ 174, 127 },
	{ 110, 254 },
	{ 3, 0 }
};

NJS_TEX uv_0018C720[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 }
};

NJS_MESHSET_SADX meshlist_0018C72C[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018C69C, NULL, NULL, NULL, uv_0018C6CC, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_0018C6C6, NULL, NULL, NULL, uv_0018C720, NULL }
};

NJS_VECTOR vertex_0018C75C[] = {
	{ -6.117791f, -2.914902f, -1.989859f },
	{ -19.69712f, 1.457592f, -3.747677f },
	{ -10.119f, 1.457595f, -5.944304f },
	{ -19.02145f, -2.914902f, -6.182514f },
	{ -18.24135f, 1.457595f, -8.583414f },
	{ -19.80156f, 1.457593f, -3.781607f }
};

NJS_VECTOR normal_0018C7A4[] = {
	{ -0.06944399f, -0.456794f, 0.886858f },
	{ -0.043259f, 0.832399f, 0.5524859f },
	{ 0.487124f, 0.521891f, -0.700243f },
	{ -0.34172f, -0.75f, -0.5663289f },
	{ -0.341716f, 0.750002f, -0.566328f },
	{ -0.7431329f, 0.000021f, 0.669144f }
};

NJS_MODEL_SADX attach_0018C7EC = { vertex_0018C75C, normal_0018C7A4, LengthOfArray<Sint32>(vertex_0018C75C), meshlist_0018C72C, matlist_0018C674, LengthOfArray<Uint16>(meshlist_0018C72C), LengthOfArray<Uint16>(matlist_0018C674),{ -12.95967f, -0.728653f, -5.286637f }, 7.594789f, NULL };

NJS_OBJECT object_0018C814 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018C7EC, 554.8054f, -393.4729f, -2884.552f, 0, 0, 0, 1, 1, 1, NULL, &object_0018C640 };

NJS_MATERIAL matlist_0018C848[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018C870[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_0018C89A[] = {
	5, 4, 3
};

NJS_TEX uv_0018C8A0[] = {
	{ 1, 0 },
	{ 1, 127 },
	{ 486, 127 },
	{ 1, 0 },
	{ 486, 127 },
	{ 197, 0 },
	{ 1, 127 },
	{ 1, 255 },
	{ 376, 254 },
	{ 1, 127 },
	{ 376, 254 },
	{ 486, 127 },
	{ 1, 255 },
	{ 1, 0 },
	{ 197, 0 },
	{ 1, 255 },
	{ 197, 0 },
	{ 376, 254 },
	{ 486, 127 },
	{ 376, 254 },
	{ 197, 0 }
};

NJS_TEX uv_0018C8F4[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 254 }
};

NJS_MESHSET_SADX meshlist_0018C900[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018C870, NULL, NULL, NULL, uv_0018C8A0, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_0018C89A, NULL, NULL, NULL, uv_0018C8F4, NULL }
};

NJS_VECTOR vertex_0018C930[] = {
	{ 17.29188f, -2.915182f, 5.61677f },
	{ -5.167955f, 1.457314f, 0.9734989f },
	{ 9.874393f, 1.457314f, 0.552305f },
	{ -19.02152f, -2.915182f, -6.182176f },
	{ -18.24142f, 1.457314f, -8.583076f },
	{ -19.80162f, 1.457314f, -3.781269f }
};

NJS_VECTOR normal_0018C978[] = {
	{ -0.151068f, -0.441811f, 0.884297f },
	{ -0.092116f, 0.837118f, 0.539211f },
	{ 0.399554f, 0.555948f, -0.728888f },
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.66913f }
};

NJS_MODEL_SADX attach_0018C9C0 = { vertex_0018C930, normal_0018C978, LengthOfArray<Sint32>(vertex_0018C930), meshlist_0018C900, matlist_0018C848, LengthOfArray<Uint16>(meshlist_0018C900), LengthOfArray<Uint16>(matlist_0018C848),{ -1.254869f, -0.728934f, -1.483153f }, 19.85925f, NULL };

NJS_OBJECT object_0018C9E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018C9C0, 551.1528f, -393.2729f, -2873.31f, 0, 0, 0, 1, 1, 1, NULL, &object_0018C814 };

NJS_MATERIAL matlist_0018CA1C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018CA44[] = {
	0, 6, 3,
	0, 3, 4,
	0, 4, 1,
	2, 7, 6,
	2, 6, 0,
	1, 4, 5,
	1, 5, 7,
	1, 7, 2,
	3, 5, 4,
	0, 1, 2
};

Sint16 poly_0018CA80[] = {
	6, 7, 5,
	6, 5, 3
};

NJS_TEX uv_0018CA8C[] = {
	{ 484, 127 },
	{ 508, 127 },
	{ 508, 70 },
	{ 484, 127 },
	{ 508, 70 },
	{ 412, 0 },
	{ 484, 127 },
	{ 412, 0 },
	{ 196, 0 },
	{ 376, 255 },
	{ 508, 254 },
	{ 508, 127 },
	{ 376, 255 },
	{ 508, 127 },
	{ 484, 127 },
	{ 196, 0 },
	{ 412, 0 },
	{ 508, 225 },
	{ 196, 0 },
	{ 508, 225 },
	{ 508, 254 },
	{ 196, 0 },
	{ 508, 254 },
	{ 376, 255 },
	{ 508, 70 },
	{ 508, 225 },
	{ 412, 0 },
	{ 484, 127 },
	{ 196, 0 },
	{ 376, 255 }
};

NJS_TEX uv_0018CB04[] = {
	{ 127, 255 },
	{ 0 },
	{ 29, 0 },
	{ 127, 255 },
	{ 29, 0 },
	{ 184, 141 }
};

NJS_MESHSET_SADX meshlist_0018CB1C[] = {
	{ NJD_MESHSET_3 | 0, 10, poly_0018CA44, NULL, NULL, NULL, uv_0018CA8C, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0018CA80, NULL, NULL, NULL, uv_0018CB04, NULL }
};

NJS_VECTOR vertex_0018CB4C[] = {
	{ 17.29134f, -2.91512f, 5.616743f },
	{ -5.168495f, 1.457376f, 0.973472f },
	{ 9.873855f, 1.457377f, 0.552278f },
	{ 18.67256f, -0.968637f, 7.247162f },
	{ 11.13827f, 1.457376f, 6.271861f },
	{ 19.6216f, 1.457376f, 4.32631f },
	{ 19.01983f, -2.91512f, 6.178361f },
	{ 19.79994f, 1.457376f, 3.777459f }
};

NJS_VECTOR normal_0018CBAC[] = {
	{ -0.184423f, -0.923472f, 0.336434f },
	{ -0.161882f, 0.981196f, 0.105109f },
	{ 0.209754f, -0.31202f, -0.926632f },
	{ 0.210844f, -0.09825899f, 0.972569f },
	{ -0.156524f, 0.300003f, 0.941009f },
	{ 0.5623519f, 0.749151f, 0.350048f },
	{ 0.820081f, -0.566947f, -0.077709f },
	{ 0.609336f, 0.750002f, -0.257307f }
};

NJS_MODEL_SADX attach_0018CC0C = { vertex_0018CB4C, normal_0018CBAC, LengthOfArray<Sint32>(vertex_0018CB4C), meshlist_0018CB1C, matlist_0018CA1C, LengthOfArray<Uint16>(meshlist_0018CB1C), LengthOfArray<Uint16>(matlist_0018CA1C),{ 7.315722f, -0.728871f, 3.89972f }, 12.92521f, NULL };

NJS_OBJECT object_0018CC34 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018CC0C, 551.1528f, -393.2729f, -2873.31f, 0, 0, 0, 1, 1, 1, NULL, &object_0018C9E8 };

NJS_MATERIAL matlist_0018CC68[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018CC90[] = {
	0, 3, 1,
	1, 3, 2,
	0, 1, 2
};

Sint16 poly_0018CCA2[] = {
	2, 3, 0
};

NJS_TEX uv_0018CCA8[] = {
	{ 508, 73 },
	{ 508, 7 },
	{ 412, 7 },
	{ 412, 7 },
	{ 508, 7 },
	{ 508, 219 },
	{ 508, 73 },
	{ 412, 7 },
	{ 508, 219 }
};

NJS_TEX uv_0018CCCC[] = {
	{ 28, 0 },
	{ 256, 0 },
	{ 184, 142 }
};

NJS_MESHSET_SADX meshlist_0018CCD8[] = {
	{ NJD_MESHSET_3 | 0, 3, poly_0018CC90, NULL, NULL, NULL, uv_0018CCA8, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_0018CCA2, NULL, NULL, NULL, uv_0018CCCC, NULL }
};

NJS_VECTOR vertex_0018CD08[] = {
	{ 18.67258f, -0.968537f, 7.246932f },
	{ 11.13829f, 1.457476f, 6.271631f },
	{ 19.62163f, 1.457478f, 4.32608f },
	{ 18.23976f, 1.457476f, 8.579039f }
};

NJS_VECTOR normal_0018CD38[] = {
	{ 0.373126f, -0.8666f, 0.331334f },
	{ -0.825245f, -0.464099f, 0.321843f },
	{ 0.876324f, 0.289696f, -0.38488f },
	{ 0.483265f, 0.353553f, 0.800909f }
};

NJS_MODEL_SADX attach_0018CD68 = { vertex_0018CD08, normal_0018CD38, LengthOfArray<Sint32>(vertex_0018CD08), meshlist_0018CCD8, matlist_0018CC68, LengthOfArray<Uint16>(meshlist_0018CCD8), LengthOfArray<Uint16>(matlist_0018CC68),{ 15.37996f, 0.24447f, 6.452559f }, 4.74485f, NULL };

NJS_OBJECT object_0018CD90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018CD68, 551.1528f, -393.2729f, -2873.31f, 0, 0, 0, 1, 1, 1, NULL, &object_0018CC34 };

NJS_MATERIAL matlist_0018CDC4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018CDEC[] = {
	5, 0, 1,
	5, 1, 7,
	2, 4, 6,
	2, 6, 3,
	4, 5, 7,
	4, 7, 6,
	0, 2, 3,
	0, 3, 1
};

Sint16 poly_0018CE1C[] = {
	5, 4, 2,
	5, 2, 0,
	3, 6, 7,
	3, 7, 1
};

NJS_TEX uv_0018CE34[] = {
	{ 0 },
	{ 0, 17 },
	{ 508, 95 },
	{ 0 },
	{ 508, 95 },
	{ 508, 0 },
	{ 0, 235 },
	{ 0, 255 },
	{ 508, 254 },
	{ 0, 235 },
	{ 508, 254 },
	{ 510, 158 },
	{ 0, 255 },
	{ 0 },
	{ 508, 0 },
	{ 0, 255 },
	{ 508, 0 },
	{ 508, 254 },
	{ 0, 17 },
	{ 0, 235 },
	{ 510, 158 },
	{ 0, 17 },
	{ 510, 158 },
	{ 508, 95 }
};

NJS_TEX uv_0018CE94[] = {
	{ 254, 0 },
	{ 0 },
	{ 19, 39 },
	{ 254, 0 },
	{ 19, 39 },
	{ 237, 34 },
	{ 96, 192 },
	{ 0 },
	{ 255, 0 },
	{ 96, 192 },
	{ 255, 0 },
	{ 159, 190 }
};

NJS_MESHSET_SADX meshlist_0018CEC4[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018CDEC, NULL, NULL, NULL, uv_0018CE34, NULL },
	{ NJD_MESHSET_3 | 1, 4, poly_0018CE1C, NULL, NULL, NULL, uv_0018CE94, NULL }
};

NJS_VECTOR vertex_0018CEF4[] = {
	{ -19.69753f, 0.874407f, -4.101749f },
	{ 18.82572f, -1.826633f, 6.775518f },
	{ -18.3621f, 0.780774f, -8.211781f },
	{ 19.20927f, -1.853526f, 5.595083f },
	{ -18.24136f, 1.457522f, -8.583378f },
	{ -19.80156f, 1.45752f, -3.781566f },
	{ 19.79999f, 1.457521f, 3.777015f },
	{ 18.2398f, 1.45752f, 8.578822f }
};

NJS_VECTOR normal_0018CF54[] = {
	{ -0.470542f, -0.864188f, 0.178241f },
	{ 0.122772f, -0.709041f, 0.694398f },
	{ -0.429596f, -0.5972469f, -0.677306f },
	{ 0.629789f, -0.774142f, -0.063791f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.92123f, 0.000001f, 0.389018f },
	{ 0.743145f, 0.000001f, -0.669131f },
	{ 0.617781f, 0.566946f, 0.544902f }
};

NJS_MODEL_SADX attach_0018CFB4 = { vertex_0018CEF4, normal_0018CF54, LengthOfArray<Sint32>(vertex_0018CEF4), meshlist_0018CEC4, matlist_0018CDC4, LengthOfArray<Uint16>(meshlist_0018CEC4), LengthOfArray<Uint16>(matlist_0018CDC4),{ -0.000783f, -0.198002f, -0.002277f }, 21.58026f, NULL };

NJS_OBJECT object_0018CFDC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018CFB4, 542.0212f, -392.7727f, -2845.207f, 0, 0, 0, 1, 1, 1, NULL, &object_0018CD90 };

NJS_MATERIAL matlist_0018D010[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018D038[] = {
	0, 4, 5,
	0, 5, 1,
	4, 2, 3,
	4, 3, 5,
	0, 1, 3,
	0, 3, 2
};

Sint16 poly_0018D05C[] = {
	2, 4, 0,
	5, 3, 1
};

NJS_TEX uv_0018D068[] = {
	{ 0 },
	{ 0, 129 },
	{ 510, 129 },
	{ 0 },
	{ 510, 129 },
	{ 510, 92 },
	{ 0, 129 },
	{ 0, 255 },
	{ 510, 165 },
	{ 0, 129 },
	{ 510, 165 },
	{ 510, 129 },
	{ 0 },
	{ 510, 92 },
	{ 510, 165 },
	{ 0 },
	{ 510, 165 },
	{ 0, 255 }
};

NJS_TEX uv_0018D0B0[] = {
	{ 19, 39 },
	{ 127, 256 },
	{ 238, 33 },
	{ 127, 256 },
	{ 96, 194 },
	{ 159, 192 }
};

NJS_MESHSET_SADX meshlist_0018D0C8[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018D038, NULL, NULL, NULL, uv_0018D068, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0018D05C, NULL, NULL, NULL, uv_0018D0B0, NULL }
};

NJS_VECTOR vertex_0018D0F8[] = {
	{ -19.69751f, 0.874414f, -4.101749f },
	{ 18.82574f, -1.826627f, 6.775518f },
	{ -18.36208f, 0.780781f, -8.211779f },
	{ 19.20929f, -1.853518f, 5.595086f },
	{ -19.02145f, -2.914967f, -6.18247f },
	{ 19.01991f, -2.914968f, 6.17792f }
};

NJS_VECTOR normal_0018D140[] = {
	{ -0.628175f, 0.464273f, 0.624377f },
	{ 0.5201229f, 0.343503f, 0.78197f },
	{ -0.444278f, 0.360313f, -0.8202389f },
	{ 0.698141f, 0.427212f, -0.574534f },
	{ -0.34172f, -0.75f, -0.566328f },
	{ 0.34172f, -0.749999f, 0.5663289f }
};

NJS_MODEL_SADX attach_0018D188 = { vertex_0018D0F8, normal_0018D140, LengthOfArray<Sint32>(vertex_0018D0F8), meshlist_0018D0C8, matlist_0018D010, LengthOfArray<Uint16>(meshlist_0018D0C8), LengthOfArray<Uint16>(matlist_0018D010),{ -0.244114f, -1.020277f, -0.71813f }, 20.84681f, NULL };

NJS_OBJECT object_0018D1B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018D188, 542.0212f, -392.7727f, -2845.207f, 0, 0, 0, 1, 1, 1, NULL, &object_0018CFDC };

NJS_MATERIAL matlist_0018D1E4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018D20C[] = {
	0, 4, 5,
	0, 5, 7,
	0, 7, 1,
	4, 2, 3,
	4, 3, 6,
	4, 6, 5,
	1, 7, 6,
	1, 6, 3,
	0, 1, 3,
	0, 3, 2
};

Sint16 poly_0018D248[] = {
	2, 4, 0,
	5, 6, 7
};

NJS_TEX uv_0018D254[] = {
	{ 0, 69 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0, 69 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 69 },
	{ 510, 0 },
	{ 167, 0 },
	{ 0, 127 },
	{ 0, 172 },
	{ 254, 255 },
	{ 0, 127 },
	{ 254, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 167, 0 },
	{ 510, 0 },
	{ 510, 254 },
	{ 167, 0 },
	{ 510, 254 },
	{ 254, 255 },
	{ 0, 69 },
	{ 167, 0 },
	{ 254, 255 },
	{ 0, 69 },
	{ 254, 255 },
	{ 0, 172 }
};

NJS_TEX uv_0018D2CC[] = {
	{ 82, 164 },
	{ 127, 255 },
	{ 185, 139 },
	{ 127, 254 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0018D2E4[] = {
	{ NJD_MESHSET_3 | 0, 10, poly_0018D20C, NULL, NULL, NULL, uv_0018D254, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0018D248, NULL, NULL, NULL, uv_0018D2CC, NULL }
};

NJS_VECTOR vertex_0018D314[] = {
	{ -19.37517f, -0.932158f, -5.093697f },
	{ -7.27048f, 1.457545f, 0.290057f },
	{ -18.74525f, -1.366991f, -7.032405f },
	{ 0.730481f, 1.457547f, -2.419026f },
	{ -19.02142f, -2.914949f, -6.182433f },
	{ 19.01993f, -2.914949f, 6.177955f },
	{ 19.80003f, 1.457548f, 3.777048f },
	{ 18.23983f, 1.457546f, 8.578858f }
};

NJS_VECTOR normal_0018D374[] = {
	{ -0.742741f, 0.167511f, 0.648287f },
	{ -0.13687f, 0.964276f, 0.2268f },
	{ -0.466283f, 0.283932f, -0.837832f },
	{ 0.127555f, 0.665749f, -0.735193f },
	{ -0.147016f, -0.7071069f, -0.691655f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.6646889f, 0.447214f, -0.598488f },
	{ 0.207912f, 0, 0.978148f }
};

NJS_MODEL_SADX attach_0018D3D4 = { vertex_0018D314, normal_0018D374, LengthOfArray<Sint32>(vertex_0018D314), meshlist_0018D2E4, matlist_0018D1E4, LengthOfArray<Uint16>(meshlist_0018D2E4), LengthOfArray<Uint16>(matlist_0018D1E4),{ 0.212431f, -0.728701f, 0.773227f }, 21.08561f, NULL };

NJS_OBJECT object_0018D3FC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018D3D4, 534.716f, -392.3727f, -2822.724f, 0, 0, 0, 1, 1, 1, NULL, &object_0018D1B0 };

NJS_MATERIAL matlist_0018D430[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018D458[] = {
	5, 0, 1,
	2, 4, 3,
	4, 5, 1,
	4, 1, 3,
	0, 2, 3,
	0, 3, 1
};

Sint16 poly_0018D47C[] = {
	5, 4, 2,
	5, 2, 0
};

NJS_TEX uv_0018D488[] = {
	{ 1, 0 },
	{ 1, 69 },
	{ 168, 0 },
	{ 1, 172 },
	{ 1, 255 },
	{ 254, 254 },
	{ 1, 255 },
	{ 1, 0 },
	{ 168, 0 },
	{ 1, 255 },
	{ 168, 0 },
	{ 254, 254 },
	{ 1, 69 },
	{ 1, 172 },
	{ 254, 254 },
	{ 1, 69 },
	{ 254, 254 },
	{ 168, 0 }
};

NJS_TEX uv_0018D4D0[] = {
	{ 254, 0 },
	{ 0 },
	{ 82, 167 },
	{ 254, 0 },
	{ 82, 167 },
	{ 185, 141 }
};

NJS_MESHSET_SADX meshlist_0018D4E8[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018D458, NULL, NULL, NULL, uv_0018D488, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0018D47C, NULL, NULL, NULL, uv_0018D4D0, NULL }
};

NJS_VECTOR vertex_0018D518[] = {
	{ -19.37521f, -0.9321319f, -5.093676f },
	{ -7.270884f, 1.4575f, 0.289917f },
	{ -18.74526f, -1.366981f, -7.032454f },
	{ 0.730077f, 1.457501f, -2.419165f },
	{ -18.24134f, 1.457501f, -8.583356f },
	{ -19.80155f, 1.4575f, -3.781545f }
};

NJS_VECTOR normal_0018D560[] = {
	{ -0.371811f, -0.858389f, 0.353448f },
	{ -0.153345f, 0.441944f, 0.883839f },
	{ -0.6339009f, -0.598916f, -0.489356f },
	{ 0.28197f, -0.934001f, -0.219396f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.970333f, 0.223607f, 0.09194899f }
};

NJS_MODEL_SADX attach_0018D5A8 = { vertex_0018D518, normal_0018D560, LengthOfArray<Sint32>(vertex_0018D518), meshlist_0018D4E8, matlist_0018D430, LengthOfArray<Uint16>(meshlist_0018D4E8), LengthOfArray<Uint16>(matlist_0018D430),{ -9.535735f, 0.04526f, -4.146719f }, 11.18348f, NULL };

NJS_OBJECT object_0018D5D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018D5A8, 534.716f, -392.3727f, -2822.724f, 0, 0, 0, 1, 1, 1, NULL, &object_0018D3FC };

NJS_MATERIAL matlist_0018D604[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018D62C[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_0018D656[] = {
	5, 4, 3
};

NJS_TEX uv_0018D65C[] = {
	{ 3, 0 },
	{ 3, 127 },
	{ 159, 127 },
	{ 3, 0 },
	{ 159, 127 },
	{ 209, 0 },
	{ 3, 127 },
	{ 3, 255 },
	{ 244, 254 },
	{ 3, 127 },
	{ 244, 254 },
	{ 159, 127 },
	{ 3, 255 },
	{ 3, 0 },
	{ 209, 0 },
	{ 3, 255 },
	{ 209, 0 },
	{ 244, 254 },
	{ 159, 127 },
	{ 244, 254 },
	{ 209, 0 }
};

NJS_TEX uv_0018D6B0[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 }
};

NJS_MESHSET_SADX meshlist_0018D6BC[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018D62C, NULL, NULL, NULL, uv_0018D65C, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_0018D656, NULL, NULL, NULL, uv_0018D6B0, NULL }
};

NJS_VECTOR vertex_0018D6EC[] = {
	{ -7.203285f, -2.915001f, -2.342435f },
	{ -4.211308f, 1.457493f, 1.284093f },
	{ -0.055615f, 1.457496f, -2.674394f },
	{ -19.02148f, -2.915003f, -6.182402f },
	{ -18.24137f, 1.457496f, -8.583304f },
	{ -19.80158f, 1.457493f, -3.781493f }
};

NJS_VECTOR normal_0018D734[] = {
	{ 0.07799999f, -0.858493f, 0.506858f },
	{ 0.131763f, 0.499529f, 0.856218f },
	{ 0.59289f, -0.431227f, -0.680092f },
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f }
};

NJS_MODEL_SADX attach_0018D77C = { vertex_0018D6EC, normal_0018D734, LengthOfArray<Sint32>(vertex_0018D6EC), meshlist_0018D6BC, matlist_0018D604, LengthOfArray<Uint16>(meshlist_0018D6BC), LengthOfArray<Uint16>(matlist_0018D604),{ -9.928596f, -0.728754f, -3.649606f }, 11.03709f, NULL };

NJS_OBJECT object_0018D7A4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018D77C, 532.8898f, -392.2727f, -2817.103f, 0, 0, 0, 1, 1, 1, NULL, &object_0018D5D0 };

NJS_MATERIAL matlist_0018D7D8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018D800[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

Sint16 poly_0018D82A[] = {
	3, 4, 5
};

NJS_TEX uv_0018D830[] = {
	{ 157, 127 },
	{ 506, 127 },
	{ 506, 0 },
	{ 157, 127 },
	{ 506, 0 },
	{ 207, 0 },
	{ 242, 255 },
	{ 506, 254 },
	{ 506, 127 },
	{ 242, 255 },
	{ 506, 127 },
	{ 157, 127 },
	{ 207, 0 },
	{ 506, 0 },
	{ 506, 254 },
	{ 207, 0 },
	{ 506, 254 },
	{ 242, 255 },
	{ 157, 127 },
	{ 207, 0 },
	{ 242, 255 }
};

NJS_TEX uv_0018D884[] = {
	{ 127, 254 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0018D890[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018D800, NULL, NULL, NULL, uv_0018D830, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_0018D82A, NULL, NULL, NULL, uv_0018D884, NULL }
};

NJS_VECTOR vertex_0018D8C0[] = {
	{ -7.203178f, -2.914967f, -2.342583f },
	{ -4.211206f, 1.457527f, 1.283946f },
	{ -0.055511f, 1.457531f, -2.674539f },
	{ 19.01989f, -2.914966f, 6.177813f },
	{ 19.79999f, 1.457531f, 3.776907f },
	{ 18.23978f, 1.457531f, 8.578716f }
};

NJS_VECTOR normal_0018D908[] = {
	{ -0.6616099f, -0.689073f, 0.29572f },
	{ -0.310948f, 0.94021f, 0.138985f },
	{ 0.028663f, 0.32313f, -0.94592f },
	{ 0.609337f, -0.75f, -0.257311f },
	{ 0.609336f, 0.75f, -0.25731f },
	{ 0.207911f, 0, 0.978148f }
};

NJS_MODEL_SADX attach_0018D950 = { vertex_0018D8C0, normal_0018D908, LengthOfArray<Sint32>(vertex_0018D8C0), meshlist_0018D890, matlist_0018D7D8, LengthOfArray<Uint16>(meshlist_0018D890), LengthOfArray<Uint16>(matlist_0018D7D8),{ 6.298407f, -0.728718f, 2.952089f }, 14.62707f, NULL };

NJS_OBJECT object_0018D978 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018D950, 532.8898f, -392.2727f, -2817.103f, 0, 0, 0, 1, 1, 1, NULL, &object_0018D7A4 };

NJS_MATERIAL matlist_0018D9AC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018D9D4[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

Sint16 poly_0018D9FE[] = {
	3, 4, 5
};

NJS_TEX uv_0018DA04[] = {
	{ 336, 127 },
	{ 508, 127 },
	{ 508, 0 },
	{ 336, 127 },
	{ 508, 0 },
	{ 330, 0 },
	{ 458, 255 },
	{ 508, 254 },
	{ 508, 127 },
	{ 458, 255 },
	{ 508, 127 },
	{ 336, 127 },
	{ 330, 0 },
	{ 508, 0 },
	{ 508, 254 },
	{ 330, 0 },
	{ 508, 254 },
	{ 458, 255 },
	{ 336, 127 },
	{ 330, 0 },
	{ 458, 255 }
};

NJS_TEX uv_0018DA58[] = {
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0018DA64[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018D9D4, NULL, NULL, NULL, uv_0018DA04, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_0018D9FE, NULL, NULL, NULL, uv_0018DA58, NULL }
};

NJS_VECTOR vertex_0018DA94[] = {
	{ 6.223852f, -2.914986f, 2.020303f },
	{ 4.997734f, 1.457508f, 4.276289f },
	{ 16.03042f, 1.457508f, 2.552278f },
	{ 19.01991f, -2.914987f, 6.177997f },
	{ 19.80001f, 1.457508f, 3.777091f },
	{ 18.23981f, 1.457508f, 8.578902f }
};

NJS_VECTOR normal_0018DADC[] = {
	{ -0.353147f, -0.9335f, -0.062172f },
	{ -0.20721f, 0.977616f, -0.036479f },
	{ 0.151596f, 0.162112f, -0.975058f },
	{ 0.609337f, -0.75f, -0.257312f },
	{ 0.609336f, 0.75f, -0.257311f },
	{ 0.207912f, 0, 0.978148f }
};

NJS_MODEL_SADX attach_0018DB24 = { vertex_0018DA94, normal_0018DADC, LengthOfArray<Sint32>(vertex_0018DA94), meshlist_0018DA64, matlist_0018D9AC, LengthOfArray<Uint16>(meshlist_0018DA64), LengthOfArray<Uint16>(matlist_0018D9AC),{ 12.39887f, -0.728739f, 5.299603f }, 8.095084f, NULL };

NJS_OBJECT object_0018DB4C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018DB24, 527.4109f, -391.9727f, -2800.241f, 0, 0, 0, 1, 1, 1, NULL, &object_0018D978 };

NJS_MATERIAL matlist_0018DB80[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018DBA8[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_0018DBD2[] = {
	5, 4, 3
};

NJS_TEX uv_0018DBD8[] = {
	{ 0 },
	{ 0, 127 },
	{ 336, 127 },
	{ 0 },
	{ 336, 127 },
	{ 330, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 456, 254 },
	{ 0, 127 },
	{ 456, 254 },
	{ 336, 127 },
	{ 0, 255 },
	{ 0 },
	{ 330, 0 },
	{ 0, 255 },
	{ 330, 0 },
	{ 456, 254 },
	{ 336, 127 },
	{ 456, 254 },
	{ 330, 0 }
};

NJS_TEX uv_0018DC2C[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 }
};

NJS_MESHSET_SADX meshlist_0018DC38[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018DBA8, NULL, NULL, NULL, uv_0018DBD8, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_0018DBD2, NULL, NULL, NULL, uv_0018DC2C, NULL }
};

NJS_VECTOR vertex_0018DC68[] = {
	{ 6.223799f, -2.914885f, 2.020322f },
	{ 4.997679f, 1.457609f, 4.276308f },
	{ 16.03037f, 1.45761f, 2.552297f },
	{ -19.02149f, -2.914885f, -6.182374f },
	{ -18.24139f, 1.457611f, -8.583281f },
	{ -19.8016f, 1.45761f, -3.781469f }
};

NJS_VECTOR normal_0018DCB0[] = {
	{ -0.049452f, -0.744584f, 0.665695f },
	{ -0.062823f, 0.529967f, 0.845688f },
	{ 0.616356f, -0.385926f, -0.686416f },
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f }
};

NJS_MODEL_SADX attach_0018DCF8 = { vertex_0018DC68, normal_0018DCB0, LengthOfArray<Sint32>(vertex_0018DC68), meshlist_0018DC38, matlist_0018DB80, LengthOfArray<Uint16>(meshlist_0018DC38), LengthOfArray<Uint16>(matlist_0018DB80),{ -1.885612f, -0.728637f, -2.153486f }, 19.03485f, NULL };

NJS_OBJECT object_0018DD20 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018DCF8, 527.4109f, -391.9727f, -2800.241f, 0, 0, 0, 1, 1, 1, NULL, &object_0018DB4C };

NJS_MATERIAL matlist_0018DD54[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018DD7C[] = {
	4, 0, 1,
	4, 1, 5,
	2, 4, 5,
	2, 5, 3,
	0, 2, 3,
	0, 3, 1
};

Sint16 poly_0018DDA0[] = {
	4, 2, 0,
	3, 5, 1
};

NJS_TEX uv_0018DDAC[] = {
	{ 0, 11 },
	{ 0, 15 },
	{ 510, 90 },
	{ 0, 11 },
	{ 510, 90 },
	{ 510, 11 },
	{ 0, 17 },
	{ 0, 11 },
	{ 510, 11 },
	{ 0, 17 },
	{ 510, 11 },
	{ 510, 131 },
	{ 0, 15 },
	{ 0, 17 },
	{ 510, 131 },
	{ 0, 15 },
	{ 510, 131 },
	{ 510, 90 }
};

NJS_TEX uv_0018DDF4[] = {
	{ 253, 0 },
	{ 247, 0 },
	{ 249, 9 },
	{ 128, 0 },
	{ 253, 0 },
	{ 171, 166 }
};

NJS_MESHSET_SADX meshlist_0018DE0C[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018DD7C, NULL, NULL, NULL, uv_0018DDAC, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0018DDA0, NULL, NULL, NULL, uv_0018DDF4, NULL }
};

NJS_VECTOR vertex_0018DE3C[] = {
	{ -19.77559f, 1.311886f, -3.861354f },
	{ 18.74961f, -1.400078f, 7.009917f },
	{ -19.76205f, 1.457525f, -3.903017f },
	{ 19.01521f, 1.457527f, 6.192476f },
	{ -19.80157f, 1.457527f, -3.781381f },
	{ 18.23978f, 1.457525f, 8.579006f }
};

NJS_VECTOR normal_0018DE84[] = {
	{ -0.393961f, -0.575446f, -0.716698f },
	{ 0.370287f, -0.7255369f, 0.580072f },
	{ -0.31858f, 0.7686279f, -0.554722f },
	{ 0.666855f, 0.197622f, -0.718506f },
	{ -0.7431419f, -0.00013f, 0.669134f },
	{ 0.341723f, 0.750003f, 0.566323f }
};

NJS_MODEL_SADX attach_0018DECC = { vertex_0018DE3C, normal_0018DE84, LengthOfArray<Sint32>(vertex_0018DE3C), meshlist_0018DE0C, matlist_0018DD54, LengthOfArray<Uint16>(meshlist_0018DE0C), LengthOfArray<Uint16>(matlist_0018DD54),{ -0.39318f, 0.028725f, 2.337995f }, 20.38717f, NULL };

NJS_OBJECT object_0018DEF4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018DECC, 525.5847f, -391.8727f, -2794.62f, 0, 0, 0, 1, 1, 1, NULL, &object_0018DD20 };

NJS_MATERIAL matlist_0018DF28[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018DF50[] = {
	0, 4, 6,
	0, 6, 1,
	4, 5, 7,
	4, 7, 6,
	5, 2, 3,
	5, 3, 7,
	0, 1, 3,
	0, 3, 2
};

Sint16 poly_0018DF80[] = {
	2, 5, 4,
	2, 4, 0,
	6, 7, 3,
	6, 3, 1
};

NJS_TEX uv_0018DF98[] = {
	{ 0 },
	{ 0, 125 },
	{ 510, 125 },
	{ 0 },
	{ 510, 125 },
	{ 510, 80 },
	{ 0, 125 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, 125 },
	{ 510, 254 },
	{ 510, 125 },
	{ 0, 254 },
	{ 0, 2 },
	{ 510, 124 },
	{ 0, 254 },
	{ 510, 124 },
	{ 510, 254 },
	{ 0 },
	{ 510, 80 },
	{ 510, 124 },
	{ 0 },
	{ 510, 124 },
	{ 0, 2 }
};

NJS_TEX uv_0018DFF8[] = {
	{ 252, 0 },
	{ 0 },
	{ 129, 254 },
	{ 252, 0 },
	{ 129, 254 },
	{ 255, 8 },
	{ 129, 255 },
	{ 0 },
	{ 130, 0 },
	{ 129, 255 },
	{ 130, 0 },
	{ 174, 166 }
};

NJS_MESHSET_SADX meshlist_0018E028[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018DF50, NULL, NULL, NULL, uv_0018DF98, NULL },
	{ NJD_MESHSET_3 | 1, 4, poly_0018DF80, NULL, NULL, NULL, uv_0018DFF8, NULL }
};

NJS_VECTOR vertex_0018E058[] = {
	{ -19.77562f, 1.311848f, -3.861353f },
	{ 18.74958f, -1.400112f, 7.009918f },
	{ -19.76209f, 1.457491f, -3.903015f },
	{ 19.01518f, 1.457493f, 6.192477f },
	{ -19.0215f, -2.915003f, -6.182288f },
	{ -18.2414f, 1.457491f, -8.583193f },
	{ 19.01985f, -2.915007f, 6.178101f },
	{ 19.79995f, 1.457493f, 3.777197f }
};

NJS_VECTOR normal_0018E0B8[] = {
	{ -0.5216489f, -0.112568f, 0.845701f },
	{ 0.208837f, -0.100341f, 0.972789f },
	{ -0.850762f, 0.5110559f, 0.122581f },
	{ 0.369533f, 0.6703719f, 0.643464f },
	{ -0.617781f, -0.566947f, -0.544901f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ 0.617782f, -0.566947f, 0.544901f },
	{ 0.743145f, 0, -0.669131f }
};

NJS_MODEL_SADX attach_0018E118 = { vertex_0018E058, normal_0018E0B8, LengthOfArray<Sint32>(vertex_0018E058), meshlist_0018E028, matlist_0018DF28, LengthOfArray<Uint16>(meshlist_0018E028), LengthOfArray<Uint16>(matlist_0018DF28),{ 0.012164f, -0.728757f, -0.7866369f }, 21.26837f, NULL };

NJS_OBJECT object_0018E140 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018E118, 525.5847f, -391.8727f, -2794.62f, 0, 0, 0, 1, 1, 1, NULL, &object_0018DEF4 };

NJS_MATERIAL matlist_0018E174[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018E19C[] = {
	0, 5, 1,
	2, 4, 3,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2,
	0, 2, 3
};

Sint16 poly_0018E1C0[] = {
	3, 4, 5,
	3, 5, 0
};

NJS_TEX uv_0018E1CC[] = {
	{ 508, 68 },
	{ 508, 0 },
	{ 175, 0 },
	{ 286, 255 },
	{ 508, 255 },
	{ 508, 199 },
	{ 175, 0 },
	{ 508, 0 },
	{ 508, 255 },
	{ 175, 0 },
	{ 508, 255 },
	{ 286, 255 },
	{ 508, 68 },
	{ 175, 0 },
	{ 286, 255 },
	{ 508, 68 },
	{ 286, 255 },
	{ 508, 199 }
};

NJS_TEX uv_0018E214[] = {
	{ 55, 111 },
	{ 0 },
	{ 255, 0 },
	{ 55, 111 },
	{ 255, 0 },
	{ 186, 137 }
};

NJS_MESHSET_SADX meshlist_0018E22C[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018E19C, NULL, NULL, NULL, uv_0018E1CC, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0018E1C0, NULL, NULL, NULL, uv_0018E214, NULL }
};

NJS_VECTOR vertex_0018E25C[] = {
	{ 18.6612f, -0.904445f, 7.281968f },
	{ -6.736193f, 1.457486f, 0.463694f },
	{ 3.204674f, 1.457487f, -1.615074f },
	{ 19.45803f, -0.459338f, 4.829591f },
	{ 19.80001f, 1.457488f, 3.777078f },
	{ 18.2398f, 1.457486f, 8.57889f }
};

NJS_VECTOR normal_0018E2A4[] = {
	{ 0.228336f, -0.931242f, 0.283992f },
	{ -0.351767f, 0.593859f, 0.723596f },
	{ 0.098607f, -0.767658f, -0.6332279f },
	{ 0.811621f, -0.564297f, -0.151133f },
	{ 0.609336f, 0.75f, -0.257311f },
	{ 0.730969f, 0.223605f, 0.6447369f }
};

NJS_MODEL_SADX attach_0018E2EC = { vertex_0018E25C, normal_0018E2A4, LengthOfArray<Sint32>(vertex_0018E25C), meshlist_0018E22C, matlist_0018E174, LengthOfArray<Uint16>(meshlist_0018E22C), LengthOfArray<Uint16>(matlist_0018E174),{ 6.531909f, 0.276521f, 3.481908f }, 14.21341f, NULL };

NJS_OBJECT object_0018E314 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018E2EC, 521.9321f, -391.6727f, -2783.379f, 0, 0, 0, 1, 1, 1, NULL, &object_0018E140 };

NJS_MATERIAL matlist_0018E348[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018E370[] = {
	6, 4, 7,
	6, 7, 0,
	6, 0, 1,
	4, 5, 2,
	4, 2, 3,
	4, 3, 7,
	5, 6, 1,
	5, 1, 2,
	0, 3, 2,
	0, 2, 1
};

Sint16 poly_0018E3AC[] = {
	6, 5, 4,
	7, 3, 0
};

NJS_TEX uv_0018E3B8[] = {
	{ 0 },
	{ 0, 127 },
	{ 508, 127 },
	{ 0 },
	{ 508, 127 },
	{ 508, 68 },
	{ 0 },
	{ 508, 68 },
	{ 175, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 286, 254 },
	{ 0, 127 },
	{ 286, 254 },
	{ 510, 199 },
	{ 0, 127 },
	{ 510, 199 },
	{ 508, 127 },
	{ 0, 255 },
	{ 0 },
	{ 175, 0 },
	{ 0, 255 },
	{ 175, 0 },
	{ 286, 254 },
	{ 508, 68 },
	{ 510, 199 },
	{ 286, 254 },
	{ 508, 68 },
	{ 286, 254 },
	{ 175, 0 }
};

NJS_TEX uv_0018E430[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 55, 111 },
	{ 186, 137 }
};

NJS_MESHSET_SADX meshlist_0018E448[] = {
	{ NJD_MESHSET_3 | 0, 10, poly_0018E370, NULL, NULL, NULL, uv_0018E3B8, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0018E3AC, NULL, NULL, NULL, uv_0018E430, NULL }
};

NJS_VECTOR vertex_0018E478[] = {
	{ 18.66117f, -0.904431f, 7.281895f },
	{ -6.736219f, 1.4575f, 0.463618f },
	{ 3.204646f, 1.457502f, -1.61515f },
	{ 19.458f, -0.459323f, 4.829516f },
	{ -19.02148f, -2.914995f, -6.182481f },
	{ -18.24138f, 1.457501f, -8.583386f },
	{ -19.80158f, 1.4575f, -3.781574f },
	{ 19.01987f, -2.914995f, 6.177908f }
};

NJS_VECTOR normal_0018E4D8[] = {
	{ 0.1924f, 0.373218f, 0.907574f },
	{ -0.08464199f, 0.922256f, 0.377199f },
	{ 0.254816f, 0.8126f, -0.524166f },
	{ 0.799305f, -0.010067f, -0.600841f },
	{ -0.147016f, -0.7071069f, -0.691655f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.6200989f, -0.176776f, 0.764347f },
	{ 0.341719f, -0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_0018E538 = { vertex_0018E478, normal_0018E4D8, LengthOfArray<Sint32>(vertex_0018E478), meshlist_0018E448, matlist_0018E348, LengthOfArray<Uint16>(meshlist_0018E448), LengthOfArray<Uint16>(matlist_0018E348),{ -0.17179f, -0.728747f, -0.650746f }, 21.17208f, NULL };

NJS_OBJECT object_0018E560 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018E538, 521.9321f, -391.6727f, -2783.379f, 0, 0, 0, 1, 1, 1, NULL, &object_0018E314 };

NJS_MATERIAL matlist_0018E594[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018E5BC[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_0018E5E6[] = {
	5, 4, 3
};

NJS_TEX uv_0018E5EC[] = {
	{ 0 },
	{ 0, 127 },
	{ 272, 127 },
	{ 0 },
	{ 272, 127 },
	{ 400, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 504, 254 },
	{ 0, 127 },
	{ 504, 254 },
	{ 272, 127 },
	{ 0, 255 },
	{ 0 },
	{ 400, 0 },
	{ 0, 255 },
	{ 400, 0 },
	{ 504, 254 },
	{ 272, 127 },
	{ 504, 254 },
	{ 400, 0 }
};

NJS_TEX uv_0018E640[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 }
};

NJS_MESHSET_SADX meshlist_0018E64C[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018E5BC, NULL, NULL, NULL, uv_0018E5EC, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_0018E5E6, NULL, NULL, NULL, uv_0018E640, NULL }
};

NJS_VECTOR vertex_0018E67C[] = {
	{ 1.336616f, -2.914994f, 0.432424f },
	{ 10.20596f, 1.4575f, 5.968626f },
	{ 19.48796f, 1.457504f, 3.67578f },
	{ -19.02149f, -2.914994f, -6.182329f },
	{ -18.24138f, 1.457502f, -8.583234f },
	{ -19.80159f, 1.457501f, -3.78142f }
};

NJS_VECTOR normal_0018E6C4[] = {
	{ -0.054232f, -0.872995f, 0.484705f },
	{ -0.10018f, 0.433899f, 0.8953739f },
	{ 0.413351f, -0.544386f, -0.729921f },
	{ -0.34172f, -0.75f, -0.5663289f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f }
};

NJS_MODEL_SADX attach_0018E70C = { vertex_0018E67C, normal_0018E6C4, LengthOfArray<Sint32>(vertex_0018E67C), meshlist_0018E64C, matlist_0018E594, LengthOfArray<Uint16>(meshlist_0018E64C), LengthOfArray<Uint16>(matlist_0018E594),{ -0.156816f, -0.728745f, -1.307304f }, 20.94889f, NULL };

NJS_OBJECT object_0018E734 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018E70C, 518.2795f, -391.4727f, -2772.137f, 0, 0, 0, 1, 1, 1, NULL, &object_0018E560 };

NJS_MATERIAL matlist_0018E768[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018E790[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

Sint16 poly_0018E7BA[] = {
	3, 4, 5
};

NJS_TEX uv_0018E7C0[] = {
	{ 272, 127 },
	{ 508, 127 },
	{ 508, 0 },
	{ 272, 127 },
	{ 508, 0 },
	{ 400, 0 },
	{ 504, 255 },
	{ 508, 255 },
	{ 508, 127 },
	{ 504, 255 },
	{ 508, 127 },
	{ 272, 127 },
	{ 400, 0 },
	{ 508, 0 },
	{ 508, 255 },
	{ 400, 0 },
	{ 508, 255 },
	{ 504, 255 },
	{ 272, 127 },
	{ 400, 0 },
	{ 504, 255 }
};

NJS_TEX uv_0018E814[] = {
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0018E820[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018E790, NULL, NULL, NULL, uv_0018E7C0, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_0018E7BA, NULL, NULL, NULL, uv_0018E814, NULL }
};

NJS_VECTOR vertex_0018E850[] = {
	{ 1.336511f, -2.915027f, 0.432277f },
	{ 10.20585f, 1.457468f, 5.968477f },
	{ 19.48785f, 1.45747f, 3.675633f },
	{ 19.01987f, -2.915027f, 6.17795f },
	{ 19.79997f, 1.45747f, 3.777046f },
	{ 18.23977f, 1.457469f, 8.578856f }
};

NJS_VECTOR normal_0018E898[] = {
	{ -0.475384f, -0.778533f, 0.409752f },
	{ -0.16056f, 0.977276f, 0.138392f },
	{ 0.177031f, 0.369016f, -0.912407f },
	{ 0.609337f, -0.75f, -0.257311f },
	{ 0.609336f, 0.75f, -0.257311f },
	{ 0.207911f, 0, 0.978148f }
};

NJS_MODEL_SADX attach_0018E8E0 = { vertex_0018E850, normal_0018E898, LengthOfArray<Sint32>(vertex_0018E850), meshlist_0018E820, matlist_0018E768, LengthOfArray<Uint16>(meshlist_0018E820), LengthOfArray<Uint16>(matlist_0018E768),{ 10.56824f, -0.7287779f, 4.505568f }, 10.09042f, NULL };

NJS_OBJECT object_0018E908 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018E8E0, 518.2795f, -391.4727f, -2772.137f, 0, 0, 0, 1, 1, 1, NULL, &object_0018E734 };

NJS_MATERIAL matlist_0018E93C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018E950[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0018E974[] = {
	{ 510, 254 },
	{ 510, 55 },
	{ 0, 55 },
	{ 510, 254 },
	{ 0, 55 },
	{ 0, 255 },
	{ 510, 55 },
	{ 510, 0 },
	{ 0 },
	{ 510, 55 },
	{ 0 },
	{ 0, 55 },
	{ 510, 0 },
	{ 510, 254 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0018E9BC[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018E950, NULL, NULL, NULL, uv_0018E974, NULL }
};

NJS_VECTOR vertex_0018E9D4[] = {
	{ -0.679968f, 5.042087f, -0.22049f },
	{ 0.615158f, 5.042087f, -0.495777f },
	{ 0.206001f, 5.042087f, 0.763479f },
	{ -0.679968f, -5.101338f, -0.22049f },
	{ 0.615158f, -5.101338f, -0.495777f },
	{ 0.206001f, -5.101338f, 0.763479f }
};

NJS_VECTOR normal_0018EA1C[] = {
	{ -0.669131f, 0, -0.743145f },
	{ 0.978148f, 0, -0.207912f },
	{ -0.309017f, 0, 0.9510559f },
	{ -0.978148f, 0, 0.207912f },
	{ 0.309017f, 0, -0.951057f },
	{ 0.669131f, 0, 0.743145f }
};

NJS_MODEL_SADX attach_0018EA64 = { vertex_0018E9D4, normal_0018EA1C, LengthOfArray<Sint32>(vertex_0018E9D4), meshlist_0018E9BC, matlist_0018E93C, LengthOfArray<Uint16>(meshlist_0018E9BC), LengthOfArray<Uint16>(matlist_0018E93C),{ -0.032405f, -0.029626f, 0.133851f }, 5.110651f, NULL };

NJS_OBJECT object_0018EA8C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018EA64, 526.4002f, -384.8095f, -2738.612f, 0, 0, 0, 1, 1, 1, NULL, &object_0018E908 };

NJS_MATERIAL matlist_0018EAC0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018EAD4[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_0018EAF8[] = {
	{ 510, 200 },
	{ 510, 71 },
	{ 0, 55 },
	{ 510, 200 },
	{ 0, 55 },
	{ 0, 255 },
	{ 510, 71 },
	{ 510, 35 },
	{ 0 },
	{ 510, 71 },
	{ 0 },
	{ 0, 55 },
	{ 510, 35 },
	{ 510, 200 },
	{ 0, 255 },
	{ 510, 35 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0018EB40[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018EAD4, NULL, NULL, NULL, uv_0018EAF8, NULL }
};

NJS_VECTOR vertex_0018EB58[] = {
	{ -0.679968f, 5.042087f, -0.22049f },
	{ 0.615158f, 5.042087f, -0.495777f },
	{ 0.206001f, 5.042087f, 0.763479f },
	{ -1.047152f, -5.101338f, -0.339554f },
	{ 0.9473439f, -5.101338f, -0.763497f },
	{ 0.317241f, -5.101338f, 1.175758f }
};

NJS_VECTOR normal_0018EBA0[] = {
	{ -0.668767f, 0.032927f, -0.7427419f },
	{ 0.97745f, 0.037495f, -0.207813f },
	{ -0.308871f, 0.035244f, 0.950451f },
	{ -0.977617f, 0.03295f, 0.207798f },
	{ 0.30878f, 0.035199f, -0.950482f },
	{ 0.668624f, 0.037518f, 0.742654f }
};

NJS_MODEL_SADX attach_0018EBE8 = { vertex_0018EB58, normal_0018EBA0, LengthOfArray<Sint32>(vertex_0018EB58), meshlist_0018EB40, matlist_0018EAC0, LengthOfArray<Uint16>(meshlist_0018EB40), LengthOfArray<Uint16>(matlist_0018EAC0),{ -0.049904f, -0.029626f, 0.206131f }, 5.163568f, NULL };

NJS_OBJECT object_0018EC10 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018EBE8, 491.6956f, -384.8095f, -2749.778f, 0, 0, 0, 1, 1, 1, NULL, &object_0018EA8C };

NJS_MATERIAL matlist_0018EC44[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018EC58[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_0018EC84[] = {
	{ 510, 255 },
	{ 510, 55 },
	{ 0, 68 },
	{ 510, 255 },
	{ 0, 68 },
	{ 0, 211 },
	{ 510, 55 },
	{ 510, 0 },
	{ 0, 28 },
	{ 510, 55 },
	{ 0, 28 },
	{ 0, 68 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 211 },
	{ 510, 0 },
	{ 0, 211 },
	{ 0, 28 },
	{ 510, 55 },
	{ 510, 255 },
	{ 510, 0 }
};

NJS_MESHSET_SADX meshlist_0018ECD8[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018EC58, NULL, NULL, NULL, uv_0018EC84, NULL }
};

NJS_VECTOR vertex_0018ECF0[] = {
	{ -0.798393f, 5.949662f, -0.256987f },
	{ 0.722295f, 5.949662f, -0.577842f },
	{ 0.241878f, 5.949662f, 0.889856f },
	{ -0.574383f, -5.101338f, -0.184883f },
	{ 0.519637f, -5.101338f, -0.415714f },
	{ 0.174013f, -5.101338f, 0.640184f }
};

NJS_VECTOR normal_0018ED38[] = {
	{ -0.582667f, 0.489077f, -0.649078f },
	{ 0.8550439f, 0.48638f, -0.179816f },
	{ -0.267068f, 0.485809f, 0.8322639f },
	{ -0.97721f, -0.018429f, 0.211472f },
	{ 0.310364f, -0.019635f, -0.950415f },
	{ 0.667362f, -0.020917f, 0.7444389f }
};

NJS_MODEL_SADX attach_0018ED80 = { vertex_0018ECF0, normal_0018ED38, LengthOfArray<Sint32>(vertex_0018ECF0), meshlist_0018ECD8, matlist_0018EC44, LengthOfArray<Uint16>(meshlist_0018ECD8), LengthOfArray<Uint16>(matlist_0018EC44),{ -0.038049f, 0.424162f, 0.156007f }, 5.574036f, NULL };

NJS_OBJECT object_0018EDA8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018ED80, 533.7054f, -385.2097f, -2761.095f, 0, 0, 0, 1, 1, 1, NULL, &object_0018EC10 };

NJS_MATERIAL matlist_0018EDDC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018EDF0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_0018EE1C[] = {
	{ 510, 229 },
	{ 510, 50 },
	{ 0, 167 },
	{ 510, 229 },
	{ 0, 167 },
	{ 0, 255 },
	{ 510, 50 },
	{ 510, 0 },
	{ 0, 142 },
	{ 510, 50 },
	{ 0, 142 },
	{ 0, 167 },
	{ 510, 0 },
	{ 510, 229 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0, 142 },
	{ 0, 50 },
	{ 0, 229 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0018EE70[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_0018EDF0, NULL, NULL, NULL, uv_0018EE1C, NULL }
};

NJS_VECTOR vertex_0018EE88[] = {
	{ -1.177485f, 6.302614f, -0.379009f },
	{ 1.065256f, 6.302614f, -0.852214f },
	{ 0.356727f, 6.302614f, 1.312379f },
	{ -0.574383f, -5.101338f, 0.723321f },
	{ 0.519637f, -5.101338f, 0.49249f },
	{ 0.174013f, -5.101338f, 1.548388f }
};

NJS_VECTOR normal_0018EED0[] = {
	{ -0.605401f, 0.429142f, -0.670319f },
	{ 0.873458f, 0.452091f, -0.180789f },
	{ -0.261832f, 0.514621f, 0.816462f },
	{ -0.9762689f, -0.030912f, 0.214342f },
	{ 0.310966f, -0.125959f, -0.942037f },
	{ 0.6676379f, 0.00471f, 0.744471f }
};

NJS_MODEL_SADX attach_0018EF18 = { vertex_0018EE88, normal_0018EED0, LengthOfArray<Sint32>(vertex_0018EE88), meshlist_0018EE70, matlist_0018EDDC, LengthOfArray<Uint16>(meshlist_0018EE70), LengthOfArray<Uint16>(matlist_0018EDDC),{ -0.056115f, 0.600638f, 0.348087f }, 5.82695f, NULL };

NJS_OBJECT object_0018EF40 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018EF18, 499.0008f, -385.2097f, -2772.261f, 0, 0, 0, 1, 1, 1, NULL, &object_0018EDA8 };

NJS_MATERIAL matlist_0018EF74[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018EF88[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018EFB8[] = {
	{ 252, -209 },
	{ 137, 255 },
	{ 140, -944 },
	{ 252, -209 },
	{ 140, -944 },
	{ 255, -1275 },
	{ 137, 255 },
	{ 0, -96 },
	{ 2, -1107 },
	{ 137, 255 },
	{ 2, -1107 },
	{ 140, -944 },
	{ 0, -96 },
	{ 252, -209 },
	{ 255, -1275 },
	{ 0, -96 },
	{ 255, -1275 },
	{ 2, -1107 },
	{ 252, -209 },
	{ 0, -96 },
	{ 137, 255 },
	{ 140, -944 },
	{ 2, -1107 },
	{ 255, -1275 }
};

NJS_MESHSET_SADX meshlist_0018F018[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018EF88, NULL, NULL, NULL, uv_0018EFB8, NULL }
};

NJS_VECTOR vertex_0018F030[] = {
	{ 5.607351f, 0.520939f, -17.19151f },
	{ 2.942896f, -0.10747f, -10.59237f },
	{ 3.107367f, -0.11735f, -8.15851f },
	{ -1.867936f, 0.476195f, 5.852832f },
	{ -3.354625f, -0.222965f, 8.820645f },
	{ -3.527011f, -0.212609f, 12.29311f }
};

NJS_VECTOR normal_0018F078[] = {
	{ -0.526053f, 0.8145609f, -0.244456f },
	{ -0.209513f, -0.97232f, -0.103433f },
	{ 0.866213f, -0.436852f, 0.242561f },
	{ 0.140059f, 0.985486f, 0.09592f },
	{ -0.845316f, 0.487007f, -0.219694f },
	{ 0.507787f, -0.798153f, 0.324197f }
};

NJS_MODEL_SADX attach_0018F0C0 = { vertex_0018F030, normal_0018F078, LengthOfArray<Sint32>(vertex_0018F030), meshlist_0018F018, matlist_0018EF74, LengthOfArray<Uint16>(meshlist_0018F018), LengthOfArray<Uint16>(matlist_0018EF74),{ 1.04017f, 0.148987f, -2.449199f }, 15.43357f, NULL };

NJS_OBJECT object_0018F0E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018F0C0, 534.3829f, -380.2503f, -2763.264f, 0, 0, 0, 1, 1, 1, NULL, &object_0018EF40 };

NJS_MATERIAL matlist_0018F11C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018F130[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018F160[] = {
	{ 252, -118 },
	{ 138, 255 },
	{ 141, -1274 },
	{ 252, -118 },
	{ 141, -1274 },
	{ 255, -1275 },
	{ 138, 255 },
	{ 0, 70 },
	{ 2, -1274 },
	{ 138, 255 },
	{ 2, -1274 },
	{ 141, -1274 },
	{ 0, 70 },
	{ 252, -118 },
	{ 255, -1275 },
	{ 0, 70 },
	{ 255, -1275 },
	{ 2, -1274 },
	{ 252, -118 },
	{ 0, 70 },
	{ 138, 255 },
	{ 141, -1274 },
	{ 2, -1274 },
	{ 255, -1275 }
};

NJS_MESHSET_SADX meshlist_0018F1C0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018F130, NULL, NULL, NULL, uv_0018F160, NULL }
};

NJS_VECTOR vertex_0018F1D8[] = {
	{ 5.136703f, 0.091509f, -15.73634f },
	{ 3.650014f, -0.607651f, -12.76853f },
	{ 3.477628f, -0.597295f, -9.296064f },
	{ -3.259138f, 0.707822f, 10.14331f },
	{ -3.737717f, -0.051897f, 10.00289f },
	{ -2.874947f, -0.103725f, 10.28373f }
};

NJS_VECTOR normal_0018F220[] = {
	{ -0.355852f, 0.872211f, -0.335586f },
	{ -0.196511f, -0.975279f, -0.101067f },
	{ 0.87884f, -0.415884f, 0.23384f },
	{ 0.306791f, 0.730675f, 0.609912f },
	{ -0.976885f, 0.054624f, 0.206669f },
	{ 0.201682f, -0.765185f, 0.611405f }
};

NJS_MODEL_SADX attach_0018F268 = { vertex_0018F1D8, normal_0018F220, LengthOfArray<Sint32>(vertex_0018F1D8), meshlist_0018F1C0, matlist_0018F11C, LengthOfArray<Uint16>(meshlist_0018F1C0), LengthOfArray<Uint16>(matlist_0018F11C),{ 0.699493f, 0.050086f, -2.726306f }, 13.74588f, NULL };

NJS_OBJECT object_0018F290 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018F268, 527.3677f, -379.8677f, -2741.675f, 0, 0, 0, 1, 1, 1, NULL, &object_0018F0E8 };

NJS_MATERIAL matlist_0018F2C4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018F2D8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018F308[] = {
	{ 250, 34 },
	{ 137, 254 },
	{ 142, -1529 },
	{ 250, 34 },
	{ 142, -1529 },
	{ 255, -1530 },
	{ 137, 254 },
	{ 0, 121 },
	{ 4, -1529 },
	{ 137, 254 },
	{ 4, -1529 },
	{ 142, -1529 },
	{ 0, 121 },
	{ 250, 34 },
	{ 255, -1530 },
	{ 0, 121 },
	{ 255, -1530 },
	{ 4, -1529 },
	{ 250, 34 },
	{ 0, 121 },
	{ 137, 254 },
	{ 142, -1529 },
	{ 4, -1529 },
	{ 255, -1530 }
};

NJS_MESHSET_SADX meshlist_0018F368[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018F2D8, NULL, NULL, NULL, uv_0018F308, NULL }
};

NJS_VECTOR vertex_0018F380[] = {
	{ 5.773346f, 2.309267f, -17.70593f },
	{ 4.557126f, 1.593859f, -15.57204f },
	{ 4.942889f, 1.570686f, -13.82047f },
	{ -4.110367f, 2.903002f, 12.76784f },
	{ -4.588947f, 2.143283f, 12.62742f },
	{ -3.726176f, 2.091455f, 12.90826f }
};

NJS_VECTOR normal_0018F3C8[] = {
	{ -0.442566f, 0.775619f, -0.450057f },
	{ -0.218352f, -0.964646f, -0.147582f },
	{ 0.876113f, -0.442673f, 0.190964f },
	{ 0.301821f, 0.733221f, 0.609336f },
	{ -0.976388f, 0.058654f, 0.207912f },
	{ 0.211875f, -0.76408f, 0.609337f }
};

NJS_MODEL_SADX attach_0018F410 = { vertex_0018F380, normal_0018F3C8, LengthOfArray<Sint32>(vertex_0018F380), meshlist_0018F368, matlist_0018F2C4, LengthOfArray<Uint16>(meshlist_0018F368), LengthOfArray<Uint16>(matlist_0018F2C4),{ 0.5922f, 2.236844f, -2.398837f }, 16.1602f, NULL };

NJS_OBJECT object_0018F438 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018F410, 528.3773f, -384.2863f, -2744.742f, 0, 0, 0, 1, 1, 1, NULL, &object_0018F290 };

NJS_MATERIAL matlist_0018F46C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018F480[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018F4B0[] = {
	{ 254, 254 },
	{ 139, 242 },
	{ 139, -61 },
	{ 254, 254 },
	{ 139, -61 },
	{ 255, -255 },
	{ 139, 242 },
	{ 0, 255 },
	{ 0, -179 },
	{ 139, 242 },
	{ 0, -179 },
	{ 139, -61 },
	{ 0, 255 },
	{ 254, 254 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 0, -179 },
	{ 254, 254 },
	{ 0, 255 },
	{ 139, 242 },
	{ 139, -61 },
	{ 0, -179 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_0018F510[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018F480, NULL, NULL, NULL, uv_0018F4B0, NULL }
};

NJS_VECTOR vertex_0018F528[] = {
	{ 1.520103f, 2.604932f, -4.583997f },
	{ 1.125122f, 1.840191f, -4.982171f },
	{ 1.987893f, 1.788363f, -4.701334f },
	{ -0.399488f, 2.680173f, 1.32715f },
	{ -1.615709f, 1.964766f, 3.461051f },
	{ -1.229946f, 1.941592f, 5.212612f }
};

NJS_VECTOR normal_0018F570[] = {
	{ -0.187914f, 0.833973f, -0.518823f },
	{ -0.340533f, -0.6564879f, -0.673098f },
	{ 0.977326f, 0.107849f, -0.182214f },
	{ 0.216577f, 0.964668f, 0.150033f },
	{ -0.8742549f, 0.446898f, -0.189632f },
	{ 0.452477f, -0.77185f, 0.446668f }
};

NJS_MODEL_SADX attach_0018F5B8 = { vertex_0018F528, normal_0018F570, LengthOfArray<Sint32>(vertex_0018F528), meshlist_0018F510, matlist_0018F46C, LengthOfArray<Uint16>(meshlist_0018F510), LengthOfArray<Uint16>(matlist_0018F46C),{ 0.186092f, 2.234268f, 0.115221f }, 5.406493f, NULL };

NJS_OBJECT object_0018F5E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018F5B8, 534.5528f, -384.6475f, -2763.773f, 0, 0, 0, 1, 1, 1, NULL, &object_0018F438 };

NJS_MATERIAL matlist_0018F614[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018F628[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018F658[] = {
	{ 253, 179 },
	{ 139, 37 },
	{ 140, -255 },
	{ 253, 179 },
	{ 140, -255 },
	{ 255, -241 },
	{ 139, 37 },
	{ 0, 254 },
	{ 1, -240 },
	{ 139, 37 },
	{ 1, -240 },
	{ 140, -255 },
	{ 0, 254 },
	{ 253, 179 },
	{ 255, -241 },
	{ 0, 254 },
	{ 255, -241 },
	{ 1, -240 },
	{ 253, 179 },
	{ 0, 254 },
	{ 139, 37 },
	{ 140, -255 },
	{ 1, -240 },
	{ 255, -241 }
};

NJS_MESHSET_SADX meshlist_0018F6B8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018F628, NULL, NULL, NULL, uv_0018F658, NULL }
};

NJS_VECTOR vertex_0018F6D0[] = {
	{ 0.403963f, 2.224699f, -1.150668f },
	{ 1.157243f, 1.39098f, -5.089197f },
	{ 1.592182f, 1.364853f, -3.489256f },
	{ -1.252597f, 2.731389f, 3.956891f },
	{ -1.647578f, 1.966648f, 3.558716f },
	{ -0.784807f, 1.914819f, 3.839553f }
};

NJS_VECTOR normal_0018F718[] = {
	{ -0.08652499f, 0.980545f, -0.176198f },
	{ -0.6753359f, -0.603492f, -0.423932f },
	{ 0.892788f, 0.417324f, 0.169617f },
	{ 0.334657f, 0.725186f, 0.601756f },
	{ -0.9803579f, -0.050446f, 0.190666f },
	{ 0.143966f, -0.826295f, 0.544527f }
};

NJS_MODEL_SADX attach_0018F760 = { vertex_0018F6D0, normal_0018F718, LengthOfArray<Sint32>(vertex_0018F6D0), meshlist_0018F6B8, matlist_0018F614, LengthOfArray<Uint16>(meshlist_0018F6B8), LengthOfArray<Uint16>(matlist_0018F614),{ -0.027698f, 2.04812f, -0.566153f }, 4.804275f, NULL };

NJS_OBJECT object_0018F788 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018F760, 537.3361f, -384.7759f, -2772.313f, 0, 0, 0, 1, 1, 1, NULL, &object_0018F5E0 };

NJS_MATERIAL matlist_0018F7BC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018F7D0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018F800[] = {
	{ 251, 254 },
	{ 138, 63 },
	{ 141, -764 },
	{ 251, 254 },
	{ 141, -764 },
	{ 255, -765 },
	{ 138, 63 },
	{ 0, 254 },
	{ 3, -764 },
	{ 138, 63 },
	{ 3, -764 },
	{ 141, -764 },
	{ 0, 254 },
	{ 251, 254 },
	{ 255, -765 },
	{ 0, 254 },
	{ 255, -765 },
	{ 3, -764 },
	{ 251, 254 },
	{ 0, 254 },
	{ 138, 63 },
	{ 141, -764 },
	{ 3, -764 },
	{ 255, -765 }
};

NJS_MESHSET_SADX meshlist_0018F860[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018F7D0, NULL, NULL, NULL, uv_0018F800, NULL }
};

NJS_VECTOR vertex_0018F878[] = {
	{ 3.117983f, 2.889596f, -9.51848f },
	{ 3.954863f, 2.050855f, -13.71477f },
	{ 4.817633f, 1.999027f, -13.43393f },
	{ -2.548884f, 2.80923f, 7.953782f },
	{ -3.027464f, 2.049511f, 7.813364f },
	{ -2.164693f, 1.997683f, 8.094199f }
};

NJS_VECTOR normal_0018F8C0[] = {
	{ -0.246677f, 0.955761f, -0.160223f },
	{ -0.759924f, -0.47552f, -0.443166f },
	{ 0.888669f, 0.419924f, 0.184203f },
	{ 0.306657f, 0.714995f, 0.628287f },
	{ -0.978138f, 0.039434f, 0.204182f },
	{ 0.217884f, -0.769756f, 0.600002f }
};

NJS_MODEL_SADX attach_0018F908 = { vertex_0018F878, normal_0018F8C0, LengthOfArray<Sint32>(vertex_0018F878), meshlist_0018F860, matlist_0018F7BC, LengthOfArray<Uint16>(meshlist_0018F860), LengthOfArray<Uint16>(matlist_0018F7BC),{ 0.895085f, 2.443639f, -2.810283f }, 11.58859f, NULL };

NJS_OBJECT object_0018F930 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018F908, 492.2477f, -384.3722f, -2751.262f, 0, 0, 0, 1, 1, 1, NULL, &object_0018F788 };

NJS_MATERIAL matlist_0018F964[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018F978[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018F9A8[] = {
	{ 253, 254 },
	{ 139, 184 },
	{ 141, -510 },
	{ 253, 254 },
	{ 141, -510 },
	{ 255, -272 },
	{ 139, 184 },
	{ 0, 255 },
	{ 1, -272 },
	{ 139, 184 },
	{ 1, -272 },
	{ 141, -510 },
	{ 0, 255 },
	{ 253, 254 },
	{ 255, -272 },
	{ 0, 255 },
	{ 255, -272 },
	{ 1, -272 },
	{ 253, 254 },
	{ 0, 255 },
	{ 139, 184 },
	{ 141, -510 },
	{ 1, -272 },
	{ 255, -272 }
};

NJS_MESHSET_SADX meshlist_0018FA08[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018F978, NULL, NULL, NULL, uv_0018F9A8, NULL }
};

NJS_VECTOR vertex_0018FA20[] = {
	{ 1.815685f, 2.547072f, -5.503088f },
	{ 1.732972f, 1.763572f, -6.864058f },
	{ 2.595743f, 1.711744f, -6.583221f },
	{ -2.014457f, 3.197943f, 6.306126f },
	{ -1.177577f, 2.359201f, 2.109841f },
	{ -0.314806f, 2.307373f, 2.390677f }
};

NJS_VECTOR normal_0018FA68[] = {
	{ -0.161842f, 0.939864f, -0.300769f },
	{ -0.6116779f, -0.501906f, -0.611506f },
	{ 0.900888f, 0.43395f, 0.009420999f },
	{ 0.725741f, 0.5999219f, 0.33674f },
	{ -0.894424f, -0.408459f, -0.182116f },
	{ 0.214757f, -0.957898f, 0.190554f }
};

NJS_MODEL_SADX attach_0018FAB0 = { vertex_0018FA20, normal_0018FA68, LengthOfArray<Sint32>(vertex_0018FA20), meshlist_0018FA08, matlist_0018F964, LengthOfArray<Uint16>(meshlist_0018FA08), LengthOfArray<Uint16>(matlist_0018F964),{ 0.290643f, 2.454844f, -0.278966f }, 6.976876f, NULL };

NJS_OBJECT object_0018FAD8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018FAB0, 497.387f, -384.6615f, -2767.088f, 0, 0, 0, 1, 1, 1, NULL, &object_0018F930 };

NJS_MATERIAL matlist_0018FB0C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018FB20[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018FB50[] = {
	{ 253, -25 },
	{ 138, 255 },
	{ 140, -508 },
	{ 253, -25 },
	{ 140, -508 },
	{ 255, -510 },
	{ 138, 255 },
	{ 0, 83 },
	{ 1, -508 },
	{ 138, 255 },
	{ 1, -508 },
	{ 140, -508 },
	{ 0, 83 },
	{ 253, -25 },
	{ 255, -510 },
	{ 0, 83 },
	{ 255, -510 },
	{ 1, -508 },
	{ 253, -25 },
	{ 0, 83 },
	{ 138, 255 },
	{ 140, -508 },
	{ 1, -508 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_0018FBB0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018FB20, NULL, NULL, NULL, uv_0018FB50, NULL }
};

NJS_VECTOR vertex_0018FBC8[] = {
	{ 2.549017f, 0.043324f, -7.76388f },
	{ 1.032823f, -0.654063f, -4.705092f },
	{ 1.236634f, -0.666306f, -2.392532f },
	{ -2.082695f, 0.63715f, 6.516761f },
	{ -2.561275f, -0.122569f, 6.376343f },
	{ -1.698503f, -0.174397f, 6.65718f }
};

NJS_VECTOR normal_0018FC10[] = {
	{ -0.512266f, 0.72258f, -0.464178f },
	{ -0.265032f, -0.957301f, -0.115464f },
	{ 0.8552909f, -0.470903f, 0.216167f },
	{ 0.323956f, 0.724208f, 0.608749f },
	{ -0.978526f, 0.036879f, 0.202795f },
	{ 0.169398f, -0.764092f, 0.6224689f }
};

NJS_MODEL_SADX attach_0018FC58 = { vertex_0018FBC8, normal_0018FC10, LengthOfArray<Sint32>(vertex_0018FBC8), meshlist_0018FBB0, matlist_0018FB0C, LengthOfArray<Uint16>(meshlist_0018FBB0), LengthOfArray<Uint16>(matlist_0018FB0C),{ -0.006129f, -0.014578f, -0.55335f }, 7.649909f, NULL };

NJS_OBJECT object_0018FC80 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018FC58, 491.6894f, -379.7932f, -2749.519f, 0, 0, 0, 1, 1, 1, NULL, &object_0018FAD8 };

NJS_MATERIAL matlist_0018FCB4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018FCC8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018FCF8[] = {
	{ 253, 76 },
	{ 139, 213 },
	{ 140, -198 },
	{ 253, 76 },
	{ 140, -198 },
	{ 255, -510 },
	{ 139, 213 },
	{ 0, 255 },
	{ 1, -388 },
	{ 139, 213 },
	{ 1, -388 },
	{ 140, -198 },
	{ 0, 255 },
	{ 253, 76 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 1, -388 },
	{ 253, 76 },
	{ 0, 255 },
	{ 139, 213 },
	{ 140, -198 },
	{ 1, -388 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_0018FD58[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018FCC8, NULL, NULL, NULL, uv_0018FCF8, NULL }
};

NJS_VECTOR vertex_0018FD70[] = {
	{ 1.508581f, 0.421508f, -4.555614f },
	{ 1.25867f, -0.351948f, -5.40107f },
	{ 1.150213f, -0.345432f, -2.125715f },
	{ -0.74055f, 0.241028f, 2.37898f },
	{ -2.256745f, -0.45636f, 5.437768f },
	{ -2.052933f, -0.468603f, 7.750329f }
};

NJS_VECTOR normal_0018FDB8[] = {
	{ 0.157448f, 0.979641f, -0.124551f },
	{ 0.108278f, -0.986363f, -0.123949f },
	{ 0.9700069f, -0.111877f, 0.215801f },
	{ 0.194894f, 0.971703f, 0.13345f },
	{ -0.846276f, 0.493293f, -0.201194f },
	{ 0.638752f, -0.669193f, 0.379705f }
};

NJS_MODEL_SADX attach_0018FE00 = { vertex_0018FD70, normal_0018FDB8, LengthOfArray<Sint32>(vertex_0018FD70), meshlist_0018FD58, matlist_0018FCB4, LengthOfArray<Uint16>(meshlist_0018FD58), LengthOfArray<Uint16>(matlist_0018FCB4),{ -0.374082f, -0.023547f, 1.174629f }, 6.839885f, NULL };

NJS_OBJECT object_0018FE28 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018FE00, 494.9815f, -379.9813f, -2759.66f, 0, 0, 0, 1, 1, 1, NULL, &object_0018FC80 };

NJS_MATERIAL matlist_0018FE5C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018FE84[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0018FEA8[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0018FEB4[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_0018FEFC[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0018FF14[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0018FE84, NULL, NULL, NULL, uv_0018FEB4, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0018FEA8, NULL, NULL, NULL, uv_0018FEFC, NULL }
};

NJS_VECTOR vertex_0018FF44[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_0018FF8C[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_0018FFD4 = { vertex_0018FF44, normal_0018FF8C, LengthOfArray<Sint32>(vertex_0018FF44), meshlist_0018FF14, matlist_0018FE5C, LengthOfArray<Uint16>(meshlist_0018FF14), LengthOfArray<Uint16>(matlist_0018FE5C),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_0018FFFC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018FFD4, 516.4532f, -391.3727f, -2766.516f, 0, 0, 0, 1, 1, 1, NULL, &object_0018FE28 };

NJS_MATERIAL matlist_00190030[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00190058[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0019007C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00190088[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_001900D0[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001900E8[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00190058, NULL, NULL, NULL, uv_00190088, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0019007C, NULL, NULL, NULL, uv_001900D0, NULL }
};

NJS_VECTOR vertex_00190118[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00190160[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_001901A8 = { vertex_00190118, normal_00190160, LengthOfArray<Sint32>(vertex_00190118), meshlist_001900E8, matlist_00190030, LengthOfArray<Uint16>(meshlist_001900E8), LengthOfArray<Uint16>(matlist_00190030),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_001901D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001901A8, 514.6268f, -391.2727f, -2760.896f, 0, 0, 0, 1, 1, 1, NULL, &object_0018FFFC };

NJS_MATERIAL matlist_00190204[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0019022C[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00190250[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_0019025C[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_001902A4[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001902BC[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0019022C, NULL, NULL, NULL, uv_0019025C, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00190250, NULL, NULL, NULL, uv_001902A4, NULL }
};

NJS_VECTOR vertex_001902EC[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00190334[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_0019037C = { vertex_001902EC, normal_00190334, LengthOfArray<Sint32>(vertex_001902EC), meshlist_001902BC, matlist_00190204, LengthOfArray<Uint16>(meshlist_001902BC), LengthOfArray<Uint16>(matlist_00190204),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_001903A4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019037C, 512.8005f, -391.1726f, -2755.275f, 0, 0, 0, 1, 1, 1, NULL, &object_001901D0 };

NJS_MATERIAL matlist_001903D8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00190400[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00190424[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00190430[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00190478[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00190490[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00190400, NULL, NULL, NULL, uv_00190430, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00190424, NULL, NULL, NULL, uv_00190478, NULL }
};

NJS_VECTOR vertex_001904C0[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00190508[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00190550 = { vertex_001904C0, normal_00190508, LengthOfArray<Sint32>(vertex_001904C0), meshlist_00190490, matlist_001903D8, LengthOfArray<Uint16>(meshlist_00190490), LengthOfArray<Uint16>(matlist_001903D8),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00190578 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00190550, 510.9743f, -391.0726f, -2749.654f, 0, 0, 0, 1, 1, 1, NULL, &object_001903A4 };

NJS_MATERIAL matlist_001905AC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001905D4[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_001905F8[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00190604[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_0019064C[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00190664[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_001905D4, NULL, NULL, NULL, uv_00190604, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_001905F8, NULL, NULL, NULL, uv_0019064C, NULL }
};

NJS_VECTOR vertex_00190694[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_001906DC[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00190724 = { vertex_00190694, normal_001906DC, LengthOfArray<Sint32>(vertex_00190694), meshlist_00190664, matlist_001905AC, LengthOfArray<Uint16>(meshlist_00190664), LengthOfArray<Uint16>(matlist_001905AC),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_0019074C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00190724, 509.148f, -390.9727f, -2744.033f, 0, 0, 0, 1, 1, 1, NULL, &object_00190578 };


//Misplaced bridge pieces start here
NJS_MATERIAL matlist_001907E0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0019081C[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

Sint16 poly_00190846[] = {
	3, 4, 5
};

NJS_TEX uv_0019084C[] = {
	{ 440, 127 },
	{ 508, 127 },
	{ 508, 0 },
	{ 440, 127 },
	{ 508, 0 },
	{ 378, 0 },
	{ 352, 254 },
	{ 508, 255 },
	{ 508, 127 },
	{ 352, 254 },
	{ 508, 127 },
	{ 440, 127 },
	{ 378, 0 },
	{ 508, 0 },
	{ 508, 255 },
	{ 378, 0 },
	{ 508, 255 },
	{ 352, 254 },
	{ 440, 127 },
	{ 378, 0 },
	{ 352, 254 }
};

NJS_TEX uv_001908A0[] = {
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001908AC[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_0019081C, NULL, NULL, NULL, uv_0019084C, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_00190846, NULL, NULL, NULL, uv_001908A0, NULL }
};

NJS_VECTOR vertex_001908DC[] = {
	{ -11.943f, -1.735043f, 33.2997f },
	{ -17.37443f, 2.63745f, 34.18929f },
	{ -17.80523f, 2.637452f, 28.74059f },
	{ -6.871946f, -1.735043f, 34.94738f },
	{ -6.091845f, 2.637454f, 32.54649f },
	{ -7.652045f, 2.63745f, 37.34829f }
};

NJS_VECTOR normal_00190924[] = {
	{ -0.341959f, -0.877708f, 0.335698f },
	{ -0.618264f, 0.499365f, 0.6069469f },
	{ -0.048391f, -0.43897f, -0.897198f },
	{ 0.609338f, -0.749999f, -0.257313f },
	{ 0.609336f, 0.750001f, -0.257311f },
	{ 0.207911f, 0, 0.978148f }
};

NJS_MODEL_SADX attach_0019096C = { vertex_001908DC, normal_00190924, LengthOfArray<Sint32>(vertex_001908DC), meshlist_001908AC, matlist_001907E0, LengthOfArray<Uint16>(meshlist_001908AC), LengthOfArray<Uint16>(matlist_001907E0),{ -11.94854f, 0.451205f, 33.04443f }, 7.26807f, NULL };

NJS_OBJECT object_00190994 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019096C, 622.697528f, -396.848088f, -3042.71917f, 0, 0, 0, 1, 1, 1, NULL, NULL };
//27.71753f, -2.625916f, -30.82886f

NJS_MATERIAL matlist_001909C8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00190A04[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_00190A2E[] = {
	5, 4, 3
};

NJS_TEX uv_00190A34[] = {
	{ 0 },
	{ 0, 127 },
	{ 440, 127 },
	{ 0 },
	{ 440, 127 },
	{ 378, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 352, 255 },
	{ 0, 127 },
	{ 352, 255 },
	{ 440, 127 },
	{ 0, 254 },
	{ 0 },
	{ 378, 0 },
	{ 0, 254 },
	{ 378, 0 },
	{ 352, 255 },
	{ 440, 127 },
	{ 352, 255 },
	{ 378, 0 }
};

NJS_TEX uv_00190A88[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 }
};

NJS_MESHSET_SADX meshlist_00190A94[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_00190A04, NULL, NULL, NULL, uv_00190A34, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_00190A2E, NULL, NULL, NULL, uv_00190A88, NULL }
};

NJS_VECTOR vertex_00190AC4[] = {
	{ 7.724801f, -2.215018f, 39.68946f },
	{ 2.293366f, 2.157476f, 40.57907f },
	{ 1.862559f, 2.157478f, 35.13034f },
	{ -25.24542f, -2.215019f, 28.9768f },
	{ -24.46532f, 2.157478f, 26.5759f },
	{ -26.02552f, 2.157474f, 31.37771f }
};

NJS_VECTOR normal_00190B0C[] = {
	{ 0.317649f, -0.6446739f, 0.695338f },
	{ 0.145267f, 0.9368989f, 0.317992f },
	{ 0.526459f, 0.355896f, -0.772126f },
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f }
};

NJS_MODEL_SADX attach_00190B54 = { vertex_00190AC4, normal_00190B0C, LengthOfArray<Sint32>(vertex_00190AC4), meshlist_00190A94, matlist_001909C8, LengthOfArray<Uint16>(meshlist_00190A94), LengthOfArray<Uint16>(matlist_001909C8),{ -9.150359f, -0.028771f, 33.57748f }, 18.27f, NULL };

NJS_OBJECT object_00190B7C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00190B54, 603.029803f, -396.368107f, -3049.1093f, 0, 0, 0, 1, 1, 1, NULL, &object_00190994 };
//8.049805f, -2.145935f, -37.21899f

NJS_MATERIAL matlist_00190BB0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00190BEC[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_00190C16[] = {
	5, 4, 3
};

NJS_TEX uv_00190C1C[] = {
	{ 2, 0 },
	{ 2, 127 },
	{ 400, 127 },
	{ 2, 0 },
	{ 400, 127 },
	{ 260, 0 },
	{ 2, 127 },
	{ 2, 254 },
	{ 229, 255 },
	{ 2, 127 },
	{ 229, 255 },
	{ 400, 127 },
	{ 2, 254 },
	{ 2, 0 },
	{ 260, 0 },
	{ 2, 254 },
	{ 260, 0 },
	{ 229, 255 },
	{ 400, 127 },
	{ 229, 255 },
	{ 260, 0 }
};

NJS_TEX uv_00190C70[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 }
};

NJS_MESHSET_SADX meshlist_00190C7C[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_00190BEC, NULL, NULL, NULL, uv_00190C1C, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_00190C16, NULL, NULL, NULL, uv_00190C70, NULL }
};

NJS_VECTOR vertex_00190CAC[] = {
	{ 8.300968f, -1.630987f, 39.87856f },
	{ -3.062028f, 2.741506f, 38.84086f },
	{ -3.81451f, 2.741509f, 33.28764f },
	{ -21.60114f, -1.630988f, 30.16279f },
	{ -20.82104f, 2.74151f, 27.76189f },
	{ -22.38124f, 2.741507f, 32.56367f }
};

NJS_VECTOR normal_00190CF4[] = {
	{ 0.098334f, -0.589422f, 0.801818f },
	{ 0.037207f, 0.952139f, 0.303392f },
	{ 0.42091f, 0.436294f, -0.795288f },
	{ -0.341721f, -0.749999f, -0.5663289f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743144f, 0.000002f, 0.669131f }
};

NJS_MODEL_SADX attach_00190D3C = { vertex_00190CAC, normal_00190CF4, LengthOfArray<Sint32>(vertex_00190CAC), meshlist_00190C7C, matlist_00190BB0, LengthOfArray<Uint16>(meshlist_00190C7C), LengthOfArray<Uint16>(matlist_00190BB0),{ -7.040136f, 0.555261f, 33.82023f }, 16.49402f, NULL };

NJS_OBJECT object_00190D64 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00190D3C, 606.690448f, -397.352238f, -3072.77825f, 0, 0, 0, 1, 1, 1, NULL, &object_00190B7C };
//11.71045f, -3.130066f, -60.88794f

NJS_MATERIAL matlist_00190D98[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00190DD4[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

Sint16 poly_00190DFE[] = {
	3, 4, 5
};

NJS_TEX uv_00190E04[] = {
	{ 400, 127 },
	{ 510, 127 },
	{ 510, 0 },
	{ 400, 127 },
	{ 510, 0 },
	{ 258, 0 },
	{ 228, 254 },
	{ 510, 255 },
	{ 510, 127 },
	{ 228, 254 },
	{ 510, 127 },
	{ 400, 127 },
	{ 258, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 258, 0 },
	{ 510, 255 },
	{ 228, 254 },
	{ 400, 127 },
	{ 258, 0 },
	{ 228, 254 }
};

NJS_TEX uv_00190E58[] = {
	{ 127, 255 },
	{ 0 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_00190E64[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_00190DD4, NULL, NULL, NULL, uv_00190E04, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_00190DFE, NULL, NULL, NULL, uv_00190E58, NULL }
};

NJS_VECTOR vertex_00190E94[] = {
	{ -12.42891f, -1.678948f, 33.14181f },
	{ -23.7919f, 2.693546f, 32.10413f },
	{ -24.54437f, 2.693548f, 26.55091f },
	{ -4.28996f, -1.678948f, 35.78632f },
	{ -3.509862f, 2.693547f, 33.38543f },
	{ -5.070055f, 2.693545f, 38.18721f }
};

NJS_VECTOR normal_00190EDC[] = {
	{ -0.237069f, -0.914336f, 0.328311f },
	{ -0.517499f, 0.467521f, 0.7166719f },
	{ 0.092942f, -0.501043f, -0.8604169f },
	{ 0.609338f, -0.749998f, -0.257313f },
	{ 0.609336f, 0.75f, -0.257311f },
	{ 0.207912f, 0.000001f, 0.978148f }
};

NJS_MODEL_SADX attach_00190F24 = { vertex_00190E94, normal_00190EDC, LengthOfArray<Sint32>(vertex_00190E94), meshlist_00190E64, matlist_00190D98, LengthOfArray<Uint16>(meshlist_00190E64), LengthOfArray<Uint16>(matlist_00190D98),{ -14.02712f, 0.5073f, 32.36906f }, 12.01927f, NULL };

NJS_OBJECT object_00190F4C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00190F24, 627.419688f, -397.304264f, -3066.04216f, 0, 0, 0, 1, 1, 1, NULL, &object_00190D64 };
//32.43969f, -3.082092f, -54.15185f

NJS_MATERIAL matlist_00190F80[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00190FBC[] = {
	4, 0, 1,
	4, 1, 5,
	4, 5, 7,
	2, 3, 6,
	2, 6, 5,
	2, 5, 1,
	3, 4, 7,
	3, 7, 6,
	4, 3, 2,
	4, 2, 0,
	0, 2, 1
};

Sint16 poly_00190FFE[] = {
	5, 6, 7
};

NJS_TEX uv_00191004[] = {
	{ 0 },
	{ 0, 18 },
	{ 346, 127 },
	{ 0 },
	{ 346, 127 },
	{ 508, 127 },
	{ 0 },
	{ 508, 127 },
	{ 510, 0 },
	{ 0, 225 },
	{ 0, 254 },
	{ 508, 255 },
	{ 0, 225 },
	{ 508, 255 },
	{ 508, 127 },
	{ 0, 225 },
	{ 508, 127 },
	{ 346, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 508, 255 },
	{ 0 },
	{ 0, 254 },
	{ 0, 225 },
	{ 0 },
	{ 0, 225 },
	{ 0, 18 },
	{ 0, 18 },
	{ 0, 225 },
	{ 346, 127 }
};

NJS_TEX uv_00191088[] = {
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00191094[] = {
	{ NJD_MESHSET_3 | 1, 11, poly_00190FBC, NULL, NULL, NULL, uv_00191004, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_00190FFE, NULL, NULL, NULL, uv_00191088, NULL }
};

NJS_VECTOR vertex_001910C4[] = {
	{ -36.29627f, 1.516053f, 27.65164f },
	{ -9.793799f, -2.215016f, 33.99782f },
	{ -35.03383f, 1.129933f, 23.76626f },
	{ -34.85051f, 2.15748f, 23.20205f },
	{ -36.41071f, 2.157479f, 28.00384f },
	{ 2.410687f, -2.215016f, 37.9633f },
	{ 3.190789f, 2.15748f, 35.5624f },
	{ 1.630587f, 2.157479f, 40.36421f }
};

NJS_VECTOR normal_00191124[] = {
	{ -0.652454f, -0.7086329f, 0.268596f },
	{ -0.156755f, -0.931933f, 0.327f },
	{ -0.303266f, -0.603448f, -0.737483f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.815577f, -0.150758f, 0.558665f },
	{ 0.425327f, -0.8944269f, 0.138194f },
	{ 0.743145f, 0.000001f, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00191184 = { vertex_001910C4, normal_00191124, LengthOfArray<Sint32>(vertex_001910C4), meshlist_00191094, matlist_00190F80, LengthOfArray<Uint16>(meshlist_00191094), LengthOfArray<Uint16>(matlist_00190F80),{ -16.60996f, -0.028768f, 31.78313f }, 21.58018f, NULL };

NJS_OBJECT object_001911AC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00191184, 629.851818f, -397.268193f, -3096.32341f, 0, 0, 0, 1, 1, 1, NULL, &object_00190F4C };
//34.87182f, -3.046021f, -84.4331f

NJS_MATERIAL matlist_001911E0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0019121C[] = {
	0, 3, 1,
	3, 2, 1,
	0, 1, 2
};

Sint16 poly_0019122E[] = {
	2, 3, 0
};

NJS_TEX uv_00191234[] = {
	{ 2, 18 },
	{ 2, 125 },
	{ 346, 125 },
	{ 2, 125 },
	{ 2, 220 },
	{ 346, 125 },
	{ 2, 18 },
	{ 346, 125 },
	{ 2, 220 }
};

NJS_TEX uv_00191258[] = {
	{ 27, 64 },
	{ 122, 260 },
	{ 227, 41 }
};

NJS_MESHSET_SADX meshlist_00191264[] = {
	{ NJD_MESHSET_3 | 1, 3, poly_0019121C, NULL, NULL, NULL, uv_00191234, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_0019122E, NULL, NULL, NULL, uv_00191258, NULL }
};

NJS_VECTOR vertex_00191294[] = {
	{ -17.00916f, 3.028017f, 33.91904f },
	{ 9.493258f, -0.703052f, 40.26524f },
	{ -15.74673f, 2.641897f, 30.03368f },
	{ -16.3435f, -0.703051f, 31.87036f }
};

NJS_VECTOR normal_001912C4[] = {
	{ -0.845678f, 0.385934f, 0.368623f },
	{ 0.947776f, -0.07951099f, -0.308867f },
	{ -0.384636f, 0.351908f, -0.853355f },
	{ -0.6725f, -0.707105f, -0.218508f }
};

NJS_MODEL_SADX attach_001912F4 = { vertex_00191294, normal_001912C4, LengthOfArray<Sint32>(vertex_00191294), meshlist_00191264, matlist_001911E0, LengthOfArray<Uint16>(meshlist_00191264), LengthOfArray<Uint16>(matlist_001911E0),{ -3.757951f, 1.162483f, 35.14946f }, 14.20442f, NULL };

NJS_OBJECT object_0019131C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001912F4, 610.564468f, -398.780155f, -3102.59001f, 0, 0, 0, 1, 1, 1, NULL, &object_001911AC };
//15.58447f, -4.557983f, -90.6997f

NJS_MATERIAL matlist_00191350[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00191364[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_00191390[] = {
	{ 490, 191 },
	{ 490, 74 },
	{ 0, 44 },
	{ 490, 191 },
	{ 0, 44 },
	{ 0, 255 },
	{ 490, 74 },
	{ 510, 29 },
	{ 0 },
	{ 490, 74 },
	{ 0 },
	{ 0, 44 },
	{ 510, 29 },
	{ 490, 191 },
	{ 0, 255 },
	{ 510, 29 },
	{ 0, 255 },
	{ 0 },
	{ 490, 74 },
	{ 490, 191 },
	{ 510, 29 }
};

NJS_MESHSET_SADX meshlist_001913E4[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_00191364, NULL, NULL, NULL, uv_00191390, NULL }
};

NJS_VECTOR vertex_001913FC[] = {
	{ -11.84189f, 7.305132f, 33.33402f },
	{ -10.16217f, 7.779552f, 32.97698f },
	{ -10.78982f, 7.305132f, 34.25069f },
	{ -13.47139f, -4.401338f, 33.09428f },
	{ -11.82376f, -4.401338f, 32.74406f },
	{ -12.23421f, -4.401338f, 34.754f }
};

NJS_VECTOR normal_00191444[] = {
	{ -0.6620499f, 0.570489f, -0.486036f },
	{ 0.881414f, 0.466806f, -0.07211699f },
	{ -0.318084f, 0.44036f, 0.839587f },
	{ -0.965996f, 0.144674f, 0.21429f },
	{ 0.295428f, -0.020998f, -0.955134f },
	{ 0.667142f, -0.06580599f, 0.742019f }
};

NJS_MODEL_SADX attach_0019148C = { vertex_001913FC, normal_00191444, LengthOfArray<Sint32>(vertex_001913FC), meshlist_001913E4, matlist_00191350, LengthOfArray<Uint16>(meshlist_001913E4), LengthOfArray<Uint16>(matlist_00191350),{ -11.81678f, 1.689107f, 33.74903f }, 6.172781f, NULL };

NJS_OBJECT object_001914B4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019148C, 628.670798f, -390.405094f, -3053.39177f, 0, 0, 0, 1, 1, 1, NULL, &object_0019131C };
//33.6908f, 3.817078f, -41.50146f

NJS_MATERIAL matlist_001914E8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001914FC[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_00191528[] = {
	{ 474, 255 },
	{ 506, 55 },
	{ 320, 72 },
	{ 474, 255 },
	{ 320, 72 },
	{ 280, 198 },
	{ 506, 55 },
	{ 474, 0 },
	{ 231, 36 },
	{ 506, 55 },
	{ 231, 36 },
	{ 320, 72 },
	{ 474, 0 },
	{ 474, 255 },
	{ 280, 198 },
	{ 474, 0 },
	{ 280, 198 },
	{ 231, 36 },
	{ 506, 55 },
	{ 474, 255 },
	{ 474, 0 }
};

NJS_MESHSET_SADX meshlist_0019157C[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_001914FC, NULL, NULL, NULL, uv_00191528, NULL }
};

NJS_VECTOR vertex_00191594[] = {
	{ -12.06771f, 4.871256f, 33.26079f },
	{ -9.957867f, 4.063917f, 32.81233f },
	{ -10.62441f, 4.063917f, 34.86374f },
	{ -11.66108f, 0.302625f, 33.39265f },
	{ -10.32574f, -1.857375f, 33.10881f },
	{ -10.7476f, -0.637375f, 34.40717f }
};

NJS_VECTOR normal_001915DC[] = {
	{ -0.5371619f, 0.473141f, -0.69828f },
	{ 0.929397f, 0.357696f, -0.09096199f },
	{ -0.099249f, 0.405071f, 0.908882f },
	{ -0.97917f, -0.0783f, 0.187338f },
	{ 0.25971f, -0.078563f, -0.962486f },
	{ 0.6530679f, -0.08047f, 0.7530119f }
};

NJS_MODEL_SADX attach_00191624 = { vertex_00191594, normal_001915DC, LengthOfArray<Sint32>(vertex_00191594), meshlist_0019157C, matlist_001914E8, LengthOfArray<Uint16>(meshlist_0019157C), LengthOfArray<Uint16>(matlist_001914E8),{ -11.01279f, 1.506941f, 33.83804f }, 3.517203f, NULL };

NJS_OBJECT object_0019164C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00191624, 635.975968f, -387.761051f, -3075.87469f, 0, 0, 0, 1, 1, 1, NULL, &object_001914B4 };
//40.99597f, 6.461121f, -63.98438f

NJS_MATERIAL matlist_00191680[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00191694[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_001916C0[] = {
	{ 488, 255 },
	{ 510, 58 },
	{ 0, 78 },
	{ 488, 255 },
	{ 0, 78 },
	{ 0, 198 },
	{ 510, 58 },
	{ 510, 0 },
	{ 0, 44 },
	{ 510, 58 },
	{ 0, 44 },
	{ 0, 78 },
	{ 510, 0 },
	{ 488, 255 },
	{ 0, 198 },
	{ 510, 0 },
	{ 0, 198 },
	{ 0, 44 },
	{ 510, 58 },
	{ 488, 255 },
	{ 510, 0 }
};

NJS_MESHSET_SADX meshlist_00191714[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_00191694, NULL, NULL, NULL, uv_001916C0, NULL }
};

NJS_VECTOR vertex_0019172C[] = {
	{ -11.93974f, 7.007541f, 33.30229f },
	{ -10.07364f, 7.007541f, 32.90564f },
	{ -10.87766f, 6.548819f, 34.63426f },
	{ -11.52171f, -4.401338f, 33.43784f },
	{ -10.45182f, -4.401338f, 33.21043f },
	{ -10.78982f, -4.401338f, 34.25069f }
};

NJS_VECTOR normal_00191774[] = {
	{ -0.635778f, 0.500146f, -0.587911f },
	{ 0.8832f, 0.468687f, 0.017064f },
	{ -0.248725f, 0.39892f, 0.882609f },
	{ -0.983685f, -0.03969f, 0.175466f },
	{ 0.308773f, -0.035627f, -0.9504679f },
	{ 0.623363f, -0.033581f, 0.781211f }
};

NJS_MODEL_SADX attach_001917BC = { vertex_0019172C, normal_00191774, LengthOfArray<Sint32>(vertex_0019172C), meshlist_00191714, matlist_00191680, LengthOfArray<Uint16>(meshlist_00191714), LengthOfArray<Uint16>(matlist_00191680),{ -11.00669f, 1.303102f, 33.76995f }, 5.769555f, NULL };

NJS_OBJECT object_001917E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001917BC, 593.966204f, -390.405094f, -3064.55779f, 0, 0, 0, 1, 1, 1, NULL, &object_0019164C };
//-1.013794f, 3.817078f, -52.66748f

NJS_MATERIAL matlist_00191818[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0019182C[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_00191850[] = {
	{ 506, 255 },
	{ 506, 55 },
	{ 231, 68 },
	{ 506, 255 },
	{ 231, 68 },
	{ 296, 209 },
	{ 506, 55 },
	{ 506, 0 },
	{ 231, 29 },
	{ 506, 55 },
	{ 231, 29 },
	{ 231, 68 },
	{ 506, 0 },
	{ 506, 255 },
	{ 296, 209 },
	{ 506, 0 },
	{ 296, 209 },
	{ 231, 29 }
};

NJS_MESHSET_SADX meshlist_00191898[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0019182C, NULL, NULL, NULL, uv_00191850, NULL }
};

NJS_VECTOR vertex_001918B0[] = {
	{ -11.95554f, 6.078898f, 33.29717f },
	{ -10.05935f, 6.078898f, 32.89412f },
	{ -10.65839f, 6.078898f, 34.7378f },
	{ -11.66108f, 0.394662f, 33.39265f },
	{ -10.32574f, 0.394662f, 33.10881f },
	{ -10.7476f, 1.738662f, 34.40718f }
};

NJS_VECTOR normal_001918F8[] = {
	{ -0.6683879f, -0.047093f, -0.742321f },
	{ 0.979485f, -0.059103f, -0.192654f },
	{ -0.290666f, -0.061947f, 0.954817f },
	{ -0.972649f, -0.054091f, 0.225892f },
	{ 0.308292f, -0.050327f, -0.949959f },
	{ 0.656835f, -0.063034f, 0.751395f }
};

NJS_MODEL_SADX attach_00191940 = { vertex_001918B0, normal_001918F8, LengthOfArray<Sint32>(vertex_001918B0), meshlist_00191898, matlist_00191818, LengthOfArray<Uint16>(meshlist_00191898), LengthOfArray<Uint16>(matlist_00191818),{ -11.00744f, 3.23678f, 33.81595f }, 2.98789f, NULL };

NJS_OBJECT object_00191968 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00191940, 601.27138f, -390.805119f, -3087.0407f, 0, 0, 0, 1, 1, 1, NULL, &object_001917E4 };
//6.291382f, 3.417053f, -75.15039f

NJS_MATERIAL matlist_0019199C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001919B0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_001919D4[] = {
	{ 298, 198 },
	{ 234, 72 },
	{ 3, 55 },
	{ 298, 198 },
	{ 3, 55 },
	{ 3, 255 },
	{ 234, 72 },
	{ 234, 36 },
	{ 3, 0 },
	{ 234, 72 },
	{ 3, 0 },
	{ 3, 55 },
	{ 234, 36 },
	{ 298, 198 },
	{ 3, 255 },
	{ 234, 36 },
	{ 3, 255 },
	{ 3, 0 }
};

NJS_MESHSET_SADX meshlist_00191A1C[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_001919B0, NULL, NULL, NULL, uv_001919D4, NULL }
};

NJS_VECTOR vertex_00191A34[] = {
	{ -11.66108f, 0.394087f, 33.39265f },
	{ -10.32574f, 0.394087f, 33.10881f },
	{ -10.7476f, 1.738087f, 34.40718f },
	{ -12.06771f, -4.401338f, 33.26079f },
	{ -9.957865f, -4.401338f, 32.81232f },
	{ -10.62441f, -4.401338f, 34.86375f }
};

NJS_VECTOR normal_00191A7C[] = {
	{ -0.666607f, 0.07691199f, -0.74143f },
	{ 0.970894f, 0.078504f, -0.22628f },
	{ -0.331508f, 0.073264f, 0.940603f },
	{ -0.980211f, 0.072501f, 0.184203f },
	{ 0.30772f, 0.08221199f, -0.947918f },
	{ 0.681345f, 0.074685f, 0.728142f }
};

NJS_MODEL_SADX attach_00191AC4 = { vertex_00191A34, normal_00191A7C, LengthOfArray<Sint32>(vertex_00191A34), meshlist_00191A1C, matlist_0019199C, LengthOfArray<Uint16>(meshlist_00191A1C), LengthOfArray<Uint16>(matlist_0019199C),{ -11.01279f, -1.331626f, 33.83804f }, 3.236563f, NULL };

NJS_OBJECT object_00191AEC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00191AC4, 601.27138f, -390.805119f, -3087.0407f, 0, 0, 0, 1, 1, 1, NULL, &object_00191968 };
//6.291382f, 3.417053f, -75.15039f

NJS_MATERIAL matlist_00191B20[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00191B34[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_00191B58[] = {
	{ 280, 255 },
	{ 320, 92 },
	{ 0, 71 },
	{ 280, 255 },
	{ 0, 71 },
	{ 0, 255 },
	{ 320, 92 },
	{ 231, 46 },
	{ 0 },
	{ 320, 92 },
	{ 0 },
	{ 0, 71 },
	{ 231, 46 },
	{ 280, 255 },
	{ 0, 255 },
	{ 231, 46 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_00191BA0[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00191B34, NULL, NULL, NULL, uv_00191B58, NULL }
};

NJS_VECTOR vertex_00191BB8[] = {
	{ -11.66108f, 5.382065f, 33.39265f },
	{ -10.32574f, 3.222065f, 33.10881f },
	{ -10.7476f, 4.442065f, 34.40717f },
	{ -12.0607f, -2.36136f, 33.26306f },
	{ -9.964209f, -2.36136f, 32.81744f },
	{ -10.7476f, -2.36136f, 34.40717f }
};

NJS_VECTOR normal_00191C00[] = {
	{ -0.642503f, 0.057003f, -0.76416f },
	{ 0.9893889f, 0.044911f, -0.138174f },
	{ -0.242623f, 0.014612f, 0.970011f },
	{ -0.960616f, 0.03214f, 0.276014f },
	{ 0.336943f, 0.064381f, -0.939321f },
	{ 0.620388f, 0.018234f, 0.7840829f }
};

NJS_MODEL_SADX attach_00191C48 = { vertex_00191BB8, normal_00191C00, LengthOfArray<Sint32>(vertex_00191BB8), meshlist_00191BA0, matlist_00191B20, LengthOfArray<Uint16>(meshlist_00191BA0), LengthOfArray<Uint16>(matlist_00191B20),{ -11.01245f, 1.510353f, 33.61231f }, 3.952482f, NULL };

NJS_OBJECT object_00191C70 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00191C48, 635.975968f, -392.845097f, -3075.87469f, 0, 0, 0, 1, 1, 1, NULL, &object_00191AEC };
//40.99597f, 1.377075f, -63.98438f

NJS_MATERIAL matlist_00191CA4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00191CB8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00191CE8[] = {
	{ 253, 67 },
	{ 138, 255 },
	{ 141, -765 },
	{ 253, 67 },
	{ 141, -765 },
	{ 255, -620 },
	{ 138, 255 },
	{ 0, 164 },
	{ 1, -540 },
	{ 138, 255 },
	{ 1, -540 },
	{ 141, -765 },
	{ 0, 164 },
	{ 253, 67 },
	{ 255, -620 },
	{ 0, 164 },
	{ 255, -620 },
	{ 1, -540 },
	{ 253, 67 },
	{ 0, 164 },
	{ 138, 255 },
	{ 141, -765 },
	{ 1, -540 },
	{ 255, -620 }
};

NJS_MESHSET_SADX meshlist_00191D48[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00191CB8, NULL, NULL, NULL, uv_00191CE8, NULL }
};

NJS_VECTOR vertex_00191D60[] = {
	{ -7.57822f, 0.66469f, 23.29181f },
	{ -8.619864f, -0.061204f, 24.88744f },
	{ -8.371796f, -0.076106f, 27.06355f },
	{ -14.0036f, 1.394752f, 43.09903f },
	{ -13.06591f, 0.549954f, 38.59192f },
	{ -12.70228f, 0.52811f, 40.41171f }
};

NJS_VECTOR normal_00191DA8[] = {
	{ -0.246237f, 0.860893f, -0.44523f },
	{ -0.217716f, -0.9662679f, -0.13757f },
	{ 0.893087f, -0.404902f, 0.196087f },
	{ 0.595167f, 0.707382f, 0.381295f },
	{ -0.919159f, -0.337443f, -0.20317f },
	{ 0.072193f, -0.987343f, 0.141218f }
};

NJS_MODEL_SADX attach_00191DF0 = { vertex_00191D60, normal_00191DA8, LengthOfArray<Sint32>(vertex_00191D60), meshlist_00191D48, matlist_00191CA4, LengthOfArray<Uint16>(meshlist_00191D48), LengthOfArray<Uint16>(matlist_00191CA4),{ -10.79091f, 0.659323f, 33.19542f }, 10.41174f, NULL };

NJS_OBJECT object_00191E18 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00191DF0, 639.318738f, -385.996221f, -3086.25187f, 0, 0, 0, 1, 1, 1, NULL, &object_00191C70 };
//44.33874f, 8.225951f, -74.36156f

NJS_MATERIAL matlist_00191E4C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00191E60[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00191E90[] = {
	{ 253, 163 },
	{ 140, -4 },
	{ 140, -148 },
	{ 253, 163 },
	{ 140, -148 },
	{ 255, -255 },
	{ 140, -4 },
	{ 0, 255 },
	{ 1, -163 },
	{ 140, -4 },
	{ 1, -163 },
	{ 140, -148 },
	{ 0, 255 },
	{ 253, 163 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 1, -163 },
	{ 253, 163 },
	{ 0, 255 },
	{ 140, -4 },
	{ 140, -148 },
	{ 1, -163 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00191EF0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00191E60, NULL, NULL, NULL, uv_00191E90, NULL }
};

NJS_VECTOR vertex_00191F08[] = {
	{ -10.69175f, 1.195955f, 32.88616f },
	{ -9.754056f, 0.351158f, 28.37906f },
	{ -9.390421f, 0.329314f, 30.19886f },
	{ -11.48035f, 1.243328f, 35.3176f },
	{ -12.03515f, 0.488187f, 35.4122f },
	{ -11.66906f, 0.466196f, 37.22441f }
};

NJS_VECTOR normal_00191F50[] = {
	{ -0.11845f, 0.983234f, -0.138639f },
	{ -0.588832f, -0.6858169f, -0.427705f },
	{ 0.914798f, 0.350109f, 0.201415f },
	{ 0.060822f, 0.9764659f, 0.206916f },
	{ -0.951194f, 0.272576f, -0.144681f },
	{ -0.050238f, -0.908552f, 0.414741f }
};

NJS_MODEL_SADX attach_00191F98 = { vertex_00191F08, normal_00191F50, LengthOfArray<Sint32>(vertex_00191F08), meshlist_00191EF0, matlist_00191E4C, LengthOfArray<Uint16>(meshlist_00191EF0), LengthOfArray<Uint16>(matlist_00191E4C),{ -10.71279f, 0.786321f, 32.80174f }, 4.616068f, NULL };

NJS_OBJECT object_00191FC0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00191F98, 636.004408f, -385.806829f, -3076.04191f, 0, 0, 0, 1, 1, 1, NULL, &object_00191E18 };
//41.02441f, 8.415343f, -64.1516f

NJS_MATERIAL matlist_00191FF4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00192008[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00192038[] = {
	{ 253, 136 },
	{ 139, 255 },
	{ 140, -510 },
	{ 253, 136 },
	{ 140, -510 },
	{ 255, -440 },
	{ 139, 255 },
	{ 0, 238 },
	{ 0, -227 },
	{ 139, 255 },
	{ 0, -227 },
	{ 140, -510 },
	{ 0, 238 },
	{ 253, 136 },
	{ 255, -440 },
	{ 0, 238 },
	{ 255, -440 },
	{ 0, -227 },
	{ 253, 136 },
	{ 0, 238 },
	{ 139, 255 },
	{ 140, -510 },
	{ 0, -227 },
	{ 255, -440 }
};

NJS_MESHSET_SADX meshlist_00192098[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00192008, NULL, NULL, NULL, uv_00192038, NULL }
};

NJS_VECTOR vertex_001920B0[] = {
	{ -8.880244f, 1.103072f, 27.30394f },
	{ -9.435047f, 0.347931f, 27.39853f },
	{ -9.068954f, 0.32594f, 29.21074f },
	{ -12.6007f, 1.388137f, 38.772f },
	{ -11.70235f, 1.1053f, 34.38618f },
	{ -11.87965f, 0.556354f, 37.87381f }
};

NJS_VECTOR normal_001920F8[] = {
	{ 0.369021f, 0.900866f, -0.228611f },
	{ -0.376555f, -0.873821f, -0.307641f },
	{ 0.9508719f, -0.273792f, 0.144501f },
	{ 0.406062f, 0.8932469f, 0.192932f },
	{ -0.961526f, 0.075334f, -0.264184f },
	{ -0.370434f, -0.928844f, -0.005183f }
};

NJS_MODEL_SADX attach_00192140 = { vertex_001920B0, normal_001920F8, LengthOfArray<Sint32>(vertex_001920B0), meshlist_00192098, matlist_00191FF4, LengthOfArray<Uint16>(meshlist_00192098), LengthOfArray<Uint16>(matlist_00191FF4),{ -10.74047f, 0.857038f, 33.03797f }, 6.02821f, NULL };

NJS_OBJECT object_00192168 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00192140, 633.398208f, -385.669683f, -3068.02678f, 0, 0, 0, 1, 1, 1, NULL, &object_00191FC0 };
//38.41821f, 8.552489f, -56.13647f

NJS_MATERIAL matlist_0019219C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001921B0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001921E0[] = {
	{ 254, -32 },
	{ 140, -124 },
	{ 140, -220 },
	{ 254, -32 },
	{ 140, -220 },
	{ 255, -255 },
	{ 140, -124 },
	{ 0, 255 },
	{ 0, -254 },
	{ 140, -124 },
	{ 0, -254 },
	{ 140, -220 },
	{ 0, 255 },
	{ 254, -32 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 0, -254 },
	{ 254, -32 },
	{ 0, 255 },
	{ 140, -124 },
	{ 140, -220 },
	{ 0, -254 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00192240[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001921B0, NULL, NULL, NULL, uv_001921E0, NULL }
};

NJS_VECTOR vertex_00192258[] = {
	{ -10.82099f, 1.305361f, 33.28731f },
	{ -9.922639f, 1.022524f, 28.9015f },
	{ -10.09994f, 0.473578f, 32.38913f },
	{ -11.16845f, 1.224591f, 34.35416f },
	{ -11.76751f, 0.472109f, 34.58522f },
	{ -10.90474f, 0.420281f, 34.86605f }
};

NJS_VECTOR normal_001922A0[] = {
	{ 0.04265f, 0.999016f, 0.012191f },
	{ -0.477965f, -0.7983209f, -0.366379f },
	{ 0.935451f, 0.246234f, 0.253575f },
	{ 0.279249f, 0.8051299f, 0.523245f },
	{ -0.935616f, 0.310784f, 0.167439f },
	{ 0.099292f, -0.737842f, 0.66763f }
};

NJS_MODEL_SADX attach_001922E8 = { vertex_00192258, normal_001922A0, LengthOfArray<Sint32>(vertex_00192258), meshlist_00192240, matlist_0019219C, LengthOfArray<Uint16>(meshlist_00192240), LengthOfArray<Uint16>(matlist_0019219C),{ -10.84507f, 0.862821f, 31.88378f }, 3.121578f, NULL };

NJS_OBJECT object_00192310 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001922E8, 631.612318f, -385.581852f, -3062.5407f, 0, 0, 0, 1, 1, 1, NULL, &object_00192168 };
//36.63232f, 8.64032f, -50.65039f

NJS_MATERIAL matlist_00192344[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00192358[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00192388[] = {
	{ 254, 227 },
	{ 140, 255 },
	{ 140, 0 },
	{ 254, 227 },
	{ 140, 0 },
	{ 255, 31 },
	{ 140, 255 },
	{ 0, 227 },
	{ 0, 142 },
	{ 140, 255 },
	{ 0, 142 },
	{ 140, 0 },
	{ 0, 227 },
	{ 254, 227 },
	{ 255, 31 },
	{ 0, 227 },
	{ 255, 31 },
	{ 0, 142 },
	{ 254, 227 },
	{ 0, 227 },
	{ 140, 255 },
	{ 140, 0 },
	{ 0, 142 },
	{ 255, 31 }
};

NJS_MESHSET_SADX meshlist_001923E8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00192358, NULL, NULL, NULL, uv_00192388, NULL }
};

NJS_VECTOR vertex_00192400[] = {
	{ -10.35027f, 1.195386f, 31.83364f },
	{ -10.94933f, 0.442905f, 32.06469f },
	{ -10.08656f, 0.391076f, 32.34552f },
	{ -11.51627f, 1.063338f, 35.42497f },
	{ -11.33835f, 0.264181f, 33.26042f },
	{ -10.98455f, 0.242928f, 35.11053f }
};

NJS_VECTOR normal_00192448[] = {
	{ -0.3455f, 0.6918989f, -0.633961f },
	{ -0.148927f, -0.838631f, -0.523945f },
	{ 0.945916f, -0.279942f, -0.163934f },
	{ 0.057254f, 0.85822f, 0.51008f },
	{ -0.9668429f, -0.2067f, -0.149962f },
	{ 0.123519f, -0.98106f, 0.14921f }
};

NJS_MODEL_SADX attach_00192490 = { vertex_00192400, normal_00192448, LengthOfArray<Sint32>(vertex_00192400), meshlist_001923E8, matlist_00192344, LengthOfArray<Uint16>(meshlist_001923E8), LengthOfArray<Uint16>(matlist_00192344),{ -10.80141f, 0.719157f, 33.62931f }, 1.932723f, NULL };

NJS_OBJECT object_001924B8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00192490, 630.787738f, -385.55158f, -3060.01848f, 0, 0, 0, 1, 1, 1, NULL, &object_00192310 };
//35.80774f, 8.670592f, -48.12817f

NJS_MATERIAL matlist_001924EC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00192500[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00192530[] = {
	{ 254, 172 },
	{ 140, 149 },
	{ 140, 35 },
	{ 254, 172 },
	{ 140, 35 },
	{ 255, 0 },
	{ 140, 149 },
	{ 0, 255 },
	{ 0, 19 },
	{ 140, 149 },
	{ 0, 19 },
	{ 140, 35 },
	{ 0, 255 },
	{ 254, 172 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0, 19 },
	{ 254, 172 },
	{ 0, 255 },
	{ 140, 149 },
	{ 140, 35 },
	{ 0, 19 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00192590[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00192500, NULL, NULL, NULL, uv_00192530, NULL }
};

NJS_VECTOR vertex_001925A8[] = {
	{ -10.53088f, 1.016349f, 32.38917f },
	{ -10.35296f, 0.217193f, 30.22461f },
	{ -9.999166f, 0.19594f, 32.07473f },
	{ -11.24153f, 1.229073f, 34.57801f },
	{ -11.81354f, 0.474966f, 34.72567f },
	{ -11.07371f, 0.430523f, 35.38556f }
};

NJS_VECTOR normal_001925F0[] = {
	{ 0.050936f, 0.972946f, -0.225346f },
	{ -0.214986f, -0.886064f, -0.410696f },
	{ 0.9689299f, 0.200356f, 0.145024f },
	{ 0.179801f, 0.908456f, 0.377331f },
	{ -0.955251f, 0.293317f, 0.038206f },
	{ 0.056988f, -0.72998f, 0.681089f }
};

NJS_MODEL_SADX attach_00192638 = { vertex_001925A8, normal_001925F0, LengthOfArray<Sint32>(vertex_001925A8), meshlist_00192590, matlist_001924EC, LengthOfArray<Uint16>(meshlist_00192590), LengthOfArray<Uint16>(matlist_001924EC),{ -10.90635f, 0.712506f, 32.80508f }, 2.735269f, NULL };

NJS_OBJECT object_00192660 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00192638, 629.800428f, -385.501957f, -3056.98479f, 0, 0, 0, 1, 1, 1, NULL, &object_001924B8 };
//34.82043f, 8.720215f, -45.09448f

NJS_MATERIAL matlist_00192694[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001926A8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001926D8[] = {
	{ 250, 171 },
	{ 139, -244 },
	{ 142, -1275 },
	{ 250, 171 },
	{ 142, -1275 },
	{ 255, -1146 },
	{ 139, -244 },
	{ 0, 254 },
	{ 3, -851 },
	{ 139, -244 },
	{ 3, -851 },
	{ 142, -1275 },
	{ 0, 254 },
	{ 250, 171 },
	{ 255, -1146 },
	{ 0, 254 },
	{ 255, -1146 },
	{ 3, -851 },
	{ 250, 171 },
	{ 0, 254 },
	{ 139, -244 },
	{ 142, -1275 },
	{ 3, -851 },
	{ 255, -1146 }
};

NJS_MESHSET_SADX meshlist_00192738[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001926A8, NULL, NULL, NULL, uv_001926D8, NULL }
};

NJS_VECTOR vertex_00192750[] = {
	{ -8.757459f, 3.251945f, 26.92918f },
	{ -5.54046f, 1.583592f, 15.39444f },
	{ -5.297307f, 1.801049f, 17.5857f },
	{ -16.366f, 3.680955f, 50.38289f },
	{ -13.70961f, 2.732912f, 40.57663f },
	{ -15.0278f, 2.812098f, 47.58187f }
};

NJS_VECTOR normal_00192798[] = {
	{ -0.271663f, 0.948096f, -0.16527f },
	{ -0.782189f, -0.5249169f, -0.335623f },
	{ 0.907748f, 0.348756f, 0.233161f },
	{ 0.354745f, 0.908267f, 0.221825f },
	{ -0.931505f, -0.255212f, -0.259164f },
	{ 0.016698f, -0.996521f, 0.081657f }
};

NJS_MODEL_SADX attach_001927E0 = { vertex_00192750, normal_00192798, LengthOfArray<Sint32>(vertex_00192750), meshlist_00192738, matlist_00192694, LengthOfArray<Uint16>(meshlist_00192738), LengthOfArray<Uint16>(matlist_00192694),{ -10.83166f, 2.632274f, 32.88866f }, 18.34868f, NULL };

NJS_OBJECT object_00192808 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001927E0, 625.174698f, -389.601505f, -3042.69695f, 0, 0, 0, 1, 1, 1, NULL, &object_00192660 };
//30.1947f, 4.620667f, -30.80664f

NJS_MATERIAL matlist_0019283C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00192850[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00192880[] = {
	{ 254, 49 },
	{ 139, 255 },
	{ 142, -765 },
	{ 254, 49 },
	{ 142, -765 },
	{ 255, -253 },
	{ 139, 255 },
	{ 0, 125 },
	{ 0, -150 },
	{ 139, 255 },
	{ 0, -150 },
	{ 142, -765 },
	{ 0, 125 },
	{ 254, 49 },
	{ 255, -253 },
	{ 0, 125 },
	{ 255, -253 },
	{ 0, -150 },
	{ 254, 49 },
	{ 0, 125 },
	{ 139, 255 },
	{ 142, -765 },
	{ 0, -150 },
	{ 255, -253 }
};

NJS_MESHSET_SADX meshlist_001928E0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00192850, NULL, NULL, NULL, uv_00192880, NULL }
};

NJS_VECTOR vertex_001928F8[] = {
	{ -8.772447f, 3.224948f, 26.97093f },
	{ -10.02555f, 2.511756f, 29.21855f },
	{ -9.617658f, 2.487253f, 30.90188f },
	{ -14.90157f, 3.593137f, 45.86844f },
	{ -11.68457f, 1.924784f, 34.33368f },
	{ -11.44142f, 2.142241f, 36.52494f }
};

NJS_VECTOR normal_00192940[] = {
	{ -0.469734f, 0.8117999f, -0.346886f },
	{ 0.107115f, -0.988784f, -0.104075f },
	{ 0.8529699f, -0.492686f, 0.172343f },
	{ 0.88964f, -0.01671f, 0.456356f },
	{ -0.819895f, -0.5427279f, -0.18226f },
	{ 0.44155f, -0.885942f, 0.141921f }
};

NJS_MODEL_SADX attach_00192988 = { vertex_001928F8, normal_00192940, LengthOfArray<Sint32>(vertex_001928F8), meshlist_001928E0, matlist_0019283C, LengthOfArray<Uint16>(meshlist_001928E0), LengthOfArray<Uint16>(matlist_0019283C),{ -11.83701f, 2.75896f, 36.41968f }, 9.933273f, NULL };

NJS_OBJECT object_001929B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00192988, 631.326068f, -389.941838f, -3061.63323f, 0, 0, 0, 1, 1, 1, NULL, &object_00192808 };
//36.34607f, 4.280334f, -49.74292f

NJS_MATERIAL matlist_001929E4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001929F8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00192A28[] = {
	{ 253, 228 },
	{ 139, 220 },
	{ 140, -63 },
	{ 253, 228 },
	{ 140, -63 },
	{ 255, -255 },
	{ 139, 220 },
	{ 0, 255 },
	{ 1, -184 },
	{ 139, 220 },
	{ 1, -184 },
	{ 140, -63 },
	{ 0, 255 },
	{ 253, 228 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 1, -184 },
	{ 253, 228 },
	{ 0, 255 },
	{ 139, 220 },
	{ 140, -63 },
	{ 1, -184 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00192A88[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001929F8, NULL, NULL, NULL, uv_00192A28, NULL }
};

NJS_VECTOR vertex_00192AA0[] = {
	{ -9.452525f, 3.281556f, 29.06989f },
	{ -9.702437f, 2.5081f, 28.22444f },
	{ -9.006866f, 2.466316f, 29.02079f },
	{ -11.27479f, 3.374993f, 34.68537f },
	{ -12.52789f, 2.661801f, 36.93298f },
	{ -12.12f, 2.637298f, 38.61632f }
};

NJS_VECTOR normal_00192AE8[] = {
	{ -0.016751f, 0.917733f, -0.396844f },
	{ -0.156457f, -0.760998f, -0.6296059f },
	{ 0.990569f, 0.13535f, -0.021299f },
	{ 0.225815f, 0.962654f, 0.149347f },
	{ -0.87179f, 0.451482f, -0.190121f },
	{ 0.472819f, -0.757305f, 0.450479f }
};

NJS_MODEL_SADX attach_00192B30 = { vertex_00192AA0, normal_00192AE8, LengthOfArray<Sint32>(vertex_00192AA0), meshlist_00192A88, matlist_001929E4, LengthOfArray<Uint16>(meshlist_00192A88), LengthOfArray<Uint16>(matlist_001929E4),{ -10.76738f, 2.920654f, 33.42038f }, 5.48608f, NULL };

NJS_OBJECT object_00192B58 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00192B30, 633.831068f, -390.082585f, -3069.34587f, 0, 0, 0, 1, 1, 1, NULL, &object_001929B0 };
//38.85107f, 4.139587f, -57.45556f

NJS_MATERIAL matlist_00192B8C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00192BA0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00192BD0[] = {
	{ 254, -14 },
	{ 139, 255 },
	{ 140, -255 },
	{ 254, -14 },
	{ 140, -255 },
	{ 255, -244 },
	{ 139, 255 },
	{ 0, 38 },
	{ 0, -212 },
	{ 139, 255 },
	{ 0, -212 },
	{ 140, -255 },
	{ 0, 38 },
	{ 254, -14 },
	{ 255, -244 },
	{ 0, 38 },
	{ 255, -244 },
	{ 0, -212 },
	{ 254, -14 },
	{ 0, 38 },
	{ 139, 255 },
	{ 140, -255 },
	{ 0, -212 },
	{ 255, -244 }
};

NJS_MESHSET_SADX meshlist_00192C30[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00192BA0, NULL, NULL, NULL, uv_00192BD0, NULL }
};

NJS_VECTOR vertex_00192C48[] = {
	{ -8.917109f, 3.265388f, 27.42302f },
	{ -10.51936f, 2.57317f, 30.74715f },
	{ -9.936894f, 2.538181f, 31.89222f },
	{ -11.58124f, 3.39337f, 35.63122f },
	{ -11.83115f, 2.619914f, 34.78577f },
	{ -11.13558f, 2.57813f, 35.58211f }
};

NJS_VECTOR normal_00192C90[] = {
	{ -0.621458f, 0.659183f, -0.4234f },
	{ -0.279902f, -0.947632f, -0.153781f },
	{ 0.846647f, -0.496034f, 0.192715f },
	{ 0.153563f, 0.7613609f, 0.629879f },
	{ -0.9912519f, -0.130078f, 0.022354f },
	{ 0.024574f, -0.918057f, 0.395686f }
};

NJS_MODEL_SADX attach_00192CD8 = { vertex_00192C48, normal_00192C90, LengthOfArray<Sint32>(vertex_00192C48), meshlist_00192C30, matlist_00192B8C, LengthOfArray<Uint16>(meshlist_00192C30), LengthOfArray<Uint16>(matlist_00192B8C),{ -10.37413f, 2.965775f, 31.52712f }, 4.354973f, NULL };

NJS_OBJECT object_00192D00 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00192CD8, 635.965838f, -390.191471f, -3075.90837f, 0, 0, 0, 1, 1, 1, NULL, &object_00192B58 };
//40.98584f, 4.030701f, -64.01806f

NJS_MATERIAL matlist_00192D34[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00192D48[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00192D78[] = {
	{ 253, 46 },
	{ 138, 255 },
	{ 140, -294 },
	{ 253, 46 },
	{ 140, -294 },
	{ 255, -510 },
	{ 138, 255 },
	{ 0, 121 },
	{ 1, -466 },
	{ 138, 255 },
	{ 1, -466 },
	{ 140, -294 },
	{ 0, 121 },
	{ 253, 46 },
	{ 255, -510 },
	{ 0, 121 },
	{ 255, -510 },
	{ 1, -466 },
	{ 253, 46 },
	{ 0, 121 },
	{ 138, 255 },
	{ 140, -294 },
	{ 1, -466 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_00192DD8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00192D48, NULL, NULL, NULL, uv_00192D78, NULL }
};

NJS_VECTOR vertex_00192DF0[] = {
	{ -7.693392f, 3.179916f, 23.64722f },
	{ -9.044847f, 2.472633f, 26.19807f },
	{ -8.671376f, 2.450198f, 27.98755f },
	{ -11.29852f, 3.376448f, 34.75897f },
	{ -12.90078f, 2.68423f, 38.0831f },
	{ -12.31831f, 2.64924f, 39.22817f }
};

NJS_VECTOR normal_00192E38[] = {
	{ -0.487476f, 0.761173f, -0.427765f },
	{ -0.229938f, -0.962878f, -0.141401f },
	{ 0.86948f, -0.452155f, 0.198901f },
	{ 0.285322f, 0.946479f, 0.150894f },
	{ -0.843069f, 0.502118f, -0.192647f },
	{ 0.6333539f, -0.6397859f, 0.435357f }
};

NJS_MODEL_SADX attach_00192E80 = { vertex_00192DF0, normal_00192E38, LengthOfArray<Sint32>(vertex_00192DF0), meshlist_00192DD8, matlist_00192D34, LengthOfArray<Uint16>(meshlist_00192DD8), LengthOfArray<Uint16>(matlist_00192D34),{ -10.29708f, 2.913323f, 31.4377f }, 8.214098f, NULL };

NJS_OBJECT object_00192EA8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00192E80, 638.354018f, -390.305851f, -3083.24113f, 0, 0, 0, 1, 1, 1, NULL, &object_00192D00 };
//43.37402f, 3.916321f, -71.35082f

NJS_MATERIAL matlist_00192EDC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00192EF0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00192F20[] = {
	{ 254, 254 },
	{ 139, 230 },
	{ 140, 0 },
	{ 254, 254 },
	{ 140, 0 },
	{ 255, 25 },
	{ 139, 230 },
	{ 0, 255 },
	{ 0, 140 },
	{ 139, 230 },
	{ 0, 140 },
	{ 140, 0 },
	{ 0, 255 },
	{ 254, 254 },
	{ 255, 25 },
	{ 0, 255 },
	{ 255, 25 },
	{ 0, 140 },
	{ 254, 254 },
	{ 0, 255 },
	{ 139, 230 },
	{ 140, 0 },
	{ 0, 140 },
	{ 255, 25 }
};

NJS_MESHSET_SADX meshlist_00192F80[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00192EF0, NULL, NULL, NULL, uv_00192F20, NULL }
};

NJS_VECTOR vertex_00192F98[] = {
	{ -10.62549f, 2.649354f, 32.68405f },
	{ -10.93196f, 1.879297f, 32.01297f },
	{ -10.06919f, 1.827469f, 32.2938f },
	{ -12.23042f, 3.432398f, 37.63241f },
	{ -11.72548f, 2.159028f, 34.45956f },
	{ -11.66428f, 2.609921f, 37.21183f }
};

NJS_VECTOR normal_00192FE0[] = {
	{ -0.158944f, 0.857786f, -0.488814f },
	{ -0.349979f, -0.672063f, -0.652569f },
	{ 0.953568f, 0.273133f, -0.126909f },
	{ 0.148116f, 0.969595f, 0.194803f },
	{ -0.963533f, -0.210685f, -0.164971f },
	{ 0.047109f, -0.960208f, 0.275285f }
};

NJS_MODEL_SADX attach_00193028 = { vertex_00192F98, normal_00192FE0, LengthOfArray<Sint32>(vertex_00192F98), meshlist_00192F80, matlist_00192EDC, LengthOfArray<Uint16>(meshlist_00192F80), LengthOfArray<Uint16>(matlist_00192EDC),{ -11.1498f, 2.629933f, 34.82269f }, 3.010326f, NULL };

NJS_OBJECT object_00193050 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00193028, 592.235125f, -389.849858f, -3059.02312f, 0, 0, 0, 1, 1, 1, NULL, &object_00192EA8 };
//-2.744873f, 4.372314f, -47.13281f

NJS_MATERIAL matlist_00193084[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00193098[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001930C8[] = {
	{ 254, 155 },
	{ 139, 255 },
	{ 140, -255 },
	{ 254, 155 },
	{ 140, -255 },
	{ 255, -220 },
	{ 139, 255 },
	{ 0, 193 },
	{ 0, -220 },
	{ 139, 255 },
	{ 0, -220 },
	{ 140, -255 },
	{ 0, 193 },
	{ 254, 155 },
	{ 255, -220 },
	{ 0, 193 },
	{ 255, -220 },
	{ 0, -220 },
	{ 254, 155 },
	{ 0, 193 },
	{ 139, 255 },
	{ 140, -255 },
	{ 0, -220 },
	{ 255, -220 }
};

NJS_MESHSET_SADX meshlist_00193128[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00193098, NULL, NULL, NULL, uv_001930C8, NULL }
};

NJS_VECTOR vertex_00193140[] = {
	{ -9.488234f, 3.275747f, 29.17882f },
	{ -10.25941f, 2.533605f, 29.94054f },
	{ -9.581051f, 2.492855f, 30.78996f },
	{ -11.9616f, 2.729679f, 36.80327f },
	{ -12.26806f, 1.959622f, 36.13218f },
	{ -11.40529f, 1.907794f, 36.41301f }
};

NJS_VECTOR normal_00193188[] = {
	{ -0.357551f, 0.796569f, -0.487478f },
	{ -0.139186f, -0.936515f, -0.321818f },
	{ 0.9216869f, -0.382227f, 0.06630699f },
	{ 0.346938f, 0.574657f, 0.741217f },
	{ -0.9676999f, -0.217318f, 0.127787f },
	{ 0.24498f, -0.892007f, 0.379878f }
};

NJS_MODEL_SADX attach_001931D0 = { vertex_00193140, normal_00193188, LengthOfArray<Sint32>(vertex_00193140), meshlist_00193128, matlist_00193084, LengthOfArray<Uint16>(meshlist_00193128), LengthOfArray<Uint16>(matlist_00193084),{ -10.87815f, 2.59177f, 32.99105f }, 4.057731f, NULL };

NJS_OBJECT object_001931F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001931D0, 593.573992f, -389.920597f, -3063.14079f, 0, 0, 0, 1, 1, 1, NULL, &object_00193050 };
//-1.406006f, 4.301575f, -51.25048f

NJS_MATERIAL matlist_0019322C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00193240[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00193270[] = {
	{ 254, 198 },
	{ 140, 86 },
	{ 140, -135 },
	{ 254, 198 },
	{ 140, -135 },
	{ 255, -255 },
	{ 140, 86 },
	{ 0, 255 },
	{ 0, -209 },
	{ 140, 86 },
	{ 0, -209 },
	{ 140, -135 },
	{ 0, 255 },
	{ 254, 198 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 0, -209 },
	{ 254, 198 },
	{ 0, 255 },
	{ 140, 86 },
	{ 140, -135 },
	{ 0, -209 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_001932D0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00193240, NULL, NULL, NULL, uv_00193270, NULL }
};

NJS_VECTOR vertex_001932E8[] = {
	{ -10.41377f, 3.699038f, 32.0328f },
	{ -10.2088f, 2.898256f, 29.78485f },
	{ -9.574697f, 2.860165f, 30.77073f },
	{ -11.30636f, 3.37698f, 34.78264f },
	{ -12.07754f, 2.634837f, 35.54437f },
	{ -11.39918f, 2.594087f, 36.39378f }
};

NJS_VECTOR normal_00193330[] = {
	{ -0.118385f, 0.9811839f, -0.152524f },
	{ -0.385391f, -0.6828369f, -0.6206509f },
	{ 0.938814f, 0.316925f, 0.13486f },
	{ 0.197815f, 0.924771f, 0.325065f },
	{ -0.908569f, 0.415499f, -0.043165f },
	{ 0.413666f, -0.693423f, 0.589954f }
};

NJS_MODEL_SADX attach_00193378 = { vertex_001932E8, normal_00193330, LengthOfArray<Sint32>(vertex_001932E8), meshlist_001932D0, matlist_0019322C, LengthOfArray<Uint16>(meshlist_001932D0), LengthOfArray<Uint16>(matlist_0019322C),{ -10.82612f, 3.146562f, 33.08932f }, 3.533463f, NULL };

NJS_OBJECT object_001933A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00193378, 595.394183f, -390.020268f, -3068.7426f, 0, 0, 0, 1, 1, 1, NULL, &object_001931F8 };
//0.414185f, 4.201904f, -56.85229f

NJS_MATERIAL matlist_001933D4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001933E8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00193418[] = {
	{ 254, -53 },
	{ 140, 83 },
	{ 140, -255 },
	{ 254, -53 },
	{ 140, -255 },
	{ 255, -187 },
	{ 140, 83 },
	{ 0, 255 },
	{ 0, -153 },
	{ 140, 83 },
	{ 0, -153 },
	{ 140, -255 },
	{ 0, 255 },
	{ 254, -53 },
	{ 255, -187 },
	{ 0, 255 },
	{ 255, -187 },
	{ 0, -153 },
	{ 254, -53 },
	{ 0, 255 },
	{ 140, 83 },
	{ 140, -255 },
	{ 0, -153 },
	{ 255, -187 }
};

NJS_MESHSET_SADX meshlist_00193478[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001933E8, NULL, NULL, NULL, uv_00193418, NULL }
};

NJS_VECTOR vertex_00193490[] = {
	{ -9.525423f, 3.290031f, 29.2963f },
	{ -8.850823f, 2.461039f, 25.60037f },
	{ -10.05837f, 2.533578f, 32.26445f },
	{ -11.80034f, 3.77031f, 36.30669f },
	{ -11.59537f, 2.969529f, 34.05874f },
	{ -10.96127f, 2.931437f, 35.04462f }
};

NJS_VECTOR normal_001934D8[] = {
	{ 0.233156f, 0.969836f, -0.071105f },
	{ -0.424406f, -0.8930039f, -0.149746f },
	{ 0.964268f, 0.098882f, 0.245783f },
	{ 0.527712f, 0.720732f, 0.449517f },
	{ -0.9499339f, -0.286009f, -0.125798f },
	{ -0.193834f, -0.965739f, 0.172559f }
};

NJS_MODEL_SADX attach_00193520 = { vertex_00193490, normal_001934D8, LengthOfArray<Sint32>(vertex_00193490), meshlist_00193478, matlist_001933D4, LengthOfArray<Uint16>(meshlist_00193478), LengthOfArray<Uint16>(matlist_001933D4),{ -10.32558f, 3.115674f, 30.95353f }, 5.552579f, NULL };

NJS_OBJECT object_00193548 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00193520, 596.782488f, -390.093937f, -3073.01384f, 0, 0, 0, 1, 1, 1, NULL, &object_001933A0 };
//1.80249f, 4.128235f, -61.12353f

NJS_MATERIAL matlist_0019357C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00193590[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001935C0[] = {
	{ 252, 226 },
	{ 139, 114 },
	{ 140, -386 },
	{ 252, 226 },
	{ 140, -386 },
	{ 255, -510 },
	{ 139, 114 },
	{ 0, 255 },
	{ 1, -232 },
	{ 139, 114 },
	{ 1, -232 },
	{ 140, -386 },
	{ 0, 255 },
	{ 252, 226 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 1, -232 },
	{ 252, 226 },
	{ 0, 255 },
	{ 139, 114 },
	{ 140, -386 },
	{ 1, -232 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_00193620[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00193590, NULL, NULL, NULL, uv_001935C0, NULL }
};

NJS_VECTOR vertex_00193638[] = {
	{ -8.876691f, 3.230935f, 27.2916f },
	{ -8.30782f, 2.408293f, 23.92166f },
	{ -7.65405f, 2.36902f, 24.84688f },
	{ -12.61094f, 3.455259f, 38.80514f },
	{ -11.93634f, 2.626266f, 35.10921f },
	{ -13.14388f, 2.698805f, 41.77331f }
};

NJS_VECTOR normal_00193680[] = {
	{ -0.166584f, 0.970602f, -0.173729f },
	{ -0.666212f, -0.563496f, -0.488502f },
	{ 0.906181f, 0.388697f, 0.166588f },
	{ -0.049688f, 0.996851f, 0.061801f },
	{ -0.964516f, 0.03401f, -0.261824f },
	{ -0.159786f, -0.9855199f, 0.056732f }
};

NJS_MODEL_SADX attach_001936C8 = { vertex_00193638, normal_00193680, LengthOfArray<Sint32>(vertex_00193638), meshlist_00193620, matlist_0019357C, LengthOfArray<Uint16>(meshlist_00193620), LengthOfArray<Uint16>(matlist_0019357C),{ -10.39897f, 2.912139f, 32.84748f }, 9.33831f, NULL };

NJS_OBJECT object_001936F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001936C8, 599.873675f, -390.260258f, -3082.52409f, 0, 0, 0, 1, 1, 1, NULL, &object_00193548 };
//4.893677f, 3.961914f, -70.63378f

NJS_MATERIAL matlist_00193724[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00193738[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00193768[] = {
	{ 254, 41 },
	{ 139, 255 },
	{ 140, -255 },
	{ 254, 41 },
	{ 140, -255 },
	{ 255, -76 },
	{ 139, 255 },
	{ 0, 115 },
	{ 0, -32 },
	{ 139, 255 },
	{ 0, -32 },
	{ 140, -255 },
	{ 0, 115 },
	{ 254, 41 },
	{ 255, -76 },
	{ 0, 115 },
	{ 255, -76 },
	{ 0, -32 },
	{ 254, 41 },
	{ 0, 115 },
	{ 139, 255 },
	{ 140, -255 },
	{ 0, -32 },
	{ 255, -76 }
};

NJS_MESHSET_SADX meshlist_001937C8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00193738, NULL, NULL, NULL, uv_00193768, NULL }
};

NJS_VECTOR vertex_001937E0[] = {
	{ -9.837533f, 3.288714f, 30.25441f },
	{ -10.96278f, 2.567841f, 32.1078f },
	{ -10.4467f, 2.53684f, 33.45756f },
	{ -12.22436f, 3.432095f, 37.61353f },
	{ -11.65549f, 2.609453f, 34.24358f },
	{ -11.00171f, 2.57018f, 35.1688f }
};

NJS_VECTOR normal_00193828[] = {
	{ -0.461411f, 0.734423f, -0.497717f },
	{ -0.229723f, -0.958384f, -0.169491f },
	{ 0.87586f, -0.452099f, 0.168747f },
	{ 0.666216f, 0.563489f, 0.488503f },
	{ -0.90618f, -0.388697f, -0.166588f },
	{ 0.166586f, -0.970601f, 0.173729f }
};

NJS_MODEL_SADX attach_00193870 = { vertex_001937E0, normal_00193828, LengthOfArray<Sint32>(vertex_001937E0), meshlist_001937C8, matlist_00193724, LengthOfArray<Uint16>(meshlist_001937C8), LengthOfArray<Uint16>(matlist_00193724),{ -11.03094f, 2.984468f, 33.93397f }, 3.868263f, NULL };

NJS_OBJECT object_00193898 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00193870, 603.223649f, -390.451786f, -3092.84295f, 0, 0, 0, 1, 1, 1, NULL, &object_001936F0 };
//8.243651f, 3.770386f, -80.95264f

NJS_MATERIAL matlist_001938CC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001938E0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00193910[] = {
	{ 253, 158 },
	{ 139, 103 },
	{ 140, -64 },
	{ 253, 158 },
	{ 140, -64 },
	{ 255, -255 },
	{ 139, 103 },
	{ 0, 255 },
	{ 1, -188 },
	{ 139, 103 },
	{ 1, -188 },
	{ 140, -64 },
	{ 0, 255 },
	{ 253, 158 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 1, -188 },
	{ 253, 158 },
	{ 0, 255 },
	{ 139, 103 },
	{ 140, -64 },
	{ 1, -188 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00193970[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001938E0, NULL, NULL, NULL, uv_00193910, NULL }
};

NJS_VECTOR vertex_00193988[] = {
	{ -10.26452f, 3.125387f, 31.5709f },
	{ -9.946449f, 2.317811f, 28.97422f },
	{ -9.587732f, 2.296263f, 30.80917f },
	{ -11.14902f, 3.367438f, 34.298f },
	{ -12.27426f, 2.646565f, 36.15139f },
	{ -11.75818f, 2.615563f, 37.50116f }
};

NJS_VECTOR normal_001939D0[] = {
	{ -0.013206f, 0.9776509f, -0.209821f },
	{ -0.316974f, -0.836318f, -0.447325f },
	{ 0.956693f, 0.246036f, 0.155579f },
	{ 0.232731f, 0.962171f, 0.141643f },
	{ -0.881811f, 0.435222f, -0.181633f },
	{ 0.376423f, -0.766361f, 0.520573f }
};

NJS_MODEL_SADX attach_00193A18 = { vertex_00193988, normal_001939D0, LengthOfArray<Sint32>(vertex_00193988), meshlist_00193970, matlist_001938CC, LengthOfArray<Uint16>(meshlist_00193970), LengthOfArray<Uint16>(matlist_001938CC),{ -10.931f, 2.83185f, 33.23769f }, 4.470156f, NULL };

NJS_OBJECT object_00193A40 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00193A18, 604.53798f, -390.521f, -3096.88518f, 0, 0, 0, 1, 1, 1, NULL, &object_00193898 };
//9.557982f, 3.701172f, -84.99487f

NJS_MATERIAL matlist_00193A74[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00193A88[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00193AB8[] = {
	{ 254, 133 },
	{ 139, 255 },
	{ 140, -255 },
	{ 254, 133 },
	{ 140, -255 },
	{ 255, -208 },
	{ 139, 255 },
	{ 0, 182 },
	{ 0, -127 },
	{ 139, 255 },
	{ 0, -127 },
	{ 140, -255 },
	{ 0, 182 },
	{ 254, 133 },
	{ 255, -208 },
	{ 0, 182 },
	{ 255, -208 },
	{ 0, -127 },
	{ 254, 133 },
	{ 0, 182 },
	{ 139, 255 },
	{ 140, -255 },
	{ 0, -127 },
	{ 255, -208 }
};

NJS_MESHSET_SADX meshlist_00193B18[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00193A88, NULL, NULL, NULL, uv_00193AB8, NULL }
};

NJS_VECTOR vertex_00193B30[] = {
	{ -9.13932f, 3.266716f, 28.10534f },
	{ -10.0654f, 2.533879f, 29.34468f },
	{ -9.509981f, 2.500514f, 30.57314f },
	{ -12.31662f, 3.248628f, 37.89798f },
	{ -11.99855f, 2.441052f, 35.3013f },
	{ -11.63983f, 2.419503f, 37.13625f }
};

NJS_VECTOR normal_00193B78[] = {
	{ -0.38234f, 0.774579f, -0.503828f },
	{ -0.157794f, -0.966106f, -0.204303f },
	{ 0.8975019f, -0.418375f, 0.139474f },
	{ 0.200929f, 0.849898f, 0.487135f },
	{ -0.954669f, -0.249383f, -0.162529f },
	{ 0.059184f, -0.984358f, 0.16594f }
};

NJS_MODEL_SADX attach_00193BC0 = { vertex_00193B30, normal_00193B78, LengthOfArray<Sint32>(vertex_00193B30), meshlist_00193B18, matlist_00193A74, LengthOfArray<Uint16>(meshlist_00193B18), LengthOfArray<Uint16>(matlist_00193A74),{ -10.72797f, 2.84311f, 33.00166f }, 5.147639f, NULL };

NJS_OBJECT object_00193BE8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00193BC0, 606.592548f, -390.634709f, -3103.20988f, 0, 0, 0, 1, 1, 1, NULL, &object_00193A40 };
//11.61255f, 3.587463f, -91.31957f

NJS_MATERIAL matlist_00193C1C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00193C30[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00193C60[] = {
	{ 244, 244 },
	{ 134, 255 },
	{ 148, 0 },
	{ 244, 244 },
	{ 148, 0 },
	{ 255, 71 },
	{ 134, 255 },
	{ 0, 244 },
	{ 7, 115 },
	{ 134, 255 },
	{ 7, 115 },
	{ 148, 0 },
	{ 0, 244 },
	{ 244, 244 },
	{ 255, 71 },
	{ 0, 244 },
	{ 255, 71 },
	{ 7, 115 },
	{ 244, 244 },
	{ 0, 244 },
	{ 134, 255 },
	{ 148, 0 },
	{ 7, 115 },
	{ 255, 71 }
};

NJS_MESHSET_SADX meshlist_00193CC0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00193C30, NULL, NULL, NULL, uv_00193C60, NULL }
};

NJS_VECTOR vertex_00193CD8[] = {
	{ -10.55369f, 1.187725f, 32.46238f },
	{ -11.20438f, 0.438345f, 32.85263f },
	{ -10.34161f, 0.386517f, 33.13347f },
	{ -14.92517f, 1.343414f, 46.09619f },
	{ -13.4281f, 0.5934139f, 39.78881f },
	{ -13.31293f, 0.542633f, 42.40967f }
};

NJS_VECTOR normal_00193D20[] = {
	{ -0.32265f, 0.6604069f, -0.6780559f },
	{ -0.310101f, -0.8434139f, -0.438736f },
	{ 0.9348519f, -0.331431f, -0.127303f },
	{ 0.570759f, 0.752145f, 0.329413f },
	{ -0.917142f, -0.325228f, -0.230385f },
	{ 0.090717f, -0.990756f, 0.100866f }
};

NJS_MODEL_SADX attach_00193D68 = { vertex_00193CD8, normal_00193D20, LengthOfArray<Sint32>(vertex_00193CD8), meshlist_00193CC0, matlist_00193C1C, LengthOfArray<Uint16>(meshlist_00193CC0), LengthOfArray<Uint16>(matlist_00193C1C),{ -12.63339f, 0.864966f, 39.27928f }, 7.191822f, NULL };

NJS_OBJECT object_00193D90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00193D68, 590.2643f, -385.1861f, -3052.924f, 0, 0, 0, 1, 1, 1, NULL, &object_00193BE8 };
//-4.715698f, 9.036072f, -41.03369f

NJS_MATERIAL matlist_00193DC4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00193DD8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00193E08[] = {
	{ 254, 86 },
	{ 139, 255 },
	{ 140, 37 },
	{ 254, 86 },
	{ 140, 37 },
	{ 255, 0 },
	{ 139, 255 },
	{ 0, 86 },
	{ 0 },
	{ 139, 255 },
	{ 0 },
	{ 140, 37 },
	{ 0, 86 },
	{ 254, 86 },
	{ 255, 0 },
	{ 0, 86 },
	{ 255, 0 },
	{ 0 },
	{ 254, 86 },
	{ 0, 86 },
	{ 139, 255 },
	{ 140, 37 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00193E68[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00193DD8, NULL, NULL, NULL, uv_00193E08, NULL }
};

NJS_VECTOR vertex_00193E80[] = {
	{ -10.0369f, 1.156527f, 30.86828f },
	{ -11.31459f, 0.444812f, 33.19169f },
	{ -10.45182f, 0.392984f, 33.47253f },
	{ -11.0763f, 1.218966f, 34.07298f },
	{ -11.72699f, 0.469586f, 34.46324f },
	{ -10.86422f, 0.417758f, 34.74408f }
};

NJS_VECTOR normal_00193EC8[] = {
	{ -0.65856f, 0.551571f, -0.511926f },
	{ -0.335657f, -0.91883f, -0.207571f },
	{ 0.838303f, -0.5296299f, 0.129387f },
	{ 0.290272f, 0.851989f, 0.435725f },
	{ -0.930635f, 0.345606f, 0.120312f },
	{ 0.342368f, -0.6340719f, 0.693352f }
};

NJS_MODEL_SADX attach_00193F10 = { vertex_00193E80, normal_00193EC8, LengthOfArray<Sint32>(vertex_00193E80), meshlist_00193E68, matlist_00193DC4, LengthOfArray<Uint16>(meshlist_00193E68), LengthOfArray<Uint16>(matlist_00193DC4),{ -10.88194f, 0.805975f, 32.80618f }, 2.114221f, NULL };

NJS_OBJECT object_00193F38 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00193F10, 590.788958f, -385.20783f, -3054.53142f, 0, 0, 0, 1, 1, 1, NULL, &object_00193D90 };
//-4.19104f, 9.014342f, -42.64111f

NJS_MATERIAL matlist_00193F6C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00193F80[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00193FB0[] = {
	{ 251, 200 },
	{ 139, -124 },
	{ 141, -920 },
	{ 251, 200 },
	{ 141, -920 },
	{ 255, -1020 },
	{ 139, -124 },
	{ 0, 255 },
	{ 4, -1019 },
	{ 139, -124 },
	{ 4, -1019 },
	{ 141, -920 },
	{ 0, 255 },
	{ 251, 200 },
	{ 255, -1020 },
	{ 0, 255 },
	{ 255, -1020 },
	{ 4, -1019 },
	{ 251, 200 },
	{ 0, 255 },
	{ 139, -124 },
	{ 141, -920 },
	{ 4, -1019 },
	{ 255, -1020 }
};

NJS_MESHSET_SADX meshlist_00194010[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00193F80, NULL, NULL, NULL, uv_00193FB0, NULL }
};

NJS_VECTOR vertex_00194028[] = {
	{ -7.50058f, 1.024324f, 23.05225f },
	{ -4.922868f, 0.081007f, 13.48857f },
	{ -4.495305f, 0.055322f, 15.11126f },
	{ -13.89813f, 1.360551f, 42.76849f },
	{ -15.17582f, 0.648836f, 45.09192f },
	{ -14.31305f, 0.597008f, 45.37276f }
};

NJS_VECTOR normal_00194070[] = {
	{ -0.201876f, 0.972326f, -0.117595f },
	{ -0.777254f, -0.5277629f, -0.342552f },
	{ 0.880206f, 0.41198f, 0.235607f },
	{ 0.337561f, 0.917689f, 0.209524f },
	{ -0.839478f, 0.527734f, -0.129513f },
	{ 0.660758f, -0.550187f, 0.510581f }
};

NJS_MODEL_SADX attach_001940B8 = { vertex_00194028, normal_00194070, LengthOfArray<Sint32>(vertex_00194028), meshlist_00194010, matlist_00193F6C, LengthOfArray<Uint16>(meshlist_00194010), LengthOfArray<Uint16>(matlist_00193F6C),{ -9.835562f, 0.7079369f, 29.43066f }, 16.8128f, NULL };

NJS_OBJECT object_001940E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001940B8, 594.65761f, -385.411199f, -3066.42912f, 0, 0, 0, 1, 1, 1, NULL, &object_00193F38 };
//-0.322388f, 8.810973f, -54.53881f

NJS_MATERIAL matlist_00194114[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00194128[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00194158[] = {
	{ 253, 166 },
	{ 139, -4 },
	{ 142, -765 },
	{ 253, 166 },
	{ 142, -765 },
	{ 255, -370 },
	{ 139, -4 },
	{ 0, 255 },
	{ 1, -306 },
	{ 139, -4 },
	{ 1, -306 },
	{ 142, -765 },
	{ 0, 255 },
	{ 253, 166 },
	{ 255, -370 },
	{ 0, 255 },
	{ 255, -370 },
	{ 1, -306 },
	{ 253, 166 },
	{ 0, 255 },
	{ 139, -4 },
	{ 142, -765 },
	{ 1, -306 },
	{ 255, -370 }
};

NJS_MESHSET_SADX meshlist_001941B8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00194128, NULL, NULL, NULL, uv_00194158, NULL }
};

NJS_VECTOR vertex_001941D0[] = {
	{ -10.29795f, 1.172301f, 31.67378f },
	{ -9.043073f, 0.308449f, 26.18871f },
	{ -8.767955f, 0.291923f, 28.28142f },
	{ -15.35503f, 1.47609f, 47.26594f },
	{ -12.77732f, 0.532773f, 37.70225f },
	{ -12.34976f, 0.507089f, 39.32494f }
};

NJS_VECTOR normal_00194218[] = {
	{ -0.126451f, 0.983891f, -0.126365f },
	{ -0.6208839f, -0.677035f, -0.39513f },
	{ 0.9090779f, 0.356822f, 0.215072f },
	{ 0.780551f, 0.523445f, 0.34168f },
	{ -0.8785059f, -0.416085f, -0.234737f },
	{ 0.201287f, -0.972344f, 0.118453f }
};

NJS_MODEL_SADX attach_00194260 = { vertex_001941D0, normal_00194218, LengthOfArray<Sint32>(vertex_001941D0), meshlist_001941B8, matlist_00194114, LengthOfArray<Uint16>(meshlist_001941B8), LengthOfArray<Uint16>(matlist_00194114),{ -12.06149f, 0.884006f, 36.72732f }, 11.04124f, NULL };

NJS_OBJECT object_00194288 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00194260, 602.517596f, -385.863958f, -3090.64348f, 0, 0, 0, 1, 1, 1, NULL, &object_001940E0 };
//7.537598f, 8.358214f, -78.75317f

NJS_MATERIAL matlist_001942BC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001942D0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00194300[] = {
	{ 254, -131 },
	{ 138, 255 },
	{ 140, -510 },
	{ 254, -131 },
	{ 140, -510 },
	{ 255, -332 },
	{ 138, 255 },
	{ 0, -131 },
	{ 0, -243 },
	{ 138, 255 },
	{ 0, -243 },
	{ 140, -510 },
	{ 0, -131 },
	{ 254, -131 },
	{ 255, -332 },
	{ 0, -131 },
	{ 255, -332 },
	{ 0, -243 },
	{ 254, -131 },
	{ 0, -131 },
	{ 138, 255 },
	{ 140, -510 },
	{ 0, -243 },
	{ 255, -332 }
};

NJS_MESHSET_SADX meshlist_00194360[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001942D0, NULL, NULL, NULL, uv_00194300, NULL }
};

NJS_VECTOR vertex_00194378[] = {
	{ -7.948802f, 1.031122f, 24.43061f },
	{ -10.92553f, 0.421471f, 31.99255f },
	{ -10.06276f, 0.369643f, 32.27337f },
	{ -12.90508f, 1.328855f, 39.71194f },
	{ -11.6502f, 0.465003f, 34.22687f },
	{ -11.37508f, 0.448477f, 36.31958f }
};

NJS_VECTOR normal_001943C0[] = {
	{ -0.756757f, 0.547534f, -0.357108f },
	{ -0.356382f, -0.924381f, -0.136056f },
	{ 0.807233f, -0.5470459f, 0.221621f },
	{ 0.620887f, 0.677031f, 0.395131f },
	{ -0.909077f, -0.356824f, -0.215072f },
	{ 0.126453f, -0.983891f, 0.126365f }
};

NJS_MODEL_SADX attach_00194408 = { vertex_00194378, normal_001943C0, LengthOfArray<Sint32>(vertex_00194378), meshlist_00194360, matlist_001942BC, LengthOfArray<Uint16>(meshlist_00194360), LengthOfArray<Uint16>(matlist_001942BC),{ -10.42694f, 0.8492489f, 32.07128f }, 8.032456f, NULL };

NJS_OBJECT object_00194430 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00194408, 605.127338f, -386.011051f, -3098.6801f, 0, 0, 0, 1, 1, 1, NULL, &object_00194288 };
//10.14734f, 8.211121f, -86.78979f

NJS_MATERIAL matlist_00194464[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001944A0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_001944C4[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001944D0[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 510, 255 },
	{ 0, 127 },
	{ 510, 255 },
	{ 510, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_00194518[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00194530[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_001944A0, NULL, NULL, NULL, uv_001944D0, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_001944C4, NULL, NULL, NULL, uv_00194518, NULL }
};

NJS_VECTOR vertex_00194560[] = {
	{ -29.98146f, -2.214997f, 27.43752f },
	{ -29.20136f, 2.157499f, 25.03661f },
	{ -30.76156f, 2.157498f, 29.83843f },
	{ 8.059895f, -2.214997f, 39.7979f },
	{ 8.839997f, 2.157499f, 37.397f },
	{ 7.279794f, 2.157498f, 42.19881f }
};

NJS_VECTOR normal_001945A8[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f },
	{ 0.34172f, -0.750001f, 0.566327f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_001945F0 = { vertex_00194560, normal_001945A8, LengthOfArray<Sint32>(vertex_00194560), meshlist_00194530, matlist_00194464, LengthOfArray<Uint16>(meshlist_00194530), LengthOfArray<Uint16>(matlist_00194464),{ -10.96078f, -0.028749f, 33.61771f }, 21.58023f, NULL };

NJS_OBJECT object_00194618 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001945F0, 622.376238f, -397.168217f, -3092.53777f, 0, 0, 0, 1, 1, 1, NULL, &object_00194430 };
//27.39624f, -2.946045f, -80.64746f

NJS_MATERIAL matlist_0019464C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00194688[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_001946AC[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001946B8[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 510, 255 },
	{ 0, 127 },
	{ 510, 255 },
	{ 510, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_00194700[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00194718[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00194688, NULL, NULL, NULL, uv_001946B8, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_001946AC, NULL, NULL, NULL, uv_00194700, NULL }
};

NJS_VECTOR vertex_00194748[] = {
	{ -29.98146f, -2.214997f, 27.43752f },
	{ -29.20136f, 2.157499f, 25.03661f },
	{ -30.76156f, 2.157498f, 29.83843f },
	{ 8.059895f, -2.214997f, 39.7979f },
	{ 8.839997f, 2.157499f, 37.397f },
	{ 7.279794f, 2.157498f, 42.19881f }
};

NJS_VECTOR normal_00194790[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f },
	{ 0.34172f, -0.750001f, 0.566327f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_001947D8 = { vertex_00194748, normal_00194790, LengthOfArray<Sint32>(vertex_00194748), meshlist_00194718, matlist_0019464C, LengthOfArray<Uint16>(meshlist_00194718), LengthOfArray<Uint16>(matlist_0019464C),{ -10.96078f, -0.028749f, 33.61771f }, 21.58023f, NULL };

NJS_OBJECT object_00194800 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001947D8, 620.549938f, -397.068241f, -3086.91667f, 0, 0, 0, 1, 1, 1, NULL, &object_00194618 };
//25.56994f, -2.846069f, -75.02636f

NJS_MATERIAL matlist_00194834[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00194870[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00194894[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001948A0[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 510, 255 },
	{ 0, 127 },
	{ 510, 255 },
	{ 510, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_001948E8[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00194900[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00194870, NULL, NULL, NULL, uv_001948A0, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00194894, NULL, NULL, NULL, uv_001948E8, NULL }
};

NJS_VECTOR vertex_00194930[] = {
	{ -29.98146f, -2.214997f, 27.43752f },
	{ -29.20136f, 2.157499f, 25.03661f },
	{ -30.76156f, 2.157498f, 29.83843f },
	{ 8.059895f, -2.214997f, 39.7979f },
	{ 8.839997f, 2.157499f, 37.397f },
	{ 7.279794f, 2.157498f, 42.19881f }
};

NJS_VECTOR normal_00194978[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f },
	{ 0.34172f, -0.750001f, 0.566327f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_001949C0 = { vertex_00194930, normal_00194978, LengthOfArray<Sint32>(vertex_00194930), meshlist_00194900, matlist_00194834, LengthOfArray<Uint16>(meshlist_00194900), LengthOfArray<Uint16>(matlist_00194834),{ -10.96078f, -0.028749f, 33.61771f }, 21.58023f, NULL };

NJS_OBJECT object_001949E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001949C0, 618.723648f, -396.982502f, -3081.2968f, 0, 0, 0, 1, 1, 1, NULL, &object_00194800 };
//23.74365f, -2.746033f, -69.40649f

NJS_MATERIAL matlist_00194A1C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00194A58[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00194A7C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00194A88[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 510, 255 },
	{ 0, 127 },
	{ 510, 255 },
	{ 510, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_00194AD0[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00194AE8[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00194A58, NULL, NULL, NULL, uv_00194A88, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00194A7C, NULL, NULL, NULL, uv_00194AD0, NULL }
};

NJS_VECTOR vertex_00194B18[] = {
	{ -29.98146f, -2.214997f, 27.43752f },
	{ -29.20136f, 2.157499f, 25.03661f },
	{ -30.76156f, 2.157498f, 29.83843f },
	{ 8.059895f, -2.214997f, 39.7979f },
	{ 8.839997f, 2.157499f, 37.397f },
	{ 7.279794f, 2.157498f, 42.19881f }
};

NJS_VECTOR normal_00194B60[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f },
	{ 0.34172f, -0.750001f, 0.566327f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00194BA8 = { vertex_00194B18, normal_00194B60, LengthOfArray<Sint32>(vertex_00194B18), meshlist_00194AE8, matlist_00194A1C, LengthOfArray<Uint16>(meshlist_00194AE8), LengthOfArray<Uint16>(matlist_00194A1C),{ -10.96078f, -0.028749f, 33.61771f }, 21.58023f, NULL };

NJS_OBJECT object_00194BD0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00194BA8, 616.897358f, -396.868229f, -3075.74431f, 0, 0, 0, 1, 1, 1, NULL, &object_001949E8 };
//21.91736f, -2.646057f, -63.7854f

NJS_MATERIAL matlist_00194C04[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00194C40[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00194C64[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00194C70[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 510, 255 },
	{ 0, 127 },
	{ 510, 255 },
	{ 510, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_00194CB8[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00194CD0[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00194C40, NULL, NULL, NULL, uv_00194C70, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00194C64, NULL, NULL, NULL, uv_00194CB8, NULL }
};

NJS_VECTOR vertex_00194D00[] = {
	{ -29.98146f, -2.214997f, 27.43752f },
	{ -29.20136f, 2.157499f, 25.03661f },
	{ -30.76156f, 2.157498f, 29.83843f },
	{ 8.059895f, -2.214997f, 39.7979f },
	{ 8.839997f, 2.157499f, 37.397f },
	{ 7.279794f, 2.157498f, 42.19881f }
};

NJS_VECTOR normal_00194D48[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f },
	{ 0.34172f, -0.750001f, 0.566327f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00194D90 = { vertex_00194D00, normal_00194D48, LengthOfArray<Sint32>(vertex_00194D00), meshlist_00194CD0, matlist_00194C04, LengthOfArray<Uint16>(meshlist_00194CD0), LengthOfArray<Uint16>(matlist_00194C04),{ -10.96078f, -0.028749f, 33.61771f }, 21.58023f, NULL };

NJS_OBJECT object_00194DB8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00194D90, 613.244888f, -396.668217f, -3064.43376f, 0, 0, 0, 1, 1, 1, NULL, &object_00194BD0 };
//18.26489f, -2.446045f, -52.54345f

NJS_MATERIAL matlist_00194DEC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00194E28[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00194E4C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00194E58[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 510, 255 },
	{ 0, 127 },
	{ 510, 255 },
	{ 510, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_00194EA0[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00194EB8[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00194E28, NULL, NULL, NULL, uv_00194E58, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00194E4C, NULL, NULL, NULL, uv_00194EA0, NULL }
};

NJS_VECTOR vertex_00194EE8[] = {
	{ -29.98146f, -2.214997f, 27.43752f },
	{ -29.20136f, 2.157499f, 25.03661f },
	{ -30.76156f, 2.157498f, 29.83843f },
	{ 8.059895f, -2.214997f, 39.7979f },
	{ 8.839997f, 2.157499f, 37.397f },
	{ 7.279794f, 2.157498f, 42.19881f }
};

NJS_VECTOR normal_00194F30[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f },
	{ 0.34172f, -0.750001f, 0.566327f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00194F78 = { vertex_00194EE8, normal_00194F30, LengthOfArray<Sint32>(vertex_00194EE8), meshlist_00194EB8, matlist_00194DEC, LengthOfArray<Uint16>(meshlist_00194EB8), LengthOfArray<Uint16>(matlist_00194DEC),{ -10.96078f, -0.028749f, 33.61771f }, 21.58023f, NULL };

NJS_OBJECT object_00194FA0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00194F78, 611.418598f, -396.568241f, -3058.81291f, 0, 0, 0, 1, 1, 1, NULL, &object_00194DB8 };
//16.4386f, -2.346069f, -46.9226f

NJS_MATERIAL matlist_00194FD4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00195010[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00195034[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00195040[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 510, 255 },
	{ 0, 127 },
	{ 510, 255 },
	{ 510, 127 },
	{ 0, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_00195088[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001950A0[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00195010, NULL, NULL, NULL, uv_00195040, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00195034, NULL, NULL, NULL, uv_00195088, NULL }
};

NJS_VECTOR vertex_001950D0[] = {
	{ -29.98146f, -2.214997f, 27.43752f },
	{ -29.20136f, 2.157499f, 25.03661f },
	{ -30.76156f, 2.157498f, 29.83843f },
	{ 8.059895f, -2.214997f, 39.7979f },
	{ 8.839997f, 2.157499f, 37.397f },
	{ 7.279794f, 2.157498f, 42.19881f }
};

NJS_VECTOR normal_00195118[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, -0.00001f, 0.669131f },
	{ 0.34172f, -0.750001f, 0.566327f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00195160 = { vertex_001950D0, normal_00195118, LengthOfArray<Sint32>(vertex_001950D0), meshlist_001950A0, matlist_00194FD4, LengthOfArray<Uint16>(meshlist_001950A0), LengthOfArray<Uint16>(matlist_00194FD4),{ -10.96078f, -0.028749f, 33.61771f }, 21.58023f, NULL };

NJS_OBJECT object_00195188 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00195160, 609.592298f, -396.468083f, -3053.19182f, 0, 0, 0, 1, 1, 1, NULL, &object_00194FA0 };
//14.6123f, -2.245911f, -41.30151f

NJS_MATERIAL matlist_00195230[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00195244[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00195274[] = {
	{ 249, -310 },
	{ 135, 255 },
	{ 141, -1476 },
	{ 249, -310 },
	{ 141, -1476 },
	{ 255, -2040 },
	{ 135, 255 },
	{ 0, 254 },
	{ 7, -2039 },
	{ 135, 255 },
	{ 7, -2039 },
	{ 141, -1476 },
	{ 0, 254 },
	{ 249, -310 },
	{ 255, -2040 },
	{ 0, 254 },
	{ 255, -2040 },
	{ 7, -2039 },
	{ 249, -310 },
	{ 0, 254 },
	{ 135, 255 },
	{ 141, -1476 },
	{ 7, -2039 },
	{ 255, -2040 }
};

NJS_MESHSET_SADX meshlist_001952D4[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00195244, NULL, NULL, NULL, uv_00195274, NULL }
};

NJS_VECTOR vertex_001952EC[] = {
	{ 8.118592f, 0.044529f, -24.93245f },
	{ 7.640014f, -0.71519f, -25.07287f },
	{ 4.185126f, -0.507648f, -11.47969f },
	{ -5.118863f, 1.043215f, 15.8743f },
	{ -9.888055f, 0.297685f, 28.96283f },
	{ -9.025284f, 0.245857f, 29.24367f }
};

NJS_VECTOR normal_00195334[] = {
	{ 0.025659f, 0.996029f, -0.08525299f },
	{ -0.0449f, -0.998671f, -0.025296f },
	{ 0.918766f, -0.27746f, 0.280866f },
	{ 0.384668f, 0.912751f, 0.137533f },
	{ -0.8393289f, 0.485783f, -0.244012f },
	{ 0.747764f, -0.579775f, 0.32359f }
};

NJS_MODEL_SADX attach_0019537C = { vertex_001952EC, normal_00195334, LengthOfArray<Sint32>(vertex_001952EC), meshlist_001952D4, matlist_00195230, LengthOfArray<Uint16>(meshlist_001952D4), LengthOfArray<Uint16>(matlist_00195230),{ -0.884731f, 0.164012f, 2.085399f }, 28.61167f, NULL };

NJS_OBJECT object_001953A4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019537C, 545.7326f, -382.7483f, -2915.856f, 0, 0, 0, 1, 1, 1, NULL, NULL };
//-18.1524f, -19.24328f, -5.255615f

NJS_MATERIAL matlist_001953D8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00195414[] = {
	6, 4, 0,
	6, 0, 1,
	4, 5, 7,
	4, 7, 2,
	4, 2, 0,
	5, 6, 1,
	5, 1, 3,
	5, 3, 7,
	0, 2, 3,
	0, 3, 1
};

Sint16 poly_00195450[] = {
	6, 5, 4,
	2, 7, 3
};

NJS_TEX uv_0019545C[] = {
	{ 0 },
	{ 0, 127 },
	{ 210, 127 },
	{ 0 },
	{ 210, 127 },
	{ 227, 0 },
	{ 0, 127 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 167 },
	{ 0, 127 },
	{ 510, 167 },
	{ 210, 127 },
	{ 0, 254 },
	{ 0 },
	{ 227, 0 },
	{ 0, 254 },
	{ 227, 0 },
	{ 510, 76 },
	{ 0, 254 },
	{ 510, 76 },
	{ 510, 254 },
	{ 210, 127 },
	{ 510, 167 },
	{ 510, 76 },
	{ 210, 127 },
	{ 510, 76 },
	{ 227, 0 }
};

NJS_TEX uv_001954D4[] = {
	{ 255, 0 },
	{ 0 },
	{ 127, 254 },
	{ 87, 174 },
	{ 0 },
	{ 178, 0 }
};

NJS_MESHSET_SADX meshlist_001954EC[] = {
	{ NJD_MESHSET_3 | 1, 10, poly_00195414, NULL, NULL, NULL, uv_0019545C, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00195450, NULL, NULL, NULL, uv_001954D4, NULL }
};

NJS_VECTOR vertex_0019551C[] = {
	{ 3.084116f, -1.814985f, 1.000997f },
	{ 3.561206f, 2.55751f, 3.81038f },
	{ 25.66047f, -0.440903f, 7.502349f },
	{ 25.10625f, 2.557512f, 9.208057f },
	{ -12.6259f, -1.814983f, -4.103498f },
	{ -11.84581f, 2.557514f, -6.504393f },
	{ -13.40601f, 2.557512f, -1.702601f },
	{ 26.19541f, 2.557512f, 5.85595f }
};

NJS_VECTOR normal_0019557C[] = {
	{ -0.189674f, -0.699134f, 0.689373f },
	{ -0.239759f, 0.497116f, 0.833901f },
	{ 0.625269f, -0.740195f, -0.247287f },
	{ 0.235482f, 0.430269f, 0.8714449f },
	{ -0.147016f, -0.707105f, -0.691656f },
	{ -0.241632f, 0.883884f, -0.400454f },
	{ -0.743145f, 0.000001f, 0.669131f },
	{ 0.743144f, 0.000002f, -0.669131f }
};

NJS_MODEL_SADX attach_001955DC = { vertex_0019551C, normal_0019557C, LengthOfArray<Sint32>(vertex_0019551C), meshlist_001954EC, matlist_001953D8, LengthOfArray<Uint16>(meshlist_001954EC), LengthOfArray<Uint16>(matlist_001953D8),{ 6.394705f, 0.371264f, 1.351833f }, 21.30231f, NULL };

NJS_OBJECT object_00195604 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001955DC, 559.350149f, -395.18117f, -2920.322553f, 0, 0, 0, 1, 1, 1, NULL, &object_001953A4 };
//-4.534851f, -31.67615f, -9.722168f

NJS_MATERIAL matlist_00195638[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00195674[] = {
	0, 4, 5,
	0, 5, 1,
	2, 4, 0,
	1, 5, 3,
	0, 1, 3,
	0, 3, 2
};

Sint16 poly_00195698[] = {
	4, 2, 3,
	4, 3, 5
};

NJS_TEX uv_001956A4[] = {
	{ 210, 127 },
	{ 506, 127 },
	{ 506, 8 },
	{ 210, 127 },
	{ 506, 8 },
	{ 227, 8 },
	{ 506, 165 },
	{ 506, 127 },
	{ 210, 127 },
	{ 227, 8 },
	{ 506, 8 },
	{ 506, 80 },
	{ 210, 127 },
	{ 227, 8 },
	{ 506, 80 },
	{ 210, 127 },
	{ 506, 80 },
	{ 506, 165 }
};

NJS_TEX uv_001956EC[] = {
	{ 126, 255 },
	{ 86, 174 },
	{ 176, 0 },
	{ 126, 255 },
	{ 176, 0 },
	{ 252, 0 }
};

NJS_MESHSET_SADX meshlist_00195704[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00195674, NULL, NULL, NULL, uv_001956A4, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00195698, NULL, NULL, NULL, uv_001956EC, NULL }
};

NJS_VECTOR vertex_00195734[] = {
	{ -10.31131f, -2.387016f, -3.351648f },
	{ -9.834223f, 1.985477f, -0.542262f },
	{ 12.26507f, -1.012938f, 3.149713f },
	{ 11.71085f, 1.985477f, 4.855423f },
	{ 12.01992f, -2.387018f, 3.90421f },
	{ 11.23982f, 1.985477f, 6.305111f }
};

NJS_VECTOR normal_0019577C[] = {
	{ 0.15303f, -0.485513f, -0.860732f },
	{ -0.058105f, 0.9982679f, -0.009214f },
	{ 0.727115f, 0.006334f, -0.686487f },
	{ 0.713156f, 0.622571f, -0.322201f },
	{ 0.850651f, -0.447213f, 0.276393f },
	{ 0.207911f, 0.000001f, 0.978148f }
};

NJS_MODEL_SADX attach_001957C4 = { vertex_00195734, normal_0019577C, LengthOfArray<Sint32>(vertex_00195734), meshlist_00195704, matlist_00195638, LengthOfArray<Uint16>(meshlist_00195704), LengthOfArray<Uint16>(matlist_00195638),{ 0.9768789f, -0.20077f, 1.476732f }, 12.27749f, NULL };

NJS_OBJECT object_001957EC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001957C4, 572.744862f, -394.60908f, -2915.970258f, 0, 0, 0, 1, 1, 1, NULL, &object_00195604 };
//8.859862f, -31.10406f, -5.369873f

NJS_MATERIAL matlist_00195820[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0019585C[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

Sint16 poly_00195886[] = {
	3, 4, 5
};

NJS_TEX uv_0019588C[] = {
	{ 138, 127 },
	{ 506, 127 },
	{ 506, 0 },
	{ 138, 127 },
	{ 506, 0 },
	{ 256, 0 },
	{ 406, 255 },
	{ 506, 254 },
	{ 506, 127 },
	{ 406, 255 },
	{ 506, 127 },
	{ 138, 127 },
	{ 256, 0 },
	{ 506, 0 },
	{ 506, 254 },
	{ 256, 0 },
	{ 506, 254 },
	{ 406, 255 },
	{ 138, 127 },
	{ 256, 0 },
	{ 406, 255 }
};

NJS_TEX uv_001958E0[] = {
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001958EC[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_0019585C, NULL, NULL, NULL, uv_0019588C, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_00195886, NULL, NULL, NULL, uv_001958E0, NULL }
};

NJS_VECTOR vertex_0019591C[] = {
	{ -17.366f, -2.403064f, -5.642396f },
	{ -9.233566f, 1.969431f, -0.345641f },
	{ 3.568066f, 1.969433f, -1.494872f },
	{ 10.34591f, -2.403065f, 3.361751f },
	{ 11.12601f, 1.969433f, 0.9608549f },
	{ 9.565815f, 1.969431f, 5.76265f }
};

NJS_VECTOR normal_00195964[] = {
	{ -0.401176f, -0.8664629f, 0.297152f },
	{ -0.136721f, 0.98542f, 0.10127f },
	{ 0.19909f, 0.333459f, -0.9215029f },
	{ 0.609338f, -0.749999f, -0.257312f },
	{ 0.609336f, 0.75f, -0.257311f },
	{ 0.207911f, 0.000001f, 0.978148f }
};

NJS_MODEL_SADX attach_001959AC = { vertex_0019591C, normal_00195964, LengthOfArray<Sint32>(vertex_0019591C), meshlist_001958EC, matlist_00195820, LengthOfArray<Uint16>(meshlist_001958EC), LengthOfArray<Uint16>(matlist_00195820),{ -3.119992f, -0.216816f, 0.060127f }, 15.34494f, NULL };

NJS_OBJECT object_001959D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001959AC, 576.24505f, -394.69313f, -2921.047405f, 0, 0, 0, 1, 1, 1, NULL, &object_001957EC };
//12.36005f, -31.18811f, -10.44702f

NJS_MATERIAL matlist_00195A08[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00195A44[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_00195A6E[] = {
	5, 4, 3
};

NJS_TEX uv_00195A74[] = {
	{ 3, 0 },
	{ 3, 127 },
	{ 140, 127 },
	{ 3, 0 },
	{ 140, 127 },
	{ 258, 0 },
	{ 3, 127 },
	{ 3, 254 },
	{ 408, 254 },
	{ 3, 127 },
	{ 408, 254 },
	{ 140, 127 },
	{ 3, 254 },
	{ 3, 0 },
	{ 258, 0 },
	{ 3, 254 },
	{ 258, 0 },
	{ 408, 254 },
	{ 140, 127 },
	{ 408, 254 },
	{ 258, 0 }
};

NJS_TEX uv_00195AC8[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 }
};

NJS_MESHSET_SADX meshlist_00195AD4[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_00195A44, NULL, NULL, NULL, uv_00195A74, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_00195A6E, NULL, NULL, NULL, uv_00195AC8, NULL }
};

NJS_VECTOR vertex_00195B04[] = {
	{ 3.139186f, -2.91507f, 1.019107f },
	{ 11.27164f, 1.457426f, 6.315873f },
	{ 24.07329f, 1.457428f, 5.16664f },
	{ -7.190394f, -2.91507f, -2.337179f },
	{ -6.410294f, 1.457427f, -4.738079f },
	{ -7.970495f, 1.457426f, 0.06372499f }
};

NJS_VECTOR normal_00195B4C[] = {
	{ -0.079225f, -0.850692f, 0.51966f },
	{ -0.13561f, 0.436346f, 0.889501f },
	{ 0.403342f, -0.554568f, -0.7278529f },
	{ -0.34172f, -0.75f, -0.5663289f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f }
};

NJS_MODEL_SADX attach_00195B94 = { vertex_00195B04, normal_00195B4C, LengthOfArray<Sint32>(vertex_00195B04), meshlist_00195AD4, matlist_00195A08, LengthOfArray<Uint16>(meshlist_00195AD4), LengthOfArray<Uint16>(matlist_00195A08),{ 8.051396f, -0.728821f, 0.788897f }, 16.94842f, NULL };

NJS_OBJECT object_00195BBC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00195B94, 555.740287f, -394.18114f, -2927.709765f, 0, 0, 0, 1, 1, 1, NULL, &object_001959D4 };
//-8.144713f, -30.67612f, -17.10938f

NJS_MATERIAL matlist_00195BF0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00195C2C[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_00195C56[] = {
	5, 4, 3
};

NJS_TEX uv_00195C5C[] = {
	{ 2, 0 },
	{ 2, 127 },
	{ 126, 127 },
	{ 2, 0 },
	{ 126, 127 },
	{ 67, 0 },
	{ 2, 127 },
	{ 2, 255 },
	{ 212, 254 },
	{ 2, 127 },
	{ 212, 254 },
	{ 126, 127 },
	{ 2, 255 },
	{ 2, 0 },
	{ 67, 0 },
	{ 2, 255 },
	{ 67, 0 },
	{ 212, 254 },
	{ 126, 127 },
	{ 212, 254 },
	{ 67, 0 }
};

NJS_TEX uv_00195CB0[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 }
};

NJS_MESHSET_SADX meshlist_00195CBC[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_00195C2C, NULL, NULL, NULL, uv_00195C5C, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_00195C56, NULL, NULL, NULL, uv_00195CB0, NULL }
};

NJS_VECTOR vertex_00195CEC[] = {
	{ 5.605161f, -2.195002f, 1.820205f },
	{ 0.383711f, 2.177495f, 2.778022f },
	{ 12.88212f, 2.177494f, 1.530263f },
	{ -3.671319f, -2.195002f, -1.193907f },
	{ -2.89122f, 2.177493f, -3.594805f },
	{ -4.451419f, 2.177494f, 1.206993f }
};

NJS_VECTOR normal_00195D34[] = {
	{ -0.06962799f, -0.659651f, 0.74834f },
	{ -0.073434f, 0.6096759f, 0.789242f },
	{ 0.69036f, -0.107629f, -0.715416f },
	{ -0.34172f, -0.749999f, -0.5663289f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0.000001f, 0.669131f }
};

NJS_MODEL_SADX attach_00195D7C = { vertex_00195CEC, normal_00195D34, LengthOfArray<Sint32>(vertex_00195CEC), meshlist_00195CBC, matlist_00195BF0, LengthOfArray<Uint16>(meshlist_00195CBC), LengthOfArray<Uint16>(matlist_00195BF0),{ 4.215349f, -0.008753f, -0.408392f }, 9.23397f, NULL };

NJS_OBJECT object_00195DA4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00195D7C, 557.700247f, -395.20109f, -2945.715375f, 0, 0, 0, 1, 1, 1, NULL, &object_00195BBC };
//-6.184753f, -31.69607f, -35.11499f

NJS_MATERIAL matlist_00195DD8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00195E14[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

Sint16 poly_00195E3E[] = {
	3, 4, 5
};

NJS_TEX uv_00195E44[] = {
	{ 394, 127 },
	{ 508, 127 },
	{ 508, 0 },
	{ 394, 127 },
	{ 508, 0 },
	{ 380, 0 },
	{ 414, 255 },
	{ 508, 254 },
	{ 508, 127 },
	{ 414, 255 },
	{ 508, 127 },
	{ 394, 127 },
	{ 380, 0 },
	{ 508, 0 },
	{ 508, 254 },
	{ 380, 0 },
	{ 508, 254 },
	{ 414, 255 },
	{ 394, 127 },
	{ 380, 0 },
	{ 414, 255 }
};

NJS_TEX uv_00195E98[] = {
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00195EA4[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_00195E14, NULL, NULL, NULL, uv_00195E44, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_00195E3E, NULL, NULL, NULL, uv_00195E98, NULL }
};

NJS_VECTOR vertex_00195ED4[] = {
	{ -4.246995f, -2.91497f, -1.37968f },
	{ -6.054936f, 1.457525f, 0.687254f },
	{ -1.908442f, 1.457525f, -3.274204f },
	{ 4.278149f, -2.91497f, 1.390308f },
	{ 5.058248f, 1.457527f, -1.010589f },
	{ 3.498052f, 1.457525f, 3.791208f }
};

NJS_VECTOR normal_00195F1C[] = {
	{ -0.551634f, -0.832024f, 0.058615f },
	{ -0.5231799f, 0.8504069f, 0.055591f },
	{ -0.065042f, 0.023615f, -0.997603f },
	{ 0.609338f, -0.749999f, -0.257312f },
	{ 0.609336f, 0.75f, -0.257311f },
	{ 0.207911f, 0.000001f, 0.978148f }
};

NJS_MODEL_SADX attach_00195F64 = { vertex_00195ED4, normal_00195F1C, LengthOfArray<Sint32>(vertex_00195ED4), meshlist_00195EA4, matlist_00195DD8, LengthOfArray<Uint16>(meshlist_00195EA4), LengthOfArray<Uint16>(matlist_00195DD8),{ -0.498344f, -0.728722f, 0.258502f }, 6.584501f, NULL };

NJS_OBJECT object_00195F8C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00195F64, 587.79168f, -394.48112f, -2935.938025f, 0, 0, 0, 1, 1, 1, NULL, &object_00195DA4 };
//23.90668f, -30.9761f, -25.33764f

NJS_MATERIAL matlist_00195FC0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00195FE8[] = {
	3, 0, 1,
	3, 1, 4,
	5, 2, 0,
	5, 0, 3,
	4, 1, 2,
	4, 2, 5,
	3, 4, 5,
	0, 2, 1
};

NJS_TEX uv_00196018[] = {
	{ 126, 127 },
	{ 394, 127 },
	{ 382, 0 },
	{ 126, 127 },
	{ 382, 0 },
	{ 66, 0 },
	{ 212, 254 },
	{ 416, 254 },
	{ 394, 127 },
	{ 212, 254 },
	{ 394, 127 },
	{ 126, 127 },
	{ 66, 0 },
	{ 382, 0 },
	{ 416, 254 },
	{ 66, 0 },
	{ 416, 254 },
	{ 212, 254 },
	{ 126, 127 },
	{ 66, 0 },
	{ 212, 254 },
	{ 394, 127 },
	{ 416, 254 },
	{ 382, 0 }
};

NJS_MESHSET_SADX meshlist_00196078[] = {
	{ NJD_MESHSET_3 | 1, 8, poly_00195FE8, NULL, NULL, NULL, uv_00196018, NULL }
};

NJS_VECTOR vertex_00196090[] = {
	{ 10.03417f, -2.355011f, 3.259947f },
	{ 8.226224f, 2.017485f, 5.326883f },
	{ 12.37273f, 2.017487f, 1.365421f },
	{ -10.20577f, -2.355011f, -3.316409f },
	{ -15.42723f, 2.017487f, -2.358595f },
	{ -2.928809f, 2.017487f, -3.606353f }
};

NJS_VECTOR normal_001960D8[] = {
	{ 0.523181f, -0.8504069f, -0.055591f },
	{ 0.065042f, -0.023614f, 0.997603f },
	{ 0.5516329f, 0.832025f, -0.058614f },
	{ -0.251382f, -0.961122f, -0.114239f },
	{ -0.222271f, 0.9697379f, -0.10101f },
	{ 0.163124f, 0.036955f, -0.985913f }
};

NJS_MODEL_SADX attach_00196120 = { vertex_00196090, normal_001960D8, LengthOfArray<Sint32>(vertex_00196090), meshlist_00196078, matlist_00195FC0, LengthOfArray<Uint16>(meshlist_00196078), LengthOfArray<Uint16>(matlist_00195FC0),{ -1.527253f, -0.168762f, 0.860265f }, 14.60003f, NULL };

NJS_OBJECT object_00196148 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00196120, 573.510609f, -395.04109f, -2940.578165f, 0, 0, 0, 1, 1, 1, NULL, &object_00195F8C };
//9.625609f, -31.53607f, -29.97778f

NJS_MATERIAL matlist_0019617C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001961A4[] = {
	4, 3, 0,
	5, 6, 7
};

Sint16 poly_001961B0[] = {
	4, 0, 1,
	4, 1, 5,
	4, 5, 7,
	2, 6, 5,
	2, 5, 1,
	3, 4, 7,
	3, 7, 6,
	3, 6, 2,
	0, 3, 2,
	0, 2, 1
};

NJS_TEX uv_001961EC[] = {
	{ 0 },
	{ 0, 116 },
	{ 33, 127 },
	{ 0 },
	{ 33, 127 },
	{ 508, 127 },
	{ 0 },
	{ 508, 127 },
	{ 510, 0 },
	{ 470, 255 },
	{ 508, 254 },
	{ 508, 127 },
	{ 470, 255 },
	{ 508, 127 },
	{ 33, 127 },
	{ 0, 107 },
	{ 0 },
	{ 510, 0 },
	{ 0, 107 },
	{ 510, 0 },
	{ 508, 254 },
	{ 0, 107 },
	{ 508, 254 },
	{ 470, 255 },
	{ 0, 116 },
	{ 0, 107 },
	{ 470, 255 },
	{ 0, 116 },
	{ 470, 255 },
	{ 33, 127 }
};

NJS_MESHSET_SADX meshlist_00196264[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_001961A4, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_3 | 1, 10, poly_001961B0, NULL, NULL, NULL, uv_001961EC, NULL }
};

NJS_VECTOR vertex_00196294[] = {
	{ -23.38966f, -2.526878f, -7.364508f },
	{ -20.81643f, -2.914989f, -6.764022f },
	{ 12.6061f, 1.457508f, 1.441251f },
	{ -23.44144f, 1.457506f, -7.205151f },
	{ -24.10052f, 1.457504f, -5.176713f },
	{ 14.72087f, -2.914989f, 4.782751f },
	{ 15.50097f, 1.457509f, 2.381851f },
	{ 13.94077f, 1.457507f, 7.183653f }
};

NJS_VECTOR normal_001962F4[] = {
	{ -0.451354f, -0.249624f, -0.856719f },
	{ -0.023585f, -0.994617f, -0.100904f },
	{ 0.268567f, 0.02247f, -0.962999f },
	{ -0.212579f, 0.900593f, -0.379134f },
	{ -0.6200989f, -0.176776f, 0.764348f },
	{ 0.425326f, -0.8944269f, 0.138196f },
	{ 0.609336f, 0.75f, -0.257313f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00196354 = { vertex_00196294, normal_001962F4, LengthOfArray<Sint32>(vertex_00196294), meshlist_00196264, matlist_0019617C, LengthOfArray<Uint16>(meshlist_00196264), LengthOfArray<Uint16>(matlist_0019617C),{ -4.299775f, -0.72874f, -0.090427f }, 21.09458f, NULL };

NJS_OBJECT object_0019637C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00196354, 579.17534f, -394.58113f, -2944.951695f, 0, 0, 0, 1, 1, 1, NULL, &object_00196148 };
//15.29034f, -31.07611f, -34.35131f

NJS_MATERIAL matlist_001963B0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001963D8[] = {
	3, 5, 4,
	3, 4, 0
};

Sint16 poly_001963E4[] = {
	0, 4, 1,
	4, 5, 2,
	4, 2, 1,
	5, 3, 2,
	0, 1, 2,
	0, 2, 3
};

NJS_TEX uv_00196408[] = {
	{ 3, 114 },
	{ 3, 125 },
	{ 36, 125 },
	{ 3, 125 },
	{ 3, 248 },
	{ 470, 248 },
	{ 3, 125 },
	{ 470, 248 },
	{ 36, 125 },
	{ 3, 248 },
	{ 3, 106 },
	{ 470, 248 },
	{ 3, 114 },
	{ 36, 125 },
	{ 470, 248 },
	{ 3, 114 },
	{ 470, 248 },
	{ 3, 106 }
};

NJS_MESHSET_SADX meshlist_00196450[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_001963D8, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_3 | 1, 6, poly_001963E4, NULL, NULL, NULL, uv_00196408, NULL }
};

NJS_VECTOR vertex_00196480[] = {
	{ -11.08876f, -2.527327f, -1.769719f },
	{ -8.518571f, -2.91498f, -1.169943f },
	{ 24.90393f, 1.457518f, 7.035323f },
	{ -11.14055f, 1.457516f, -1.610346f },
	{ -11.0196f, -2.91498f, -1.982577f },
	{ -10.2395f, 1.457517f, -4.383474f }
};

NJS_VECTOR normal_001964C8[] = {
	{ -0.5548519f, -0.192259f, 0.809429f },
	{ -0.161438f, -0.721764f, 0.673048f },
	{ 0.21942f, -0.265799f, 0.938725f },
	{ -0.902119f, 0.40481f, 0.14937f },
	{ -0.617781f, -0.566946f, -0.544902f },
	{ -0.483264f, 0.353553f, -0.80091f }
};

NJS_MODEL_SADX attach_00196510 = { vertex_00196480, normal_001964C8, LengthOfArray<Sint32>(vertex_00196480), meshlist_00196450, matlist_001963B0, LengthOfArray<Uint16>(meshlist_00196450), LengthOfArray<Uint16>(matlist_001963B0),{ 6.881691f, -0.728731f, 1.325924f }, 18.90501f, NULL };

NJS_OBJECT object_00196538 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00196510, 566.874319f, -394.58113f, -2950.546915f, 0, 0, 0, 1, 1, 1, NULL, &object_0019637C };
//2.989319f, -31.07611f, -39.94653f

NJS_MATERIAL matlist_0019656C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00196594[] = {
	3, 0, 1,
	3, 1, 4,
	5, 2, 0,
	5, 0, 3,
	4, 1, 2,
	4, 2, 5,
	3, 4, 5,
	0, 2, 1
};

NJS_TEX uv_001965C4[] = {
	{ 38, 127 },
	{ 420, 127 },
	{ 446, 0 },
	{ 38, 127 },
	{ 446, 0 },
	{ 172, 0 },
	{ 364, 255 },
	{ 464, 254 },
	{ 420, 127 },
	{ 364, 255 },
	{ 420, 127 },
	{ 38, 127 },
	{ 172, 0 },
	{ 446, 0 },
	{ 464, 254 },
	{ 172, 0 },
	{ 464, 254 },
	{ 364, 255 },
	{ 38, 127 },
	{ 172, 0 },
	{ 364, 255 },
	{ 420, 127 },
	{ 464, 254 },
	{ 446, 0 }
};

NJS_MESHSET_SADX meshlist_00196624[] = {
	{ NJD_MESHSET_3 | 1, 8, poly_00196594, NULL, NULL, NULL, uv_001965C4, NULL }
};

NJS_VECTOR vertex_0019663C[] = {
	{ 8.466106f, -2.215008f, 2.749139f },
	{ 9.580983f, 2.157486f, 5.765753f },
	{ 12.52338f, 2.157488f, 1.413063f },
	{ -20.19324f, -2.21501f, -6.562852f },
	{ -10.96295f, 2.157486f, -0.909378f },
	{ 4.919477f, 2.157488f, -1.057596f }
};

NJS_VECTOR normal_00196684[] = {
	{ 0.432235f, -0.888955f, -0.151431f },
	{ 0.080107f, -0.233597f, 0.969028f },
	{ 0.683641f, 0.6893989f, -0.239508f },
	{ -0.347496f, -0.8959039f, 0.276771f },
	{ -0.117694f, 0.988616f, 0.09373999f },
	{ 0.216372f, 0.325004f, -0.920628f }
};

NJS_MODEL_SADX attach_001966CC = { vertex_0019663C, normal_00196684, LengthOfArray<Sint32>(vertex_0019663C), meshlist_00196624, matlist_0019656C, LengthOfArray<Uint16>(meshlist_00196624), LengthOfArray<Uint16>(matlist_0019656C),{ -3.834929f, -0.028761f, -0.39855f }, 17.48121f, NULL };

NJS_OBJECT object_001966F4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001966CC, 580.67833f, -395.38109f, -2950.677285f, 0, 0, 0, 1, 1, 1, NULL, &object_00196538 };
//16.79333f, -31.87607f, -40.0769f

NJS_MATERIAL matlist_00196728[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00196750[] = {
	3, 4, 5
};

Sint16 poly_00196756[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

NJS_TEX uv_00196780[] = {
	{ 420, 127 },
	{ 508, 127 },
	{ 508, 0 },
	{ 420, 127 },
	{ 508, 0 },
	{ 444, 0 },
	{ 462, 255 },
	{ 508, 255 },
	{ 508, 127 },
	{ 462, 255 },
	{ 508, 127 },
	{ 420, 127 },
	{ 444, 0 },
	{ 508, 0 },
	{ 508, 255 },
	{ 444, 255 },
	{ 508, 255 },
	{ 462, 255 },
	{ 420, 127 },
	{ 444, 0 },
	{ 462, 255 }
};

NJS_MESHSET_SADX meshlist_001967D4[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00196750, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_3 | 1, 7, poly_00196756, NULL, NULL, NULL, uv_00196780, NULL }
};

NJS_VECTOR vertex_00196804[] = {
	{ -3.937392f, -2.17095f, -1.276978f },
	{ -2.822519f, 2.201546f, 1.739638f },
	{ 0.1199f, 2.201546f, -2.613051f },
	{ 2.641426f, -2.170952f, 0.8606099f },
	{ 3.421523f, 2.201544f, -1.540289f },
	{ 1.861326f, 2.201546f, 3.26151f }
};

NJS_VECTOR normal_0019684C[] = {
	{ -0.683642f, -0.689398f, 0.239507f },
	{ -0.432233f, 0.888957f, 0.151429f },
	{ -0.080106f, 0.233599f, -0.969028f },
	{ 0.609337f, -0.749999f, -0.257312f },
	{ 0.609336f, 0.75f, -0.257311f },
	{ 0.207912f, 0.000001f, 0.978148f }
};

NJS_MODEL_SADX attach_00196894 = { vertex_00196804, normal_0019684C, LengthOfArray<Sint32>(vertex_00196804), meshlist_001967D4, matlist_00196728, LengthOfArray<Uint16>(meshlist_001967D4), LengthOfArray<Uint16>(matlist_00196728),{ -0.257935f, 0.015297f, 0.32423f }, 4.708054f, NULL };

NJS_OBJECT object_001968BC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00196894, 593.08001f, -395.42512f, -2946.648965f, 0, 0, 0, 1, 1, 1, NULL, &object_001966F4 };
//29.19501f, -31.9201f, -36.04858f

NJS_MATERIAL matlist_001968F0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00196918[] = {
	5, 4, 3
};

Sint16 poly_0019691E[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

NJS_TEX uv_00196948[] = {
	{ 1, 0 },
	{ 1, 127 },
	{ 38, 127 },
	{ 1, 0 },
	{ 38, 127 },
	{ 172, 0 },
	{ 1, 127 },
	{ 1, 255 },
	{ 362, 254 },
	{ 1, 127 },
	{ 362, 254 },
	{ 38, 127 },
	{ 1, 255 },
	{ 1, 0 },
	{ 172, 0 },
	{ 1, 255 },
	{ 172, 0 },
	{ 362, 254 },
	{ 38, 127 },
	{ 362, 254 },
	{ 172, 0 }
};

NJS_MESHSET_SADX meshlist_0019699C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00196918, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_3 | 1, 7, poly_0019691E, NULL, NULL, NULL, uv_00196948, NULL }
};

NJS_VECTOR vertex_001969CC[] = {
	{ -2.466203f, -2.914938f, -0.802411f },
	{ 6.764119f, 1.457558f, 4.851077f },
	{ 22.64658f, 1.45756f, 4.702859f },
	{ -5.269269f, -2.914936f, -1.713181f },
	{ -4.489171f, 1.457559f, -4.114082f },
	{ -6.04937f, 1.457558f, 0.6877199f }
};

NJS_VECTOR normal_00196A14[] = {
	{ -0.096419f, -0.844879f, 0.5261959f },
	{ -0.162186f, 0.4362f, 0.8851129f },
	{ 0.381551f, -0.561123f, -0.734547f },
	{ -0.34172f, -0.749998f, -0.566331f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f }
};

NJS_MODEL_SADX attach_00196A5C = { vertex_001969CC, normal_00196A14, LengthOfArray<Sint32>(vertex_001969CC), meshlist_0019699C, matlist_001968F0, LengthOfArray<Uint16>(meshlist_0019699C), LengthOfArray<Uint16>(matlist_001968F0),{ 8.298605f, -0.728689f, 0.368498f }, 15.0319f, NULL };

NJS_OBJECT object_00196A84 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00196A5C, 562.950613f, -394.68114f, -2956.438025f, 0, 0, 0, 1, 1, 1, NULL, &object_001968BC };
//-0.934387f, -31.17612f, -45.83764f

NJS_MATERIAL matlist_00196AB8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00196AF4[] = {
	5, 3, 0,
	5, 0, 1,
	3, 4, 2,
	3, 2, 0,
	4, 5, 1,
	4, 1, 2,
	0, 2, 1
};

Sint16 poly_00196B1E[] = {
	5, 4, 3
};

NJS_TEX uv_00196B24[] = {
	{ 2, 0 },
	{ 2, 127 },
	{ 201, 127 },
	{ 2, 0 },
	{ 201, 127 },
	{ 90, 0 },
	{ 2, 127 },
	{ 2, 255 },
	{ 215, 254 },
	{ 2, 127 },
	{ 215, 254 },
	{ 201, 127 },
	{ 2, 255 },
	{ 2, 0 },
	{ 90, 0 },
	{ 2, 255 },
	{ 90, 0 },
	{ 215, 254 },
	{ 201, 127 },
	{ 215, 254 },
	{ 90, 0 }
};

NJS_TEX uv_00196B78[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 }
};

NJS_MESHSET_SADX meshlist_00196B84[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_00196AF4, NULL, NULL, NULL, uv_00196B24, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_00196B1E, NULL, NULL, NULL, uv_00196B78, NULL }
};

NJS_VECTOR vertex_00196BB4[] = {
	{ 8.94169f, -2.915054f, 2.904422f },
	{ -0.232828f, 1.457439f, 2.577813f },
	{ 10.77567f, 1.457441f, 0.845951f },
	{ -6.01122f, -2.915057f, -1.954075f },
	{ -5.231124f, 1.457442f, -4.354976f },
	{ -6.791325f, 1.45744f, 0.446827f }
};

NJS_VECTOR normal_00196BFC[] = {
	{ -0.059332f, -0.543061f, 0.837595f },
	{ -0.048193f, 0.731308f, 0.680342f },
	{ 0.638521f, 0.348883f, -0.685982f },
	{ -0.34172f, -0.749999f, -0.5663289f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f }
};

NJS_MODEL_SADX attach_00196C44 = { vertex_00196BB4, normal_00196BFC, LengthOfArray<Sint32>(vertex_00196BB4), meshlist_00196B84, matlist_00196AB8, LengthOfArray<Uint16>(meshlist_00196B84), LengthOfArray<Uint16>(matlist_00196AB8),{ 1.992174f, -0.728807f, -0.7252769f }, 9.503956f, NULL };

NJS_OBJECT object_00196C6C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00196C44, 567.345022f, -394.88112f, -2967.438515f, 0, 0, 0, 1, 1, 1, NULL, &object_00196A84 };
//3.460022f, -31.3761f, -56.83813f

NJS_MATERIAL matlist_00196CA0[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00196CDC[] = {
	0, 3, 5,
	0, 5, 1,
	2, 4, 3,
	2, 3, 0,
	1, 5, 4,
	1, 4, 2,
	0, 1, 2
};

Sint16 poly_00196D06[] = {
	3, 4, 5
};

NJS_TEX uv_00196D0C[] = {
	{ 201, 127 },
	{ 506, 127 },
	{ 506, 0 },
	{ 201, 127 },
	{ 506, 0 },
	{ 89, 0 },
	{ 214, 255 },
	{ 506, 254 },
	{ 506, 127 },
	{ 214, 255 },
	{ 506, 127 },
	{ 201, 127 },
	{ 89, 0 },
	{ 506, 0 },
	{ 506, 254 },
	{ 89, 0 },
	{ 506, 254 },
	{ 214, 255 },
	{ 201, 127 },
	{ 89, 0 },
	{ 214, 255 }
};

NJS_TEX uv_00196D60[] = {
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00196D6C[] = {
	{ NJD_MESHSET_3 | 1, 7, poly_00196CDC, NULL, NULL, NULL, uv_00196D0C, NULL },
	{ NJD_MESHSET_3 | 2, 1, poly_00196D06, NULL, NULL, NULL, uv_00196D60, NULL }
};

NJS_VECTOR vertex_00196D9C[] = {
	{ -9.147223f, -2.915047f, -2.973058f },
	{ -18.32175f, 1.457448f, -3.299669f },
	{ -7.313238f, 1.457451f, -5.031533f },
	{ 13.94117f, -2.915047f, 4.528814f },
	{ 14.72126f, 1.457451f, 2.127913f },
	{ 13.16106f, 1.45745f, 6.929718f }
};

NJS_VECTOR normal_00196DE4[] = {
	{ -0.214722f, -0.975456f, -0.04879f },
	{ -0.341793f, 0.936561f, -0.077662f },
	{ 0.149178f, -0.141682f, -0.978607f },
	{ 0.609337f, -0.749999f, -0.257312f },
	{ 0.609336f, 0.75f, -0.257311f },
	{ 0.207912f, 0, 0.978148f }
};

NJS_MODEL_SADX attach_00196E2C = { vertex_00196D9C, normal_00196DE4, LengthOfArray<Sint32>(vertex_00196D9C), meshlist_00196D6C, matlist_00196CA0, LengthOfArray<Uint16>(meshlist_00196D6C), LengthOfArray<Uint16>(matlist_00196CA0),{ -1.800241f, -0.728798f, 0.949093f }, 17.57065f, NULL };

NJS_OBJECT object_00196E54 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00196E2C, 585.43413f, -394.88112f, -2961.561565f, 0, 0, 0, 1, 1, 1, NULL, &object_00196C6C };
//21.54913f, -31.3761f, -50.96118f

NJS_MATERIAL matlist_00196E88[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00196E9C[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	3, 4, 5
};

NJS_TEX uv_00196EC8[] = {
	{ 510, 128 },
	{ 510, 28 },
	{ 0, 97 },
	{ 510, 128 },
	{ 0, 97 },
	{ 0, 255 },
	{ 510, 28 },
	{ 510, 0 },
	{ 0, 53 },
	{ 510, 28 },
	{ 0, 53 },
	{ 0, 97 },
	{ 510, 0 },
	{ 510, 128 },
	{ 0, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0, 53 },
	{ 0, 97 },
	{ 0, 53 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_00196F1C[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_00196E9C, NULL, NULL, NULL, uv_00196EC8, NULL }
};

NJS_VECTOR vertex_00196F34[] = {
	{ -0.620841f, 6.504292f, -0.201317f },
	{ 0.561666f, 6.504292f, -0.452666f },
	{ 0.188088f, 6.504292f, 0.69709f },
	{ -0.9747199f, -5.101338f, 0.42189f },
	{ 0.881816f, -5.101338f, 0.027271f },
	{ 0.295298f, -5.101338f, 1.832388f }
};

NJS_VECTOR normal_00196F7C[] = {
	{ -0.668725f, -0.019521f, -0.743253f },
	{ 0.978019f, 0.01839f, -0.207704f },
	{ -0.307246f, 0.089837f, 0.9473799f },
	{ -0.861692f, -0.473352f, 0.182821f },
	{ 0.264097f, -0.51999f, -0.81232f },
	{ 0.599107f, -0.446457f, 0.6646399f }
};

NJS_MODEL_SADX attach_00196FC4 = { vertex_00196F34, normal_00196F7C, LengthOfArray<Sint32>(vertex_00196F34), meshlist_00196F1C, matlist_00196E88, LengthOfArray<Uint16>(meshlist_00196F1C), LengthOfArray<Uint16>(matlist_00196E88),{ -0.046452f, 0.701477f, 0.689861f }, 5.91422f, NULL };

NJS_OBJECT object_00196FEC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00196FC4, 584.8236f, -388.01802f, -2918.444623f, 0, 0, 0, 1, 1, 1, NULL, &object_00196E54 };
//20.9386f, -24.513f, -7.844238f

NJS_MATERIAL matlist_00197020[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00197034[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_00197060[] = {
	{ 510, 255 },
	{ 510, 55 },
	{ 0, 71 },
	{ 510, 255 },
	{ 0, 71 },
	{ 0, 202 },
	{ 510, 55 },
	{ 510, 0 },
	{ 0, 34 },
	{ 510, 55 },
	{ 0, 34 },
	{ 0, 71 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 202 },
	{ 510, 0 },
	{ 0, 202 },
	{ 0, 34 },
	{ 0, 55 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_001970B4[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_00197034, NULL, NULL, NULL, uv_00197060, NULL }
};

NJS_VECTOR vertex_001970CC[] = {
	{ -0.90516f, 6.90766f, -0.293511f },
	{ 0.818886f, 6.90766f, -0.659969f },
	{ 0.274224f, 6.90766f, 1.016328f },
	{ -0.5955f, -5.101338f, -0.1931f },
	{ 0.538741f, -5.101338f, -0.43419f },
	{ 0.180411f, -5.101338f, 0.668637f }
};

NJS_VECTOR normal_00197114[] = {
	{ -0.585327f, 0.48456f, -0.650072f },
	{ 0.856811f, 0.48239f, -0.182143f },
	{ -0.270525f, 0.483452f, 0.832521f },
	{ -0.977878f, -0.023477f, 0.207854f },
	{ 0.308896f, -0.025081f, -0.950765f },
	{ 0.668873f, -0.026734f, 0.7428949f }
};

NJS_MODEL_SADX attach_0019715C = { vertex_001970CC, normal_00197114, LengthOfArray<Sint32>(vertex_001970CC), meshlist_001970B4, matlist_00197020, LengthOfArray<Uint16>(meshlist_001970B4), LengthOfArray<Uint16>(matlist_00197020),{ -0.043137f, 0.903161f, 0.17818f }, 6.062714f, NULL };

NJS_OBJECT object_00197184 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019715C, 593.67968f, -388.41804f, -2946.689735f, 0, 0, 0, 1, 1, 1, NULL, &object_00196FEC };
//29.79468f, -24.91302f, -36.08935f

NJS_MATERIAL matlist_001971B8[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001971CC[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

NJS_TEX uv_001971F0[] = {
	{ 510, 254 },
	{ 510, 55 },
	{ 0, 50 },
	{ 510, 254 },
	{ 0, 50 },
	{ 0, 166 },
	{ 510, 55 },
	{ 510, 0 },
	{ 0, 18 },
	{ 510, 55 },
	{ 0, 18 },
	{ 0, 50 },
	{ 510, 0 },
	{ 510, 254 },
	{ 0, 166 },
	{ 510, 0 },
	{ 0, 166 },
	{ 0, 18 }
};

NJS_MESHSET_SADX meshlist_00197238[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_001971CC, NULL, NULL, NULL, uv_001971F0, NULL }
};

NJS_VECTOR vertex_00197250[] = {
	{ -1.074055f, 4.950482f, -0.348278f },
	{ 0.971683f, 4.950482f, -0.7831129f },
	{ 0.325392f, 4.950482f, 1.205965f },
	{ -0.620841f, -5.101338f, -0.385806f },
	{ 0.561666f, -5.101338f, -0.637156f },
	{ 0.188088f, -5.101338f, 0.5125999f }
};

NJS_VECTOR normal_00197298[] = {
	{ -0.668609f, -0.027372f, -0.7431099f },
	{ 0.977179f, -0.04288f, -0.208043f },
	{ -0.308404f, -0.061268f, 0.94928f },
	{ -0.97724f, -0.044836f, 0.207346f },
	{ 0.308595f, -0.026394f, -0.9508269f },
	{ 0.6679389f, -0.06029f, 0.74177f }
};

NJS_MODEL_SADX attach_001972E0 = { vertex_00197250, normal_00197298, LengthOfArray<Sint32>(vertex_00197250), meshlist_00197238, matlist_001971B8, LengthOfArray<Uint16>(meshlist_00197238), LengthOfArray<Uint16>(matlist_001971B8),{ -0.051186f, -0.07542799f, 0.211426f }, 5.123383f, NULL };

NJS_OBJECT object_00197308 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001972E0, 550.11907f, -388.01802f, -2929.610885f, 0, 0, 0, 1, 1, 1, NULL, &object_00197184 };
//-13.76593f, -24.513f, -19.0105f

NJS_MATERIAL matlist_0019733C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00197350[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	0, 2, 1
};

NJS_TEX uv_0019737C[] = {
	{ 510, 254 },
	{ 510, 55 },
	{ 0, 82 },
	{ 510, 254 },
	{ 0, 82 },
	{ 0, 161 },
	{ 510, 55 },
	{ 510, 0 },
	{ 0, 60 },
	{ 510, 55 },
	{ 0, 60 },
	{ 0, 82 },
	{ 510, 0 },
	{ 510, 254 },
	{ 0, 161 },
	{ 510, 0 },
	{ 0, 161 },
	{ 0, 60 },
	{ 0, 55 },
	{ 0, 254 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_001973D0[] = {
	{ NJD_MESHSET_3 | 0, 7, poly_00197350, NULL, NULL, NULL, uv_0019737C, NULL }
};

NJS_VECTOR vertex_001973E8[] = {
	{ -1.500661f, 6.73169f, -0.486611f },
	{ 1.357628f, 6.73169f, -1.094159f },
	{ 0.454635f, 6.73169f, 1.684965f },
	{ -0.5955f, -5.101338f, -0.1931f },
	{ 0.538741f, -5.101338f, -0.43419f },
	{ 0.180411f, -5.101338f, 0.668637f }
};

NJS_VECTOR normal_00197430[] = {
	{ -0.596519f, 0.453051f, -0.6625029f },
	{ 0.875284f, 0.446308f, -0.186244f },
	{ -0.276209f, 0.449573f, 0.849466f },
	{ -0.975783f, -0.069497f, 0.207407f },
	{ 0.307961f, -0.074213f, -0.9485f },
	{ 0.666876f, -0.079095f, 0.740959f }
};

NJS_MODEL_SADX attach_00197478 = { vertex_001973E8, normal_00197430, LengthOfArray<Sint32>(vertex_001973E8), meshlist_001973D0, matlist_0019733C, LengthOfArray<Uint16>(meshlist_001973D0), LengthOfArray<Uint16>(matlist_0019733C),{ -0.071517f, 0.815176f, 0.295403f }, 6.077526f, NULL };

NJS_OBJECT object_001974A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00197478, 558.975088f, -388.41804f, -2957.855755f, 0, 0, 0, 1, 1, 1, NULL, &object_00197308 };
//-4.909912f, -24.91302f, -47.25537f

NJS_MATERIAL matlist_001974D4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001974E8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00197518[] = {
	{ 254, 125 },
	{ 139, 246 },
	{ 140, -175 },
	{ 254, 125 },
	{ 140, -175 },
	{ 255, -255 },
	{ 139, 246 },
	{ 0, 255 },
	{ 1, -199 },
	{ 139, 246 },
	{ 1, -199 },
	{ 140, -175 },
	{ 0, 255 },
	{ 254, 125 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 1, -199 },
	{ 254, 125 },
	{ 0, 255 },
	{ 139, 246 },
	{ 140, -175 },
	{ 1, -199 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00197578[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001974E8, NULL, NULL, NULL, uv_00197518, NULL }
};

NJS_VECTOR vertex_00197590[] = {
	{ 1.508224f, 0.421437f, -4.556944f },
	{ 1.076361f, -0.341089f, -4.841403f },
	{ 1.317055f, -0.355547f, -2.642559f },
	{ -0.514698f, 0.542958f, 1.680191f },
	{ -1.103924f, -0.210115f, 1.880921f },
	{ -0.506704f, -0.245991f, 2.980512f }
};

NJS_VECTOR normal_001975D8[] = {
	{ 0.129087f, 0.939292f, -0.317912f },
	{ -0.015846f, -0.981899f, -0.18874f },
	{ 0.962667f, -0.213748f, 0.166084f },
	{ 0.108832f, 0.948203f, 0.298442f },
	{ -0.95217f, 0.299389f, -0.061135f },
	{ 0.05198f, -0.812937f, 0.580027f }
};

NJS_MODEL_SADX attach_00197620 = { vertex_00197590, normal_001975D8, LengthOfArray<Sint32>(vertex_00197590), meshlist_00197578, matlist_001974D4, LengthOfArray<Uint16>(meshlist_00197578), LengthOfArray<Uint16>(matlist_001974D4),{ 0.20215f, 0.093705f, -0.930446f }, 4.123218f, NULL };

NJS_OBJECT object_00197648 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00197620, 596.49956f, -383.66124f, -2954.462935f, 0, 0, 0, 1, 1, 1, NULL, &object_001974A0 };
//32.61456f, -20.15622f, -43.86255f

NJS_MATERIAL matlist_0019767C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00197690[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001976C0[] = {
	{ 255, 182 },
	{ 140, 255 },
	{ 140, 0 },
	{ 255, 182 },
	{ 140, 0 },
	{ 254, 29 },
	{ 140, 255 },
	{ 0, 233 },
	{ 0, 66 },
	{ 140, 255 },
	{ 0, 66 },
	{ 140, 0 },
	{ 0, 233 },
	{ 255, 182 },
	{ 254, 29 },
	{ 0, 233 },
	{ 254, 29 },
	{ 0, 66 },
	{ 255, 182 },
	{ 0, 233 },
	{ 140, 255 },
	{ 140, 0 },
	{ 0, 66 },
	{ 254, 29 }
};

NJS_MESHSET_SADX meshlist_00197720[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00197690, NULL, NULL, NULL, uv_001976C0, NULL }
};

NJS_VECTOR vertex_00197738[] = {
	{ 0.79946f, 0.492156f, -2.369728f },
	{ 0.210234f, -0.260916f, -2.168999f },
	{ 0.807454f, -0.296792f, -1.069408f },
	{ -0.546511f, 0.292294f, 1.775036f },
	{ -0.671023f, -0.236028f, 0.542946f },
	{ -0.00039f, -0.529001f, 1.415105f }
};

NJS_VECTOR normal_00197780[] = {
	{ -0.02164f, 0.882563f, -0.469696f },
	{ -0.158026f, -0.917114f, -0.365965f },
	{ 0.957536f, -0.282153f, 0.059287f },
	{ 0.190014f, 0.7741089f, 0.603862f },
	{ -0.985992f, -0.143172f, -0.085562f },
	{ -0.041312f, -0.973539f, 0.224758f }
};

NJS_MODEL_SADX attach_001977C8 = { vertex_00197738, normal_00197780, LengthOfArray<Sint32>(vertex_00197738), meshlist_00197720, matlist_0019767C, LengthOfArray<Uint16>(meshlist_00197720), LengthOfArray<Uint16>(matlist_0019767C),{ 0.068215f, -0.018423f, -0.297346f }, 2.200284f, NULL };

NJS_OBJECT object_001977F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001977C8, 595.17742f, -383.61079f, -2950.417525f, 0, 0, 0, 1, 1, 1, NULL, &object_00197648 };
//31.29242f, -20.10577f, -39.81714f

NJS_MATERIAL matlist_00197824[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00197838[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00197868[] = {
	{ 255, 205 },
	{ 140, 164 },
	{ 140, 0 },
	{ 255, 205 },
	{ 140, 0 },
	{ 254, 14 },
	{ 140, 164 },
	{ 0, 255 },
	{ 0, 62 },
	{ 140, 164 },
	{ 0, 62 },
	{ 140, 0 },
	{ 0, 255 },
	{ 255, 205 },
	{ 254, 14 },
	{ 0, 255 },
	{ 254, 14 },
	{ 0, 62 },
	{ 255, 205 },
	{ 0, 255 },
	{ 140, 164 },
	{ 140, 0 },
	{ 0, 62 },
	{ 254, 14 }
};

NJS_MESHSET_SADX meshlist_001978C8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00197838, NULL, NULL, NULL, uv_00197868, NULL }
};

NJS_VECTOR vertex_001978E0[] = {
	{ 0.230857f, 0.273647f, -0.615407f },
	{ 0.106345f, -0.254675f, -1.847498f },
	{ 0.777329f, -0.547648f, -0.975339f },
	{ -0.40698f, 0.283913f, 1.346014f },
	{ -0.63968f, -0.490577f, 0.44749f },
	{ 0.036222f, -0.53118f, 1.304487f }
};

NJS_VECTOR normal_00197928[] = {
	{ -0.001491f, 0.974622f, -0.223851f },
	{ -0.293431f, -0.681642f, -0.67027f },
	{ 0.9646969f, 0.257536f, 0.055096f },
	{ 0.137821f, 0.765735f, 0.628216f },
	{ -0.993419f, -0.114338f, 0.006714f },
	{ -0.058992f, -0.945906f, 0.319033f }
};

NJS_MODEL_SADX attach_00197970 = { vertex_001978E0, normal_00197928, LengthOfArray<Sint32>(vertex_001978E0), meshlist_001978C8, matlist_00197824, LengthOfArray<Uint16>(meshlist_001978C8), LengthOfArray<Uint16>(matlist_00197824),{ 0.068825f, -0.131868f, -0.250742f }, 1.746825f, NULL };

NJS_OBJECT object_00197998 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00197970, 594.39348f, -383.59294f, -2948.029335f, 0, 0, 0, 1, 1, 1, NULL, &object_001977F0 };
//30.50848f, -20.08792f, -37.42895f

NJS_MATERIAL matlist_001979CC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001979E0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00197A10[] = {
	{ 254, 212 },
	{ 139, 200 },
	{ 140, 87 },
	{ 254, 212 },
	{ 140, 87 },
	{ 255, 0 },
	{ 139, 200 },
	{ 0, 254 },
	{ 0, 118 },
	{ 139, 200 },
	{ 0, 118 },
	{ 140, 87 },
	{ 0, 254 },
	{ 254, 212 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0, 118 },
	{ 254, 212 },
	{ 0, 254 },
	{ 139, 200 },
	{ 140, 87 },
	{ 0, 118 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00197A70[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001979E0, NULL, NULL, NULL, uv_00197A10, NULL }
};

NJS_VECTOR vertex_00197A88[] = {
	{ 0.275353f, 0.262929f, -0.753985f },
	{ 0.042653f, -0.51156f, -1.652509f },
	{ 0.718555f, -0.5521629f, -0.795512f },
	{ -0.225568f, 0.5456859f, 0.7904699f },
	{ -0.563996f, -0.222452f, 0.217931f },
	{ -0.22495f, -0.242819f, 2.113533f }
};

NJS_VECTOR normal_00197AD0[] = {
	{ 0.053125f, 0.893914f, -0.44508f },
	{ -0.354886f, -0.714974f, -0.602386f },
	{ 0.991617f, 0.127459f, -0.021229f },
	{ 0.038369f, 0.987834f, 0.150703f },
	{ -0.969018f, 0.185596f, -0.16297f },
	{ -0.353967f, -0.862745f, 0.36108f }
};

NJS_MODEL_SADX attach_00197B18 = { vertex_00197A88, normal_00197AD0, LengthOfArray<Sint32>(vertex_00197A88), meshlist_00197A70, matlist_001979CC, LengthOfArray<Uint16>(meshlist_00197A70), LengthOfArray<Uint16>(matlist_001979CC),{ 0.07727899f, -0.003238f, 0.230512f }, 1.989262f, NULL };

NJS_OBJECT object_00197B40 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00197B18, 593.7059f, -383.57109f, -2945.929735f, 0, 0, 0, 1, 1, 1, NULL, &object_00197998 };
//29.82086f, -20.06607f, -35.32935f

NJS_MATERIAL matlist_00197B74[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00197B88[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00197BB8[] = {
	{ 248, 161 },
	{ 136, 230 },
	{ 141, -1973 },
	{ 248, 161 },
	{ 141, -1973 },
	{ 255, -2550 },
	{ 136, 230 },
	{ 0, 255 },
	{ 6, -2489 },
	{ 136, 230 },
	{ 6, -2489 },
	{ 141, -1973 },
	{ 0, 255 },
	{ 248, 161 },
	{ 255, -2550 },
	{ 0, 255 },
	{ 255, -2550 },
	{ 6, -2489 },
	{ 248, 161 },
	{ 0, 255 },
	{ 136, 230 },
	{ 141, -1973 },
	{ 6, -2489 },
	{ 255, -2550 }
};

NJS_MESHSET_SADX meshlist_00197C18[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00197B88, NULL, NULL, NULL, uv_00197BB8, NULL }
};

NJS_VECTOR vertex_00197C30[] = {
	{ 7.881741f, 0.078516f, -24.20148f },
	{ 7.543313f, -0.689622f, -24.77402f },
	{ 7.882358f, -0.709989f, -22.87842f },
	{ -4.411542f, 0.776927f, 13.69415f },
	{ -7.771839f, -0.038857f, 22.43873f },
	{ -7.238548f, -0.070892f, 23.73543f }
};

NJS_VECTOR normal_00197C78[] = {
	{ 0.123042f, 0.925232f, -0.358897f },
	{ 0.02661f, -0.968797f, -0.246425f },
	{ 0.975929f, -0.167895f, 0.139189f },
	{ 0.327963f, 0.935235f, 0.133323f },
	{ -0.848014f, 0.475376f, -0.234287f },
	{ 0.701871f, -0.626528f, 0.338881f }
};

NJS_MODEL_SADX attach_00197CC0 = { vertex_00197C30, normal_00197C78, LengthOfArray<Sint32>(vertex_00197C30), meshlist_00197C18, matlist_00197B74, LengthOfArray<Uint16>(meshlist_00197C18), LengthOfArray<Uint16>(matlist_00197B74),{ 0.055259f, 0.033469f, -0.5192969f }, 25.4863f, NULL };

NJS_OBJECT object_00197CE8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00197CC0, 585.59276f, -383.10304f, -2920.935585f, 0, 0, 0, 1, 1, 1, NULL, &object_00197B40 };
//21.70776f, -19.59802f, -10.3352f

NJS_MATERIAL matlist_00197D1C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00197D30[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00197D60[] = {
	{ 252, 42 },
	{ 138, 255 },
	{ 140, -553 },
	{ 252, 42 },
	{ 140, -553 },
	{ 255, -1020 },
	{ 138, 255 },
	{ 0, 170 },
	{ 1, -685 },
	{ 138, 255 },
	{ 1, -685 },
	{ 140, -553 },
	{ 0, 170 },
	{ 252, 42 },
	{ 255, -1020 },
	{ 0, 170 },
	{ 255, -1020 },
	{ 1, -685 },
	{ 252, 42 },
	{ 0, 170 },
	{ 138, 255 },
	{ 140, -553 },
	{ 1, -685 },
	{ 255, -1020 }
};

NJS_MESHSET_SADX meshlist_00197DC0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00197D30, NULL, NULL, NULL, uv_00197D60, NULL }
};

NJS_VECTOR vertex_00197DD8[] = {
	{ 4.231082f, 2.779932f, -12.95005f },
	{ 3.260741f, 2.049753f, -11.57425f },
	{ 3.380954f, 2.042532f, -9.003938f },
	{ -0.495742f, 2.657995f, 1.618671f },
	{ -1.741469f, 1.94436f, 3.843545f },
	{ -2.828529f, 2.468013f, 10.13616f }
};

NJS_VECTOR normal_00197E20[] = {
	{ -0.181393f, 0.940709f, -0.286642f },
	{ 0.107954f, -0.992496f, -0.057428f },
	{ 0.93901f, -0.27456f, 0.207067f },
	{ -0.00565f, 0.9998609f, 0.015673f },
	{ -0.845789f, 0.47212f, -0.24848f },
	{ 0.6290219f, -0.721361f, 0.289775f }
};

NJS_MODEL_SADX attach_00197E68 = { vertex_00197DD8, normal_00197E20, LengthOfArray<Sint32>(vertex_00197DD8), meshlist_00197DC0, matlist_00197D1C, LengthOfArray<Uint16>(meshlist_00197DC0), LengthOfArray<Uint16>(matlist_00197D1C),{ 0.701277f, 2.362146f, -1.406944f }, 12.07073f, NULL };

NJS_OBJECT object_00197E90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00197E68, 583.43694f, -387.36043f, -2914.273969f, 0, 0, 0, 1, 1, 1, NULL, &object_00197CE8 };
//19.55194f, -23.85541f, -3.673584f

NJS_MATERIAL matlist_00197EC4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00197ED8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00197F08[] = {
	{ 254, -80 },
	{ 139, 32 },
	{ 140, -545 },
	{ 254, -80 },
	{ 140, -545 },
	{ 255, -765 },
	{ 139, 32 },
	{ 0, 255 },
	{ 1, -633 },
	{ 139, 32 },
	{ 1, -633 },
	{ 140, -545 },
	{ 0, 255 },
	{ 254, -80 },
	{ 255, -765 },
	{ 0, 255 },
	{ 255, -765 },
	{ 1, -633 },
	{ 254, -80 },
	{ 0, 255 },
	{ 139, 32 },
	{ 140, -545 },
	{ 1, -633 },
	{ 255, -765 }
};

NJS_MESHSET_SADX meshlist_00197F68[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00197ED8, NULL, NULL, NULL, uv_00197F08, NULL }
};

NJS_VECTOR vertex_00197F80[] = {
	{ 2.685262f, 2.747379f, -8.184073f },
	{ 3.472966f, 1.658926f, -12.22874f },
	{ 2.435082f, 1.97394f, -6.087743f },
	{ -0.5986609f, 2.993684f, 1.92697f },
	{ -1.569001f, 2.263506f, 3.302763f },
	{ -1.448789f, 2.256285f, 5.873079f }
};

NJS_VECTOR normal_00197FC8[] = {
	{ 0.129661f, 0.98801f, -0.083814f },
	{ 0.149024f, -0.988269f, -0.033418f },
	{ 0.965394f, 0.008336999f, 0.260661f },
	{ 0.148584f, 0.980703f, 0.127063f },
	{ -0.9191369f, 0.333327f, -0.209955f },
	{ 0.391813f, -0.81256f, 0.431543f }
};

NJS_MODEL_SADX attach_00198010 = { vertex_00197F80, normal_00197FC8, LengthOfArray<Sint32>(vertex_00197F80), meshlist_00197F68, matlist_00197EC4, LengthOfArray<Uint16>(meshlist_00197F68), LengthOfArray<Uint16>(matlist_00197EC4),{ 0.951982f, 2.326305f, -3.177829f }, 9.395438f, NULL };

NJS_OBJECT object_00198038 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00198010, 588.28765f, -387.57432f, -2929.148965f, 0, 0, 0, 1, 1, 1, NULL, &object_00197E90 };
//24.40265f, -24.0693f, -18.54858f

NJS_MATERIAL matlist_0019806C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00198080[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001980B0[] = {
	{ 254, 122 },
	{ 139, 218 },
	{ 141, -510 },
	{ 254, 122 },
	{ 141, -510 },
	{ 255, -166 },
	{ 139, 218 },
	{ 0, 255 },
	{ 1, -109 },
	{ 139, 218 },
	{ 1, -109 },
	{ 141, -510 },
	{ 0, 255 },
	{ 254, 122 },
	{ 255, -166 },
	{ 0, 255 },
	{ 255, -166 },
	{ 1, -109 },
	{ 254, 122 },
	{ 0, 255 },
	{ 139, 218 },
	{ 141, -510 },
	{ 1, -109 },
	{ 255, -166 }
};

NJS_MESHSET_SADX meshlist_00198110[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00198080, NULL, NULL, NULL, uv_001980B0, NULL }
};

NJS_VECTOR vertex_00198128[] = {
	{ 1.066738f, 2.226788f, -3.194145f },
	{ 0.819285f, 1.453185f, -4.047183f },
	{ 0.8485219f, 1.451429f, -1.196368f },
	{ -3.510881f, 2.86711f, 10.91971f },
	{ -1.471647f, 1.95614f, 3.016293f },
	{ -0.9654019f, 1.92573f, 4.396383f }
};

NJS_VECTOR normal_00198170[] = {
	{ 0.241751f, 0.948209f, -0.20605f },
	{ -0.114172f, -0.980868f, -0.157678f },
	{ 0.982961f, -0.044444f, 0.17836f },
	{ 0.571471f, 0.7960939f, 0.199136f },
	{ -0.902581f, -0.363969f, -0.229945f },
	{ 0.03032f, -0.993705f, 0.107844f }
};

NJS_MODEL_SADX attach_001981B8 = { vertex_00198128, normal_00198170, LengthOfArray<Sint32>(vertex_00198128), meshlist_00198110, matlist_0019806C, LengthOfArray<Uint16>(meshlist_00198110), LengthOfArray<Uint16>(matlist_0019806C),{ -1.222072f, 2.159269f, 3.436265f }, 7.825586f, NULL };

NJS_OBJECT object_001981E0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001981B8, 550.238464f, -387.5838f, -2929.791055f, 0, 0, 0, 1, 1, 1, NULL, &object_00198038 };
//-13.64654f, -24.07879f, -19.19067f

NJS_MATERIAL matlist_00198214[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00198228[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00198258[] = {
	{ 254, 221 },
	{ 139, 163 },
	{ 140, -119 },
	{ 254, 221 },
	{ 140, -119 },
	{ 255, -255 },
	{ 139, 163 },
	{ 0, 254 },
	{ 0, -69 },
	{ 139, 163 },
	{ 0, -69 },
	{ 140, -119 },
	{ 0, 254 },
	{ 254, 221 },
	{ 255, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 0, -69 },
	{ 254, 221 },
	{ 0, 254 },
	{ 139, 163 },
	{ 140, -119 },
	{ 0, -69 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_001982B8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00198228, NULL, NULL, NULL, uv_00198258, NULL }
};

NJS_VECTOR vertex_001982D0[] = {
	{ 0.510537f, 2.641656f, -1.476967f },
	{ 0.447495f, 1.856975f, -2.898583f },
	{ 1.15782f, 1.814304f, -2.147721f },
	{ -0.76341f, 2.33682f, 2.447949f },
	{ -1.010862f, 1.563217f, 1.594912f },
	{ -0.981625f, 1.561461f, 4.445727f }
};

NJS_VECTOR normal_00198318[] = {
	{ -0.13235f, 0.9566309f, -0.259502f },
	{ -0.148448f, -0.707908f, -0.690529f },
	{ 0.954187f, 0.294753f, 0.051463f },
	{ -0.062342f, 0.975301f, 0.211898f },
	{ -0.9740919f, 0.131208f, -0.184198f },
	{ 0.030032f, -0.978202f, 0.205474f }
};

NJS_MODEL_SADX attach_00198360 = { vertex_001982D0, normal_00198318, LengthOfArray<Sint32>(vertex_001982D0), meshlist_001982B8, matlist_00198214, LengthOfArray<Uint16>(meshlist_001982B8), LengthOfArray<Uint16>(matlist_00198214),{ 0.073479f, 2.101558f, 0.773572f }, 3.828991f, NULL };

NJS_OBJECT object_00198388 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00198360, 552.071f, -387.684143f, -2935.43066f, 0, 0, 0, 1, 1, 1, NULL, &object_001981E0 };
//-11.81403f, -24.17911f, -24.83032f

NJS_MATERIAL matlist_001983BC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001983D0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00198400[] = {
	{ 254, 169 },
	{ 139, 255 },
	{ 140, 0 },
	{ 254, 169 },
	{ 140, 0 },
	{ 255, 56 },
	{ 139, 255 },
	{ 0, 203 },
	{ 0, 89 },
	{ 139, 255 },
	{ 0, 89 },
	{ 140, 0 },
	{ 0, 203 },
	{ 254, 169 },
	{ 255, 56 },
	{ 0, 203 },
	{ 255, 56 },
	{ 0, 89 },
	{ 254, 169 },
	{ 0, 203 },
	{ 139, 255 },
	{ 140, 0 },
	{ 0, 89 },
	{ 255, 56 }
};

NJS_MESHSET_SADX meshlist_00198460[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001983D0, NULL, NULL, NULL, uv_00198400, NULL }
};

NJS_VECTOR vertex_00198478[] = {
	{ 0.586197f, 2.6209f, -1.712451f },
	{ -0.125969f, 1.875213f, -1.132669f },
	{ 0.579439f, 1.832838f, -0.366645f },
	{ -0.588437f, 2.691463f, 1.909219f },
	{ -0.6514789f, 1.906781f, 0.487602f },
	{ 0.058846f, 1.864111f, 1.238464f }
};

NJS_VECTOR normal_001984C0[] = {
	{ -0.263943f, 0.706019f, -0.65717f },
	{ -0.19671f, -0.932871f, -0.301757f },
	{ 0.92193f, -0.385576f, 0.03709f },
	{ 0.380315f, 0.653695f, 0.65425f },
	{ -0.9564649f, -0.288373f, -0.044895f },
	{ 0.09472f, -0.951899f, 0.291403f }
};

NJS_MODEL_SADX attach_00198508 = { vertex_00198478, normal_001984C0, LengthOfArray<Sint32>(vertex_00198478), meshlist_00198460, matlist_001983BC, LengthOfArray<Uint16>(meshlist_00198460), LengthOfArray<Uint16>(matlist_001983BC),{ -0.032641f, 2.26215f, 0.09838399f }, 1.913615f, NULL };

NJS_OBJECT object_00198530 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00198508, 553.1757f, -387.731018f, -2938.816445f, 0, 0, 0, 1, 1, 1, NULL, &object_00198388 };
//-10.70929f, -24.22601f, -28.21606f

NJS_MATERIAL matlist_00198564[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00198578[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001985A8[] = {
	{ 254, -61 },
	{ 139, 254 },
	{ 140, -178 },
	{ 254, -61 },
	{ 140, -178 },
	{ 255, -255 },
	{ 139, 254 },
	{ 0, 58 },
	{ 0, -224 },
	{ 139, 254 },
	{ 0, -224 },
	{ 140, -178 },
	{ 0, 58 },
	{ 254, -61 },
	{ 255, -255 },
	{ 0, 58 },
	{ 255, -255 },
	{ 0, -224 },
	{ 254, -61 },
	{ 0, 58 },
	{ 139, 254 },
	{ 140, -178 },
	{ 0, -224 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00198608[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00198578, NULL, NULL, NULL, uv_001985A8, NULL }
};

NJS_VECTOR vertex_00198620[] = {
	{ 2.071021f, 2.539655f, -6.288936f },
	{ 0.581874f, 1.840643f, -3.313539f },
	{ 0.829944f, 1.825741f, -1.137438f },
	{ -0.163837f, 2.665893f, 0.600171f },
	{ -0.876003f, 1.920206f, 1.179953f },
	{ -0.170595f, 1.877831f, 1.945978f }
};

NJS_VECTOR normal_00198668[] = {
	{ -0.486743f, 0.779427f, -0.394429f },
	{ -0.225357f, -0.965903f, -0.12746f },
	{ 0.867991f, -0.448608f, 0.212936f },
	{ 0.195261f, 0.93315f, 0.301834f },
	{ -0.921294f, 0.387115f, -0.036866f },
	{ 0.269586f, -0.704883f, 0.656097f }
};

NJS_MODEL_SADX attach_001986B0 = { vertex_00198620, normal_00198668, LengthOfArray<Sint32>(vertex_00198620), meshlist_00198608, matlist_00198564, LengthOfArray<Uint16>(meshlist_00198608), LengthOfArray<Uint16>(matlist_00198564),{ 0.597509f, 2.245817f, -2.171479f }, 4.373154f, NULL };

NJS_OBJECT object_001986D8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001986B0, 553.928518f, -387.76662f, -2941.127975f, 0, 0, 0, 1, 1, 1, NULL, &object_00198530 };
//-9.956482f, -24.2616f, -30.52759f

NJS_MATERIAL matlist_0019870C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00198720[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00198750[] = {
	{ 252, -28 },
	{ 137, 255 },
	{ 140, -562 },
	{ 252, -28 },
	{ 140, -562 },
	{ 255, -765 },
	{ 137, 255 },
	{ 0, 11 },
	{ 2, -689 },
	{ 137, 255 },
	{ 2, -689 },
	{ 140, -562 },
	{ 0, 11 },
	{ 252, -28 },
	{ 255, -765 },
	{ 0, 11 },
	{ 255, -765 },
	{ 2, -689 },
	{ 252, -28 },
	{ 0, 11 },
	{ 137, 255 },
	{ 140, -562 },
	{ 2, -689 },
	{ 255, -765 }
};

NJS_MESHSET_SADX meshlist_001987B0[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00198720, NULL, NULL, NULL, uv_00198750, NULL }
};

NJS_VECTOR vertex_001987C8[] = {
	{ 4.208406f, 2.423341f, -12.87646f },
	{ 1.762785f, 1.781786f, -6.952036f },
	{ 2.296076f, 1.74975f, -5.655337f },
	{ -2.430886f, 2.80214f, 7.590315f },
	{ -3.920034f, 2.103128f, 10.56571f },
	{ -3.671963f, 2.088227f, 12.74181f }
};

NJS_VECTOR normal_00198810[] = {
	{ -0.694885f, 0.619212f, -0.365665f },
	{ -0.311136f, -0.941602f, -0.128761f },
	{ 0.827619f, -0.515327f, 0.222452f },
	{ 0.226888f, 0.965624f, 0.126857f },
	{ -0.865761f, 0.453096f, -0.212514f },
	{ 0.492936f, -0.773616f, 0.39816f }
};

NJS_MODEL_SADX attach_00198858 = { vertex_001987C8, normal_00198810, LengthOfArray<Sint32>(vertex_001987C8), meshlist_001987B0, matlist_0019870C, LengthOfArray<Uint16>(meshlist_001987B0), LengthOfArray<Uint16>(matlist_0019870C),{ 0.144186f, 2.275945f, -0.067325f }, 13.4384f, NULL };

NJS_OBJECT object_00198880 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00198858, 558.432302f, -388.02739f, -2955.004435f, 0, 0, 0, 1, 1, 1, NULL, &object_001986D8 };
//-5.452698f, -24.52237f, -44.40405f

NJS_MATERIAL matlist_001988B4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001988C8[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_001988F8[] = {
	{ 253, 183 },
	{ 139, 248 },
	{ 139, 168 },
	{ 253, 183 },
	{ 139, 168 },
	{ 255, -255 },
	{ 139, 248 },
	{ 0, 255 },
	{ 1, -194 },
	{ 139, 248 },
	{ 1, -194 },
	{ 139, 168 },
	{ 0, 255 },
	{ 253, 183 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 1, -194 },
	{ 253, 183 },
	{ 0, 255 },
	{ 139, 248 },
	{ 139, 168 },
	{ 1, -194 },
	{ 255, -255 }
};

NJS_MESHSET_SADX meshlist_00198958[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_001988C8, NULL, NULL, NULL, uv_001988F8, NULL }
};

NJS_VECTOR vertex_00198970[] = {
	{ 0.243718f, 2.649609f, -0.654902f },
	{ -0.195521f, 1.887526f, -0.916617f },
	{ 0.281217f, 1.858888f, 0.554446f },
	{ -0.191296f, 2.667726f, 0.684867f },
	{ -2.636918f, 2.026171f, 6.609295f },
	{ -2.103626f, 1.994135f, 7.905993f }
};

NJS_VECTOR normal_001989B8[] = {
	{ 0.111322f, 0.89924f, -0.423055f },
	{ -0.020821f, -0.957214f, -0.28863f },
	{ 0.976688f, -0.191906f, 0.096194f },
	{ 0.312003f, 0.941086f, 0.130423f },
	{ -0.821903f, 0.52556f, -0.219685f },
	{ 0.701439f, -0.610153f, 0.36837f }
};

NJS_MODEL_SADX attach_00198A00 = { vertex_00198970, normal_001989B8, LengthOfArray<Sint32>(vertex_00198970), meshlist_00198958, matlist_001988B4, LengthOfArray<Uint16>(meshlist_00198958), LengthOfArray<Uint16>(matlist_001988B4),{ -1.17785f, 2.263307f, 3.494688f }, 4.646287f, NULL };

NJS_OBJECT object_00198A28 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00198A00, 562.837576f, -388.27269f, -2968.566445f, 0, 0, 0, 1, 1, 1, NULL, &object_00198880 };
//-1.047424f, -24.76767f, -57.96606f

NJS_MATERIAL matlist_00198A5C[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00198A70[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00198AA0[] = {
	{ 254, 224 },
	{ 140, 255 },
	{ 140, 102 },
	{ 254, 224 },
	{ 140, 102 },
	{ 255, 0 },
	{ 140, 255 },
	{ 71, 244 },
	{ 0, 112 },
	{ 140, 255 },
	{ 0, 112 },
	{ 140, 102 },
	{ 71, 244 },
	{ 254, 224 },
	{ 255, 0 },
	{ 71, 244 },
	{ 255, 0 },
	{ 0, 112 },
	{ 254, 224 },
	{ 71, 244 },
	{ 140, 255 },
	{ 140, 102 },
	{ 0, 112 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00198B00[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00198A70, NULL, NULL, NULL, uv_00198AA0, NULL }
};

NJS_VECTOR vertex_00198B18[] = {
	{ 0.329761f, 2.656402f, -0.917694f },
	{ 0.061707f, 1.825073f, -0.881592f },
	{ 0.6131409f, 1.850911f, -0.466452f },
	{ -0.19203f, 2.667711f, 0.687412f },
	{ -0.631269f, 1.905628f, 0.425697f },
	{ -0.15453f, 1.87699f, 1.896759f }
};

NJS_VECTOR normal_00198B60[] = {
	{ -0.124205f, 0.6370659f, -0.7607369f },
	{ -0.136975f, -0.844336f, -0.51801f },
	{ 0.986845f, -0.135172f, -0.08869199f },
	{ 0.017901f, 0.955615f, 0.294074f },
	{ -0.983839f, 0.07820699f, -0.161073f },
	{ -0.065097f, -0.885291f, 0.460459f }
};

NJS_MODEL_SADX attach_00198BA8 = { vertex_00198B18, normal_00198B60, LengthOfArray<Sint32>(vertex_00198B18), meshlist_00198B00, matlist_00198A5C, LengthOfArray<Uint16>(meshlist_00198B00), LengthOfArray<Uint16>(matlist_00198A5C),{ -0.009063999f, 2.246392f, 0.489533f }, 1.538651f, NULL };

NJS_OBJECT object_00198BD0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00198BA8, 563.275747f, -388.28929f, -2969.907265f, 0, 0, 0, 1, 1, 1, NULL, &object_00198A28 };
//-0.609253f, -24.78427f, -59.30688f

NJS_MATERIAL matlist_00198C04[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00198C18[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00198C48[] = {
	{ 252, 254 },
	{ 138, 202 },
	{ 139, 111 },
	{ 252, 254 },
	{ 139, 111 },
	{ 255, -510 },
	{ 138, 202 },
	{ 0, 254 },
	{ 0, 111 },
	{ 138, 202 },
	{ 0, 111 },
	{ 139, 111 },
	{ 0, 254 },
	{ 252, 254 },
	{ 255, -510 },
	{ 0, 254 },
	{ 255, -510 },
	{ 0, 111 },
	{ 252, 254 },
	{ 0, 254 },
	{ 138, 202 },
	{ 139, 111 },
	{ 0, 111 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_00198CA8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00198C18, NULL, NULL, NULL, uv_00198C48, NULL }
};

NJS_VECTOR vertex_00198CC0[] = {
	{ 0.876942f, 0.45939f, -2.608085f },
	{ 0.7671829f, -0.322485f, -3.885662f },
	{ 1.629954f, -0.374313f, -3.604825f },
	{ 0.245703f, 0.497309f, -0.661828f },
	{ -0.232877f, -0.26241f, -0.802246f },
	{ -3.687763f, -0.054867f, 12.79093f }
};

NJS_VECTOR normal_00198D08[] = {
	{ -0.200939f, 0.929283f, -0.309931f },
	{ -0.566461f, -0.510753f, -0.646725f },
	{ 0.931999f, 0.362408f, 0.006161f },
	{ 0.05193f, 0.998288f, 0.026907f },
	{ -0.9272929f, 0.244792f, -0.283205f },
	{ -0.07585f, -0.9956729f, 0.053688f }
};

NJS_MODEL_SADX attach_00198D50 = { vertex_00198CC0, normal_00198D08, LengthOfArray<Sint32>(vertex_00198CC0), meshlist_00198CA8, matlist_00198C04, LengthOfArray<Uint16>(meshlist_00198CA8), LengthOfArray<Uint16>(matlist_00198C04),{ -1.028905f, 0.061498f, 4.452634f }, 8.752028f, NULL };

NJS_OBJECT object_00198D78 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00198D50, 553.611145f, -383.202118f, -2940.12744f, 0, 0, 0, 1, 1, 1, NULL, &object_00198BD0 };
//-10.27386f, -19.69711f, -29.5271f

NJS_MATERIAL matlist_00198DAC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00198DC0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00198DF0[] = {
	{ 253, 16 },
	{ 139, 17 },
	{ 141, -510 },
	{ 253, 16 },
	{ 141, -510 },
	{ 255, -456 },
	{ 139, 17 },
	{ 0, 254 },
	{ 2, -456 },
	{ 139, 17 },
	{ 2, -456 },
	{ 141, -510 },
	{ 0, 254 },
	{ 253, 16 },
	{ 255, -456 },
	{ 0, 254 },
	{ 255, -456 },
	{ 2, -456 },
	{ 253, 16 },
	{ 0, 254 },
	{ 139, 17 },
	{ 141, -510 },
	{ 2, -456 },
	{ 255, -456 }
};

NJS_MESHSET_SADX meshlist_00198E50[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00198DC0, NULL, NULL, NULL, uv_00198DF0, NULL }
};

NJS_VECTOR vertex_00198E68[] = {
	{ 1.682141f, 0.431025f, -5.087599f },
	{ 2.850959f, -0.427656f, -10.30733f },
	{ 2.066332f, -0.380522f, -4.947181f },
	{ -1.96479f, 0.6300679f, 6.153036f },
	{ -2.074549f, -0.151807f, 4.875458f },
	{ -1.211778f, -0.203635f, 5.156295f }
};

NJS_VECTOR normal_00198EB0[] = {
	{ 0.076451f, 0.994601f, -0.070176f },
	{ -0.014457f, -0.990273f, -0.138382f },
	{ 0.959418f, 0.128917f, 0.250796f },
	{ 0.565689f, 0.509076f, 0.64872f },
	{ -0.931494f, -0.363701f, -0.006415f },
	{ 0.205171f, -0.9283389f, 0.309987f }
};

NJS_MODEL_SADX attach_00198EF8 = { vertex_00198E68, normal_00198EB0, LengthOfArray<Sint32>(vertex_00198E68), meshlist_00198E50, matlist_00198DAC, LengthOfArray<Uint16>(meshlist_00198E50), LengthOfArray<Uint16>(matlist_00198DAC),{ 0.388205f, 0.101206f, -2.077145f }, 8.59079f, NULL };

NJS_OBJECT object_00198F20 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00198EF8, -7.429749f, -19.85825f, -38.28638f, 0, 0, 0, 1, 1, 1, NULL, &object_00198D78 };

NJS_MATERIAL matlist_00198F54[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00198F68[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4,
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00198F98[] = {
	{ 253, 129 },
	{ 139, 255 },
	{ 140, -508 },
	{ 253, 129 },
	{ 140, -508 },
	{ 255, -510 },
	{ 139, 255 },
	{ 0, 223 },
	{ 0, -220 },
	{ 139, 255 },
	{ 0, -220 },
	{ 140, -508 },
	{ 0, 223 },
	{ 253, 129 },
	{ 255, -510 },
	{ 0, 223 },
	{ 255, -510 },
	{ 0, -220 },
	{ 253, 129 },
	{ 0, 223 },
	{ 139, 255 },
	{ 140, -508 },
	{ 0, -220 },
	{ 255, -510 }
};

NJS_MESHSET_SADX meshlist_00198FF8[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_00198F68, NULL, NULL, NULL, uv_00198F98, NULL }
};

NJS_VECTOR vertex_00199010[] = {
	{ 2.115246f, 0.7702529f, -6.422983f },
	{ 1.462091f, 0.021021f, -6.025146f },
	{ 1.788842f, 0.001392f, -4.091639f },
	{ -2.242279f, 0.646647f, 7.008579f },
	{ -1.073461f, -0.212035f, 1.788851f },
	{ -1.858088f, -0.1649f, 7.148997f }
};

NJS_VECTOR normal_00199058[] = {
	{ -0.086656f, 0.915288f, -0.393369f },
	{ 0.06694899f, -0.984997f, -0.159057f },
	{ 0.940685f, -0.29741f, 0.163277f },
	{ -0.04205f, 0.985117f, 0.166664f },
	{ -0.956662f, -0.155284f, -0.246343f },
	{ 0.090981f, -0.991561f, 0.09235299f }
};

NJS_MODEL_SADX attach_001990A0 = { vertex_00199010, normal_00199058, LengthOfArray<Sint32>(vertex_00199010), meshlist_00198FF8, matlist_00198F54, LengthOfArray<Uint16>(meshlist_00198FF8), LengthOfArray<Uint16>(matlist_00198F54),{ -0.063517f, 0.279109f, 0.363007f }, 7.127201f, NULL };

NJS_OBJECT object_001990C8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001990A0, 560.3854f, -383.5799f, -2960.984f, 0, 0, 0, 1, 1, 1, NULL, &object_00198F20 };
//-3.499573f, -20.07489f, -50.38354f

NJS_MATERIAL matlist_001990FC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00199138[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0019915C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00199168[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_001991B0[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001991C8[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00199138, NULL, NULL, NULL, uv_00199168, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_0019915C, NULL, NULL, NULL, uv_001991B0, NULL }
};

NJS_VECTOR vertex_001991F8[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00199240[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00199288 = { vertex_001991F8, normal_00199240, LengthOfArray<Sint32>(vertex_001991F8), meshlist_001991C8, matlist_001990FC, LengthOfArray<Uint16>(meshlist_001991C8), LengthOfArray<Uint16>(matlist_001990FC),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_001992B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00199288, 578.52923f, -394.78114f, -2957.590865f, 0, 0, 0, 1, 1, 1, NULL, &object_001990C8 };
//14.64423f, -31.27612f, -46.99048f

NJS_MATERIAL matlist_001992E4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00199320[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00199344[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00199350[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00199398[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_001993B0[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00199320, NULL, NULL, NULL, uv_00199350, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00199344, NULL, NULL, NULL, uv_00199398, NULL }
};

NJS_VECTOR vertex_001993E0[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00199428[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00199470 = { vertex_001993E0, normal_00199428, LengthOfArray<Sint32>(vertex_001993E0), meshlist_001993B0, matlist_001992E4, LengthOfArray<Uint16>(meshlist_001993B0), LengthOfArray<Uint16>(matlist_001992E4),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00199498 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00199470, 571.223989f, -394.38112f, -2935.106485f, 0, 0, 0, 1, 1, 1, NULL, &object_001992B0 };
//7.338989f, -30.8761f, -24.5061f

NJS_MATERIAL matlist_001994CC[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00199508[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_0019952C[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00199538[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00199580[] = {
	{ 254, 0 },
	{ 0 },
	{ 127, 255 },
	{ 127, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00199598[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_00199508, NULL, NULL, NULL, uv_00199538, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_0019952C, NULL, NULL, NULL, uv_00199580, NULL }
};

NJS_VECTOR vertex_001995C8[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_00199610[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00199658 = { vertex_001995C8, normal_00199610, LengthOfArray<Sint32>(vertex_001995C8), meshlist_00199598, matlist_001994CC, LengthOfArray<Uint16>(meshlist_00199598), LengthOfArray<Uint16>(matlist_001994CC),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00199680 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00199658, 569.397695f, -394.28114f, -2929.486855f, 0, 0, 0, 1, 1, 1, NULL, &object_00199498 };
//5.512695f, -30.77612f, -18.88647f

NJS_MATERIAL matlist_001996B4[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_USE_FLAT },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 5, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, 4, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001996F0[] = {
	2, 0, 3,
	2, 3, 5,
	0, 1, 4,
	0, 4, 3,
	1, 2, 5,
	1, 5, 4
};

Sint16 poly_00199714[] = {
	2, 1, 0,
	3, 4, 5
};

NJS_TEX uv_00199720[] = {
	{ 0 },
	{ 0, 127 },
	{ 510, 127 },
	{ 0 },
	{ 510, 127 },
	{ 510, 0 },
	{ 0, 127 },
	{ 0, 255 },
	{ 510, 254 },
	{ 0, 127 },
	{ 510, 254 },
	{ 510, 127 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_TEX uv_00199768[] = {
	{ 255, 0 },
	{ 0 },
	{ 128, 255 },
	{ 128, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00199780[] = {
	{ NJD_MESHSET_3 | 1, 6, poly_001996F0, NULL, NULL, NULL, uv_00199720, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00199714, NULL, NULL, NULL, uv_00199768, NULL }
};

NJS_VECTOR vertex_001997B0[] = {
	{ -19.02146f, -2.914997f, -6.182477f },
	{ -18.24136f, 1.457499f, -8.583382f },
	{ -19.80157f, 1.457498f, -3.78157f },
	{ 19.01989f, -2.914997f, 6.177913f },
	{ 19.79999f, 1.457499f, 3.777009f },
	{ 18.23979f, 1.457498f, 8.578819f }
};

NJS_VECTOR normal_001997F8[] = {
	{ -0.34172f, -0.75f, -0.566328f },
	{ -0.34172f, 0.75f, -0.566328f },
	{ -0.743145f, 0, 0.669131f },
	{ 0.34172f, -0.75f, 0.566328f },
	{ 0.743145f, 0, -0.669131f },
	{ 0.34172f, 0.75f, 0.566328f }
};

NJS_MODEL_SADX attach_00199840 = { vertex_001997B0, normal_001997F8, LengthOfArray<Sint32>(vertex_001997B0), meshlist_00199780, matlist_001996B4, LengthOfArray<Uint16>(meshlist_00199780), LengthOfArray<Uint16>(matlist_001996B4),{ -0.000786f, -0.728749f, -0.002281f }, 21.58026f, NULL };

NJS_OBJECT object_00199868 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00199840, 563.918752f, -393.98112f, -2912.623578f, 0, 0, 0, 1, 1, 1, NULL, &object_00199680 };
//0.033752f, -30.4761f, -2.023193f


//array of bridge pieces for Stage Function
NJS_OBJECT TBRIDGE[] = {
	object_001999A8,  //glass shards
	object_00199A8C,
	object_00199B70,
	object_00199C54,
	object_00199D38,
	object_00199E44,
	object_00199F50,
	object_0019A05C,
	object_0019A168,
	object_0019A274,
	object_0019A380,
	object_0019A48C,
	object_0019A598,
	object_0019A7B0,
	object_0019A8BC,
	object_0019A9C8,
	object_0019AAD4,
	object_0019ABE0,
	object_0019ACEC,
	object_0019ADF8,
	object_0019AF04,
	object_0019B010,
	object_0019B0F4,
	object_0019B1D8,
	object_0019B2BC,
	object_0019B3A0,
	object_0019B484,
	object_0019B568,
	object_0019B64C,
	object_0019B730,
	object_0019B814,
	object_0019B8F8,
	object_0019B9DC,
	object_0019BAC0,
	object_0019BBA4,
	object_0019BC88,
	object_0019BD6C,
	object_0019BE50,
	object_0019BF34,
	object_0019C018,
	object_0019C0FC,
	object_0019C1E0,
	object_0019C2C4,
	object_0019C3A8,
	object_0019C48C,
	object_0019C570,
	object_0019C654,
	object_0019C738,
	object_0019C81C,
	object_0019C900,
	object_0019C9E4,
	object_0019CAC8,
	object_0019CBAC,
	object_0019CCB8,
	object_0019CD9C,
	object_0017B7F0, //properly-placed bridge pieces
	object_0017B998,
	object_0017BB80,
	object_0017BD68,
	object_0017BF50,
	object_0017C138,
	object_0017C2D0,
	object_0017C468,
	object_0017C5EC,
	object_0017C770,
	object_0017C918,
	object_0017CAC0,
	object_0017CC68,
	object_0017CE10,
	object_0017CFB8,
	object_0017D160,
	object_0017D308,
	object_0017D4B0,
	object_0017D658,
	object_0017D800,
	object_0017D9A8,
	object_0017DB50,
	object_0017DCF8,
	object_0017DEA0,
	object_0017E048,
	object_0017E1F0,
	object_0017E398,
	object_0017E540,
	object_0017E6E8,
	object_0017E8D0,
	object_0017EAB8,
	object_0017ECA0,
	object_0017EE88,
	object_0017F070,
	object_0017F278,
	object_0017F420,
	object_0017F608,
	object_0017F7F0,
	object_0017F974,
	object_0017FAF8,
	object_0017FC90,
	object_0017FE14,
	object_0017FF98,
	object_00180130,
	object_001802D8,
	object_00180480,
	object_00180628,
	object_001807D0,
	object_00180978,
	object_00180B20,
	object_00180CC8,
	object_00180E70,
	object_00181018,
	object_001811C0,
	object_00181368,
	object_00181510,
	object_001816B8,
	object_00181860,
	object_00181A08,
	object_00181BB0,
	object_00181D58,
	object_00181F00,
	object_001820A8,
	object_00182250,
	object_001823F8,
	object_001825A0,
	object_00182748,
	object_001828F0,
	object_00182A98,
	object_00182C40,
	object_00182DE8,
	object_00182FD0,
	object_001831B8,
	object_001833A0,
	object_00183588,
	object_00183770,
	object_00183958,
	object_00183B40,
	object_00183D74,
	object_00183F48,
	object_0018411C,
	object_001842F0,
	object_001844C4,
	object_00184698,
	object_0018486C,
	object_00184A40,
	object_00184C14,
	object_00184DE8,
	object_00184FBC,
	object_00185190,
	object_00185364,
	object_00185538,
	object_0018570C,
	object_001858E0,
	object_00185A88,
	object_00185C30,
	object_00185DD8,
	object_00185F80,
	object_00186128,
	object_001862D0,
	object_00186478,
	object_00186620,
	object_001867C8,
	object_00186970,
	object_00186B18,
	object_00186CC0,
	object_00186E68,
	object_00187010,
	object_001871B8,
	object_00187360,
	object_00187508,
	object_001876B0,
	object_00187858,
	object_00187A00,
	object_00187BA8,
	object_00187D50,
	object_00187EF8,
	object_001880A0,
	object_00188248,
	object_001883F0,
	object_00188598,
	object_00188740,
	object_001888E8,
	object_00188A90,
	object_00188C38,
	object_00188DE0,
	object_00188F88,
	object_00189130,
	object_001892D8,
	object_00189480,
	object_00189628,
	object_001897D0,
	object_00189978,
	object_00189B20,
	object_00189CC8,
	object_00189E70,
	object_0018A018,
	object_0018A1C0,
	object_0018A368,
	object_0018A510,
	object_0018A6B8,
	object_0018A860,
	object_0018AA08,
	object_0018AB8C,
	object_0018AD10,
	object_0018AE94,
	object_0018B02C,
	object_0018B1B0,
	object_0018B334,
	object_0018B4B8,
	object_0018B650,
	object_0018B7D4,
	object_0018B96C,
	object_0018BB04,
	object_0018BC88,
	object_0018BE20,
	object_0018BFB8,
	object_0018C150,
	object_0018C2E8,
	object_0018C46C,
	object_0018C640,
	object_0018C814,
	object_0018C9E8,
	object_0018CC34,
	object_0018CD90,
	object_0018CFDC,
	object_0018D1B0,
	object_0018D3FC,
	object_0018D5D0,
	object_0018D7A4,
	object_0018D978,
	object_0018DB4C,
	object_0018DD20,
	object_0018DEF4,
	object_0018E140,
	object_0018E314,
	object_0018E560,
	object_0018E734,
	object_0018E908,
	object_0018EA8C,
	object_0018EC10,
	object_0018EDA8,
	object_0018EF40,
	object_0018F0E8,
	object_0018F290,
	object_0018F438,
	object_0018F5E0,
	object_0018F788,
	object_0018F930,
	object_0018FAD8,
	object_0018FC80,
	object_0018FE28,
	object_0018FFFC,
	object_001901D0,
	object_001903A4,
	object_00190578,
	object_0019074C,
	object_00190994,  //Misplaced bridge pieces
	object_00190B7C,
	object_00190D64,
	object_00190F4C,
	object_001911AC,
	object_0019131C,
	object_001914B4,
	object_0019164C,
	object_001917E4,
	object_00191968,
	object_00191AEC,
	object_00191C70,
	object_00191E18,
	object_00191FC0,
	object_00192168,
	object_00192310,
	object_001924B8,
	object_00192660,
	object_00192808,
	object_001929B0,
	object_00192B58,
	object_00192D00,
	object_00192EA8,
	object_00193050,
	object_001931F8,
	object_001933A0,
	object_00193548,
	object_001936F0,
	object_00193898,
	object_00193A40,
	object_00193BE8,
	object_00193D90,
	object_00193F38,
	object_001940E0,
	object_00194288,
	object_00194430,
	object_00194618,
	object_00194800,
	object_001949E8,
	object_00194BD0,
	object_00194DB8,
	object_00194FA0,
	object_00195188,
	object_001953A4,
	object_00195604,
	object_001957EC,
	object_001959D4,
	object_00195BBC,
	object_00195DA4,
	object_00195F8C,
	object_00196148,
	object_0019637C,
	object_00196538,
	object_001966F4,
	object_001968BC,
	object_00196A84,
	object_00196C6C,
	object_00196E54,
	object_00196FEC,
	object_00197184,
	object_00197308,
	object_001974A0,
	object_00197648,
	object_001977F0,
	object_00197998,
	object_00197B40,
	object_00197CE8,
	object_00197E90,
	object_00198038,
	object_001981E0,
	object_00198388,
	object_00198530,
	object_001986D8,
	object_00198880,
	object_00198A28,
	object_00198BD0,
	object_00198D78,
	object_00198F20,
	object_001990C8,
	object_001992B0,
	object_00199498,
	object_00199680,
	object_00199868
};

/*
Conversion for first (lower) set of bridge pieces:

new		old

545.7326	-18.1524		=	+563.885	<------ Translate by this much for each piece.

-382.7483	-19.24328		=	-363.50502	<------ Translate by this much for each piece.

-2915.856	-5.255615		=	-2910.600385	<------ Translate by this much for each piece.
*/

/*
Conversion for second (higher) set of bridge pieces:

new		old

590.2643	-4.715698	=	594.979998

-385.9861	9.036072	=	-394.222172

-3052.924	-41.03369	=	-3011.89031
*/