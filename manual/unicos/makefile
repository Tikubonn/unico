
all:
	make unicos.lib
	
clean:
	rm -f unicos.lib
	rm -f compiled/init_unicos.o
	rm -f compiled/clear_unicos.o
	rm -f compiled/get_unicos.o
	rm -f compiled/put_unicos_manually.o
	rm -f compiled/has_margin_unicos.o
	rm -f compiled/size_unicos.o
	rm -f compiled/copy_unicos_manually.o
	rm -f compiled/write_unicos_manually.o
	rm -f compiled/copy_to_unicos.o
	
unicos.lib: compiled/init_unicos.o compiled/clear_unicos.o compiled/get_unicos.o compiled/put_unicos_manually.o compiled/has_margin_unicos.o compiled/size_unicos.o compiled/copy_unicos_manually.o compiled/write_unicos_manually.o compiled/copy_to_unicos.o
	ar r unicos.lib compiled/init_unicos.o compiled/clear_unicos.o compiled/get_unicos.o compiled/put_unicos_manually.o compiled/has_margin_unicos.o compiled/size_unicos.o compiled/copy_unicos_manually.o compiled/write_unicos_manually.o compiled/copy_to_unicos.o
	
compiled/init_unicos.o: src/init_unicos.c
	$(CC) $(CFLAGS) -c src/init_unicos.c -o compiled/init_unicos.o
	
compiled/clear_unicos.o: src/clear_unicos.c
	$(CC) $(CFLAGS) -c src/clear_unicos.c -o compiled/clear_unicos.o
	
compiled/get_unicos.o: src/get_unicos.c
	$(CC) $(CFLAGS) -c src/get_unicos.c -o compiled/get_unicos.o
	
compiled/put_unicos_manually.o: src/put_unicos_manually.c
	$(CC) $(CFLAGS) -c src/put_unicos_manually.c -o compiled/put_unicos_manually.o
	
compiled/has_margin_unicos.o: src/has_margin_unicos.c
	$(CC) $(CFLAGS) -c src/has_margin_unicos.c -o compiled/has_margin_unicos.o
	
compiled/size_unicos.o: src/size_unicos.c
	$(CC) $(CFLAGS) -c src/size_unicos.c -o compiled/size_unicos.o
	
compiled/copy_unicos_manually.o: src/copy_unicos_manually.c
	$(CC) $(CFLAGS) -c src/copy_unicos_manually.c -o compiled/copy_unicos_manually.o
	
compiled/write_unicos_manually.o: src/write_unicos_manually.c
	$(CC) $(CFLAGS) -c src/write_unicos_manually.c -o compiled/write_unicos_manually.o
	
compiled/copy_to_unicos.o: src/copy_to_unicos.c
	$(CC) $(CFLAGS) -c src/copy_to_unicos.c -o compiled/copy_to_unicos.o
