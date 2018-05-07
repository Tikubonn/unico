#include <unico.h>

int put_unicob_as_utf8_manually (unico code, unicob *uniout){
	int size = size_of_unicode_unicop_utf8(code);
	switch (size){
		case 1: {
			unsigned char data[] = { 
				((code >> 0) & 0x7f) | 0x00,
			};
			return write_unicob_manually(data, sizeof(data), uniout);
		}
		case 2: {
			unsigned char data[] = { 
				((code >> 6) & 0x1f) | 0xc0,
				((code >> 0) & 0x3f) | 0x80,
			};
			return write_unicob_manually(data, sizeof(data), uniout); 
		}
		case 3: {
			unsigned char data[] = { 
				((code >> 12) & 0x0f) | 0xe0,
				((code >>  6) & 0x3f) | 0x80,
				((code >>  0) & 0x3f) | 0x80,
			};
			return write_unicob_manually(data, sizeof(data), uniout);
		}
		case 4: {
			unsigned char data[] = {
				((code >> 18) & 0x07) | 0xf0,
				((code >> 12) & 0x3f) | 0x80,
				((code >>  6) & 0x3f) | 0x80,
				((code >>  0) & 0x3f) | 0x80,
			};
			return write_unicob_manually(data, sizeof(data), uniout);
		}
		case 5: {
			unsigned char data[] = {
				((code >> 24) & 0x03) | 0xf8,
				((code >> 18) & 0x3f) | 0x80,
				((code >> 12) & 0x3f) | 0x80,
				((code >>  6) & 0x3f) | 0x80,
				((code >>  0) & 0x3f) | 0x80,
			};
			return write_unicob_manually(data, sizeof(data), uniout);
		}
		case 6: {
			unsigned char data[] = {
				((code >> 30) & 0x01) | 0xfc,
				((code >> 24) & 0x3f) | 0x80,
				((code >> 18) & 0x3f) | 0x80,
				((code >> 12) & 0x3f) | 0x80,
				((code >>  6) & 0x3f) | 0x80,
				((code >>  0) & 0x3f) | 0x80, 
			};
			return write_unicob_manually(data, sizeof(data), uniout);
		}
		default:
			return 2;
	}
}
