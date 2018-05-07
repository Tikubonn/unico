#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

extern int inserts_unicoc_manually (unico *sequence, size_t size, size_t index, unicoc *uniout){
	size_t si = size_unicoc(uniout);
	size_t ind = min(index, si);
	int status = inserts_unicos_manually(sequence, size, uniout->beginning + ind, uniout->unicos);
	if (status) return status;
	uniout->end += size;
	return 0;
}
