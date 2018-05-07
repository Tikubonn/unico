#include <unico.h>

int is_base_unico (unico code){
	return !is_combining_unico(code);
}
