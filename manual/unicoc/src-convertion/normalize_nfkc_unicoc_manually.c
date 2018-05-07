#include <unico.h>

int normalize_nfkc_unicoc_manually (unicoc *uniout){
	return normalize_nfkc_unicos_manually(
		uniout->beginning,
		uniout->end,
		uniout->unicos);
}
