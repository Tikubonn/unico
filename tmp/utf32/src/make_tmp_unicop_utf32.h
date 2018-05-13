#include <unico.h>

#define make_tmp_unicop_utf32(var, endian, uniout)\
int __ ## var ## _make_argument1 = endian;\
unicos *__ ## var ## _make_argument2 = uniout;\
unicop_utf32 __ ## var ## _make_decoder;\
unicop_utf32 *var = &__ ## var ## _make_decoder;\
init_unicop_utf32(\
__ ## var ## _make_argument2,\
__ ## var ## _make_argument1, var);
