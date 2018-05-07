#include <unico.h>

int put_bom_unicob_as_utf32be (unicob *uniout){
	int status = put_bom_unicob_as_utf32be_manually(uniout);
	if (status == UNICOB_NOT_ENOUGH_MEMORY){
		size_t size = real_size_unicob(uniout);
		int status = extend_unicob(size * 2, uniout);
		if (status) return status;
		return put_bom_unicob_as_utf32be(uniout);
	}
	return status;
}

int put_bom_unicob_as_utf32le (unicob *uniout){
	int status = put_bom_unicob_as_utf32le_manually(uniout);
	if (status == UNICOB_NOT_ENOUGH_MEMORY){
		size_t size = real_size_unicob(uniout);
		int status = extend_unicob(size * 2, uniout);
		if (status) return status;
		return put_bom_unicob_as_utf32le(uniout);
	}
	return status;
}
