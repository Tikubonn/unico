#include <unico.h>

void copy_unicos_utf32_manually (unicos_utf32 *uni, unicos_utf32 *uniout){
	copy_unicos_manually((unicos*)uni, (unicos*)uniout);
	uniout->endian = uni->endian;
	uniout->count = uni->count;
	uniout->value = uni->value;
}
