#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

void slice_unicos_manually (size_t start, size_t end, unicos *uni, unicos *uniout){
	size_t size = size_unicos(uni);
	size_t index;
	for (index = start; index < min(size, end); index++){
		unico code = get_unicos(index, uni);
		put_unicos_manually(code, uniout);
	}
}
