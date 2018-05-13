#include <unico.h>

#define make_tmp_unicop_utf8(var, uniout)\
unicos *__ ## var ## _make_argument1 = uniout;\
unicop_utf8 __ ## var ## _make_decoder;\
unicop_utf8 *var = &__ ## var ## _make_decoder;\
init_unicop_utf8(__ ## var ## _make_argument1, var);
