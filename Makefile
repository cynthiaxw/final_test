main:main.o my_stack.o
	gcc main.o my_stack.o -o main
main.o:main.c
	gcc -c main.c
eightQueen.o:eightQueen.c
	gcc -c my_stack.c

clean:
	rm main *.o
