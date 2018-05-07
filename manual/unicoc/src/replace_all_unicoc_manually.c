#include <unico.h>
#include <stddef.h>

int replace_all_unicoc_manually (unico *sequence, size_t size, unicoc *uniout){
	size_t sio = size_unicoc(uniout);
	return replace_unicoc_manually(sequence, size, 0, sio, uniout);
}
