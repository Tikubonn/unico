#include <unico.h>

void concat_unicos_manually (unicos *unia, unicos *unib, unicos *uniout){
	size_t sizea = size_unicos(unia);
	size_t indexa;
	for (indexa = 0; indexa < sizea; indexa++){
		unico code = get_unicos(indexa, unia);
		put_unicos_manually(code, uniout);
	}
	size_t sizeb = size_unicos(unib);
	size_t indexb;
	for (indexb = 0; indexb < sizeb; indexb++){
		unico code = get_unicos(indexb, unib);
		put_unicos_manually(code, uniout);
	}
}