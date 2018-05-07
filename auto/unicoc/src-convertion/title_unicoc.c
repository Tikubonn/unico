#include <unico.h>
#include <stddef.h>

int title_unicoc (unicoc *uniout){
	int status = title_unicoc(uniout);
	if (status){
		size_t size = size_unicoc(uniout);
		int status = extend_unicoc(size * 2, uniout);
		if (status) return 1;
		return title_unicoc(uniout);
	}
	return 0;
}
