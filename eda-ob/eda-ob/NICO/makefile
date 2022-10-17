todo: main.o bd.o tablas.o tabla.o columna.o fila.o
	g++ -Wall -o main bd.o main.o tablas.o tabla.o columna.o fila.o
main.o: bd.o main.c
	g++ -Wall -c main.c
bd.o: bd.c bd.h
	g++ -Wall -c bd.c
tablas.o: tablas.c tablas.h
	g++ -Wall -c tablas.c
tabla.o: tabla.c tabla.h
	g++ -Wall -c tabla.c
columna.o: columna.c columna.h
	g++ -Wall -c columna.c
fila.o: fila.c fila.h
	g++ -Wall -c fila.c
clean:
	rm -f *.o
	rm -f main

