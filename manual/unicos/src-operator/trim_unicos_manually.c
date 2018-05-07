#include <unico.h>

int trim_unicos_manually (unicos *uni, unicos *uniout){
	size_t size = size_unicos(uni);
	size_t index;
	for (index = 0; index < size; index++){
		unico code = get_unicos(index, uni);
		if (!is_whitespace_unico(code))
			break;
	}
	size_t index2;
	for (index2 = size; index < index2; index2--){
		unico code = get_unicos(index2, uni);
		if (!is_whitespace_unico(code))
			break;
	}
	if (has_margins_unicos(index2 - index, uniout)){
		size_t index3;
		for (index3 = index; index3 < index2; index3++){
			unico code = get_unicos(index3, uni);
			insert_unicos_manually(code, -1, uniout);
		}
		return 0;
	}
	return 1;
}
