run_test: list_test.o list.o
	gcc list_test.o list.o -o test

list_test.o: list_test.c
	gcc -c list_test.c

list.o: list.c list.h
	gcc -c list.c

clean:
	rm *.o output
