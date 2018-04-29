#pragma once
#include <unico.h>
#define UNICOS_UTF8_SYNTAX_ERROR 0x11

typedef struct unicos_utf8 {
	unicos unicos;
	unico value;
	unsigned int bom;
	unsigned int count;
} unicos_utf8;
