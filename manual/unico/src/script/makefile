
all:
	make dist/is_spacing_combining_unico.c
	make dist/is_non_spacing_combining_unico.c
	make dist/is_enclosing_combining_unico.c
	make dist/is_whitespace_unico.c

lib_generator := lib/generator/predicate_function.py
lib := $(lib_generator)

dist/is_spacing_combining_unico.c: is_spacing_combining_unico.py $(lib)
	$(PYTHON) is_spacing_combining_unico.py

dist/is_non_spacing_combining_unico.c: is_non_spacing_combining_unico.py $(lib)
	$(PYTHON) is_non_spacing_combining_unico.py

dist/is_enclosing_combining_unico.c: is_enclosing_combining_unico.py $(lib)
	$(PYTHON) is_enclosing_combining_unico.py

dist/is_whitespace_unico.c: is_whitespace_unico.py $(lib)
	$(PYTHON) is_whitespace_unico.py
