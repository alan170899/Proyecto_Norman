#include <stdio.h>
#include <stdlib.h>

#include "ErrorCodes.h"
#include "Lista\Lista.h"

int crearLista(Lista *nuevaLista) {
    Lista newLista = NULL;
    newLista = (Lista)malloc(sizeof(t_lista)); //malloc retorna un void*

    if(newLista == NULL) { return OBJECT_NULL; } //si la lista no se creo, se regresa un valor de error

    newLista->primero = NULL;
    newLista->ultimo = NULL;
    newLista->numNodos = 0;

    *nuevaLista = newLista;

    return ALL_OK;
}

int insertarContacto(Lista listaActualizar, char* nombre, char* telefono) {
    
}
