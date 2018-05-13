#include <unico.h>

int equal_unicoc (unicoc *unia, unicoc *unib){
	return equal_unicos_as_primary(
		unia->unicos, unia->beginning, unia->end,
		unib->unicos, unib->beginning, unib->end);
}
