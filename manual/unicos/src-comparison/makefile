
all:

update:
	make -C script update
	make equal_unicos_as_secondary.c
	make equal_unicos_as_tertiary.c
	make equal_unicos_as_quaternary.c
	make equal_unicos_as_expansion_primary.c
	make equal_unicos_as_expansion_secondary.c
	make equal_unicos_as_expansion_tertiary.c
	make equal_unicos_as_expansion_quaternary.c

equal_unicos_as_secondary.c: script/dist/equal_unicos_as_secondary.c
	cp script/dist/equal_unicos_as_secondary.c equal_unicos_as_secondary.c

equal_unicos_as_tertiary.c: script/dist/equal_unicos_as_tertiary.c
	cp script/dist/equal_unicos_as_tertiary.c equal_unicos_as_tertiary.c

equal_unicos_as_quaternary.c: script/dist/equal_unicos_as_quaternary.c
	cp script/dist/equal_unicos_as_quaternary.c equal_unicos_as_quaternary.c

equal_unicos_as_expansion_primary.c: script/dist/equal_unicos_as_expansion_primary.c
	cp script/dist/equal_unicos_as_expansion_primary.c equal_unicos_as_expansion_primary.c

equal_unicos_as_expansion_secondary.c: script/dist/equal_unicos_as_expansion_secondary.c
	cp script/dist/equal_unicos_as_expansion_secondary.c equal_unicos_as_expansion_secondary.c

equal_unicos_as_expansion_tertiary.c: script/dist/equal_unicos_as_expansion_tertiary.c
	cp script/dist/equal_unicos_as_expansion_tertiary.c equal_unicos_as_expansion_tertiary.c

equal_unicos_as_expansion_quaternary.c: script/dist/equal_unicos_as_expansion_quaternary.c
	cp script/dist/equal_unicos_as_expansion_quaternary.c equal_unicos_as_expansion_quaternary.c
