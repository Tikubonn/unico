#include <unico.h>

unicob *copy_unicob (unicob *uni){
	size_t size = size_unicob(uni);
	unicob *uniout = make_unicob(size);
	if (uniout == NULL)
		return NULL;
	copy_unicob_manually(uni, uniout);
	return uniout;
}
