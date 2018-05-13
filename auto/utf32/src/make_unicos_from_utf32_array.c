#include <unico.h>
#include <stddef.h>

unicos *make_unicos_from_utf32_array (unsigned char *sequence, size_t size){
	unicos *uniout = make_unicos(size);
	if (uniout == NULL) return NULL;
	load_unicos_from_utf32_array(sequence, size, uniout);
	return uniout;
}
