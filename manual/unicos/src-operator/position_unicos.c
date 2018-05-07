#include <unico.h>

static int position_unicos_in (size_t offset, unicos *unia, unicos *unib){
	size_t size = size_unicos(unia);
	size_t index;
	for (index = 0; index < size; index++){
		unico codea = get_unicos(index, unia);
		unico codeb = get_unicos(index + offset, unib);
		if (codea != codeb)
			return 0;
	}
	return 1;
}

int position_unicos (unicos *unia, unicos *unib, size_t *indexout){
	size_t sizea = size_unicos(unia);
	size_t sizeb = size_unicos(unib);
	if (sizea == 0)
		return 0;
	if (sizeb == 0)
		return 0;
	if (sizea <= sizeb){
		size_t index;
		for (index = 0; index <= sizeb - sizea; index++){
			if (position_unicos_in(index, unia, unib)){
				*indexout = index;
				return 1;
			}
		}
		return 0;
	}
	return  0;
}
