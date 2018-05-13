#include <unico.h>
#include <stddef.h>

size_t size_join_unicos (unicos **unis, size_t size, unicos *separator){
	size_t count = 0;
	size_t index;
	for (index = 0; index < size; index++){
		if (0 < index)
			count += size_unicos(separator);
		count += size_unicos(unis[index]);
	}
	return count;
}

static int join_unicos_manually_in (unicos *uni, unicos *uniout){
	size_t size = size_unicos(uni);
	size_t index;
	for (index = 0; index < size; index++){
		unico code = get_unicos(index, uni);
		insert_unicos_manually(code, -1, uniout);
	}
	return 0;
}

int join_unicos_manually (unicos **unis, size_t size, unicos *separator, unicos *uniout){
	size_t sizea = size_join_unicos(unis, size, separator);
	size_t sizeb = size_unicos(uniout);
	if (sizea <= sizeb){
		size_t index;
		for (index = 0; index < size; index++){
			if (0 < index)
				join_unicos_manually_in(separator, uniout);
			join_unicos_manually_in(unis[index], uniout);
		}
		return 0;
	}
	return UNICOS_NOT_ENOUGH_MEMORY;
}
