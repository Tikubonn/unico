#include <unico.h>

int put_bom_unicob_as_utf16be (unicob *uniout){
	int status = put_bom_unicob_as_utf16be_manually(uniout);
	if (status == UNICOB_NOT_ENOUGH_MEMORY){
		size_t size = real_size_unicob(uniout);
		int status = extend_unicob(size * 2, uniout);
		if (status) return status;
		return put_bom_unicob_as_utf16be(uniout);
	}
	return status;
}

int put_bom_unicob_as_utf16le (unicob *uniout){
	int status = put_bom_unicob_as_utf16le_manually(uniout);
	if (status == UNICOB_NOT_ENOUGH_MEMORY){
		size_t size = real_size_unicob(uniout);
		int status = extend_unicob(size * 2, uniout);
		if (status) return status;
		return put_bom_unicob_as_utf16le(uniout);
	}
	return status;
}
