#include <unico.h>

size_t concat_size_unicos (unicos *unia, unicos *unib){
	size_t sizea = size_unicos(unia);
	size_t sizeb = size_unicos(unib);
	return sizea + sizeb;
}

static int concat_unicos_manually_in (unicos *uni, unicos *uniout){
	size_t size = size_unicos(uni);
	size_t index;
	for (index = 0; index < size; index++){
		unico code = get_unicos(index, uni);
		insert_unicos_manually(code, -1, uniout);
	}
	return 0;
}

int concat_unicos_manually (unicos *unia, unicos *unib, unicos *uniout){
	size_t size = concat_size_unicos(unia, unib);
  if (has_margins_unicos(size, uniout)){
    int status1 = concat_unicos_manually_in(unia, uniout);
    if (status1) return status1;
    int status2 = concat_unicos_manually_in(unib, uniout);
    if (status2) return status2;
    return 0;
  }
  return UNICOS_NOT_ENOUGH_MEMORY;
}
