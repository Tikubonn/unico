#include <unico.h>

int is_unequal_unicos (unicos *unia, unicos *unib){
	return !is_equal_unicos(unia, unib);
}
