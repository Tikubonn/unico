#include <unico.h>
#include <stddef.h>

size_t title_size_unicoc (unicoc *uni){
	return title_size_unicos(
		uni->beginning,
		uni->end,
		uni->unicos);
}
