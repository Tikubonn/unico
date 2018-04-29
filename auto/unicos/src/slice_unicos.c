#include <unico.h>

unicos *slice_unicos (size_t start, size_t end, unicos *uni){
	size_t size = (start <= end) ? (end - start) : 0;
	unicos *uniout = make_unicos(size);
	slice_unicos_manually(start, end, uni, uniout);
	return uniout;
}
