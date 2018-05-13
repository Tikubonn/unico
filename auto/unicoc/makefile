
all:
	make unicoc.lib

update:
	
clean:
	rm -f unicoc.lib
	rm -f compiled/extend_unicoc.o
	rm -f compiled/insert_unicoc.o
	rm -f compiled/inserts_unicoc.o
	rm -f compiled/sub_unicoc.o
	rm -f compiled/upcase_unicoc.o
	rm -f compiled/downcase_unicoc.o
	rm -f compiled/foldcase_unicoc.o
	rm -f compiled/titlecase_unicoc.o
	rm -f compiled/normalize_nfc_unicoc.o
	rm -f compiled/normalize_nfd_unicoc.o
	rm -f compiled/normalize_nfkc_unicoc.o
	rm -f compiled/normalize_nfkd_unicoc.o

unicoc.lib: compiled/extend_unicoc.o compiled/insert_unicoc.o compiled/inserts_unicoc.o compiled/sub_unicoc.o compiled/upcase_unicoc.o compiled/downcase_unicoc.o compiled/foldcase_unicoc.o compiled/titlecase_unicoc.o compiled/normalize_nfc_unicoc.o compiled/normalize_nfd_unicoc.o compiled/normalize_nfkc_unicoc.o compiled/normalize_nfkd_unicoc.o
	ar r unicoc.lib compiled/extend_unicoc.o compiled/insert_unicoc.o compiled/inserts_unicoc.o compiled/sub_unicoc.o compiled/upcase_unicoc.o compiled/downcase_unicoc.o compiled/foldcase_unicoc.o compiled/titlecase_unicoc.o compiled/normalize_nfc_unicoc.o compiled/normalize_nfd_unicoc.o compiled/normalize_nfkc_unicoc.o compiled/normalize_nfkd_unicoc.o

compiled/extend_unicoc.o: src/extend_unicoc.c
	$(CC) $(CFLAGS) -c src/extend_unicoc.c -o compiled/extend_unicoc.o

compiled/insert_unicoc.o: src/insert_unicoc.c
	$(CC) $(CFLAGS) -c src/insert_unicoc.c -o compiled/insert_unicoc.o

compiled/inserts_unicoc.o: src/inserts_unicoc.c
	$(CC) $(CFLAGS) -c src/inserts_unicoc.c -o compiled/inserts_unicoc.o

compiled/sub_unicoc.o: src/sub_unicoc.c
	$(CC) $(CFLAGS) -c src/sub_unicoc.c -o compiled/sub_unicoc.o

compiled/upcase_unicoc.o: src-convertion/upcase_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/upcase_unicoc.c -o compiled/upcase_unicoc.o

compiled/downcase_unicoc.o: src-convertion/downcase_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/downcase_unicoc.c -o compiled/downcase_unicoc.o

compiled/foldcase_unicoc.o: src-convertion/foldcase_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/foldcase_unicoc.c -o compiled/foldcase_unicoc.o

compiled/titlecase_unicoc.o: src-convertion/titlecase_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/titlecase_unicoc.c -o compiled/titlecase_unicoc.o

compiled/normalize_nfc_unicoc.o: src-convertion/normalize_nfc_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfc_unicoc.c -o compiled/normalize_nfc_unicoc.o

compiled/normalize_nfd_unicoc.o: src-convertion/normalize_nfd_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfd_unicoc.c -o compiled/normalize_nfd_unicoc.o

compiled/normalize_nfkc_unicoc.o: src-convertion/normalize_nfkc_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfkc_unicoc.c -o compiled/normalize_nfkc_unicoc.o

compiled/normalize_nfkd_unicoc.o: src-convertion/normalize_nfkd_unicoc.c
	$(CC) $(CFLAGS) -c src-convertion/normalize_nfkd_unicoc.c -o compiled/normalize_nfkd_unicoc.o
