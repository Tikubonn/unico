#include <unico.h>
#include <stdlib.h>

void free_unicoc (unicoc *uni){
	free(uni->address_beginning);
	free(uni);
}
