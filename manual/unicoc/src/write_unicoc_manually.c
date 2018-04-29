#include <unico.h>
#include <stddef.h>

int write_unicoc_manually (unsigned char *sequence, size_t size, unicoc *uniout){
	if (has_margins_unicoc(size, uniout) == 0)
		return 1;
	size_t index;
	for (index = 0; index < size; index++)
		put_unicoc_manually(sequence[index], uniout);
	return 0;
}
