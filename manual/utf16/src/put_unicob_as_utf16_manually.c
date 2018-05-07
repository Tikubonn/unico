#include <unico.h>

int put_unicob_as_utf16be_manually (unico code, unicob *uniout){
	if (0x0000 <= code && code <= 0xffff){
		unsigned char data[] = {
			(code >> 8) & 0xff,
			(code >> 0) & 0xff,
		};
		return write_unicob_manually(data, sizeof(data) / sizeof(char), uniout);
	}
	else {
		unico code1;
		unico code2;
		encode_surrogate_unicop_utf16(code, &code1, &code2);
		unsigned char data[] = {
			(code1 >> 8) & 0xff,
			(code1 >> 0) & 0xff,
			(code2 >> 8) & 0xff,
			(code2 >> 0) & 0xff, 
		};
		return write_unicob_manually(data, sizeof(data) / sizeof(char), uniout);
	}
}

int put_unicob_as_utf16le_manually (unico code, unicob *uniout){
	if (0x0000 <= code && code <= 0xffff){
		unsigned char data[] = {
			(code >> 0) & 0xff,
			(code >> 8) & 0xff,
		};
		return write_unicob_manually(data, sizeof(data) / sizeof(char), uniout);
	}
	else {
		unico code1;
		unico code2;
		encode_surrogate_unicop_utf16(code, &code1, &code2);
		unsigned char data[] = {
			(code1 >> 0) & 0xff,
			(code1 >> 8) & 0xff,
			(code2 >> 0) & 0xff ,
			(code2 >> 8) & 0xff,
		};
		return write_unicob_manually(data, sizeof(data) / sizeof(char), uniout);
	}
}
