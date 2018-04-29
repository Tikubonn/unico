#include <unico.h>

int put_bom_unicoc_as_utf16be (unicoc *uniout){
	unsigned char data[] = { 0xfe, 0xff };
	return write_unicoc_manually(data, sizeof data, uniout);
}

int put_bom_unicoc_as_utf16le (unicoc *uniout){
	unsigned char data[] = { 0xff, 0xfe };
	return write_unicoc_manually(data, sizeof data, uniout);
}
