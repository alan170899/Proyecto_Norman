#include <stdio.h>
#include <stdlib.h>

struct contacto{
	char *Nombre;
	char *Telefono;
	struct contacto *sig;
	struct contacto *ant;
};

void Agregar_Cont(struct contacto *Agenda, char *Nombre, char *Telefono){
	struct contacto *NuevoContacto = (struct contacto*) malloc (sizeof (struct contacto));
	NuevoContacto->Nombre = Nombre;
	NuevoContacto->Telefono = Telefono;
	NuevoContacto->sig = NULL;
	NuevoContacto->ant = NULL;
	struct contacto *AUX1 = Agenda;
	struct contacto *AUX2 = NULL;

	if (AUX1 == NULL){
		Agenda = NuevoContacto;
	}
	else{
		while (AUX1 != NULL){
			AUX2 = AUX1;
			AUX1 = AUX1->sig;
		}
		AUX2->sig = NuevoContacto;
		NuevoContacto->ant = AUX2;
	}
}

struct contacto* Mostar_Ascendente(struct contacto *Agenda){
	struct contacto *Aux = Agenda;
	
	while (Aux != NULL){
	       	printf ("%s \n", Aux->Nombre);
		printf ("%s \n", Aux->Telefono);
		Aux = Aux->sig;
	}

	return Aux;
}

struct contacto* Mostar_Descendente(struct contacto *Agenda){
        struct contacto *Aux1 = Agenda;
	struct contacto *Aux2 = NULL;

        while (Aux1 != NULL){
                 Aux2 = Aux1;
                 Aux1 = Aux1->sig;
	}

	while (Aux2 != NULL){
		printf ("%s \n", Aux2->Nombre);
                printf ("%s \n", Aux2->Telefono);
		Aux2 = Aux2->ant;
	}

        return Aux2;
}

void Eliminar_contacto(struct contacto *Agenda, char *NuevoNombre, char *NuevoTelefono){
	if (Agenda != NULL){
		struct contacto *Aux_borrar = Agenda;
		struct contacto *Aux2 = NULL;
		
		while ((Aux_borrar != NULL) && (Aux_borrar->Nombre != NuevoNombre) && (Aux_borrar->Telefono != NuevoTelefono));
			Aux2 = Aux_borrar;
			Aux_borrar = Aux_borrar->sig;
			if (Aux_borrar == NULL){
				printf ("No existe el elemento a borrar \n");
			}
			else if (Aux2 == NULL){
				Agenda = Agenda->sig;
				free(Aux_borrar);
				printf("Elemento borrado \n");
			}
			else {
				Aux2->sig = Aux_borrar->sig;
				free(Aux_borrar);
				printf("Elemento borrado \n");
			}
	}
	else {
		printf ("La Agenda esta vacia \n");
	}
}		       


int main(){
  int opc;
  struct contacto *Agenda = NULL;
  char Nombre[20];
  char Telefono[20];
  do{
  printf("Menu de agenda\n");
  printf("Que desea hacer?\n");
  printf("1 Mostrar Contactos\n");
  printf("2 Agregar Contacto\n");
  printf("3 Eliminar Contacto\n");
  printf("4 Buscar Contacto\n");
  printf("0 Salir del menu\n");
  scanf("%i",&opc);
  switch(opc){
	case 1:
		printf("Se entro correctamente a la primera opcion\n");
		Mostar_Ascendente(Agenda);
                Mostar_Descendente(Agenda);
	break;
	case 2:
		printf("Se entro correctamente a la segunda opcion\n");
		fflush(stdin);
		printf(" Introdusca un nombre : \n");
                gets(Nombre);
		fflush(stdin);
                printf(" Introdusca un telefono : \n");
                gets(Telefono);
		fflush(stdin);
                Agregar_Cont(Agenda,Nombre,Telefono);
	break;
	case 3:
		printf("Se entro correctamente a la tercera opcion\n");
		printf("Se entro correctamente a la primera opcion\n");
                printf(" Introdusca un nombre : \n");
                gets(Nombre);
                printf(" Introdusca un telefono : \n");
                gets(Telefono);
		Eliminar_contacto(Agenda,Nombre,Telefono);
	break;
	case 4:
		printf("Se entro correctamente a la cuarta opcion\n");
	break;
	case 0:
		printf("Se salio correctamente de la agenda, gracias por visitarnos\n");
	break;
	default:
	    printf("Opcion incorrecta, intentelo de nuevo\n");
	break;
  } 
 }while(opc != 0);
return 0;
}
