#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

unicos_utf8 *copy_unicos_utf8 (unicos_utf8 *uni){
	size_t size = size_unicos((unicos*)uni);
	unicos_utf8 *unia = make_unicos_utf8(size);
	copy_unicos_utf8_manually(uni, unia);
	return unia;
}
