all: main

clean: swap.o main.o
        gcc -o main main.o swap.o

main: swap.o main.o
         gcc -o main main.o swap.o

swap.o: swap.c swap.h
         gcc -c -o  swap.c

main.o: main.c swap.h
        gcc -c -o main.o main.c

