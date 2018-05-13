
all:
	make unicob.lib

update:

clean:
	rm -f unicob.lib
	rm -f compiled/make_unicob.o
	rm -f compiled/copy_unicob.o
	rm -f compiled/extend_unicob.o
	rm -f compiled/put_unicob.o
	rm -f compiled/write_unicob.o
	rm -f compiled/free_unicob.o

unicob.lib: compiled/make_unicob.o compiled/copy_unicob.o compiled/extend_unicob.o compiled/put_unicob.o compiled/write_unicob.o compiled/free_unicob.o
	ar r unicob.lib compiled/make_unicob.o compiled/copy_unicob.o compiled/extend_unicob.o compiled/put_unicob.o compiled/write_unicob.o compiled/free_unicob.o

compiled/make_unicob.o: src/make_unicob.c
	$(CC) $(CFLAGS) -c src/make_unicob.c -o compiled/make_unicob.o

compiled/copy_unicob.o: src/copy_unicob.c
	$(CC) $(CFLAGS) -c src/copy_unicob.c -o compiled/copy_unicob.o

compiled/extend_unicob.o: src/extend_unicob.c
	$(CC) $(CFLAGS) -c src/extend_unicob.c -o compiled/extend_unicob.o

compiled/put_unicob.o: src/put_unicob.c
	$(CC) $(CFLAGS) -c src/put_unicob.c -o compiled/put_unicob.o

compiled/write_unicob.o: src/write_unicob.c
	$(CC) $(CFLAGS) -c src/write_unicob.c -o compiled/write_unicob.o

compiled/free_unicob.o: src/free_unicob.c
	$(CC) $(CFLAGS) -c src/free_unicob.c -o compiled/free_unicob.o
