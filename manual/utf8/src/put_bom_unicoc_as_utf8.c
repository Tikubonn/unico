#include <unico.h>

int put_bom_unicoc_as_utf8 (unicoc *uniout){
	unsigned char data[] = { 0xef, 0xbb, 0xbf };
	return write_unicoc_manually(data, sizeof data, uniout);
}
