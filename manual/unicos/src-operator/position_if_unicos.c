#include <unico.h>

int position_if_unicos (position_if_unicos_function func, unicos *uni, size_t *indexout){
	size_t size = size_unicos(uni);
	if (size){
		size_t index;
		for (index = 0; index < size; index++){
			unicos temp;
			focus_unicos(index, -1, uni, &temp);
			if (func(uni, &temp)){
				*indexout = index;
				return 1;
			}
		}
		return 0;
	}
	return 0;
}
