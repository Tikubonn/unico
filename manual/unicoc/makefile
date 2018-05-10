
all:
	make -C src-groups
	make unicoc.lib

clean:
	rm -f unicoc.lib
	rm -f compiled/drop_unicoc.o
	rm -f compiled/drops_unicoc.o
	rm -f compiled/get_unicoc.o
	rm -f compiled/has_base_unicoc.o
	rm -f compiled/has_combining_unicoc.o
	rm -f compiled/has_enclosing_combining_unicoc.o
	rm -f compiled/has_non_spacing_combining_unicoc.o
	rm -f compiled/has_spacing_combining_unicoc.o
	rm -f compiled/init_unicoc.o
	rm -f compiled/insert_unicoc_manually.o
	rm -f compiled/inserts_unicoc_manually.o
	rm -f compiled/sub_all_unicoc_manually.o
	rm -f compiled/sub_unicoc_manually.o
	rm -f compiled/set_unicoc.o
	rm -f compiled/size_unicoc.o
	rm -f compiled/has_margin_unicoc.o
	rm -f compiled/downcase_size_unicoc.o
	rm -f compiled/downcase_unicoc_manually.o
	rm -f compiled/foldcase_size_unicoc.o
	rm -f compiled/foldcase_unicoc_manually.o
	rm -f compiled/normalize_nfc_size_unicoc.o
	rm -f compiled/normalize_nfc_unicoc_manually.o
	rm -f compiled/normalize_nfd_size_unicoc.o
	rm -f compiled/normalize_nfd_unicoc_manually.o
	rm -f compiled/normalize_nfkc_size_unicoc.o
	rm -f compiled/normalize_nfkc_unicoc_manually.o
	rm -f compiled/normalize_nfkd_size_unicoc.o
	rm -f compiled/normalize_nfkd_unicoc_manually.o
	rm -f compiled/titlecase_size_unicoc.o
	rm -f compiled/titlecase_unicoc_manually.o
	rm -f compiled/upcase_size_unicoc.o
	rm -f compiled/upcase_unicoc_manually.o
	rm -f compiled/equal_unicoc_as_primary.o
	rm -f compiled/equal_unicoc_as_secondary.o
	rm -f compiled/equal_unicoc_as_tertiary.o
	rm -f compiled/equal_unicoc_as_quaternary.o
	rm -f compiled/equal_unicoc_as_expansion_primary.o
	rm -f compiled/equal_unicoc_as_expansion_secondary.o
	rm -f compiled/equal_unicoc_as_expansion_tertiary.o
	rm -f compiled/equal_unicoc_as_expansion_quaternary.o
	make -C src-groups clean
	rm -f compiled/is_downcase_unicoc.o
	rm -f compiled/is_foldcase_unicoc.o
	rm -f compiled/is_normalize_nfc_unicoc.o
	rm -f compiled/is_normalize_nfd_unicoc.o
	rm -f compiled/is_normalize_nfkc_unicoc.o
	rm -f compiled/is_normalize_nfkd_unicoc.o
	rm -f compiled/is_downcase_unicoc.o
	rm -f compiled/is_titlecase_unicoc.o

