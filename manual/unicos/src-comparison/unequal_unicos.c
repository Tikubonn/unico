#include <unico.h>

int unequal_unicos (unicos *unia, unicos *unib){
  return !equal_unicos(unia, unib);
}
