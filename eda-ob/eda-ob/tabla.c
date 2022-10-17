#include <iostream>
#include "tabla.h"

using namespace std;

struct nodo_tabla{
    char nombret;
    columna c;
    tabla sig;
};

/*tabla createTable (tabla t,char * NombreColumna){
// Pre:
    if (t == NULL){ // t es vacio
        aux = new(nodo_tabla);
        aux -> nombret = NombreColumna;
        aux -> sig = NULL;
    }else{
        while(t -> sig != NULL){
            t = t -> sig

    }

    

}*/

bool  Existe(tabla t)
//Algo 
if(t == NULL)
return false;
else{ 
while(t->sig != NULL){
if(strcmp(Nombretabla,t->nombre))  
    return true;
t= t->sig;    
}
return false;
}

tabla crearTabla(char *nombreTabla)
{
	tabla t = new (nodo_tabla);
	t->nombre = new char[MAX_NOMBRE];
	strcpy(t->nombre, nombreTabla);
	return t;
}

TipoRet crearCol_Tabla(tabla &t, char *nombreCol)
{
	if (t == NULL)
	{
		t = new (nodo_col);
		t->col = crearCol(nombreCol);
		t->col->sig = NULL;
		return OK;
	}
	else if (t->sig != NULL)
        tabla aux = t;
		while (aux->sig != NULL && nombreCol != aux->nombrec)
			aux = aux -> sig;
	if (nombreCol == aux->nombrec) {// ya existe
		cout << "Imposible Crear Columna, ya hay una creada\n";
	    return ERROR;
    }
	else // se puede crear
		newcol = crearCol(nombreCol);
	    aux -> col = newcol;
	    //aux->col->sig = NULL;
        aux->sig = NULL;
	return OK;
}

char *nombreTabla(tabla t)
{
	return t->nombre;
}
tabla borrarTabla(tabla t, char *nombreTabla)
{

	strcmp(nombreTabla, t->nombre)
}


tabla dropTabla(tabla t){
//dsad
    if(t == NULL)
        return NULL;
    else {
        tabla aux;
        while(t != NULL){
            fila dropCol (bd, t -> c); // borra todas las columnas de la tabla t
            aux = t;
            t=t->sig;
            delete aux; // borra la tabla
        }
        return t;
    }
}
