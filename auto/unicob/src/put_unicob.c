#include <unico.h>

int put_unicob (unsigned char character, unicob *uniout){
	int status = put_unicob_manually(character, uniout);
	if (status){
		size_t size = size_unicob(uniout);
		int status = extend_unicob(size * 2, uniout);
		if (status) return status;
		return put_unicob(character, uniout);
	}
	return 0;
}
