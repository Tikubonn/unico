#include <unico.h>

int put_bom_unicob_as_utf16be_manually (unicob *uniout){
	unsigned char data[] = { 0xfe, 0xff };
	return write_unicob_manually(data, sizeof(data), uniout);
}

int put_bom_unicob_as_utf16le_manually (unicob *uniout){
	unsigned char data[] = { 0xff, 0xfe };
	return write_unicob_manually(data, sizeof(data), uniout);
}
