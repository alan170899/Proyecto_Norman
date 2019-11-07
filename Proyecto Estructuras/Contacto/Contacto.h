#ifndef _CONTACTO_H_
#define _CONTACTO_H_

typedef struct contacto {
    char* nombre;
    char* telefono;
} t_contacto, *Contacto;

int crearContacto(Contacto *nuevoContacto);
int modificarNombre(Contacto contactoModificar, char* nuevoNombre);
int modificarTelefono(Contacto contactoModificar, char* nuevoTelefono);


<<<<<<< HEAD
#endif
=======
#endif
>>>>>>> 9587494502f2e70fa686a63d894c0d492510e073
