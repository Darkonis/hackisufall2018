example.o: example.c
	gcc -c example.c -o example.o --std=c11 -Wall -fpic

example.dylib: example.o
	gcc -dynamiclib example.o -o example.dylib -lcaca

build: example.dylib

clean:
	rm example.o example.dylib

#default: example.c
#	gcc -ggdb example.c -o example -lcaca
