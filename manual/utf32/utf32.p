#pragma once
#define UNICOP_UTF32_ERROR 0x11
#define UNICOP_UTF32_SYNTAX_ERROR 0x12
#define UNICOP_UTF32_BOM_ENDIAN 0
#define UNICOP_UTF32_BIG_ENDIAN 1
#define UNICOP_UTF32_LITTLE_ENDIAN 2

typedef struct unicop_utf32 {
  unicos *unicos;
  unico code;
  int endian;
  int count;
} unicop_utf32;
