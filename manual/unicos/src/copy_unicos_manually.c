#include <unico.h>
#include <stddef.h>

void copy_unicos_manually (unicos *uni, unicos *uniout){
	clear_unicos(uniout);
	size_t size = size_unicos(uni);
	size_t index;
	for (index = 0; index < size; index++){
		unico code = get_unicos(index, uni);
		put_unicos_manually(code, uniout);
	}
}
