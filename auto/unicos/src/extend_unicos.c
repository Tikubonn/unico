#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

int extend_unicos (size_t size, unicos *uni){
	unico *sequence = realloc(uni->address_beginning, size * sizeof(unico));
	if (sequence == NULL) return 1;
	if (sequence == uni->address_beginning){
		uni->address_end = sequence + size;
		return 0;
	}
	else {
		unicos unia;
		init_unicos(sequence, size, &unia);
		copy_unicos_manually(uni, &unia);
		free(uni->address_beginning);
		copy_to_unicos(&unia, uni);
		return 0;
	}
}
