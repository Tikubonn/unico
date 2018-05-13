#include <unico.h>

int unequalp_unicoc (unicoc *unia, unicoc *unib){
	return !equalp_unicoc(unia, unib);
}
