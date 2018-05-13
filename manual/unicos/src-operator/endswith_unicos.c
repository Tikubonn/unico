#include <unico.h>

int endswith_unicos (unicos *unia, unicos *unib){
	size_t sizea = length_unicos(unia);
	size_t sizeb = length_unicos(unib);
	if (sizea == 0) return 0;
	if (sizeb == 0) return 0;
	if (sizea <= sizeb){
		size_t index;
		size_t diff = sizeb - sizea;
		for (index = 0; index <= sizea; index++){
			unicoc unica;
			unicoc unicb;
			if (get_unicoc_from_unicos(index, unia, &unica)) return 0;
			if (get_unicoc_from_unicos(index + diff, unib, &unicb)) return 0;
			if (unequal_unicoc(&unica, &unicb)) return 0;
		}
		return 1;
	}
	return 0;
}
