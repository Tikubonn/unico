#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

void copy_unicob_manually (unicob *uni, unicob *uniout){
	clear_unicob(uniout);
	size_t sizea = size_unicob(uni);
	size_t sizeb = real_size_unicob(uniout);
	size_t size = min(sizea, sizeb);
	write_unicob_manually(uni->address_beginning, size, uniout);
}
