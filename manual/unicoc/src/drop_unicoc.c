#include <unico.h>
#include <stddef.h>

void drop_unicoc (size_t index, unicoc *uniout){
	size_t size = size_unicoc(uniout);
	if (index < size){
		drop_unicos(uniout->beginning + index, uniout->unicos);
		uniout->end--;
	}
}
