#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

static size_t slice_unicos_size (size_t index, size_t end, unicos *uni){
	size_t size = size_unicos(uni);
	size_t ind = min(index, size);
	size_t ed = min(end, size);
	size_t i;
	size_t count = 0;
	for (i = ind; i < ed; i++){
		unicoc temp;
		int status = get_unicoc_from_unicos(i, uni, &temp);
		if (status) return count;
		count += size_unicoc(&temp);
	}
	return count;
}

unicos *slice_unicos (size_t index, size_t end, unicos *uni){
	size_t size = slice_size_unios(index, end, uni);
	unicos *uniout = make_unicos(size);
	if (uniout == NULL) return NULL;
	slice_unicos_manually(index, size, uni, uniout);
	return uniout;
}
