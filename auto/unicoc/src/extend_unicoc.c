#include <unico.h>
#include <stddef.h>
#include <stdlib.h>

int extend_unicoc (size_t size, unicoc *uni){
	unsigned char *sequence = realloc(uni->address_beginning, size * sizeof(char));
	if (sequence == NULL) return 1;
	if (sequence == uni->address_beginning){
		uni->address_end = sequence + size;
		return 0;
	}
	else {
		unicoc unia;
		init_unicoc(sequence, size, &unia);
		copy_unicoc_manually(uni, &unia);
		free(uni->address_beginning);
		copy_to_unicoc(&unia, uni);
		return 0;
	}
}
