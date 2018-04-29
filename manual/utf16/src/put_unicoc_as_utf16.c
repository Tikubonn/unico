#include <unico.h>

int put_unicoc_as_utf16be (unico uni, unicoc *uniout){
	if (0x0000 <= uni && uni <= 0xffff){
		unsigned char data[] = {
			(uni >> 8) & 0xff,
			(uni >> 0) & 0xff 
		};
		return write_unicoc_manually(data, sizeof data, uniout);
	}
	else {
		unico numa = uni / 0x400 + 0xd800; // 0xd800 ~ 0xd8ff
		unico numb = uni % 0x400 + 0xdc00; // 0xdc00 ~ 0xdfff
		unsigned char data[] = {
			(numa >> 8) & 0xff,
			(numa >> 0) & 0xff,
			(numb >> 8) & 0xff,
			(numb >> 0) & 0xff 
		};
		return write_unicoc_manually(data, sizeof data, uniout);
	}
}

int put_unicoc_as_utf16le (unico uni, unicoc *uniout){
	if (0x0000 <= uni && uni <= 0xffff){
		unsigned char data[] = {
			(uni >> 0) & 0xff,
			(uni >> 8) & 0xff 
		};
		return write_unicoc_manually(data, sizeof data, uniout);
	}
	else {
		unico numa = uni / 0x400 + 0xd800; // 0xd800 ~ 0xd8ff
		unico numb = uni % 0x400 + 0xdc00; // 0xdc00 ~ 0xdfff
		unsigned char data[] = {
			(numa >> 0) & 0xff,
			(numa >> 8) & 0xff,
			(numb >> 0) & 0xff,
			(numb >> 8) & 0xff 
		};
		return write_unicoc_manually(data, sizeof data, uniout);
	}
}
