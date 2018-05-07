#include <unico.h>

int is_contain_unicos (unicos *unia, unicos *unib){
	size_t indexout;
	return position_unicos(unia, unib, &indexout);
}
