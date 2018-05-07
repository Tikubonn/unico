#include <unico.h>
#include <stdio.h>

static void print_unicos_as_utf16_in (unicob *uni, FILE *stream){
	size_t size = size_unicob(uni);
	size_t index;
	for (index = 0; index < size; index++){
		unsigned char code = get_unicob(index, uni);
		fputc(code, stream);
	}
}

void print_unicos_as_utf16be (unicos *uni, FILE *stream){
	make_tmp_unicob(temp, 64);
	size_t size = size_unicos(uni);
	size_t index;
	for (index = 0; index < size; index++){
		unico code = get_unicos(index, uni);
		put_unicob_as_utf16be_manually(code, temp);
		print_unicos_as_utf16_in(temp, stream);
	}
}

void print_unicos_as_utf16le (unicos *uni, FILE *stream){
	make_tmp_unicob(temp, 64);
	size_t size = size_unicos(uni);
	size_t index;
	for (index = 0; index < size; index++){
		unico code = get_unicos(index, uni);
		put_unicob_as_utf16le_manually(code, temp);
		print_unicos_as_utf16_in(temp, stream);
	}
}

void print_unicos_as_utf16be_ln (unicos *uni, FILE *stream){
	print_unicos_as_utf16be(uni, stream);
	fputs("\n", stream);
}

void print_unicos_as_utf16le_ln (unicos *uni, FILE *stream){
	print_unicos_as_utf16le(uni, stream);
	fputs("\n", stream);
}
