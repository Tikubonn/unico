#include <unico.h>

int is_combining_unico (unico code){
	if (0x0300 <= code && code <= 0x036f) return 1;
	if (0x1ab0 <= code && code <= 0x1aff) return 1;
	if (0x1dc0 <= code && code <= 0x1dff) return 1;
	if (0x20d0 <= code && code <= 0x20ff) return 1;
	if (0xfe20 <= code && code <= 0xfe2f) return 1;
	return 0;
}
