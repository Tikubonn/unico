#include <unico.h>

int equalp_unicoc (unicoc *unia, unicoc *unib){
	return 
		equal_unicos_as_primary(
			unia->unicos, unia->beginning, unia->end,
			unib->unicos, unib->beginning, unib->end) || 
		equal_unicos_as_secondary(
			unia->unicos, unia->beginning, unia->end,
			unib->unicos, unib->beginning, unib->end) || 
		equal_unicos_as_tertiary(
			unia->unicos, unia->beginning, unia->end,
			unib->unicos, unib->beginning, unib->end) || 
		equal_unicos_as_quaternary(
			unia->unicos, unia->beginning, unia->end,
			unib->unicos, unib->beginning, unib->end);
}
