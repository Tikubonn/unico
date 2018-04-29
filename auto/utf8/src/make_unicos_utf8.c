#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

unicos_utf8 *make_unicos_utf8 (size_t size){
	unico *sequence = malloc(size * sizeof(unico));
	unicos_utf8 *uni = malloc(sizeof(unicos_utf8));
	init_unicos_utf8(sequence, size, uni);
	return uni;
}
