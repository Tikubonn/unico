#include <unico.h>
#include <stddef.h>

void copy_unicoc_manually (unicoc *uni, unicoc *uniout){
	clear_unicoc(uniout);
	size_t size = size_unicoc(uni);
	size_t index;
	for (index = 0; index < size; index++){
		unsigned char character = get_unicoc(index, uni);
		put_unicoc_manually(character, uniout);
	}
}
