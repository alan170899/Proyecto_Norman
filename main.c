#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct contacto{
	char nombre[20];
	char Telefono[15];
	struct contacto *siguiente;
	};
struct contacto* Agregar(Agenda, char nombre[20], char Telefono[15]){
	struct contacto *NuevoContacto = (struct contacto*)malloc(sizeof(struct contacto));
	strcpy(NuevoContacto->nombre,nombre);
	strcpy(NuevoContacto->Telefono,Telefono);
	struct NuevoContacto->siguiente = NULL;
	struct contacto *Aux1 = NULL;
	struct contacto *Aux2 = NULL;
	if (Agenda!=NULL){
		Aux1 = Agenda;
		while(Aux1!= NULL){
			Aux2 = Aux1;
			Aux1 = Aux1->siguiente; 
			}
		 Aux2->siguiente = NuevoContacto;
		printf ("contacto agregado\n");
	}
	else {
		Agenda = NuevoContacto;
		printf ("contacto agregado\n");
	}		
return Agenda;
}


int main(){
	struct contacto *Agenda = NULL;
	char nombre[20];
	char Telefono[15];
	Agenda = Agregar(Agenda, "Alonso","5565604726");
	return 0;
	}

