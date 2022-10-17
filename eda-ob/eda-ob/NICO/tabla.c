#include "tabla.h"
#include "define.h"
#include "columna.h"
#include <string.h>
#include <iostream>

using namespace std;

struct nodo_tabla
{
	char *nombret;
	columna c;
	tabla sig;
};

char *nombreTabla(tabla t)
{
	return t->nombret;
}

tabla crearTabla(char *nombreTabla)
{
	tabla t = new (nodo_tabla);
	t->nombret = new char[MAX_NOMBRE];
	strcpy(t->nombret, nombreTabla);
	// VER COLUMNAS, ETC
	return t;
}

TipoRet crearCol_Tabla(tabla &t, char *nombreCol)
{
	if (t == NULL)
	{
		t = new (nodo_tabla);
		// t->c = crearCol(nombreCol);
		//  t->col->sig = NULL;
		return OK;
	}
	else
	{																			   // if (t->sig != NULL)
		tabla auxt = t;															   // creo un auxt para no mover t
		while (auxt->sig != NULL && !strcmp(nombreCol, Nombre_Columna(auxt->sig))) // llevo auxt hasta la ultima pos o hasta encontrar el nombre
			auxt = auxt->sig;

		if (strcmp(nombreCol,Nombre_Columna(auxt->sig))
		{ // ya existe
			cout << "Imposible Crear Columna, ya hay una creada\n";
			return ERROR;
		}
		else // se puede crear
			auxt->c = Crear_Columna(nombreCol);
			return OK;
	}
}
tabla dropTabla(tabla &t, char *nombreTabla)
{
	return t;
}
