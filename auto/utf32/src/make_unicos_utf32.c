#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

unicos_utf32 *make_unicos_utf32 (size_t size, int endian){
	unico *sequence = malloc(size * sizeof(unico));
	unicos_utf32 *uni = malloc(sizeof(unicos_utf32));
	init_unicos_utf32(sequence, size, endian, uni);
	return uni;
}
