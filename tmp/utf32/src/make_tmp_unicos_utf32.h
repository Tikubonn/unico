#pragma once
#include <unico.h>
#include <stddef.h>

#define make_tmp_unicos_utf32(var, size, endian)\
size_t __ ## var ## _make_argument1 = size;\
int __ ## var ## _make_argument2 = endian;\
unico __ ## var ## _make_unicos_data[__ ## var ## _make_argument1];\
unicos_utf32 __ ## var ## _make_unicos;\
unicos_utf32 *var = &__ ## var ## _make_unicos;\
init_unicos_utf32(\
__ ## var ## _make_unicos_data,\
__ ## var ## _make_argument1,\
__ ## var ## _make_argument2, var);
