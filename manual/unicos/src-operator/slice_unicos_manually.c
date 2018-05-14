#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

extern size_t slice_size_unicos (size_t index, size_t end, unicos *uni){
	size_t size = size_unicos(uni);
	size_t ind = min(index, size);
	size_t ed = min(end, size);
	size_t i;
	size_t count = 0;
	for (i = ind; i < ed; i++){
		unicoc temp;
		int status = get_unicoc_from_unicos(i, uni, &temp);
		if (status) return count;
		count += size_unicoc(&temp);
	}
	return count;
}

static int slice_unicos_manually_in (unicoc *uni, unicos *uniout){
	size_t size = size_unicoc(uni);
	size_t index;
	for (index = 0; index < size; index++){
		unico code = get_unicoc(index, uni);
		int status = insert_unicos_manually(code, -1, uniout);
		if (status) return status;
	}
	return 0;
}

int slice_unicos_manually (size_t index, size_t end, unicos *uni, unicos *uniout){
	size_t size = size_unicos(uni);
	size_t ind = min(index, size);
	size_t ed = min(end, size);
	size_t i;
	for (i = ind; i < ed; i++){
		unicoc temp;
		int status1 = get_unicoc_from_unicos(i, uni, &temp);
		if (status1) return status1;
		int status2 = slice_unicos_manually_in(&temp, uniout);
		if (status2) return status2;
	}
	return 0;
}
