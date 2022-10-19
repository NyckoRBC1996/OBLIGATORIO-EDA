#include <iostream>
#include "fila.h"
#include "bd.h"
#include "columna.h"
#include "bd.h"
#include "define.h"

using namespace std;


fila crearFila(){
	fila f = new (nodo_fila);
	f->sig = NULL;
	return f;
};

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

TipoRet eliminarFila(bd &bd,fila  f){ 
	fila auxf = f;
	while(auxf -> sig != NULL){
		fila aux;
		aux = auxf;
		auxf = auxf -> sig;
		delete aux;
	} 
	return OK;
}