unicoc.lib: compiled/drop_unicoc.o compiled/drops_unicoc.o compiled/get_unicoc.o compiled/has_base_unicoc.o compiled/has_combining_unicoc.o compiled/has_enclosing_combining_unicoc.o compiled/has_non_spacing_combining_unicoc.o compiled/has_spacing_combining_unicoc.o compiled/init_unicoc.o compiled/insert_unicoc_manually.o compiled/inserts_unicoc_manually.o compiled/sub_all_unicoc_manually.o compiled/sub_unicoc_manually.o compiled/set_unicoc.o compiled/size_unicoc.o compiled/has_margin_unicoc.o compiled/downcase_size_unicoc.o compiled/downcase_unicoc_manually.o compiled/foldcase_size_unicoc.o compiled/foldcase_unicoc_manually.o compiled/normalize_nfc_size_unicoc.o compiled/normalize_nfc_unicoc_manually.o compiled/normalize_nfd_size_unicoc.o compiled/normalize_nfd_unicoc_manually.o compiled/normalize_nfkc_size_unicoc.o compiled/normalize_nfkc_unicoc_manually.o compiled/normalize_nfkd_size_unicoc.o compiled/normalize_nfkd_unicoc_manually.o compiled/titlecase_size_unicoc.o compiled/titlecase_unicoc_manually.o compiled/upcase_size_unicoc.o compiled/upcase_unicoc_manually.o compiled/equal_unicoc_as_primary.o compiled/equal_unicoc_as_secondary.o compiled/equal_unicoc_as_tertiary.o compiled/equal_unicoc_as_quaternary.o compiled/equal_unicoc_as_expansion_primary.o compiled/equal_unicoc_as_expansion_secondary.o compiled/equal_unicoc_as_expansion_tertiary.o compiled/equal_unicoc_as_expansion_quaternary.o compiled/is_downcase_unicoc.o compiled/is_foldcase_unicoc.o compiled/is_normalize_nfc_unicoc.o compiled/is_normalize_nfd_unicoc.o compiled/is_normalize_nfkc_unicoc.o compiled/is_normalize_nfkd_unicoc.o compiled/is_downcase_unicoc.o compiled/is_titlecase_unicoc.o
	ar r unicoc.lib compiled/drop_unicoc.o compiled/drops_unicoc.o compiled/get_unicoc.o compiled/has_base_unicoc.o compiled/has_combining_unicoc.o compiled/has_enclosing_combining_unicoc.o compiled/has_non_spacing_combining_unicoc.o compiled/has_spacing_combining_unicoc.o compiled/init_unicoc.o compiled/insert_unicoc_manually.o compiled/inserts_unicoc_manually.o compiled/sub_all_unicoc_manually.o compiled/sub_unicoc_manually.o compiled/set_unicoc.o compiled/size_unicoc.o compiled/has_margin_unicoc.o compiled/downcase_size_unicoc.o compiled/downcase_unicoc_manually.o compiled/foldcase_size_unicoc.o compiled/foldcase_unicoc_manually.o compiled/normalize_nfc_size_unicoc.o compiled/normalize_nfc_unicoc_manually.o compiled/normalize_nfd_size_unicoc.o compiled/normalize_nfd_unicoc_manually.o compiled/normalize_nfkc_size_unicoc.o compiled/normalize_nfkc_unicoc_manually.o compiled/normalize_nfkd_size_unicoc.o compiled/normalize_nfkd_unicoc_manually.o compiled/titlecase_size_unicoc.o compiled/titlecase_unicoc_manually.o compiled/upcase_size_unicoc.o compiled/upcase_unicoc_manually.o compiled/equal_unicoc_as_primary.o compiled/equal_unicoc_as_secondary.o compiled/equal_unicoc_as_tertiary.o compiled/equal_unicoc_as_quaternary.o compiled/equal_unicoc_as_expansion_primary.o compiled/equal_unicoc_as_expansion_secondary.o compiled/equal_unicoc_as_expansion_tertiary.o compiled/equal_unicoc_as_expansion_quaternary.o compiled/is_downcase_unicoc.o compiled/is_foldcase_unicoc.o compiled/is_normalize_nfc_unicoc.o compiled/is_normalize_nfd_unicoc.o compiled/is_normalize_nfkc_unicoc.o compiled/is_normalize_nfkd_unicoc.o compiled/is_downcase_unicoc.o compiled/is_titlecase_unicoc.o

compiled/drop_unicoc.o: src/drop_unicoc.c
	$(CC) $(CFLAGS) -c src/drop_unicoc.c -o compiled/drop_unicoc.o

compiled/drops_unicoc.o: src/drops_unicoc.c
	$(CC) $(CFLAGS) -c src/drops_unicoc.c -o compiled/drops_unicoc.o

compiled/get_unicoc.o: src/get_unicoc.c
	$(CC) $(CFLAGS) -c src/get_unicoc.c -o compiled/get_unicoc.o

compiled/has_base_unicoc.o: src/has_base_unicoc.c
	$(CC) $(CFLAGS) -c src/has_base_unicoc.c -o compiled/has_base_unicoc.o

compiled/has_combining_unicoc.o: src/has_combining_unicoc.c
	$(CC) $(CFLAGS) -c src/has_combining_unicoc.c -o compiled/has_combining_unicoc.o

compiled/has_enclosing_combining_unicoc.o: src/has_enclosing_combining_unicoc.c
	$(CC) $(CFLAGS) -c src/has_enclosing_combining_unicoc.c -o compiled/has_enclosing_combining_unicoc.o

