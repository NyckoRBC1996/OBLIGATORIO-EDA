#ifndef FILA_H
#define FILA_H
typedef struct nodo_fila * fila;

struct nodo_fila{
	char *dato1;
	int dato2;
	int tupla; // numero de tupla
	fila sig;
};

fila crearFila();
//crea una 





#endif