binary_name = daifoo
bin = ./bin/

run: $(binary_name)
	./bin/$(binary_name)

$(binary_name): ./src/main.c
	clang -o $(bin)$(binary_name) ./src/main.c `sdl2-config --cflags --libs`
