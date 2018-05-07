#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

void drops_unicos (size_t index, size_t size, unicos *uniout){
	size_t si = size_unicos(uniout);
	size_t ind = min(index, si);
	size_t sid = min(size, si - ind);
	size_t i;
	for (i = ind; i < sid; i++){
		unico code = get_unicos(i + size, uniout);
		set_unicos(code, i, uniout);
	}
	uniout->address -= sid;
}
