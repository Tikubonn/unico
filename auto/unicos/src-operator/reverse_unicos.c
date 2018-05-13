#include <unico.h>
#include <stddef.h>

unicos *reverse_unicos (unicos *uni){
	size_t size = size_unicos(uni);
	unicos *uniout = make_unicos(size);
	if (uniout == NULL) return NULL;
	reverse_unicos_manually(uni, uniout);
	return uniout;
}
