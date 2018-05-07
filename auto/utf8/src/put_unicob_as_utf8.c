#include <unico.h>

int put_unicob_as_utf8 (unico code, unicob *uniout){
	int status = put_unicob_as_utf8_manually(code, uniout);
	if (status == UNICOB_NOT_ENOUGH_MEMORY){
		size_t size = real_size_unicob(uniout);
		int status = extend_unicob(size * 2, uniout);
		if (status) return status;
		return put_unicob_as_utf8(code, uniout);
	}
	return status;
}
