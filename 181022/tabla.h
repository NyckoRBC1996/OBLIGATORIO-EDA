#ifndef TABLA_H
#define TABLA_H

typedef struct nodo_tabla *tabla;
char *nombreTabla(tabla t)

    tabla crearTabla(char *nombreTabla);
// Crea una tabla de nombre "nombreTabla".

char *nombreTabla(tabla t);
// Retorna el nombre de t.
// Pre: t creada previamente.

TipoRet crearCol_Tabla(tabla &t, char *nombreCol);

#endif