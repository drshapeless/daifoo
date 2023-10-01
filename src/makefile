CC = clang
CFLAGS = $(shell sdl2-config --libs)
binary_name = daifoo
objects = main.o logger.o
test_objects = test.o logger.o

$(binary_name): $(objects)
	$(CC) $(CFLAGS) -o $(binary_name) $(objects)

test: $(test_objects)
	$(CC) $(CFLAGS) -o test $(test_objects)

.PHONY: clean clean_test
clean:
	-rm $(binary_name) $(objects)

clean_test:
	-rm test $(test_objects)
