#include <unico.h>
#include <stddef.h>

#define make_tmp_unicob(var, size)\
size_t __ ## var ## _make_argument1 = size;\
unsigned char __ ## var ## _unicob_data[ __ ## var ## _make_argument1 ];\
unicob __ ## var ## _unicob;\
unicob *var = &__ ## var ## _unicob;\
init_unicob(\
__ ## var ## _unicob_data,\
__ ## var ## _make_argument1, var);
