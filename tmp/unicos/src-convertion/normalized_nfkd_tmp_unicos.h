#include <unico.h>
#include <stddef.h>

#define normalized_nfkd_tmp_unicos(var, uni)\
unicos *__ ## var ## _normalized_nfkd_argument1 = uni;\
size_t __ ## var ## _normalized_nfkd_size = normalize_nfkd_size_unicos(uni);\
make_tmp_unicos(var, __ ## var ## _normalized_nfkd_size);\
int __ ## var ## _normalized_nfkd_status = normalize_nfkd_unicos_manually(0, -1, var);\
if (__ ## var ## _normalized_nfkd_status){ var = NULL; }
