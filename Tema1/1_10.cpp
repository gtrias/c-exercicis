#include <conio.h>
#include <stdio.h>
#include <mate.h>
void main(){
	int numero,i;
   printf ("Introduzca el numero maximo para calcular los numeros perfectos: ");
   scanf ("%d", &numero);
   for (i = 1; i <= numero; i++){
		if (perfecto(i)){
			printf ("\n %d es perfecto", i);
      }
   }
   getch();
}
