
all:
	make dist/equal_unicos_as_secondary.c
	make dist/equal_unicos_as_tertiary.c
	make dist/equal_unicos_as_quaternary.c
	make dist/equal_unicos_as_expansion_primary.c
	make dist/equal_unicos_as_expansion_secondary.c
	make dist/equal_unicos_as_expansion_tertiary.c
	make dist/equal_unicos_as_expansion_quaternary.c

lib_generator := lib/generator/compare_function.py
lib := lib/node.py $(lib_generator)
json := json/collation.json

dist/equal_unicos_as_secondary.c: equal_unicos_as_secondary.py $(lib) $(json)
	$(PYTHON) equal_unicos_as_secondary.py

dist/equal_unicos_as_tertiary.c: equal_unicos_as_tertiary.py $(lib) $(json)
	$(PYTHON) equal_unicos_as_tertiary.py

dist/equal_unicos_as_quaternary.c: equal_unicos_as_quaternary.py $(lib) $(json)
	$(PYTHON) equal_unicos_as_quaternary.py

dist/equal_unicos_as_expansion_primary.c: equal_unicos_as_expansion_primary.py $(lib) $(json)
	$(PYTHON) equal_unicos_as_expansion_primary.py

dist/equal_unicos_as_expansion_secondary.c: equal_unicos_as_expansion_secondary.py $(lib) $(json)
	$(PYTHON) equal_unicos_as_expansion_secondary.py

dist/equal_unicos_as_expansion_tertiary.c: equal_unicos_as_expansion_tertiary.py $(lib) $(json)
	$(PYTHON) equal_unicos_as_expansion_tertiary.py

dist/equal_unicos_as_expansion_quaternary.c: equal_unicos_as_expansion_quaternary.py $(lib) $(json)
	$(PYTHON) equal_unicos_as_expansion_quaternary.py
