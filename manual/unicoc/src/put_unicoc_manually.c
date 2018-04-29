#include <unico.h>

int put_unicoc_manually (unsigned char character, unicoc *uni){
	if (has_margin_unicoc(uni) == 0)
		return UNICOC_NOT_ENOUGH_MEMORY;
	*uni->address = character;
	uni->address++;
	return 0;
}
