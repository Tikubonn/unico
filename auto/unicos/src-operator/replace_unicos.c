#include <unico.h>
#include <stddef.h>

static size_t replace_unicos_size (unicos *unia, unicos *unib, unicos *unic){
	size_t sizea = size_unicos(unia);
	size_t sizeb = size_unicos(unib);
	size_t sizec = size_unicos(unic);
	return sizec + (sizeb < sizea ? sizeb - sizea : 0);
}

unicos *replace_unicos (unicos *unia, unicos *unib, unicos *unic){
	size_t size = replace_unicos_size(unia, unib, unic);
	unicos *uniout = make_unicos(size);
	if (uniout == NULL) return NULL;
	replace_unicos_manually(unia, unib, unic, uniout);
	return uniout;
}
