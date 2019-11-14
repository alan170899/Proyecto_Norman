#include <stdio.h>
#include <stdlib.h>

int main(){
  int opc;
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
	break;
	case 2:
		printf("Se entro correctamente a la segunda opcion\n");
	break;
	case 3:
		printf("Se entro correctamente a la tercera opcion\n");
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
}
