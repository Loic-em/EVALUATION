Cercle : Princ.o Surf.o Circ.o
	gcc -o Cercle Princ.o Surf.o Circ.o

Princ.o : Princ.c
	gcc -c Princ.c

Surf.o : Surf.c
	gcc -c Surf.c

Circ.o : Circ.c
	gcc -c Circ.c

clean :
	rm *.o Cercle
