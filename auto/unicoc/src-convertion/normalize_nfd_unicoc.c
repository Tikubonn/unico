#include <unico.h>
#include <stddef.h>

int normalize_nfd_unicoc (unicoc *uniout){
	int status = normalize_nfd_unicoc(uniout);
	if (status){
		size_t size = size_unicoc(uniout);
		int status = extend_unicoc(size * 2, uniout);
		if (status) return 1;
		return normalize_nfd_unicoc(uniout);
	}
	return 0;
}
