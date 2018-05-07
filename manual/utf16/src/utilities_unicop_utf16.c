#include <unico.h>

int is_high_surrogate_unicop_utf16 (unico code){
	return 0xd800 <= code && code <= 0xdf00;
}

int is_low_surrogate_unicop_utf16 (unico code){
	return 0xdc00 <= code && code <= 0xdfff; 
}

int is_bom_little_endian_unicop_utf16 (unico code){
	return 0xfffe == code;
}

int is_bom_big_endian_unicop_utf16 (unico code){
	return 0xfeff == code;
}

unico decode_surrogate_unicop_utf16 (unico code1, unico code2){
	unico numa = (code1 - 0xd800) * 0x400;
	unico numb = (code2 - 0xdc00);
	unico numc = numa + numb + 0x10000;
	return numc;
}

void encode_surrogate_unicop_utf16 (unico code, unico *code1out, unico *code2out){
	unico code1 = code / 0x400 + 0xd800; // 0xd800 ~ 0xd8ff
	unico code2 = code % 0x400 + 0xdc00; // 0xdc00 ~ 0xdfff
	*code1out = code1;
	*code2out = code2;
}
