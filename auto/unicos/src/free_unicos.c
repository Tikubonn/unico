#include <unico.h>
#include <stdlib.h>

void free_unicos (unicos *uni){
  free(uni->address_beginning);
  free(uni);
}
