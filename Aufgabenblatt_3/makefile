func.o: func.c
	gcc -c func.c

bsp.o: bsp.c
	gcc -c bsp.c

prog: bsp.o func.o
	gcc -o prog bsp.o func.o