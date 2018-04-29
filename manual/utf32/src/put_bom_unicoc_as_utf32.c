#include <unico.h>

int put_bom_unicoc_as_utf32be (unicoc *uniout){
	unsigned char data[] = { 0x00, 0x00, 0xfe, 0xff };
	return write_unicoc_manually(data, sizeof data, uniout);
}

int put_bom_unicoc_as_utf32le (unicoc *uniout){
	unsigned char data[] = { 0xff, 0xfe, 0x00, 0x00 };
	return write_unicoc_manually(data, sizeof data, uniout);
}
