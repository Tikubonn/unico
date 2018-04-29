#include <unico.h>
#include <stddef.h>

unicoc *copy_unicoc (unicoc *uni){
	size_t size = size_unicoc(uni);
	unicoc *unia = make_unicoc(size);
	copy_unicoc_manually(uni, unia);
	return unia;
}
