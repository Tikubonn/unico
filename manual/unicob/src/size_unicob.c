#include <unico.h>
#include <stddef.h>

size_t size_unicob (unicob *uni){
	return uni->address - uni->address_beginning;
}

size_t real_size_unicob (unicob *uni){
	return uni->address_end - uni->address_beginning;
}
