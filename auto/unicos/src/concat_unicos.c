#include <unico.h>
#include <stddef.h>

unicos *concat_unicos (unicos *unia, unicos *unib){
	size_t sizea = size_unicos(unia);
	size_t sizeb = size_unicos(unib);
	unicos *uniout = make_unicos(sizea + sizeb);
	concat_unicos_manually(unia, unib, uniout);
	return uniout;
}
