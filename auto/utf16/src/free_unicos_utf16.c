#include <unico.h>
#include <stdlib.h>

void free_unicos_utf16 (unicos_utf16 *uni){
	free_unicos((unicos*)uni);
}
