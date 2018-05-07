#include <unico.h>

int concat_unicos_manually (unicos *unia, unicos *unib, unicos *uniout){
	size_t sizea = size_unicos(unia);
	size_t sizeb = size_unicos(unib);
	if (has_margins_unicos(sizea + sizeb, uniout)){
		size_t indexa;
		for (indexa = 0; indexa < sizea; indexa++){
			unico code = get_unicos(indexa, unia);
			insert_unicos_manually(code, -1, uniout);
		}
		size_t indexb;
		for (indexb = 0; indexb < sizea; indexb++){
			unico code = get_unicos(indexb, unib);
			insert_unicos_manually(code, -1, uniout);
		}
		return 0;
	}
	return 1;
}
