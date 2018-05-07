#include <unico.h>
#include <stddef.h>

int replace_unicos (unico *sequence, size_t size, size_t index, size_t sizeout, unicos *uniout){
	int status = replace_unicos_manually(sequence, size, index, sizeout, uniout);
	if (status){
		size_t si = size_unicos(uniout);
		int status = extend_unicos(si * 2, uniout);
		if (status) return status;
		return replace_unicos(sequence, size, index, sizeout, uniout);
	}
	return 0;
}
