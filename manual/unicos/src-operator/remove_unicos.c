#include <unico.h>
#include <stddef.h>

void remove_unicos (unicos *uni, unicos *uniout){
	size_t index;
	int status = position_unicos(uni, uniout, &index);
	if (status){
		size_t size = size_unicos(uni);
		drops_unicos(index, size, uniout);
	}
}
