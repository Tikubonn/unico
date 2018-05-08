#include <unico.h>
#include <stddef.h>

int position_if_unicos (position_if_unicos_function func, unicos *uni, size_t *indexout, void *param){
	size_t size = size_unicos(uni);
	size_t index;
	for (index = 0; index < size; index++){
		unico code = get_unicos(index, uni);
		if (func(code, param)){
			*indexout = index;
			return 1;
		}
	}
	return 0;
}

int positionc_if_unicos (positionc_if_unicos_function func, unicos *uni, size_t *indexout, void *param){
	size_t size = length_unicos(uni);
	size_t index;
	for (index = 0; index < size; index++){
		unicoc temp;
		int status = get_unicoc_from_unicos(index, uni, &temp);
		if (status) return 0;
		if (func(&temp, param)){
			*indexout = index;
			return 1;
		}
	}
	return 0;
}
