#pragma once
#include <unico.h>
#define UNICOS_UTF32_BOM_ENDIAN 0
#define UNICOS_UTF32_BIG_ENDIAN 1
#define UNICOS_UTF32_LITTLE_ENDIAN 2
#define UNICOS_UTF32_SYNTAX_ERROR 0x11

typedef struct unicos_utf32 {
	unicos unicos;
	unsigned int endian;
	unsigned int count;
	unico value;
} unicos_utf32;
