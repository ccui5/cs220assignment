all: main

main: main.c
	g++ define.h impl.c main.c -o main

.PHONY: clean

clean:
	rm -fv main *.o
	rm -fv *~ #*#
