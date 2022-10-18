#include <iostream>

using namespace std;

struct nodo_fila
{
	char *dato1;
	int dato2;
	int tupla; // numero de tupla
	fila sig;
};
fila crearFila()
{
	fila f = new (nodo_fila);
	f->sig = NULL;
	return f;
}

fila ultimoFila(fila f)
{
	// lleva el puntero hasta el ultimo lugar de la fila
	fila auxf = f; // creo auxf para no mover f

	while (auxf->sig != NULL) // llevo auxf hasta el ultimo lugar
		auxf = auxf->sig;
	return auxf;
}

fila filaSig(fila f)
{
	f = f->sig;
	return f;
}

fila dropFila(bd &bd, fila f)
{ // mal
	// Elimina todos los elementos de una columna

	while (f != NULL)
	{
		lista aux;
		aux = f;
		f = f->sig;
		//		l = tail(l);  	Si estuviese desde el main
		delete aux;
	}

	return f;
}
