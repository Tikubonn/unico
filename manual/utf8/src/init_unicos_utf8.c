#include <unico.h>
#include <stddef.h>

void init_unicos_utf8 (unico *sequence, size_t size, unicos_utf8 *uni){
	init_unicos(sequence, size, (unicos*)uni);
	uni->bom = 0;
	uni->count = 0;
	uni->value = 0;
}
