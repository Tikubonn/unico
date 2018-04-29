#include <unico.h>

void copy_unicos_utf8_manually (unicos_utf8 *uni, unicos_utf8 *uniout){
	copy_unicos_manually((unicos*)uni, (unicos*)uniout);
	uniout->value = uni->value;
	uniout->count = uni->count;
}
