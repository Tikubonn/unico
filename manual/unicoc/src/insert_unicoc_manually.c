#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

extern int insert_unicoc_manually (unico code, size_t index, unicoc *uniout){
	size_t size = size_unicoc(uniout);
	size_t ind = min(index, size);
	int status = insert_unicos_manually(code, uniout->beginning + ind, uniout->unicos);
	if (status) return status;
	uniout->end++;
	return 0;
}
