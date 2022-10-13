#include <iostream>


using namespace std;

struct nodo_columna{
    char nombreColumna[];
    //bool PK;
    fila f;
    columna sig;
    
};

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
columna crearCol(){
    columna c = new(nodo_columna);
	c->nombre = new char[MAX_NOMBRE];
	strcpy(c->nombre, nombreCol);
	// VER COLUMNAS, ETC
	return c;
}

TipoRet crearFila_columna(columna & c,){
	if (c == NULL)
	{
        aux->f = crearFila();
		//c = new (nodo_fila);
		c->f->sig = NULL;
		return OK;
	}
	else{ // c!=NULL ya existe alguna fila
        columna aux = c;
		while (aux->sig != NULL) // llevo aux hasta el ultimo lugar
			aux = aux ->sig;
		// se puede crear nuevo nodo 
		fila newfila = new (nodo_fila);
	    newfila->sig = NULL; // se vincula con el null
        aux->f->sig = newfila;// el anterior (aux) se vincula con el nuevo
	return OK;
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
