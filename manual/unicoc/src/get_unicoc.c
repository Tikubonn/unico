#include <unico.h>
#include <stddef.h>

unico get_unicoc (size_t index, unicoc *uni){
	size_t size = size_unicoc(uni);
	if (index < size){
		return get_unicos(uni->beginning + index, uni->unicos);
	}
	return 0;
}
