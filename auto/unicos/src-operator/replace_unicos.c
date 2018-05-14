#include <unico.h>
#include <stddef.h>

unicos *replace_unicos (unicos *unia, unicos *unib, unicos *unic){
	size_t size = replace_size_unicos(unia, unib, unic);
	unicos *uniout = make_unicos(size);
	if (uniout == NULL) return NULL;
	replace_unicos_manually(unia, unib, unic, uniout);
	return uniout;
}
