#include <unico.h>

void clear_unicos_utf8 (unicos_utf8 *uni){
	clear_unicos((unicos*)uni);
	reset_unicos_utf8(uni);
}
