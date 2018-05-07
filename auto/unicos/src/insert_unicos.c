#include <unico.h>
#include <stddef.h>

int insert_unicos (unico code, size_t index, unicos *uniout){
	int status = insert_unicos_manually(code, index, uniout);
	if (status){
		size_t size = size_unicos(uniout);
		int status = extend_unicos(size * 2, uniout);
		if (status) return status;
		return insert_unicos(code, index, uniout);
	}
	return 0;
}
