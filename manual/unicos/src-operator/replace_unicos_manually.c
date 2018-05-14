#include <unico.h>

size_t replace_size_unicos (unicos *unia, unicos *unib, unicos *unic){
	size_t sizea = size_unicos(unia);
	size_t sizeb = size_unicos(unib);
	size_t sizec = size_unicos(unic);
	return sizec + (sizeb < sizea ? sizeb - sizea : 0);
}

int replace_unicos_manually (unicos *unia, unicos *unib, unicos *unic, unicos *uniout){
	size_t index;
	int status = position_unicos(unia, unic, &index);
	if (status){
		size_t sizea = size_unicos(unia);
		size_t sizeb = size_unicos(unib);
		int status1 = inserts_unicos_manually(unic->address_beginning, index, -1, uniout);
		if (status1) return status1;
		int status2 = inserts_unicos_manually(unib->address_beginning, sizeb, -1, uniout);
		if (status2) return status2;
		int status3 = inserts_unicos_manually(unic->address_beginning + index + sizea, index + sizea, -1, uniout);
		if (status3) return status3;
		return 0;
	}
	else {
		return copy_unicos_manually(unic, uniout);
	}
}
