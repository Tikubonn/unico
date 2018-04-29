#include <unico.h>
#include <stdio.h>
#include <stddef.h>

void print_unicoc_as_hexadecimal (unicoc *unis, FILE *stream){
	fputs("0x", stream);
	size_t size = size_unicoc(unis);
	size_t index;
	for (index = 0; index < size; index++){
		unsigned char character = get_unicoc(index, unis);
		int numa = character / 16;
		int numb = character % 16;
		fputc(
			numa < 10 ? '0' + numa : 
			numa > 9 ? 'a' + numa - 10 : '?',
			stream);
		fputc(
			numb < 10 ? '0' + numb : 
			numb > 9 ? 'a' + numb - 10 : '?',
			stream);
	}
}
