#pragma once
#include <unico.h>
#include <stddef.h>

#define make_tmp_unicoc(var, size)\
size_t __ ## var ## _make_argument1 = size;\
unsigned char __ ## var ## _make_unico_data[__ ## var ## _make_argument1];\
unicoc __ ## var ## _make_unico;\
unicoc *var = &__ ## var ## _make_unico;\
init_unicoc(\
__ ## var ## _make_unico_data,\
__ ## var ## _make_argument1, var);
