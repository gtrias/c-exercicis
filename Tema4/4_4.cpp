// AGENDA ELECTRONICA

#include <stdio.h>
#include <conio.h>

struct contactos{
	char nom[15];
   char apellidos[30];
   char telefono[9];
} registro[100];
int ultimo=0;

void introducirRegistro();
void mostrarRegistro();
int menu();

void main(){
	int opcion;
   do{
   	opcion = menu();
		switch(opcion){
   		case 1: introducirRegistro();
      		break;
      	case 2: mostrarRegistro();
	     		break;
         default: printf("Opcion incorrecta");
      }
   }while(opcion !=3);
}

int menu(){
	int opcion;
   clrscr();
	printf("1.- Introducir registro: ");
   printf("\n2.- Mostrar registro: ");
   printf("\n3.- Salir: \n");
   scanf("%d",&opcion);
   return(opcion);
}

void mostrarRegistro(){
	int num;
	clrscr();
   printf("Introduzca el numero de registro a visualizar: ");
   scanf("%d",&num);
   printf("Nombre: %s",registro[num-1].nom);
   printf("\nApellidos: %s",registro[num-1].apellidos);
   printf("\nTelefono: %s",registro[num-1].telefono);
   getch();

}

void introducirRegistro(){
	clrscr();
	printf("Introduzca el nombre del nuevo contacto: ");
   fflush(stdin);
   gets(registro[ultimo].nom);
   printf("\nIntroduzca los apellidos: ");
   fflush(stdin);
   gets(registro[ultimo].apellidos);
   printf("\nIntroduzca el numero de telefono: ");
   fflush(stdin);
   gets(registro[ultimo].telefono);
   ultimo++;
   printf("\nSe ha introducido el registro num.%d correctamente.",ultimo);
   getch();
}