compiled/has_non_spacing_combining_unicoc.o: src/has_non_spacing_combining_unicoc.c
	$(CC) $(CFLAGS) -c src/has_non_spacing_combining_unicoc.c -o compiled/has_non_spacing_combining_unicoc.o

compiled/has_spacing_combining_unicoc.o: src/has_spacing_combining_unicoc.c
	$(CC) $(CFLAGS) -c src/has_spacing_combining_unicoc.c -o compiled/has_spacing_combining_unicoc.o

compiled/init_unicoc.o: src/init_unicoc.c
	$(CC) $(CFLAGS) -c src/init_unicoc.c -o compiled/init_unicoc.o

compiled/insert_unicoc_manually.o: src/insert_unicoc_manually.c
	$(CC) $(CFLAGS) -c src/insert_unicoc_manually.c -o compiled/insert_unicoc_manually.o

compiled/inserts_unicoc_manually.o: src/inserts_unicoc_manually.c
	$(CC) $(CFLAGS) -c src/inserts_unicoc_manually.c -o compiled/inserts_unicoc_manually.o

compiled/sub_all_unicoc_manually.o: src/sub_all_unicoc_manually.c
	$(CC) $(CFLAGS) -c src/sub_all_unicoc_manually.c -o compiled/sub_all_unicoc_manually.o

compiled/sub_unicoc_manually.o: src/sub_unicoc_manually.c
	$(CC) $(CFLAGS) -c src/sub_unicoc_manually.c -o compiled/sub_unicoc_manually.o

compiled/set_unicoc.o: src/set_unicoc.c
	$(CC) $(CFLAGS) -c src/set_unicoc.c -o compiled/set_unicoc.o

compiled/size_unicoc.o: src/size_unicoc.c
	$(CC) $(CFLAGS) -c src/size_unicoc.c -o compiled/size_unicoc.o

compiled/has_margin_unicoc.o: src/has_margin_unicoc.c
	$(CC) $(CFLAGS) -c src/has_margin_unicoc.c -o compiled/has_margin_unicoc.o

compiled/downcase_size_unicoc.o: src-convertion/downcase_size_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/downcase_size_unicoc.c -o compiled/downcase_size_unicoc.o

compiled/downcase_unicoc_manually.o: src-convertion/downcase_unicoc_manually.c
	$(CC) $(CFLAGS) -c src-convertion/downcase_unicoc_manually.c -o compiled/downcase_unicoc_manually.o

compiled/foldcase_size_unicoc.o: src-convertion/foldcase_size_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/foldcase_size_unicoc.c -o compiled/foldcase_size_unicoc.o

compiled/foldcase_unicoc_manually.o: src-convertion/foldcase_unicoc_manually.c
	$(CC) $(CFLAGS) -c src-convertion/foldcase_unicoc_manually.c -o compiled/foldcase_unicoc_manually.o

compiled/normalize_nfc_size_unicoc.o: src-convertion/normalize_nfc_size_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfc_size_unicoc.c -o compiled/normalize_nfc_size_unicoc.o

compiled/normalize_nfc_unicoc_manually.o: src-convertion/normalize_nfc_unicoc_manually.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfc_unicoc_manually.c -o compiled/normalize_nfc_unicoc_manually.o

compiled/normalize_nfd_size_unicoc.o: src-convertion/normalize_nfd_size_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfd_size_unicoc.c -o compiled/normalize_nfd_size_unicoc.o

compiled/normalize_nfd_unicoc_manually.o: src-convertion/normalize_nfd_unicoc_manually.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfd_unicoc_manually.c -o compiled/normalize_nfd_unicoc_manually.o

compiled/normalize_nfkc_size_unicoc.o: src-convertion/normalize_nfkc_size_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfkc_size_unicoc.c -o compiled/normalize_nfkc_size_unicoc.o

compiled/normalize_nfkc_unicoc_manually.o: src-convertion/normalize_nfkc_unicoc_manually.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfkc_unicoc_manually.c -o compiled/normalize_nfkc_unicoc_manually.o

compiled/normalize_nfkd_size_unicoc.o: src-convertion/normalize_nfkd_size_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfkd_size_unicoc.c -o compiled/normalize_nfkd_size_unicoc.o

compiled/normalize_nfkd_unicoc_manually.o: src-convertion/normalize_nfkd_unicoc_manually.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfkd_unicoc_manually.c -o compiled/normalize_nfkd_unicoc_manually.o

compiled/titlecase_size_unicoc.o: src-convertion/titlecase_size_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/titlecase_size_unicoc.c -o compiled/titlecase_size_unicoc.o

