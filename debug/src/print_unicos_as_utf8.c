#include <unico.h>
#include <stdio.h>

static void print_unicos_as_utf8_in (unicob *uni, FILE *stream){
  size_t size = size_unicob(uni);
  size_t index;
  for (index = 0; index < size; index++){
    unsigned char code = get_unicob(index, uni);
    fputc(code, stream);
  }
}

void print_unicos_as_utf8 (unicos *uni, FILE *stream){
  make_tmp_unicob(temp, 16);
  size_t size = size_unicos(uni);
  size_t index;
  for (index = 0; index < size; index++){
    clear_unicob(temp);
    unico code = get_unicos(index, uni);
    put_unicob_as_utf8_manually(code, temp);
    print_unicos_as_utf8_in(temp, stream);
  }
}

void print_unicos_as_utf8_ln (unicos *uni, FILE *stream){
  print_unicos_as_utf8(uni, stream);
  fputs("\n", stream);
}
