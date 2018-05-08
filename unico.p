#pragma once
#include <stddef.h>
#include <stdint.h>

typedef uint32_t unico;

typedef struct unicos {
  unico *address;
  unico *address_beginning;
  unico *address_end;
} unicos;

typedef struct unicoc {
  unicos *unicos;
  size_t beginning;
  size_t end;
} unicoc;

typedef struct unicob {
  unsigned char *address;
  unsigned char *address_beginning;
  unsigned char *address_end;
} unicob;

