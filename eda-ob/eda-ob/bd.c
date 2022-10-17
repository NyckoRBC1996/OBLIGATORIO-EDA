// Estructuras de Datos y Algoritmos - Curso 2022
// Tecnologo en Informatica FIng - DGETP - UTEC
//
// Trabajo Obligatorio
// bd.c
// Modulo de Implementación de Base de Datos.

#include <iostream>

#include "bd.h"

using namespace std;

struct nodo_bd{
	tablas ts;
};

bd createBD(){
	bd BaseDatos= NULL;
	return BaseDatos;
}
bd createBD(){
	bd bdat = new(nodo_bd);
	bdat->ts = crearTablas();
	return bd;
}

TipoRet createTable (bd & bd, char *nombreTabla){
	//cout << " - createTable " << nombreTabla << endl;;
	tabla aux = new (nodo_tabla); // aux podria llamarse nombretabla tambien
	aux -> nombret = nombreTabla;
	aux -> c = NULL;
	aux -> sig = NULL;
	if  (bd == NULL)
		bd->ts->t = aux; // pide que relaciones bd con tabla RARO
	else
		ult = bd->ts->t->sig;
		while (ultimo->sig !=NULL) // llevar ult hasta el ultimo lugar (mal implementado en mover ult)
			tabla ult = ult -> sig;
		ult -> sig = aux;
		aux -> sig = NULL;
	return bd;
}

TipoRet dropTable (bd & bd, char *nombreTabla){
	//cout << " - dropTable " << nombreTabla << endl;;
	buscar_nombretabla();
	
	return NO_IMPLEMENTADA;
}

TipoRet addCol (bd & bd, char *nombreTabla, char *NombreCol, char *tipoCol, char *calificadorCol){
	//cout << " - addCol " << nombreTabla << " " << NombreCol << " " << tipoCol << " " << calificadorCol << endl;;
	return NO_IMPLEMENTADA;
}

TipoRet dropCol (bd & bd, char *nombreTabla, char *NombreCol){
	//cout << " - dropCol " << nombreTabla << " " << NombreCol << endl;;
	return NO_IMPLEMENTADA;
}

TipoRet alterCol (bd & bd, char * nombreTabla, char * nombreCol, char *tipoColNuevo, char *calificadorColNuevo, char *nombreColNuevo){
	//cout << " - alterCol " << nombreTabla << " "<< nombreCol << " " << tipoColNuevo  << " " << calificadorColNuevo << " " << nombreColNuevo << endl;;
	return NO_IMPLEMENTADA;
}

TipoRet insertInto (bd & bd, char *nombreTabla, char *columnasTupla, char *valoresTupla){
	//cout << " - insertInto " << nombreTabla << " " << columnasTupla << " " << valoresTupla<< endl;;
	return NO_IMPLEMENTADA;
}

TipoRet deleteFrom (bd & bd, char *nombreTabla, char *condicionEliminar){
	//cout << " - deletefrom " << nombreTabla << " " << condicionEliminar << endl;;
	return NO_IMPLEMENTADA;
}

TipoRet update(bd & bd, char * nombreTabla, char * condicionModificar, char * columnaModificar, char * valorModificar){
	//cout << " - update " << nombreTabla << " " << condicionModificar << " " << columnaModificar << " " << valorModificar << endl;
	return NO_IMPLEMENTADA;
}

TipoRet selectWhere (bd & bd,char * nomTabla1, char * condicion, char * nomTabla2){
	//cout << " - selectWhere " << nomTabla1 << " " << condicion << " " << nomTabla2 << endl;
	return NO_IMPLEMENTADA;
}

TipoRet select (bd & bd, char * nomTabla1, char * nomColumnas, char * nomTabla2){
	//cout << " - select " << nomTabla1 << " " << nomColumnas << " " << nomTabla2 << endl;
	return NO_IMPLEMENTADA;
}

TipoRet join (bd & bd, char * nomTabla1, char * nomTabla2, char * nomTabla3){
	//cout << " - join " << nomTabla1 << " " << nomTabla2 << " " << nomTabla3 << endl;
	return NO_IMPLEMENTADA;
}

TipoRet union_(bd & bd, char * nombreTabla1, char * nombreTabla2, char * nombreTabla3){
	//cout << " - union_ " << nombreTabla1 << " " << nombreTabla2 << " " << nombreTabla3 << endl;
	return NO_IMPLEMENTADA;
}

TipoRet intersec(bd & bd, char * nombreTabla1, char * nombreTabla2, char * nombreTabla3){
	//cout << " - intersec " << nombreTabla1 << " " << nombreTabla2 << " " << nombreTabla3 << endl;
	return NO_IMPLEMENTADA;
}

TipoRet minus_(bd & bd, char * nombreTabla1, char * nombreTabla2, char * nombreTabla3){
	//cout << " - minus_ " << nombreTabla1 << " " << nombreTabla2 << " " << nombreTabla3 << endl;
	return NO_IMPLEMENTADA;
}

TipoRet printdatatable (bd bd, char *NombreTabla){
	//cout << " - printdatatable " << NombreTabla << endl;
	return NO_IMPLEMENTADA;
}

TipoRet printTables(bd bd){
	//cout << " - printTables " << endl;
	return NO_IMPLEMENTADA;
}

TipoRet printMetadata(bd bd, char *nombreTabla){
	//cout << " - printMetadata " << nombreTabla << endl;
	return NO_IMPLEMENTADA;
}

TipoRet undo(bd & bd){
	//cout << " - undo" << endl;
	return NO_IMPLEMENTADA;
}

TipoRet redo(bd & bd){
	//cout << " - redo" << endl;
	return NO_IMPLEMENTADA;
}

bd destroyBD(bd & bd){
	//
	return NULL;
}

