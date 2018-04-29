#pragma once
#include <unico.h>
#define UNICOS_UTF16_BOM_ENDIAN 0
#define UNICOS_UTF16_BIG_ENDIAN 1
#define UNICOS_UTF16_LITTLE_ENDIAN 2
#define UNICOS_UTF16_SYNTAX_ERROR 0x11

typedef struct unicos_utf16 {
	unicos unicos;
	int endian;
	int count;
	unico value1;
	unico value2;
} unicos_utf16;
