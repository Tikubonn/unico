#include <unico.h>

int normalize_nfc_unicoc_manually (unicoc *uniout){
	return normalize_nfc_unicos_manually(
		uniout->beginning,
		uniout->end,
		uniout->unicos);
}
