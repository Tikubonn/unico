#include <unico.h>
#include <stdio.h>

void print_unicos_as_utf32be (unicos *unis, FILE *stream){
	make_tmp_unicoc(unic, 128);
	size_t sizea = size_unicos(unis);
	size_t indexa;
	for (indexa = 0; indexa < sizea; indexa++){
		unico uni = get_unicos(indexa, unis);
		clear_unicoc(unic);
		put_unicoc_as_utf32be(uni, unic);
		size_t sizeb = size_unicoc(unic);
		size_t indexb;
		for (indexb = 0; indexb < sizeb; indexb++){
			unsigned char character = get_unicoc(indexb, unic);
			fputc(character, stream);
		}
	}
}

void print_unicos_as_utf32le (unicos *unis, FILE *stream){
	make_tmp_unicoc(unic, 128);
	size_t sizea = size_unicos(unis);
	size_t indexa;
	for (indexa = 0; indexa < sizea; indexa++){
		unico uni = get_unicos(indexa, unis);
		clear_unicoc(unic);
		put_unicoc_as_utf32le(uni, unic);
		size_t sizeb = size_unicoc(unic);
		size_t indexb;
		for (indexb = 0; indexb < sizeb; indexb++){
			unsigned char character = get_unicoc(indexb, unic);
			fputc(character, stream);
		}
	}
}

void print_unicos_as_utf32be_ln (unicos *uni, FILE *stream){
	print_unicos_as_utf32be(uni, stream);
	fputc('\n', stream);
}

void print_unicos_as_utf32le_ln (unicos *uni, FILE *stream){
	print_unicos_as_utf32le(uni, stream);
	fputc('\n', stream);
}
