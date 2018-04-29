#include <unico.h>

void copy_to_unicos (unicos *uni, unicos *uniout){
	uniout->address = uni->address;
	uniout->address_beginning = uni->address_beginning;
	uniout->address_end = uni->address_end;
}
