#include <unico.h>
#include <stddef.h>

void init_unicoc (unsigned char *sequence, size_t size, unicoc *uni){
	uni->address = sequence;
	uni->address_beginning = sequence;
	uni->address_end = sequence + size;
}
