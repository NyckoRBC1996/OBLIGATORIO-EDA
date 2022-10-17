#include <iostream>


using namespace std;

struct nodo_columna{
    char * nombrec;
    //bool PK; para que te digan si era o no key
    fila f;
    columna sig;

};

char * Nombre_Columna(columna c){
	return c-> nombrec[];
}

columna Crear_Columna(char * nombreCol){
    columna c = new(nodo_columna); // creo nodo columna
	c->nombrec = new char[MAX_NOMBRE]; //creo nodo char para nombre c
	strcpy(c->nombrec, nombreCol); //copio el nombre en nombrec
	return c;
}

TipoRet crearFila_columna(columna & c){
	if (c == NULL)
	{
		c = new (nodo_columna);
		c->f = Crear_Fila();
		return OK;
	}
	else{ // c != NULL ya existe alguna fila
        columna auxc = c;// creo auxc para no mover c (por la dudas)
        // llevo auxc hasta el ultimo lugar de la fila
        ultimoFila ( auxc -> f); // = Crear_Fila(); no se si se puede
        auxc -> f = Crear_Fila();

	    //newfila->sig = NULL; // se vincula con el null
        //auxc->f->sig = newfila;// el anterior (aux) se vincula con el nuevo
	return OK;
    }
}

columna dropCol(columna c){
//dsad
    if(c == NULL)
        return NULL;
    else {
        columna aux;
        while(c != NULL){
            fila dropFila (bd & bd, c -> f); // borra todo lo que hay en la columna(fila)
            aux = c;
            c=c->sig;
            delete aux; // borra la columna
        
        }
        return c;
    }
}

columna Modificar_Columna(columna c,char * nombreCol,char * nuevoNombreCol){
bool esta=false;
while(c->sig != NUll && !esta){
    if(strcmp(c->nombre,nombreCol))
        esta=true;
    else
    c=c->sig;        
}
if(esta)
    strcpy(c->nombre,nuevoNombreCol);
    //falta los datos y la clave 
else 
cout << "Imposible modificar la columna debido a que no existe\n";
		return ERROR

}

}
