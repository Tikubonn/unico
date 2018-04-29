#include <unico.h>
#include <stddef.h>

unicos *copy_unicos (unicos *uni){
	size_t size = size_unicos(uni);
	unicos *unia = make_unicos(size);
	copy_unicos_manually(uni, unia);
	return unia;
}
