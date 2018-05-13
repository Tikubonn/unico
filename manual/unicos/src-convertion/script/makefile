
all:
	make dist/downcase_unicos_manually_in.c
	make dist/upcase_unicos_manually_in.c
	make dist/foldcase_unicos_manually_in.c
	make dist/titlecase_unicos_manually_in.c
	make dist/normalize_nfc_unicos_manually_in.c
	make dist/normalize_nfd_unicos_manually_in.c
	make dist/normalize_nfkc_unicos_manually_in.c
	make dist/normalize_nfkd_unicos_manually_in.c
	make dist/downcase_size_unicos_in.c
	make dist/upcase_size_unicos_in.c
	make dist/foldcase_size_unicos_in.c
	make dist/titlecase_size_unicos_in.c
	make dist/normalize_nfc_size_unicos_in.c
	make dist/normalize_nfd_size_unicos_in.c
	make dist/normalize_nfkc_size_unicos_in.c
	make dist/normalize_nfkd_size_unicos_in.c
	make dist/is_downcase_unicos_in.c
	make dist/is_upcase_unicos_in.c
	make dist/is_foldcase_unicos_in.c
	make dist/is_titlecase_unicos_in.c
	make dist/is_normalize_nfc_unicos_in.c
	make dist/is_normalize_nfd_unicos_in.c
	make dist/is_normalize_nfkc_unicos_in.c
	make dist/is_normalize_nfkd_unicos_in.c
	
lib_generator := lib/generator/convert_function.py lib/generator/size_function.py lib/generator/predicate_function.py
lib := lib/node.py lib/generator $(lib_generator)
json := json/unicode-normalization.json json/unicode-case.json

dist/downcase_size_unicos_in.c: downcase_size_unicos_in.py $(json) $(lib)
	$(PYTHON) downcase_size_unicos_in.py

dist/upcase_size_unicos_in.c: upcase_size_unicos_in.py $(json) $(lib)
	$(PYTHON) upcase_size_unicos_in.py

dist/foldcase_size_unicos_in.c: foldcase_size_unicos_in.py $(json) $(lib)
	$(PYTHON) foldcase_size_unicos_in.py

dist/titlecase_size_unicos_in.c: titlecase_size_unicos_in.py $(json) $(lib)
	$(PYTHON) titlecase_size_unicos_in.py

dist/normalize_nfc_size_unicos_in.c: normalize_nfc_size_unicos_in.py $(json) $(lib)
	$(PYTHON) normalize_nfc_size_unicos_in.py

dist/normalize_nfd_size_unicos_in.c: normalize_nfd_size_unicos_in.py $(json) $(lib)
	$(PYTHON) normalize_nfd_size_unicos_in.py

dist/normalize_nfkc_size_unicos_in.c: normalize_nfkc_size_unicos_in.py $(json) $(lib)
	$(PYTHON) normalize_nfkc_size_unicos_in.py

dist/normalize_nfkd_size_unicos_in.c: normalize_nfkd_size_unicos_in.py $(json) $(lib)
	$(PYTHON) normalize_nfkd_size_unicos_in.py

dist/downcase_unicos_manually_in.c: downcase_unicos_manually_in.py $(json) $(lib)
	$(PYTHON) downcase_unicos_manually_in.py

dist/upcase_unicos_manually_in.c: upcase_unicos_manually_in.py $(json) $(lib)
	$(PYTHON) upcase_unicos_manually_in.py

dist/foldcase_unicos_manually_in.c: foldcase_unicos_manually_in.py $(json) $(lib)
	$(PYTHON) foldcase_unicos_manually_in.py

dist/titlecase_unicos_manually_in.c: titlecase_unicos_manually_in.py $(json) $(lib)
	$(PYTHON) titlecase_unicos_manually_in.py

dist/normalize_nfc_unicos_manually_in.c: normalize_nfc_unicos_manually_in.py $(json) $(lib)
	$(PYTHON) normalize_nfc_unicos_manually_in.py

dist/normalize_nfd_unicos_manually_in.c: normalize_nfd_unicos_manually_in.py $(json) $(lib)
	$(PYTHON) normalize_nfd_unicos_manually_in.py

dist/normalize_nfkc_unicos_manually_in.c: normalize_nfkc_unicos_manually_in.py $(json) $(lib)
	$(PYTHON) normalize_nfkc_unicos_manually_in.py

dist/normalize_nfkd_unicos_manually_in.c: normalize_nfkd_unicos_manually_in.py $(json) $(lib)
	$(PYTHON) normalize_nfkd_unicos_manually_in.py

dist/is_downcase_unicos_in.c: is_downcase_unicos_in.py $(json) $(lib)
	$(PYTHON) is_downcase_unicos_in.py

dist/is_upcase_unicos_in.c: is_upcase_unicos_in.py $(json) $(lib)
	$(PYTHON) is_upcase_unicos_in.py

dist/is_foldcase_unicos_in.c: is_foldcase_unicos_in.py $(json) $(lib)
	$(PYTHON) is_foldcase_unicos_in.py

dist/is_titlecase_unicos_in.c: is_titlecase_unicos_in.py $(json) $(lib)
	$(PYTHON) is_titlecase_unicos_in.py

dist/is_normalize_nfc_unicos_in.c: is_normalize_nfc_unicos_in.py $(json) $(lib)
	$(PYTHON) is_normalize_nfc_unicos_in.py

dist/is_normalize_nfd_unicos_in.c: is_normalize_nfd_unicos_in.py $(json) $(lib)
	$(PYTHON) is_normalize_nfd_unicos_in.py

dist/is_normalize_nfkc_unicos_in.c: is_normalize_nfkc_unicos_in.py $(json) $(lib)
	$(PYTHON) is_normalize_nfkc_unicos_in.py

dist/is_normalize_nfkd_unicos_in.c: is_normalize_nfkd_unicos_in.py $(json) $(lib)
	$(PYTHON) is_normalize_nfkd_unicos_in.py
