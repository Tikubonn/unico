#include <unico.h>
#include <stdio.h>
#include "unicos_utf8_utilities.h"

int put_unicoc_as_utf8 (unico uni, unicoc *uniout){
	int size = size_of_unicode(uni);
	switch (size){
		case 0: {
			unsigned char data[] = { 
				(uni >> 0) & 0x7f | 0x00, // 0b0xxxxxxxx
			};
			return write_unicoc_manually(data, sizeof data, uniout);
		}
		case 1: {
			unsigned char data[] = { 
				(uni >> 6) & 0x1f | 0xc0, // 0b110xxxxx
				(uni >> 0) & 0x3f | 0x80, // 0b10xxxxxx
			};
			return write_unicoc_manually(data, sizeof data, uniout); 
		}
		case 2: {
			unsigned char data[] = { 
				(uni >> 12) & 0x0f | 0xe0, // 0b1110xxxx
				(uni >>  6) & 0x3f | 0x80, // 0b10xxxxxx
				(uni >>  0) & 0x3f | 0x80, // 0b10xxxxxx
			};
			return write_unicoc_manually(data, sizeof data, uniout);
		}
		case 3: {
			unsigned char data[] = {
				(uni >> 18) & 0x07 | 0xf0, // 0b11110xxx
				(uni >> 12) & 0x3f | 0x80, // 0b10xxxxxx
				(uni >>  6) & 0x3f | 0x80, // 0b10xxxxxx
				(uni >>  0) & 0x3f | 0x80, // 0b10xxxxxx
			};
			return write_unicoc_manually(data, sizeof data, uniout);
		}
		case 4: {
			unsigned char data[] = {
				(uni >> 24) & 0x03 | 0xf8, // 0b111110xx
				(uni >> 18) & 0x3f | 0x80, // 0b10xxxxxx
				(uni >> 12) & 0x3f | 0x80, // 0b10xxxxxx
				(uni >>  6) & 0x3f | 0x80, // 0b10xxxxxx
				(uni >>  0) & 0x3f | 0x80, // 0b10xxxxxx
			};
			return write_unicoc_manually(data, sizeof data, uniout);
		}
		case 5: {
			unsigned char data[] = {
				(uni >> 30) & 0x01 | 0xfc, // 0b1111110x
				(uni >> 24) & 0x3f | 0x80, // 0b10xxxxxx
				(uni >> 18) & 0x3f | 0x80, // 0b10xxxxxx
				(uni >> 12) & 0x3f | 0x80, // 0b10xxxxxx
				(uni >>  6) & 0x3f | 0x80, // 0b10xxxxxx
				(uni >>  0) & 0x3f | 0x80, // 0b10xxxxxx
			};
			return write_unicoc_manually(data, sizeof data, uniout);
		}
		default:
			return UNICOS_UTF8_SYNTAX_ERROR;
	}
}

/* int put_unicoc_as_utf8 (unico uni, unicoc *uniout){
	int size = size_of_unicode(uni);
	switch (size){
		case 0: 
			put_unicoc_manually(uni & 0b01111111, uniout);
			return 0;
		case 1:
			put_unicoc_manually((uni >> 6) & 0b00011111 | 0b11000000, uniout);
			put_unicoc_manually((uni >> 0) & 0b00111111 | 0b10000000, uniout);
			return 0;
		case 2:
			put_unicoc_manually((uni >> 12) & 0b00001111 | 0b11100000, uniout);
			put_unicoc_manually((uni >> 6) & 0b00111111 | 0b10000000, uniout);
			put_unicoc_manually((uni >> 0) & 0b00111111 | 0b10000000, uniout);
			return 0;
		case 3:
			put_unicoc_manually((uni >> 18) & 0b00000111 | 0b11110000, uniout);
			put_unicoc_manually((uni >> 12) & 0b00111111 | 0b10000000, uniout);
			put_unicoc_manually((uni >> 6) & 0b00111111 | 0b10000000, uniout);
			put_unicoc_manually((uni >> 0) & 0b00111111 | 0b10000000, uniout);
			return 0;
		case 4:
			put_unicoc_manually((uni >> 24) & 0b00000011 | 0b11111000, uniout);
			put_unicoc_manually((uni >> 18) & 0b00111111 | 0b10000000, uniout);
			put_unicoc_manually((uni >> 12) & 0b00111111 | 0b10000000, uniout);
			put_unicoc_manually((uni >> 6) & 0b00111111 | 0b10000000, uniout);
			put_unicoc_manually((uni >> 0) & 0b00111111 | 0b10000000, uniout);
			return 0;
		case 5:
			put_unicoc_manually((uni >> 30) & 0b00000001 | 0b11111100, uniout);
			put_unicoc_manually((uni >> 24) & 0b00111111 | 0b10000000, uniout);
			put_unicoc_manually((uni >> 18) & 0b00111111 | 0b10000000, uniout);
			put_unicoc_manually((uni >> 12) & 0b00111111 | 0b10000000, uniout);
			put_unicoc_manually((uni >> 6) & 0b00111111 | 0b10000000, uniout);
			put_unicoc_manually((uni >> 0) & 0b00111111 | 0b10000000, uniout);
			return 0;
		default: 
			return UNICOS_UTF8_SYNTAX_ERROR;
	}
} */
