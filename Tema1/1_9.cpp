#include <mate.h>
#include <stdio.h>
#include <conio.h>
void fact(){
	int num,facto;
	clrscr();
	printf ("Introduzca un numero para calcular su factorial: ");
   scanf ("%d", &num);
   facto = factorial(num);
	printf ("El factorial del numero introducido es: %d",facto);
   scanf ("%d", &num);
}
void eul(){
	int num,resultado;

 	clrscr();
   printf ("Introduzca un numero para calcular su funcion de euler: ");
   scanf ("%d", &num);
   resultado = euler(num);
   printf ("La funcion de euler para %d es: %d",num,resultado);
   scanf ("%d", &num);
}
void prim(){
	int num;
 	clrscr();
   printf ("Introduzca un numero para averiguar si es primo: ");
   scanf ("%d", &num);
   if (primo(num)){
   	printf("El numero es primo");
   }else{
   	printf("El numero no es primo");
   }
   scanf ("%d", &num);
}
void main(){

	int opcion;

	printf ("Menu Principal");
	printf ("\n1.- Factorial de un numero");
	printf ("\n2.- Calcular la funcion de Euler de un numero");
   printf ("\n3.- Averiguar si un numero es primo");
	printf ("\nElija una opcion: ");
	scanf ("%d", &opcion);

   switch(opcion){
   	case 1: fact();
      	break;
      case 2: eul();
      	break;
      case 3: prim();
      	break;
	}



}

