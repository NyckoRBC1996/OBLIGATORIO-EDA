#include <iostream>


using namespace std;

struct nodo_fila{
    char dato1;
    int dato2;
    int tupla; // numero de tupla
    fila sig;   
};
fila crearFila (){
    fila f = new(nodo_fila);
	return f;
}


    fila dropFila (bd & bd, fila f){ //mal
	// Elimina todos los elementos de una columna

    	lista aux;
	while(f != NULL){
		aux = f;
		f=f->sig;
//		l = tail(l);  	Si estuviese desde el main
		delete aux;
	}

	return f;
}

fila Modificar_Fila(modiDato,dato)// Nose
bool esta=false;
while(f->sig != NULL && !esta)
	if 