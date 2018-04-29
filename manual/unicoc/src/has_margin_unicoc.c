#include <unico.h>
#include <stddef.h>

int has_margin_unicoc (unicoc *uni){
	return uni->address < uni->address_end;
}

int has_margins_unicoc (size_t size, unicoc *uni){
	return uni->address + size < uni->address_end;
}