compiled/titlecase_unicoc_manually.o: src-convertion/titlecase_unicoc_manually.c
	$(CC) $(CFLAGS) -c src-convertion/titlecase_unicoc_manually.c -o compiled/titlecase_unicoc_manually.o

compiled/upcase_size_unicoc.o: src-convertion/upcase_size_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/upcase_size_unicoc.c -o compiled/upcase_size_unicoc.o

compiled/upcase_unicoc_manually.o: src-convertion/upcase_unicoc_manually.c
	$(CC) $(CFLAGS) -c src-convertion/upcase_unicoc_manually.c -o compiled/upcase_unicoc_manually.o

compiled/equal_unicoc_as_primary.o: src-comparison/equal_unicoc_as_primary.c
	$(CC) $(CFLAGS) -c src-comparison/equal_unicoc_as_primary.c -o compiled/equal_unicoc_as_primary.o

compiled/equal_unicoc_as_secondary.o: src-comparison/equal_unicoc_as_secondary.c
	$(CC) $(CFLAGS) -c src-comparison/equal_unicoc_as_secondary.c -o compiled/equal_unicoc_as_secondary.o

compiled/equal_unicoc_as_tertiary.o: src-comparison/equal_unicoc_as_tertiary.c
	$(CC) $(CFLAGS) -c src-comparison/equal_unicoc_as_tertiary.c -o compiled/equal_unicoc_as_tertiary.o

compiled/equal_unicoc_as_quaternary.o: src-comparison/equal_unicoc_as_quaternary.c
	$(CC) $(CFLAGS) -c src-comparison/equal_unicoc_as_quaternary.c -o compiled/equal_unicoc_as_quaternary.o

compiled/equal_unicoc_as_expansion_primary.o: src-comparison/equal_unicoc_as_expansion_primary.c
	$(CC) $(CFLAGS) -c src-comparison/equal_unicoc_as_expansion_primary.c -o compiled/equal_unicoc_as_expansion_primary.o

compiled/equal_unicoc_as_expansion_secondary.o: src-comparison/equal_unicoc_as_expansion_secondary.c
	$(CC) $(CFLAGS) -c src-comparison/equal_unicoc_as_expansion_secondary.c -o compiled/equal_unicoc_as_expansion_secondary.o

compiled/equal_unicoc_as_expansion_tertiary.o: src-comparison/equal_unicoc_as_expansion_tertiary.c
	$(CC) $(CFLAGS) -c src-comparison/equal_unicoc_as_expansion_tertiary.c -o compiled/equal_unicoc_as_expansion_tertiary.o

compiled/equal_unicoc_as_expansion_quaternary.o: src-comparison/equal_unicoc_as_expansion_quaternary.c
	$(CC) $(CFLAGS) -c src-comparison/equal_unicoc_as_expansion_quaternary.c -o compiled/equal_unicoc_as_expansion_quaternary.o

compiled/is_downcase_unicoc.o: src-convertion/is_downcase_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/is_downcase_unicoc.c -o compiled/is_downcase_unicoc.o

compiled/is_foldcase_unicoc.o: src-convertion/is_foldcase_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/is_foldcase_unicoc.c -o compiled/is_foldcase_unicoc.o

compiled/is_normalize_nfc_unicoc.o: src-convertion/is_normalize_nfc_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/is_normalize_nfc_unicoc.c -o compiled/is_normalize_nfc_unicoc.o

compiled/is_normalize_nfd_unicoc.o: src-convertion/is_normalize_nfd_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/is_normalize_nfd_unicoc.c -o compiled/is_normalize_nfd_unicoc.o

compiled/is_normalize_nfkc_unicoc.o: src-convertion/is_normalize_nfkc_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/is_normalize_nfkc_unicoc.c -o compiled/is_normalize_nfkc_unicoc.o

compiled/is_normalize_nfkd_unicoc.o: src-convertion/is_normalize_nfkd_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/is_normalize_nfkd_unicoc.c -o compiled/is_normalize_nfkd_unicoc.o

compiled/is_downcase_unicoc.o: src-convertion/is_downcase_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/is_downcase_unicoc.c -o compiled/is_downcase_unicoc.o

compiled/is_titlecase_unicoc.o: src-convertion/is_titlecase_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/is_titlecase_unicoc.c -o compiled/is_titlecase_unicoc.o
