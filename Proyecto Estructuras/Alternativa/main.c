#include <stdlib.h>
#include <stdio.h>

struct contacto{
	char *Nombre;
	char *Telefono;
	struct contacto *sig;
	struct contacto *ant;
};

struct contacto* Agregar_Contacto(struct contacto *Agenda, char *NuevoNombre, char *NuevoTelefono){
	struct contacto *NuevoContacto = (struct contacto *) malloc (sizeof (struct contacto));
	NuevoContacto->Nombre = NuevoNombre;
	NuevoContacto->Telefono = NuevoTelefono;
	NuevoContacto->ant = NULL;
	NuevoContacto->sig = NULL;

	if (Agenda == NULL){
		return NuevoContacto;
	}
	else {
		struct contacto *Aux1 = Agenda;
		struct contacto *Aux2;
		while (Aux1 != NULL){
			Aux2 = Aux1;
			Aux1 = Aux1->sig;
		}
	NuevoContacto->ant = Aux2;
	Aux2->sig = NuevoContacto;
	NuevoContacto->sig = NULL;

	return Agenda;
	}
}

struct contacto* Mostrar(struct contacto *Agenda){
	struct contacto *Aux = Agenda;
	while (Aux != NULL){
		printf ("%s \n", Agenda->Nombre);
		printf ("%s \n", Agenda->Telefono);
		Aux = Aux->sig;
	
	return Aux;
	}
}

int main (){

	struct contacto *Agenda =  NULL;
	char NuevoNombre[] = "PEPITO";
	char NuevoTelefono[] = "1234567890";

	Agenda = Agregar_Contacto (Agenda, NuevoNombre, NuevoTelefono);
	Mostrar(Agenda);

	return 0;
}


