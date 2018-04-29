#include <unico.h>

extern void reset_unicos_utf16 (unicos_utf16 *uni){
	uni->count = 0;
	uni->value1 = 0;
	uni->value2 = 0;
}
