#include <unico.h>
#include <stdio.h>

static void print_unicos_as_utf32_in (unicob *uni, FILE *stream){
  size_t size = size_unicob(uni);
  size_t index;
  for (index = 0; index < size; index++){
    unsigned char code = get_unicob(index, uni);
    fputc(code, stream);
  }
}

void print_unicos_as_utf32be (unicos *uni, FILE *stream){
  make_tmp_unicob(temp, 64);
  size_t size = size_unicos(uni);
  size_t index;
  for (index = 0; index < size; index++){
    unico code = get_unicos(index, uni);
    put_unicob_as_utf32be_manually(code, temp);
    print_unicos_as_utf32_in(temp, stream);
  }
}

void print_unicos_as_utf32le (unicos *uni, FILE *stream){
  make_tmp_unicob(temp, 64);
  size_t size = size_unicos(uni);
  size_t index;
  for (index = 0; index < size; index++){
    unico code = get_unicos(index, uni);
    put_unicob_as_utf32le_manually(code, temp);
    print_unicos_as_utf32_in(temp, stream);
  }
}

void print_unicos_as_utf32be_ln (unicos *uni, FILE *stream){
  print_unicos_as_utf32be(uni, stream);
  fputs("\n", stream);
}

void print_unicos_as_utf32le_ln (unicos *uni, FILE *stream){
  print_unicos_as_utf32le(uni, stream);
  fputs("\n", stream);
}
