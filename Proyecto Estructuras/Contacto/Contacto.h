#ifndef _CONTACTO_H_
#define _CONTACTO_H_

typedef struct contacto {
    char* nombre;
    char* telefono;
} t_contacto, *Contacto;

int crearContacto(Contacto *nuevoContacto);


#endif
