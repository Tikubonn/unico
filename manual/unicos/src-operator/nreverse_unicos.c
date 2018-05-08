#include <unico.h>
#include <stddef.h>

void nreverse_unicos (unicos *uniout){
	size_t size = size_unicos(uniout);
	size_t indexa;
	size_t indexb;
	for (indexa = 0, indexb = size ? size -1: 0; indexa < indexb; indexa++, indexb--){
		unico codea = get_unicos(indexa, uniout);
		unico codeb = get_unicos(indexb, uniout);
		set_unicos(codeb, indexa, uniout);
		set_unicos(codea, indexb, uniout);
	}
}