
all:
	make unicos.lib
	
clean:
	rm -f unicos.lib
	rm -f compiled/make_unicos.o
	rm -f compiled/copy_unicos.o
	rm -f compiled/extend_unicos.o
	rm -f compiled/insert_unicos.o
	rm -f compiled/inserts_unicos.o
	rm -f compiled/replace_unicos.o
	rm -f compiled/upcase_unicos.o
	rm -f compiled/downcase_unicos.o
	rm -f compiled/foldcase_unicos.o
	rm -f compiled/title_unicos.o
	rm -f compiled/normalize_nfc_unicos.o
	rm -f compiled/normalize_nfd_unicos.o
	rm -f compiled/normalize_nfkc_unicos.o
	rm -f compiled/normalize_nfkd_unicos.o
	rm -f compiled/free_unicos.o

unicos.lib: compiled/make_unicos.o compiled/copy_unicos.o compiled/extend_unicos.o compiled/insert_unicos.o compiled/inserts_unicos.o compiled/replace_unicos.o compiled/upcase_unicos.o compiled/downcase_unicos.o compiled/foldcase_unicos.o compiled/title_unicos.o compiled/normalize_nfc_unicos.o compiled/normalize_nfd_unicos.o compiled/normalize_nfkc_unicos.o compiled/normalize_nfkd_unicos.o compiled/free_unicos.o
	ar r unicos.lib compiled/make_unicos.o compiled/copy_unicos.o compiled/extend_unicos.o compiled/insert_unicos.o compiled/inserts_unicos.o compiled/replace_unicos.o compiled/upcase_unicos.o compiled/downcase_unicos.o compiled/foldcase_unicos.o compiled/title_unicos.o compiled/normalize_nfc_unicos.o compiled/normalize_nfd_unicos.o compiled/normalize_nfkc_unicos.o compiled/normalize_nfkd_unicos.o compiled/free_unicos.o

compiled/make_unicos.o: src/make_unicos.c
	$(CC) $(CFLAGS) -c src/make_unicos.c -o compiled/make_unicos.o

compiled/copy_unicos.o: src/copy_unicos.c
	$(CC) $(CFLAGS) -c src/copy_unicos.c -o compiled/copy_unicos.o

compiled/extend_unicos.o: src/extend_unicos.c
	$(CC) $(CFLAGS) -c src/extend_unicos.c -o compiled/extend_unicos.o

compiled/insert_unicos.o: src/insert_unicos.c
	$(CC) $(CFLAGS) -c src/insert_unicos.c -o compiled/insert_unicos.o

compiled/inserts_unicos.o: src/inserts_unicos.c
	$(CC) $(CFLAGS) -c src/inserts_unicos.c -o compiled/inserts_unicos.o

compiled/replace_unicos.o: src/replace_unicos.c
	$(CC) $(CFLAGS) -c src/replace_unicos.c -o compiled/replace_unicos.o

compiled/upcase_unicos.o: src-convertion/upcase_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/upcase_unicos.c -o compiled/upcase_unicos.o

compiled/downcase_unicos.o: src-convertion/downcase_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/downcase_unicos.c -o compiled/downcase_unicos.o

compiled/foldcase_unicos.o: src-convertion/foldcase_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/foldcase_unicos.c -o compiled/foldcase_unicos.o

compiled/title_unicos.o: src-convertion/title_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/title_unicos.c -o compiled/title_unicos.o

compiled/normalize_nfc_unicos.o: src-convertion/normalize_nfc_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfc_unicos.c -o compiled/normalize_nfc_unicos.o

compiled/normalize_nfd_unicos.o: src-convertion/normalize_nfd_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfd_unicos.c -o compiled/normalize_nfd_unicos.o

compiled/normalize_nfkc_unicos.o: src-convertion/normalize_nfkc_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfkc_unicos.c -o compiled/normalize_nfkc_unicos.o

compiled/normalize_nfkd_unicos.o: src-convertion/normalize_nfkd_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfkd_unicos.c -o compiled/normalize_nfkd_unicos.o

compiled/free_unicos.o: src/free_unicos.c
	$(CC) $(CFLAGS) -c src/free_unicos.c -o compiled/free_unicos.o
