#include <unico.h>

int put_bom_unicob_as_utf8_manually (unicob *uniout){
	unsigned char data[] = { 0xef, 0xbb, 0xbf };
	return write_unicob_manually(data, sizeof(data), uniout);
}
