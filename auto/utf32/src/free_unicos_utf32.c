#include <unico.h>
#include <stdlib.h>

void free_unicos_utf32 (unicos_utf32 *uni){
	free_unicos((unicos*)uni);
}
