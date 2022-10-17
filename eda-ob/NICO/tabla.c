#include "tabla.h"
#include "define.h"
#include <string.h>

struct nodo_tabla{
    char * nombret;
    columna c;
    tabla sig;
};

char * nombreTabla(tabla t){
	return t->nombre;
}

tabla crearTabla(char * nombreTabla){
	tabla t = new(nodo_tabla);
	t->nombre = new char[MAX_NOMBRE];
	strcpy(t->nombre, nombreTabla);
	// VER COLUMNAS, ETC
	return t;
}

TipoRet crearCol_Tabla(tabla & t, char *nombreCol)
{
	if (t == NULL)
	{
		t = new (nodo_tabla);
		t -> c = crearCol(nombreCol);
		//t->col->sig = NULL;
		return OK;
	}
	else{ //if (t->sig != NULL)
        tabla auxt = t; // creo un auxt para no mover t
		while (auxt -> sig != NULL && nombreCol != Nombre_Columna(auxt -> sig))// llevo auxt hasta la ultima pos
			aux = auxt -> sig;

		if (nombreCol == Nombre_Columna(auxt -> sig)) {// ya existe
			cout << "Imposible Crear Columna, ya hay una creada\n";
			return ERROR;
		}
		else // se puede crear
			auxt -> c = Crear_Columna(nombreCol);
			//aux->col->sig = NULL;
			//newcol -> sig = NULL;
		return OK;
	}
}
