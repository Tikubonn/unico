#include <unico.h>
#include <stddef.h>

extern size_t size_load_unicos_from_utf8_string (unsigned char *sequence){
	size_t index = 0;
	while (sequence[index]){
		int size = size_of_char_unicop_utf8(sequence[index]);
		if (size == -1) return index;
		index += size;
	}
	return index;
}

extern int load_unicos_from_utf8_string (unsigned char *sequence, unicos *uniout){
	make_tmp_unicop_utf8(decoder, uniout);
	size_t size = size_load_unicos_from_utf8_string(sequence);
	size_t index;
	for (index = 0; index < size; index++){
		int status = put_unicop_utf8_manually(sequence[index], decoder);
		if (status) return status;
	}
	return 0;
}
