#include <unico.h>
#include <stddef.h>

#define normalized_nfkc_tmp_unicos(var, uni)\
unicos *__ ## var ## _normalized_nfkc_argument1 = uni;\
size_t __ ## var ## _normalized_nfkc_size = normalize_nfkc_size_unicos(uni);\
make_tmp_unicos(var, __ ## var ## _normalized_nfkc_size);\
int __ ## var ## _normalized_nfkc_status = normalize_nfkc_unicos_manually(0, -1, var);\
if (__ ## var ## _normalized_nfkc_status){ var = NULL; }
