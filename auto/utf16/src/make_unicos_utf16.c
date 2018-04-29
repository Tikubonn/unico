#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

unicos_utf16 *make_unicos_utf16 (size_t size, int endian){
	unico *sequence = malloc(size * sizeof(unico));
	unicos_utf16 *uni = malloc(sizeof(unicos_utf16));
	init_unicos_utf16(sequence, size, endian, uni);
	return uni;
}
