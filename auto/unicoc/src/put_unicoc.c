#include <unico.h>
#include <stddef.h>

int put_unicoc (unsigned char character, unicoc *uniout){
	int status = put_unicoc_manually(character, uniout);
	if (status == UNICOC_NOT_ENOUGH_MEMORY){
		size_t size = real_size_unicoc(uniout);
		if (extend_unicoc(size * 2, uniout))
			return UNICOC_MEMORY_ERROR;
		return put_unicoc(character, uniout);
	}
	return 0;
}
