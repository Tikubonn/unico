#include <unico.h>
#include <stddef.h>

int sub_unicoc (unico *sequence, size_t size, size_t index, size_t sizeout, unicoc *uniout){
	int status = sub_unicoc_manually(sequence, size, index, sizeout, uniout);
	if (status){
		size_t si = size_unicoc(uniout);
		int status = extend_unicoc(si * 2, uniout);
		if (status) return status;
		return sub_unicoc(sequence, size, index, sizeout, uniout);
	}
	return 0;
}
