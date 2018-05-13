
all:
	make unico.lib 

update:
	make -C src update

clean:
	rm -f unico.lib
	rm -f compiled/is_base_unico.o
	rm -f compiled/is_combining_unico.o
	rm -f compiled/is_enclosing_combining_unico.o
	rm -f compiled/is_non_spacing_combining_unico.o
	rm -f compiled/is_spacing_combining_unico.o

unico.lib: compiled/is_base_unico.o compiled/is_combining_unico.o compiled/is_enclosing_combining_unico.o compiled/is_non_spacing_combining_unico.o compiled/is_spacing_combining_unico.o
	ar r unico.lib compiled/is_base_unico.o compiled/is_combining_unico.o compiled/is_enclosing_combining_unico.o compiled/is_non_spacing_combining_unico.o compiled/is_spacing_combining_unico.o

compiled/is_base_unico.o: src/is_base_unico.c
	$(CC) $(CFLAGS) -c src/is_base_unico.c -o compiled/is_base_unico.o

compiled/is_combining_unico.o: src/is_combining_unico.c
	$(CC) $(CFLAGS) -c src/is_combining_unico.c -o compiled/is_combining_unico.o

compiled/is_enclosing_combining_unico.o: src/is_enclosing_combining_unico.c
	$(CC) $(CFLAGS) -c src/is_enclosing_combining_unico.c -o compiled/is_enclosing_combining_unico.o

compiled/is_non_spacing_combining_unico.o: src/is_non_spacing_combining_unico.c
	$(CC) $(CFLAGS) -c src/is_non_spacing_combining_unico.c -o compiled/is_non_spacing_combining_unico.o

compiled/is_spacing_combining_unico.o: src/is_spacing_combining_unico.c
	$(CC) $(CFLAGS) -c src/is_spacing_combining_unico.c -o compiled/is_spacing_combining_unico.o
