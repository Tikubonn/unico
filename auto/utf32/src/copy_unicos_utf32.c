#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

unicos_utf32 *copy_unicos_utf32 (unicos_utf32 *uni){
	size_t size = size_unicos((unicos*)uni);
	unicos_utf32 *unia = make_unicos_utf32(size, 0);
	copy_unicos_utf32_manually(uni, unia);
	return unia;
}
