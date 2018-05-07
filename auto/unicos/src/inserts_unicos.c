#include <unico.h>
#include <stddef.h>

int inserts_unicos (unico *sequence, size_t size, size_t index, unicos *uniout){
	int status = inserts_unicos_manually(sequence, size, index, uniout);
	if (status){
		size_t si = size_unicos(uniout);
		int status = extend_unicos(si + size, uniout);
		if (status) return status;
		return inserts_unicos(sequence, size, index, uniout);
	}
	return 0;
}
