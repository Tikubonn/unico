#include <unico.h>

void init_unicop_utf16 (unicos *uni, int endian, unicop_utf16 *uniout){
	uniout->unicos = uni;
	uniout->code1 = 0;
	uniout->code2 = 0;
	uniout->endian = endian;
	uniout->count = 0;
}
