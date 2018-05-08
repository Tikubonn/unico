#include <unico.h>
#define min(a,b) ((a)<(b)?(a):(b))

static int sub_unicos_manually_extend (unico *sequence, size_t size, size_t index, size_t sizeout, unicos *uniout){
	if (has_margins_unicos(size - sizeout, uniout)){
		size_t ind;
		for (ind = 0; ind < sizeout; ind++)
			set_unicos(sequence[ind], ind + index, uniout);
		inserts_unicos_manually(sequence + sizeout, size - sizeout, index + sizeout, uniout);
		return 0;
	}
	return UNICOS_NOT_ENOUGH_MEMORY;
}

static int sub_unicos_manually_contract (unico *sequence, size_t size, size_t index, size_t sizeout, unicos *uniout){
	drops_unicos(index, sizeout - size, uniout);
	size_t ind;
	for (ind = 0; ind < size; ind++)
		set_unicos(sequence[ind], ind + index, uniout);
	return 0;
}

static int sub_unicos_manually_similar (unico *sequence, size_t size, size_t index, size_t sizeout, unicos *uniout){
	size_t ind;
	for (ind = 0; ind < size; ind++)
		set_unicos(sequence[ind], ind + index, uniout);
	return 0;
}

int sub_unicos_manually (unico *sequence, size_t size, size_t index, size_t sizeout, unicos *uniout){
	size_t si = size_unicos(uniout);
	size_t ind = min(index, si);
	size_t sid = min(sizeout, si - ind);
	if (sid == size) return sub_unicos_manually_similar(sequence, size, ind, sid, uniout);
	if (sid < size) return sub_unicos_manually_extend(sequence, size, ind, sid, uniout);
	if (sid > size) return sub_unicos_manually_contract(sequence, size, ind, sid, uniout);
	return UNICOS_ERROR;
}
