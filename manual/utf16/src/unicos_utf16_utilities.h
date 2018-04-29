#pragma once
#include <unico.h>

extern int is_high_surrogate_utf16 (unico);
extern int is_low_surrogate_utf16 (unico);
extern int is_bom_big_endian_utf16 (unico);
extern int is_bom_little_endian_utf16 (unico);
extern unico decode_surrogate_utf16 (unico, unico);
