#include <unico.h>

void copy_unicos_utf16_manually (unicos_utf16 *uni, unicos_utf16 *uniout){
	copy_unicos_manually((unicos*)uni, (unicos*)uniout);
	uniout->endian = uni->endian;
	uniout->count = uni->count;
	uniout->value1 = uni->value1;
	uniout->value2 = uni->value2;
}
