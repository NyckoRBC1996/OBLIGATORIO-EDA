#include <iostream>
#include "bd.h"

using namespace std;

struct nodo_tablas{
    tabla t;
    char []*nombrets;
    tablas sig; //
};

tablas crearTablas(){
	return NULL;
}

TipoRet crearTabla_Tablas(tablas & ts, char * nombreTabla){
	if (ts == NULL){
		ts = new(nodo_tablas);
		ts->t = crearTabla(nombreTabla);
		return OK;
	}else{
        // buscar si hay tablas con ese nombre
        //si no hay crearla
		cout << "Imposible Crear Tabla, ya hay una creada y el sistema soporta solo una\n";
		return ERROR;
	}
}

void imprimirTablas(tablas ts){
	if (ts == NULL){
		cout << " - No hay tablas\n";
	}else{
		cout << nombreTabla(ts->t);
	}
}

tablas buscar_nombretabla(){




    
}