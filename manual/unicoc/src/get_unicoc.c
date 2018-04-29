#include <unico.h>
#include <stddef.h>

unsigned char get_unicoc (size_t index, unicoc *uni){
	if (index < size_unicoc(uni))
		return uni->address_beginning[index];
	return 0;
}
