#include "tabla.h"
#include "define.h"
#include "columna.h"
#include <string.h>
#include <iostream>

using namespace std;

struct nodo_tabla
{
	char * nombreT;
	columna c;
	tabla sig;
};


char *nombreTabla(tabla t){
	return t->nombret;
}

TipoRet crearTabla(char * nombreTabla){
	tabla t = new (nodo_tabla);
	t->nombret = new char[MAX_NOMBRE];
	strcpy(t->nombret, nombreTabla);
	// VER COLUMNAS, ETC
	return OK;
}

TipoRet droptabla(tablas & ts, char * nombreTabla){
	if(ts == NULL)
		return NULL;
	else{
		eliminarcolumnas(ts->t, nombreTabla);
		return OK;
	}
}

TipoRet crearCol_Tabla(tabla &t, char *nombreCol){
	if (t == NULL)
	{
		t = new (nodo_tabla);
		return OK;
	}
	else
	{																			   // if (t->sig != NULL)
		tabla auxt = t;															   // creo un auxt para no mover t
		while (auxt->sig != NULL && !strcmp(nombreCol, Nombre_Columna(auxt->sig))) // llevo auxt hasta la ultima pos o hasta encontrar el nombre
			auxt = auxt->sig;

		if (strcmp(nombreCol,Nombre_Columna(auxt->sig)))
		{ // ya existe
			cout << "Imposible Crear Columna, ya hay una creada\n";
			return ERROR;
		}
		else // se puede crear
			auxt->c = Crear_Columna(nombreCol);
			return OK;
	}
}

TipoRet eliminarTabla(tabla & t, char *nombreTabla){
tabla auxt=t;
bool esta=false;
	while(auxt -> sig != NULL && !esta){
		if(strcmp(t->nombret,nombreTabla)==1)//nose si es 0 o 1
			esta=true;
		else
		auxt=auxt->sig;
	}
	if(!esta){
		cout << "No existe ninguna tabla con ese nombre\n";
		return ERROR;
	}else{
		eliminarcolumnas(auxt->c);
		return OK;
	}
}
