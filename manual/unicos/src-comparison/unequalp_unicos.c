#include <unico.h>

int unequalp_unicos (unicos *unia, unicos *unib){
  return !equalp_unicos(unia, unib);
}
