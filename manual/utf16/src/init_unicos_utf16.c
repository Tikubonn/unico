#include <unico.h>
#include <stddef.h>

void init_unicos_utf16 (unico *sequence, size_t size, int endian, unicos_utf16 *unis){
	init_unicos(sequence, size, (unicos*)unis);
	unis->endian = endian;
	unis->count = 0;
	unis->value1 = 0;
	unis->value2 = 0;
}
