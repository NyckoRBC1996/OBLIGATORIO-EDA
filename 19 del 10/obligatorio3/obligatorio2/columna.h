#ifndef COLUMNA_H
#define COLUMNA_H
#include "fila.h"
typedef struct nodo_columna_lista * columna;

enum calificativo{
    NOT_EMPTY,
    PRIMARY_KEY,
    ANY
};

struct nodo_columna
{
    char *nombrec;
    calificativo calif;
    fila f;
    columna sig;
};



#endif