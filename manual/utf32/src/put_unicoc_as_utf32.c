#include <unico.h>

int put_unicoc_as_utf32be (unico uni, unicoc *uniout){
	unsigned char data[] = {
		(uni >>  0) & 0xff,
		(uni >>  8) & 0xff,
		(uni >> 16) & 0xff,
		(uni >> 24) & 0xff 
	};
	return write_unicoc_manually(data, sizeof data, uniout);
}

int put_unicoc_as_utf32le (unico uni, unicoc *uniout){
	unsigned char data[] = {  
		(uni >> 24) & 0xff,
		(uni >> 16) & 0xff,
		(uni >>  8) & 0xff,
		(uni >>  0) & 0xff 
	};
	return write_unicoc_manually(data, sizeof data, uniout);
}
