#include <unico.h>
#include <stdio.h>

static void print_unico_as_hexadecimal_in (unico uni, FILE *stream){
	if (uni){
		unico nummod = uni % 256u;
		unico numdiv = uni / 256u;
		int numa = nummod / 16u;
		int numb = nummod % 16u;
		print_unico_as_hexadecimal_in(numdiv, stream);
		fputc(
			numa < 10 ? ('0' + numa) :
			numa > 9 ? ('a' + numa - 10) : '?', 
			stream);
		fputc(
			numb < 10 ? ('0' + numb) :
			numb > 9 ? ('a' + numb - 10) : '?', 
			stream);
	}
}

static void print_unico_as_hexadecimal (unico uni, FILE *stream){
	fputs("\\u", stream);
	if (uni == 0){
		fputc('0', stream);
		fputc('0', stream);
	}
	print_unico_as_hexadecimal_in(uni, stream);
}

void print_unicos_as_code_position (unicos *unis, FILE *stream){
	size_t size = size_unicos(unis);
	size_t index;
	for (index = 0; index < size; index++){
		unico uni = get_unicos(index, unis);
		print_unico_as_hexadecimal(uni, stream);
	}
}

void print_unicos_as_code_position_ln (unicos *unis, FILE *stream){
	print_unicos_as_code_position(unis, stream);
	fputc('\n', stream);
}
