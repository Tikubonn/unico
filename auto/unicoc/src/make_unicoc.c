#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

unicoc *make_unicoc (size_t size){
	unsigned char *sequence = malloc(size * sizeof(char));
	unicoc *uni = malloc(sizeof(unicoc));
	init_unicoc(sequence, size, uni);
	return uni;
}
