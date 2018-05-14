
all:
	make unicos.lib

update:
	
clean:
	rm -f unicos.lib
	rm -f compiled/make_unicos.o
	rm -f compiled/copy_unicos.o
	rm -f compiled/extend_unicos.o
	rm -f compiled/insert_unicos.o
	rm -f compiled/inserts_unicos.o
	rm -f compiled/sub_unicos.o
	rm -f compiled/upcase_unicos.o
	rm -f compiled/downcase_unicos.o
	rm -f compiled/foldcase_unicos.o
	rm -f compiled/titlecase_unicos.o
	rm -f compiled/normalize_nfc_unicos.o
	rm -f compiled/normalize_nfd_unicos.o
	rm -f compiled/normalize_nfkc_unicos.o
	rm -f compiled/normalize_nfkd_unicos.o
	rm -f compiled/free_unicos.o
	rm -f compiled/upcased_unicos.o
	rm -f compiled/downcased_unicos.o
	rm -f compiled/foldcased_unicos.o
	rm -f compiled/titlecased_unicos.o
	rm -f compiled/normalized_nfc_unicos.o
	rm -f compiled/normalized_nfd_unicos.o
	rm -f compiled/normalized_nfkc_unicos.o
	rm -f compiled/normalized_nfkd_unicos.o

unicos.lib: compiled/make_unicos.o compiled/copy_unicos.o compiled/extend_unicos.o compiled/insert_unicos.o compiled/inserts_unicos.o compiled/sub_unicos.o compiled/upcase_unicos.o compiled/downcase_unicos.o compiled/foldcase_unicos.o compiled/titlecase_unicos.o compiled/normalize_nfc_unicos.o compiled/normalize_nfd_unicos.o compiled/normalize_nfkc_unicos.o compiled/normalize_nfkd_unicos.o compiled/free_unicos.o compiled/upcased_unicos.o compiled/downcased_unicos.o compiled/foldcased_unicos.o compiled/titlecased_unicos.o compiled/normalized_nfc_unicos.o compiled/normalized_nfd_unicos.o compiled/normalized_nfkc_unicos.o compiled/normalized_nfkd_unicos.o
	ar r unicos.lib compiled/make_unicos.o compiled/copy_unicos.o compiled/extend_unicos.o compiled/insert_unicos.o compiled/inserts_unicos.o compiled/sub_unicos.o compiled/upcase_unicos.o compiled/downcase_unicos.o compiled/foldcase_unicos.o compiled/titlecase_unicos.o compiled/normalize_nfc_unicos.o compiled/normalize_nfd_unicos.o compiled/normalize_nfkc_unicos.o compiled/normalize_nfkd_unicos.o compiled/free_unicos.o compiled/upcased_unicos.o compiled/downcased_unicos.o compiled/foldcased_unicos.o compiled/titlecased_unicos.o compiled/normalized_nfc_unicos.o compiled/normalized_nfd_unicos.o compiled/normalized_nfkc_unicos.o compiled/normalized_nfkd_unicos.o

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

compiled/sub_unicos.o: src/sub_unicos.c
	$(CC) $(CFLAGS) -c src/sub_unicos.c -o compiled/sub_unicos.o

compiled/upcase_unicos.o: src-convertion/upcase_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/upcase_unicos.c -o compiled/upcase_unicos.o

compiled/downcase_unicos.o: src-convertion/downcase_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/downcase_unicos.c -o compiled/downcase_unicos.o

compiled/foldcase_unicos.o: src-convertion/foldcase_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/foldcase_unicos.c -o compiled/foldcase_unicos.o

compiled/titlecase_unicos.o: src-convertion/titlecase_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/titlecase_unicos.c -o compiled/titlecase_unicos.o

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

compiled/upcased_unicos.o: src-convertion/upcased_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/upcased_unicos.c -o compiled/upcased_unicos.o

compiled/downcased_unicos.o: src-convertion/downcased_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/downcased_unicos.c -o compiled/downcased_unicos.o

compiled/foldcased_unicos.o: src-convertion/foldcased_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/foldcased_unicos.c -o compiled/foldcased_unicos.o

compiled/titlecased_unicos.o: src-convertion/titlecased_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/titlecased_unicos.c -o compiled/titlecased_unicos.o

compiled/normalized_nfc_unicos.o: src-convertion/normalized_nfc_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/normalized_nfc_unicos.c -o compiled/normalized_nfc_unicos.o

compiled/normalized_nfd_unicos.o: src-convertion/normalized_nfd_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/normalized_nfd_unicos.c -o compiled/normalized_nfd_unicos.o

compiled/normalized_nfkc_unicos.o: src-convertion/normalized_nfkc_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/normalized_nfkc_unicos.c -o compiled/normalized_nfkc_unicos.o

compiled/normalized_nfkd_unicos.o: src-convertion/normalized_nfkd_unicos.c
	$(CC) $(CFLAGS) -c src-convertion/normalized_nfkd_unicos.c -o compiled/normalized_nfkd_unicos.o
