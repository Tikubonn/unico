#include <unico.h>
#include <stddef.h>

int downcase_unicos (size_t index, size_t size, unicos *uniout){
	int status = downcase_unicos_manually(index, size, uniout);
	if (status){
		size_t si = size_unicos(uniout);
		int status = extend_unicos(si * 2, uniout);
		if (status) return status;
		return downcase_unicos(index, size, uniout);
	}
	return 0;
}
