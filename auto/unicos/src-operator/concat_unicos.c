#include <unico.h>
#include <stddef.h>

unicos *concat_unicos (unicos *unia, unicos *unib){
	size_t size = size_concat_unicos(unia, unib);
	unicos *uniout = make_unicos(size);
	if (uniout == NULL) return NULL;
	concat_unicos_manually(unia, unib, uniout);
	return uniout;
}
