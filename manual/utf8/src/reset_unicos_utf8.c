#include <unico.h>

void reset_unicos_utf8 (unicos_utf8 *uni){
	uni->bom = 0;
	uni->count = 0;
	uni->value = 0;
}
