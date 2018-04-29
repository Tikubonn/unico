#include <unico.h>

// 0xef 0xbb 0xbf

int size_of_unicode (unico uni){
	if (0x0000 <= uni && uni <= 0x007f) return 0;
	if (0x0080 <= uni && uni <= 0x07ff) return 1;
	if (0x0800 <= uni && uni <= 0xffff) return 2;
	if (0x10000 <= uni && uni <= 0x1fffff) return 3;
	if (0x200000 <= uni && uni <= 0x3ffffff) return 4;
	if (0x4000000 <= uni && uni <= 0x7fffffff) return 5;
	return -1;
}

int size_of_utf8 (unsigned char character){
	if (character >> 7 == 0) return 0;
	if (character >> 5 == 0b110) return 1;
	if (character >> 4 == 0b1110) return 2;
	if (character >> 3 == 0b11110) return 3;
	if (character >> 2 == 0b111110) return 4;
	if (character >> 1 == 0b1111110) return 5;
	return -1;
}

int width_of_utf8 (unsigned char character){
	if (character >> 7 == 0) return 7;
	if (character >> 6 == 0b10) return 6;
	if (character >> 5 == 0b110) return 5;
	if (character >> 4 == 0b1110) return 4;
	if (character >> 3 == 0b11110) return 3;
	if (character >> 2 == 0b111110) return 2;
	if (character >> 1 == 0b1111110) return 1;
}

int value_of_utf8 (unsigned char character){
	if (character >> 7 == 0) return character & 0b01111111;
	if (character >> 6 == 0b10) return character & 0b00111111;
	if (character >> 5 == 0b110) return character & 0b00011111;
	if (character >> 4 == 0b1110) return character & 0b00001111;
	if (character >> 3 == 0b11110) return character & 0b00000111;
	if (character >> 2 == 0b111110) return character & 0b00000011;
	if (character >> 1 == 0b1111110) return character & 0b00000001;
}

int is_concatenated_utf8 (unsigned char character){
	return character >> 6 == 0b10;
}
