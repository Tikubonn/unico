#include <unico.h>

int put_unicos_utf8 (unsigned char character, unicos_utf8 *uniout){
	int status = put_unicos_utf8_manually(character, uniout);
	if (status == UNICOS_NOT_ENOUGH_MEMORY){
		size_t size = real_size_unicos((unicos*)uniout);
		if (extend_unicos(size * 2, (unicos*)uniout))
			return UNICOS_MEMORY_ERROR;
		return put_unicos_utf8(character, uniout);
	}
	return 0;
}
