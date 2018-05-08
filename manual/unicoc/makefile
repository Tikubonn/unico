
all:
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
	rm -f compiled/title_size_unicoc.o
	rm -f compiled/title_unicoc_manually.o
	rm -f compiled/upcase_size_unicoc.o
	rm -f compiled/upcase_unicoc_manually.o

unicoc.lib: compiled/drop_unicoc.o compiled/drops_unicoc.o compiled/get_unicoc.o compiled/has_base_unicoc.o compiled/has_combining_unicoc.o compiled/has_enclosing_combining_unicoc.o compiled/has_non_spacing_combining_unicoc.o compiled/has_spacing_combining_unicoc.o compiled/init_unicoc.o compiled/insert_unicoc_manually.o compiled/inserts_unicoc_manually.o compiled/sub_all_unicoc_manually.o compiled/sub_unicoc_manually.o compiled/set_unicoc.o compiled/size_unicoc.o compiled/has_margin_unicoc.o compiled/downcase_size_unicoc.o compiled/downcase_unicoc_manually.o compiled/foldcase_size_unicoc.o compiled/foldcase_unicoc_manually.o compiled/normalize_nfc_size_unicoc.o compiled/normalize_nfc_unicoc_manually.o compiled/normalize_nfd_size_unicoc.o compiled/normalize_nfd_unicoc_manually.o compiled/normalize_nfkc_size_unicoc.o compiled/normalize_nfkc_unicoc_manually.o compiled/normalize_nfkd_size_unicoc.o compiled/normalize_nfkd_unicoc_manually.o compiled/title_size_unicoc.o compiled/title_unicoc_manually.o compiled/upcase_size_unicoc.o compiled/upcase_unicoc_manually.o
	ar r unicoc.lib compiled/drop_unicoc.o compiled/drops_unicoc.o compiled/get_unicoc.o compiled/has_base_unicoc.o compiled/has_combining_unicoc.o compiled/has_enclosing_combining_unicoc.o compiled/has_non_spacing_combining_unicoc.o compiled/has_spacing_combining_unicoc.o compiled/init_unicoc.o compiled/insert_unicoc_manually.o compiled/inserts_unicoc_manually.o compiled/sub_all_unicoc_manually.o compiled/sub_unicoc_manually.o compiled/set_unicoc.o compiled/size_unicoc.o compiled/has_margin_unicoc.o compiled/downcase_size_unicoc.o compiled/downcase_unicoc_manually.o compiled/foldcase_size_unicoc.o compiled/foldcase_unicoc_manually.o compiled/normalize_nfc_size_unicoc.o compiled/normalize_nfc_unicoc_manually.o compiled/normalize_nfd_size_unicoc.o compiled/normalize_nfd_unicoc_manually.o compiled/normalize_nfkc_size_unicoc.o compiled/normalize_nfkc_unicoc_manually.o compiled/normalize_nfkd_size_unicoc.o compiled/normalize_nfkd_unicoc_manually.o compiled/title_size_unicoc.o compiled/title_unicoc_manually.o compiled/upcase_size_unicoc.o compiled/upcase_unicoc_manually.o

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

compiled/title_size_unicoc.o: src-convertion/title_size_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/title_size_unicoc.c -o compiled/title_size_unicoc.o

compiled/title_unicoc_manually.o: src-convertion/title_unicoc_manually.c
	$(CC) $(CFLAGS) -c src-convertion/title_unicoc_manually.c -o compiled/title_unicoc_manually.o

compiled/upcase_size_unicoc.o: src-convertion/upcase_size_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/upcase_size_unicoc.c -o compiled/upcase_size_unicoc.o

compiled/upcase_unicoc_manually.o: src-convertion/upcase_unicoc_manually.c
	$(CC) $(CFLAGS) -c src-convertion/upcase_unicoc_manually.c -o compiled/upcase_unicoc_manually.o
