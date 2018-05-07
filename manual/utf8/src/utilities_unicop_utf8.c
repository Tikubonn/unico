#include <unico.h>

int size_of_char_unicop_utf8 (unsigned char character){
	if (character >> 7 == 0b0) return 1;
	if (character >> 5 == 0b110) return 2;
	if (character >> 4 == 0b1110) return 3;
	if (character >> 3 == 0b11110) return 4;
	if (character >> 2 == 0b111110) return 5;
	if (character >> 1 == 0b1111110) return 6;
	return -1;
}

int value_of_char_unicop_utf8 (unsigned char character){
	if (character >> 7 == 0b0) return character & 0b01111111;
	if (character >> 6 == 0b10) return character & 0b00111111;
	if (character >> 5 == 0b110) return character & 0b00011111;
	if (character >> 4 == 0b1110) return character & 0b00001111;
	if (character >> 3 == 0b11110) return character & 0b00000111;
	if (character >> 2 == 0b111110) return character & 0b00000011;
	if (character >> 1 == 0b1111110) return character & 0b00000001;
	return -1;
}

int width_of_char_unicop_utf8 (unsigned char character){
	if (character >> 7 == 0b0) return 7;
	if (character >> 6 == 0b10) return 6;
	if (character >> 5 == 0b110) return 5;
	if (character >> 4 == 0b1110) return 4;
	if (character >> 3 == 0b11110) return 3;
	if (character >> 2 == 0b111110) return 2;
	if (character >> 1 == 0b1111110) return 1;
	return -1;
}

int size_of_unicode_unicop_utf8 (unico code){
	if (0x0000 <= code && code <= 0x007f) return 1;
	if (0x0080 <= code && code <= 0x07ff) return 2;
	if (0x0800 <= code && code <= 0xffff) return 3;
	if (0x10000 <= code && code <= 0x1fffff) return 4;
	if (0x200000 <= code && code <= 0x3ffffff) return 5;
	if (0x4000000 <= code && code <= 0x7fffffff) return 6;
	return -1;
}

int is_bom_unicode_unicop_utf8 (unico code){
	return code == 0xfeff;
}

int is_continuation_char_unicop_utf8 (unsigned char character){
	if (character >> 6 == 0b10) return 1;
	return 0;
}
