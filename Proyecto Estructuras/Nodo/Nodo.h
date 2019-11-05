#ifndef _NODO_H_
#define _NODE_H_

#include "Contacto\Contacto.h"

typedef struct nodo {
    struct nodo* nodoAnterior;
    struct nodo* nodoSiguiente;
    Contacto infoContacto;
} t_nodo, *Nodo;

#endif