#include <unico.h>
#include <stddef.h>

static int position_unicos_in (size_t offset, unicos *unia, unicos *unib){
	size_t size = length_unicos(unia);
	size_t index;
	for (index = 0; index < size; index++){
		unicoc unica;
		unicoc unicb;
		if (get_unicoc_from_unicos(index, unia, &unica)) return 0;
		if (get_unicoc_from_unicos(index, unib, &unicb)) return 0;
		if (unequal_unicoc(&unica, &unicb)) return 0;
	}
	return 1;
}

int position_unicos (unicos *unia, unicos *unib, size_t *indexout){
	size_t sizea = length_unicos(unia);
	size_t sizeb = length_unicos(unib);
	if (sizea == 0) return 0;
	if (sizeb == 0) return 0;
	if (sizea <= sizeb){
		size_t index;
		size_t count = 0;
		for (index = 0; index <= sizeb - sizea; index++, count++){
			if (position_unicos_in(index, unia, unib)){
				*indexout = count;
				return 1;
			}
		}
		return 0;
	}
	return 0;
}
