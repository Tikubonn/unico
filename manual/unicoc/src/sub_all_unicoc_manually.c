#include <unico.h>
#include <stddef.h>

int sub_all_unicoc_manually (unico *sequence, size_t size, unicoc *uniout){
	size_t sio = size_unicoc(uniout);
	return sub_unicoc_manually(sequence, size, 0, sio, uniout);
}
