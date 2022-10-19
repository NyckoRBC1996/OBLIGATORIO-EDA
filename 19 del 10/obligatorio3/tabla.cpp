#include "tabla.h"
#include "define.h"
#include "columna.h"
#include "tablas.h"
#include <string.h>
#include <iostream>

using namespace std;

struct nodo_tabla
{
	char *nombreT;
	columna c;
	tabla sig;
};

char *nombre_Tabla(tabla t)
{
	return t->nombreT;
}

tabla crearTabla(char *nombreTabla)
{
	tabla t = new (nodo_tabla);
	t->nombreT = new char[MAX_NOMBRE];
	strcpy(t->nombreT, nombreTabla);
	return t;
}
// Aqui van las variables de tipo Ret
