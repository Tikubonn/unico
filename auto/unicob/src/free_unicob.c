#include <unico.h>
#include <stdlib.h>

void free_unicob (unicob *uni){
  free(uni->address_beginning);
  free(uni);
}
