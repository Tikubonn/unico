#pragma once
#include <unico.h>
#include <stddef.h>

#define make_tmp_unicos_utf8(var, size)\
size_t __ ## var ## _make_argument1 = size;\
unico __ ## var ## _make_unicos_data[__ ## var ## _make_argument1];\
unicos_utf8 __ ## var ## _make_unicos;\
unicos_utf8 *var = &__ ## var ## _make_unicos;\
init_unicos_utf8(\
__ ## var ## _make_unicos_data,\
__ ## var ## _make_argument1, var);
