#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

unicos *make_unicos (size_t size){
	unico *sequence = malloc(size * sizeof(unico));
	unicos *uni = malloc(sizeof(unicos));
	init_unicos(sequence, size, uni);
	return uni;
}
