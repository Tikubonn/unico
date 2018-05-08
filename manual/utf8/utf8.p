#pragma once
#define UNICOP_UTF8_ERROR 0x11
#define UNICOP_UTF8_SYNTAX_ERROR 0x12

typedef struct unicop_utf8 {
  unicos *unicos;
  unico code;
  int count;
  int bom;
} unicop_utf8;
