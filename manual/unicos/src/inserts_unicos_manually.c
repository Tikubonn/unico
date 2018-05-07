#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

static void inserts_unicos_manually_extend (size_t index, size_t size, unicos *uniout){
	uniout->address += size;
	size_t ind = size_unicos(uniout);
	while (index + size < ind--){
		unico code = get_unicos(ind - size, uniout);
		set_unicos(code, ind, uniout);
	}
}

int inserts_unicos_manually (unico *sequence, size_t size, size_t index, unicos *uniout){
	if (has_margins_unicos(size, uniout)){
		size_t si = size_unicos(uniout);
		size_t ind = min(index, si);
		inserts_unicos_manually_extend(ind, size, uniout);
		size_t i;
		for (i = 0; i < size; i++)
			set_unicos(sequence[i], i + ind, uniout);
		return 0;
	}
	return UNICOS_NOT_ENOUGH_MEMORY;
}
