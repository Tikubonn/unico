
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
	rm -f compiled/slice_unicos_manually.o 
	rm -f compiled/concat_unicos_manually.o
	rm -f compiled/is_equal_unicos.o
	rm -f compiled/is_unequal_unicos.o
	rm -f compiled/is_equalp_unicos.o
	rm -f compiled/is_unequalp_unicos.o

unicos.lib: compiled/init_unicos.o compiled/clear_unicos.o compiled/get_unicos.o compiled/put_unicos_manually.o compiled/has_margin_unicos.o compiled/size_unicos.o compiled/copy_unicos_manually.o compiled/write_unicos_manually.o compiled/copy_to_unicos.o compiled/slice_unicos_manually.o compiled/concat_unicos_manually.o compiled/is_equal_unicos.o compiled/is_unequal_unicos.o compiled/is_equalp_unicos.o compiled/is_unequalp_unicos.o
	ar r unicos.lib compiled/init_unicos.o compiled/clear_unicos.o compiled/get_unicos.o compiled/put_unicos_manually.o compiled/has_margin_unicos.o compiled/size_unicos.o compiled/copy_unicos_manually.o compiled/write_unicos_manually.o compiled/copy_to_unicos.o compiled/slice_unicos_manually.o compiled/concat_unicos_manually.o compiled/is_equal_unicos.o compiled/is_unequal_unicos.o compiled/is_equalp_unicos.o compiled/is_unequalp_unicos.o

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

compiled/slice_unicos_manually.o: src/slice_unicos_manually.c
	$(CC) $(CFLAGS) -c src/slice_unicos_manually.c -o compiled/slice_unicos_manually.o

compiled/concat_unicos_manually.o: src/concat_unicos_manually.c
	$(CC) $(CFLAGS) -c src/concat_unicos_manually.c -o compiled/concat_unicos_manually.o

compiled/is_equal_unicos.o: src/is_equal_unicos.c
	$(CC) $(CFLAGS) -c src/is_equal_unicos.c -o compiled/is_equal_unicos.o

compiled/is_unequal_unicos.o: src/is_unequal_unicos.c
	$(CC) $(CFLAGS) -c src/is_unequal_unicos.c -o compiled/is_unequal_unicos.o

compiled/is_equalp_unicos.o: src/is_equalp_unicos.c
	$(CC) $(CFLAGS) -c src/is_equalp_unicos.c -o compiled/is_equalp_unicos.o

compiled/is_unequalp_unicos.o: src/is_unequalp_unicos.c
	$(CC) $(CFLAGS) -c src/is_unequalp_unicos.c -o compiled/is_unequalp_unicos.o
