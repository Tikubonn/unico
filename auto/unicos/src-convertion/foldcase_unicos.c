#include <unico.h>
#include <stddef.h>

int foldcase_unicos (size_t index, size_t size, unicos *uniout){
	int status = foldcase_unicos_manually(index, size, uniout);
	if (status){
		size_t si = size_unicos(uniout);
		int status = extend_unicos(si * 2, uniout);
		if (status) return status;
		return foldcase_unicos(index, size, uniout);
	}
	return 0;
}
