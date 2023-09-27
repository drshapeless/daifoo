CC = clang
CFLAGS = $(shell sdl2-config --libs)
binary_name = daifoo
objects = main.o

$(binary_name): $(objects)
	$(CC) $(CFLAGS) -o $(binary_name) $(objects)

.PHONY: clean
clean:
	-rm $(binary_name) $(objects)
