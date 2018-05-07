#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

size_t normalize_nfd_size_unicos (size_t index, size_t size, unicos *uniout){
	size_t si = size_unicos(uniout);
	size_t sid = min(size, si);
	size_t count = 0;
	while (index < sid){
		count += normalize_nfd_size_unicos_in(index, sid, uniout, &index);
	}
	return count;
}
