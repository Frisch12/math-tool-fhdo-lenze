all: main

main: basicmath.o
	gcc basicmath.o main.c -o main

basicmath.o: basics.o
	gcc basics.o -c basicmath.c

basics.o:
	gcc -c basics.c

clean:
	rm basics.o basicmath.o main
