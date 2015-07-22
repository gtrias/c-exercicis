#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int generaResultado();

main(){
	int i;
	randomize();
   for (i=1; i <= 6; i++){
		printf("\nEl #%i numero es: %d", i, generaResultado());
   }
   getch();
}
int generaResultado(){
 	int resultado;
   resultado = random(49) + 1;
   return(resultado);
}
