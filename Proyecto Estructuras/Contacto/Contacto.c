#include <stdio.h>
#include <stdlib.h>
#include <string.h>

<<<<<<< HEAD
typedef struct contacto{
	char *nombre;
	char *telefono;
}t_contacto, *Contacto;

int crearContacto(Contacto *nuevoContacto){
=======
#include "../ErrorCodes.h"
#include "Contacto.h"

int crearContacto(Contacto *nuevoContacto) {
    Contacto temp = NULL;
    temp = (Contacto)malloc(sizeof(t_contacto)); //malloc regresa un *void
    if(temp == NULL) { return OBJECT_NULL; }
    
    temp->nombre = NULL;
    temp->telefono = NULL;
    
    *nuevoContacto = temp;
    
    return ALL_OK;
}

int modificarNombre(Contacto contactoModificar, char* nuevoNombre) {
    if(contactoModificar == NULL || nuevoNombre == NULL) { return OBJECT_NULL; }
    
    strcpy(contactoModificar->nombre, nuevoNombre);
    
    return ALL_OK;
}

int modificarNumero(Contacto contactoModificar, char* nuevoTelefono) {
    if(contactoModificar == NULL || nuevoTelefono == NULL) {return OBJECT_NULL; }

    strcpy(contactoModificar->telefono, nuevoTelefono);

    return ALL_OK;
}

