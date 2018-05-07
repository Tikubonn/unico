#include <unico.h>

unicos *copy_unicos (unicos *uni){
	size_t size = size_unicos(uni);
	unicos *uniout = make_unicos(size);
	if (uniout == NULL)
		return NULL;
	copy_unicos_manually(uni, uniout);
	return uniout;
}
