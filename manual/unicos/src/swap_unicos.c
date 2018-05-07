#include <unico.h>
#include <stddef.h>

void swap_unicos (unico *sequence, size_t size, unicos *uniout){
	size_t si = size_unicos(uniout);
	uniout->address = sequence + si;
	uniout->address_beginning = sequence;
	uniout->address_end = sequence + size;
}
