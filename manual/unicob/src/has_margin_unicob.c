#include <unico.h>
#include <stddef.h>

int has_margin_unicob (unicob *uni){
	return uni->address < uni->address_end;
}

int has_margins_unicob (size_t size, unicob *uni){
	return uni->address + size < uni->address_end;
}
