#include <unico.h>
#include <stddef.h>

int put_unicob_manually (unsigned char character, unicob *uniout){
	if (has_margin_unicob(uniout)){
		*uniout->address = character;
		uniout->address++;
		return 0;
	}
	return UNICOB_NOT_ENOUGH_MEMORY;
}
