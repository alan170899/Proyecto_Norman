#ifndef _LISTA_H_
#define _LISTA_H_

#include "Nodo\Nodo.h"

typedef struct lista {
    Nodo primero;
    Nodo ultimo;
    int numNodos;
} t_lista, *Lista;

int crearLista(Lista *nuevaLista);
int insertarContacto(Lista listaActualizar, char* nombre, char* telefono);
int eliminarContacto(Lista listaActualizar, char* nombre);
int vaciarLista(Lista estaLista);

#endif