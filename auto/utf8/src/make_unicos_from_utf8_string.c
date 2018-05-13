#include <unico.h>
#include <stddef.h>

unicos *make_unicos_from_utf8_string (unsigned char *sequence){
	size_t size = size_load_unicos_from_utf8_string(sequence);
	unicos *uniout = make_unicos(size);
	if (uniout == NULL) return NULL;
	load_unicos_from_utf8_string(sequence, uniout);
	return uniout;
}
