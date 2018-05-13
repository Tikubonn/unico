#include <unico.h>

size_t size_concat_unicos (unicos *unia, unicos *unib){
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
  size_t sizea = size_unicos(unia);
  size_t sizeb = size_unicos(unib);
  if (has_margins_unicos(sizea + sizeb, uniout)){
    int statusa = concat_unicos_manually_in(unia, uniout);
    if (statusa) return statusa;
    int statusb = concat_unicos_manually_in(unia, uniout);
    if (statusb) return statusa;
    return 0;
  }
  return UNICOS_NOT_ENOUGH_MEMORY;
}
