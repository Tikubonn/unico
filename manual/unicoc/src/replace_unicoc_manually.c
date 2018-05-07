#include <unico.h>
#include <stddef.h>
#define min(a,b) ((a)<(b)?(a):(b))

int replace_unicoc_manually (unico *sequence, size_t size, size_t index, size_t sizeout, unicoc *uniout){
	size_t si = size_unicoc(uniout);
	size_t ind = min(index, si);
	size_t sio = min(sizeout, si - ind);
	int status = replace_unicos_manually(sequence, size, uniout->beginning + ind, uniout->beginning + sio, uniout->unicos);
	if (status) return status;
	if (size < sio) uniout->end -= sio - size;
	if (size > sio) uniout->end += size - sio;
	return 0;
}
