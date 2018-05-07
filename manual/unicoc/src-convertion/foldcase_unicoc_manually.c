#include <unico.h>

int foldcase_unicoc_manually (unicoc *uniout){
	return foldcase_unicos_manually(
		uniout->beginning,
		uniout->end,
		uniout->unicos);
}
