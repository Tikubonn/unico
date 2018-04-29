#include <unico.h>
#include <stddef.h>

void init_unicos (unico *sequence, size_t size, unicos *uni){
	uni->address = sequence;
	uni->address_beginning = sequence;
	uni->address_end = sequence + size;
}
