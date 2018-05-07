#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

static int __downcase_unicos_manually (size_t index, size_t size, unicos *uniout){
	while (index < size){
		int status = downcase_unicos_manually_in(index, size, uniout, &index);
		if (status) return status;
	}
	return 0;
}

int downcase_unicos_manually (size_t index, size_t size, unicos *uniout){
	size_t si = size_unicos(uniout);
	size_t ind = min(index, si);
	size_t sid = min(size, si);
	size_t sio = downcase_size_unicos(ind, sid, uniout);
	if (si < ind + sio){
		if (has_margins_unicos(ind + sio - si, uniout))
			return __downcase_unicos_manually(ind, sid, uniout);
		return 1;
	}
	else {
		return __downcase_unicos_manually(ind, sid, uniout);
	}
}
