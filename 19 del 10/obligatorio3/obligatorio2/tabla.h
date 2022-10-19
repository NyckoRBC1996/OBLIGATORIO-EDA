#ifndef TABLA_H
#define TABLA_H
#include "define.h"
#include "columna.h"
#include "fila.h"

typedef struct nodo_tabla * tabla;


struct nodo_columna
{
    char *nombrec;
    calificativo calif;
    fila f;
    columna sig;
};

char * nombreTabla(tabla t);

tabla crearTabla(char *nombreTabla);
// Crea una tabla de nombre "nombreTabla".

tabla dropTable (bd & bd, char *nombreTabla);



char *nombreTabla(tabla t);
// Retorna el nombre de t.
// Pre: t creada previamente.

TipoRet crearCol_Tabla(tabla &t, char *nombreCol);
//columna crearCol_Tabla();

#endif