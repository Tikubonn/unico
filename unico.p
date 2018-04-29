#pragma once
#include <stdint.h>

typedef uint32_t unico;

typedef struct unicos {
	unico *address;
	unico *address_beginning;
	unico *address_end;
} unicos;

typedef struct unicoc {
	unsigned char *address;
	unsigned char *address_beginning;
	unsigned char *address_end;
} unicoc;
