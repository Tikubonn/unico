#include <unico.h>

int is_bom_big_endian_unicop_utf32 (unico code){
  return code == 0x0000feff;
}

int is_bom_little_endian_unicop_utf32 (unico code){
  return code == 0xfffe0000;
}
