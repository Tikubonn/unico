#include <unico.h>
#define min(a,b) ((a)<(b)?(a):(b))

int slice_unicos_manually (size_t index, size_t end, unicos *uni, unicos *uniout){
	clear_unicos(uniout);
	size_t size = size_unicos(uni);
	size_t ed = min(end, size);
	size_t ind = min(index, ed);
	if (has_margins_unicos(ed - ind, uniout)){
		size_t i;
		for (i = ind; i < ed; i++){
			unico code = get_unicos(i, uniout);
			insert_unicos_manually(code, -1, uniout);
		}
		return 0;
	}
	return 1;
}
