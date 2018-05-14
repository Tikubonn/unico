#include <unico.h>
#include <stddef.h>

unicos *join_unicos (unicos **sentences, size_t size, unicos *separator){
	size_t si = join_size_unicos(sequences, size, separator);
	unicos *uniout = make_unicos(si);
	if (uniout == NULL) return NULL;
	join_unicos_manually(sentences, size, separator, uniout);
	return uniout;
}
