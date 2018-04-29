#include <unico.h>
#include <stddef.h>

int write_unicos_manually (unico *sequence, size_t size, unicos *uniout){
	if (has_margins_unicos(size, uniout) == 0)
		return UNICOS_NOT_ENOUGH_MEMORY;
	size_t index;
	for (index = 0; index < size; index++)
		put_unicos_manually(sequence[index], uniout);
	return 0;
}
