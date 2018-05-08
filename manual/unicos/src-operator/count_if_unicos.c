#include <unico.h>
#include <stddef.h>

int count_if_unicos (count_if_unicos_function func, unicos *uni, void *param){
	size_t count = 0;
	size_t size = size_unicos(unicos);
	size_t index;
	for (index = 0; index < size; index++){
		unico code = get_unicos(index, uni);
		if (func(code, param))
			count++;
	}
	return count;
}

int countc_if_unicos (count_if_unicos_by_unicoc_function func, unicos *uni, void *param){
	size_t count = 0;
	size_t size = length_unicos(unicos);
	size_t index;
	for (index = 0; index < size; index++){
		unicoc temp;
		int status = get_unicoc_from_unicos(index, uni, &temp);
		if (status) return count;
		if (func(&temp, param))
			count++;
	}
	return count;
}
