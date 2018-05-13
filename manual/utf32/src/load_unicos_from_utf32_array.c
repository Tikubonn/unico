#include <unico.h>
#include <stddef.h>

int load_unicos_from_utf32_array (unsigned char *sequence, size_t size, unicos *uniout){
	make_tmp_unicop_utf32(decoder, UNICOP_UTF32_BOM_ENDIAN, uniout);
	size_t index;
	for (index = 0; index < size; index++){
		int status = put_unicop_utf32_manually(sequence[index], decoder);
		if (status) return status;
	}
	return 0;
}
