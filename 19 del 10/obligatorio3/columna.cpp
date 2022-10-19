#include <iostream>
#include "tabla.h"
#include "fila.h"
#include "columna.h"
#include "define.h"
#include <string.h>

struct nodo_columna_lista
{
    char *nombreC;
    calificativo calif;
    fila f;
    columna sig;
};
