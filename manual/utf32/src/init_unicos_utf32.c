#include <unico.h>

extern void init_unicos_utf32 (unico *sequence, size_t size, int endian, unicos_utf32 *uni){
	init_unicos(sequence, size, (unicos*)uni);
	uni->endian = endian;
	uni->count = 0;
	uni->value = 0;
}
