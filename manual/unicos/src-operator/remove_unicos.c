#include <unico.h>
#include <stddef.h>

void remove_unicos (unico code, unicos *uniout){
	size_t size = size_unicos(uniout);
	size_t index;
	for (index = 0; index < size; index++){
		unico code2 = get_unicos(index, uniout);
		if (code2 == code){
			drop_unicos(index, uniout);
			return;
		}
	}
}

void removec_unicos (unicoc *character, unicos *uniout){
	size_t size = length_unicos(uniout);
	size_t index;
	for (index = 0; index < size; index++){
		unicoc temp;
		int status = get_unicoc_from_unicos(index, uniout, &temp);
		if (status) return;
		if (equal_unicoc(character, &temp)){
			size_t si = size_unicoc(&temp);
			drops_unicos(0, si, &temp);
			return;
		}
	}
}

static int removes_unicos_in (size_t index, unicos *unia, unicos *unib){
	size_t size = length_unicos(unia);
	size_t ind;
	for (ind = 0; ind < size; ind++){
		unicoc tempa;
		unicoc tempb;
		if (get_unicoc_from_unicos(ind, unia, &tempa)) return 0;
		if (get_unicoc_from_unicos(ind + index, unib, &tempb)) return 0;
		if (unequal_unicoc(&tempa, &tempb)) return 0;
	}
	return 1;
}

void removes_unicos (unicos *unia, unicos *unib){
	size_t sizea = length_unicos(unia);
	size_t sizeb = length_unicos(unib);
	size_t index;
	if (sizea == 0)
		return;
	if (sizeb == 0)
		return;
	if (sizea <= sizeb){
		size_t index;
		for (index = 0; index <= sizeb - sizea; index++){
			if (removes_unicos_in(index, unia, unib)){
				drops_unicos(index, sizea, unib);
				return;
			}
		}
	}
}
