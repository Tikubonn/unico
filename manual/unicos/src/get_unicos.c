#include <unico.h>
#include <stddef.h>

unico get_unicos (size_t index, unicos *uni){
	if (index < size_unicos(uni))
		return uni->address_beginning[index];
	return 0;
}
