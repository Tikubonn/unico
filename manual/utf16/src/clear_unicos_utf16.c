#include <unico.h>

void clear_unicos_utf16 (unicos_utf16 *uni){
	clear_unicos((unicos*)uni);
	reset_unicos_utf16(uni);
}
