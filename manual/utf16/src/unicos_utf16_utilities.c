#include <unico.h>

int is_high_surrogate_utf16 (unico uni){
	return 0xd800 <= uni && uni <= 0xdf00;
}

int is_low_surrogate_utf16 (unico uni){
	return 0xdc00 <= uni && uni <= 0xdfff; 
}

int is_bom_little_endian_utf16 (unico uni){
	return 0xfffe == uni;
}

int is_bom_big_endian_utf16 (unico uni){
	return 0xfeff == uni;
}

unico decode_surrogate_utf16 (unico numh, unico numl){
	unico numa = (numh - 0xd800) * 0x400;
	unico numb = (numl - 0xdc00);
	unico numc = numa + numb + 0x10000;
	return numc;
}
