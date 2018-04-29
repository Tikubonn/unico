#include <unico.h>

int put_unicos_manually (unico character, unicos *uni){
	if (has_margin_unicos(uni) == 0)
		return UNICOS_NOT_ENOUGH_MEMORY;
	*uni->address = character;
	uni->address++;
	return 0;
}
 