#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

unicos_utf16 *copy_unicos_utf16 (unicos_utf16 *uni){
	size_t size = size_unicos((unicos*)uni);
	unicos_utf16 *unia = make_unicos_utf16(size, 0);
	copy_unicos_utf16_manually(uni, unia);
	return unia;
}
