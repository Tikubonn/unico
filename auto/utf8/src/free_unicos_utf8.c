#include <unico.h>
#include <stdlib.h>

void free_unicos_utf8 (unicos_utf8 *uni){
	free_unicos((unicos*)uni);
}
