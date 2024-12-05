.PHONY: clean run compile
run: prog
	@./prog
clean:
	rm -f *.o prog
compile prog: parse.o
	@gcc -o prog parse.o -lm
parse.o: parse.c parse.h
	@gcc -c parse.c
main.o: main.c
	@gcc -c main.c -lm
