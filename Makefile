default: example.c
	gcc -fPIC example.c -o example -lcaca

example.o: example.c
	gcc -c example.c -o example.o --std=c11 -Wall -fpic

example.dll: example.o
	gcc -dynamiclib -shared example.o -o example.dll -lcaca 

build: example.dll

clean:
	rm example.o example.dll example
