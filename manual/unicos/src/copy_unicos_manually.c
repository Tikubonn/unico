#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

int copy_unicos_manually (unicos *uni, unicos *uniout){
	size_t size = size_unicos(uni);
	return inserts_unicos_manually(uni->address_beginning, size, -1, uniout);
}
