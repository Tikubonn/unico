#include <unico.h>

int unequal_unicoc (unicoc *unia, unicoc *unib){
	return !equal_unicoc(unia, unib);
}
