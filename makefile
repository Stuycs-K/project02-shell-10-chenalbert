.PHONY: clean run compile
run: shell
	@./shell
clean:
	rm -f *.o shell
compile shell: main.o parse.o
	@gcc -o shell parse.o main.o -lm
parse.o: parse.c parse.h
	@gcc -c parse.c
main.o: main.c
	@gcc -c main.c -lm
