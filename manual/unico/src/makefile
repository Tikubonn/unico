
all:
	make -C script
	make is_spacing_combining_unico.c
	make is_non_spacing_combining_unico.c
	make is_enclosing_combining_unico.c

is_spacing_combining_unico.c: script/dist/is_spacing_combining_unico.c
	cp script/dist/is_spacing_combining_unico.c is_spacing_combining_unico.c

is_non_spacing_combining_unico.c: script/dist/is_non_spacing_combining_unico.c
	cp script/dist/is_non_spacing_combining_unico.c is_non_spacing_combining_unico.c

is_enclosing_combining_unico.c: script/dist/is_enclosing_combining_unico.c
	cp script/dist/is_enclosing_combining_unico.c is_enclosing_combining_unico.c
