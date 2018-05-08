#include <unico.h>
#include <stddef.h>

int has_margin_unicos (unicos *uni){
  return uni->address < uni->address_end;
}

int has_margins_unicos (size_t size, unicos *uni){
  return uni->address + size < uni->address_end;
}
