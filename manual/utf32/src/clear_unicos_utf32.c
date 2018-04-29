#include <unico.h>

void clear_unicos_utf32 (unicos_utf32 *uni){
	clear_unicos((unicos*)uni);
	reset_unicos_utf32(uni);
}
