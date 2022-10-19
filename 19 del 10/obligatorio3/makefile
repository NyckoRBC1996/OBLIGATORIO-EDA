todo: main.o bd.o tablas.o tabla.o columna.o fila.o
	g++ -Wall -o main bd.o main.o tablas.o tabla.o columna.o fila.o

main.o: bd.o main.cpp columna.cpp fila.cpp
	g++ -Wall -c main.cpp

bd.o: bd.cpp bd.h
	g++ -Wall -c bd.cpp

tablas.o: tablas.cpp tablas.h
	g++ -Wall -c tablas.cpp

tabla.o: tabla.cpp tabla.h
	g++ -Wall -c tabla.cpp
	
columna.o: columna.cpp columna.h
	g++ -Wall -c columna.cpp

fila.o: fila.cpp fila.h
	g++ -Wall -c fila.cpp

clean:
	rm -f *.o
	rm -f main

