#include <unico.h>

int is_empty_unicos (unicos *uni){
	size_t size = size_unicos(uni);
	return size == 0;
}
