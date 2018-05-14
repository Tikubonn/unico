#include <unico.h>
#include <stddef.h>
#define max(a,b) ((a)<(b)?(b):(a))

unicos *normalized_nfd_unicos (unicos *uni){
  size_t sizea = normalize_nfd_size_unicos(0, -1, uni);
	size_t sizeb = size_unicos(uni);
	size_t size = max(sizea, sizeb);
  unicos *uniout = make_unicos(size);
  if (uniout == NULL){
		return NULL;
	}
	int status1 = copy_unicos_manually(uni, uniout);
	if (status1){
		free_unicos(uniout);
		return NULL;
	}
  int status2 = normalize_nfd_unicos_manually(0, -1, uniout);
	if (status2){
		free_unicos(uniout);
		return NULL;
	}
  return uniout;
}
