#include <stdio.h>
#include <stdlib.h>
#include "ErrorCodes.h"

typedef struct contacto{
	char *nombre;
	char *telefono;
}t_contacto, *Contacto;

int crearContacto(Contacto *nuevoContacto){

contacto_temp = NULL;

contacto_temp = (Contacto*) malloc (sizeof (t_contacto));
contacto_temp->nombre = (...) malloc (sizeof 10 * (char));
contacto_temp->telefono = (...) malloc (sizeof 10 * (char));

nuevoContacto = contacto_temp;

return ....
}
