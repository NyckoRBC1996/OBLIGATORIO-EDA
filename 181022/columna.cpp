#include <iostream>
#include "fila.h"
#include <string.h>

using namespace std;

struct nodo_columna
{
    columna_lista prim;
    columna_lista ult;
};

struct nodo_columna_lista
{
    char *nombrec;
    calificativo calif;
    fila f;
    columna sig;
};

char *Nombre_Columna(columna c)
{
    return c->nombrec[];
}

columna Crear_Columna(char *nombreCol)
{
    columna c = new (nodo_columna);    // creo nodo columna
    c->nombrec = new char[MAX_NOMBRE]; // creo nodo char para nombre c
    strcpy(c->nombrec, nombreCol);     // copio el nombre en nombrec
    return c;
}

TipoRet crearFila_columna(columna &c)
{
    if (c == NULL)
    {
        c = new (nodo_columna);
        c->f = Crear_Fila();
        return OK;
    }
    else
    {                     // c != NULL ya existe alguna fila
        columna auxc = c; // creo auxc para no mover c (por la dudas)
        // llevo auxc hasta el ultimo lugar de la fila
        ultimoFila(auxc->f); // = Crear_Fila(); no se si se puede
        auxc->f = Crear_Fila();

        return OK;
    }
}

TipoRet dropCol(bd &bd, char *nombreTabla, char *NombreCol)
{
    // dsad
    columna auxc = c;
    if (c == NULL)
        return NULL;
    else
    {
        filaSig();
        while (auxc != NULL && !strcmp(Nombre_Columna(auxc), NombreCol))
        {

            if (strcmp(Nombre_Columna(auxc), NombreCol)) // SI es true
                dropFila(bd & bd, c->f);

            else
                auxc = auxc->sig;
        }
        if (auxc == NULL)                                          // si llego al final
            cout << "NO SE ENCONTRO NINGUNA  COLUMNA" delete auxc; // borra la columna
        return c;
    }
}

columna dropCol(columna c)
{
    // dsad
    if (c == NULL)
        return NULL;
    else
    {
        while (c != NULL)
        {
            columna aux;
            fila dropFila(bd & bd, c->f); // borra todo lo que hay en la columna(fila)
            aux = c;
            c = c->sig;
            delete aux; // borra la columna
        }
        return c;
    }
}

columna Modificar_Columna(columna c, char *nombreCol, char *nuevoNombreCol)
{
    bool esta = false;
    while (c->sig != NUll && !esta)
    {
        if (strcmp(c->nombre, nombreCol))
            esta = true;
        else
            c = c->sig;
    }
    if (esta)
        strcpy(c->nombre, nuevoNombreCol);
    // falta los datos y la clave
    else
        cout << "Imposible modificar la columna debido a que no existe\n";
    return ERROR
}
}
