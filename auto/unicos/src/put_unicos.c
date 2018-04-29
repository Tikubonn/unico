#include <unico.h>
#include <stddef.h>

int put_unicos (unico uni, unicos *uniout){
	int status = put_unicos_manually(uni, uniout);
	if (status == UNICOC_NOT_ENOUGH_MEMORY){
		size_t size = real_size_unicos(uniout);
		if (extend_unicos(size * 2, uniout))
			return UNICOC_MEMORY_ERROR;
		return put_unicos(uni, uniout);
	}
	return 0;
}
