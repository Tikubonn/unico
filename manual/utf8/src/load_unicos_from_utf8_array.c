#include <unico.h>
#include <stddef.h>

extern int load_unicos_from_utf8_array (unsigned char *sequence, size_t size, unicos *uniout){
	make_tmp_unicop_utf8(decoder, uniout);
	size_t index;
	for (index = 0; index < size; index++){
		int status = put_unicop_utf8_manually(sequence[index], decoder);
		if (status) return status;
	}
	return 0;
}
