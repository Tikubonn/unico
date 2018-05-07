#include <unico.h>
#include <stddef.h>

/* prototypes */

static int next_unicos_before (size_t, unicos*, size_t*);
static int next_unicos_current (size_t, unicos*, size_t*);
static int next_unicos_after (size_t, unicos*, size_t*);

/* b?...c */

static int next_unicos_before (size_t index, unicos *uni, size_t *indexout){
	size_t size = size_unicos(uni);
	if (index < size){
		unico code = get_unicos(index, uni);
		if (is_combining_unico(code)){
			if (is_spacing_combining_unico(code))
				return next_unicos_before(index +1, uni, indexout);
			return 1;
		}
		if (is_base_unico(code))
			return next_unicos_current(index +1, uni, indexout);
		return 1;
	}
	return 1;
}

/* ca?... */

static int next_unicos_current (size_t index, unicos *uni, size_t *indexout){
	size_t size = size_unicos(uni);
	if (index < size){
		unico code = get_unicos(index, uni);
		if (is_combining_unico(code)){
			if (is_spacing_combining_unico(code))
				return 1;
			return next_unicos_after(index +1, uni, indexout);
		}
		if (is_base_unico(code)){
			*indexout = index;
			return 0;
		}
		return 1;
	}
	*indexout = index;
	return 0;
}

/* a...b or a...c or a... */

static int next_unicos_after (size_t index, unicos *uni, size_t *indexout){
	size_t size = size_unicos(uni);
	if (index < size){
		unico code = get_unicos(index, uni);
		if (is_combining_unico(code)){
			if (is_spacing_combining_unico(code)){
				*indexout = index;
				return 0;
			}
			return next_unicos_after(index +1, uni, indexout);
		}
		if (is_base_unico(code)){
			*indexout = index;
			return 0;
		}
		return 1;
	}
	*indexout = index;
	return 0;
}

/* a?...cb?... */

int next_unicos (size_t index, unicos *uni, size_t *indexout){
	size_t size = size_unicos(uni);
	if (index < size)
		return next_unicos_before(index, uni, indexout);
	*indexout = index;
	return 0;
}
