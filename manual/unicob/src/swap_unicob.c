#include <unico.h>
#include <stddef.h>

void swap_unicob (unsigned char *sequence, size_t size, unicob *uniout){
	size_t si = size_unicob(uniout);
	uniout->address = sequence + si;
	uniout->address_beginning = sequence;
	uniout->address_end = sequence + size;
}
