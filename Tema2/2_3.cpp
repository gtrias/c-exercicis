#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main (){
	int resultado,numero,intentos;
   char seguir='s';

   while(seguir == 's'){
   	randomize();
		resultado = random(100);
		printf("\nIntroduce un numero del 1 al 100: ");
 	  	scanf ("%d", &numero);
		for(intentos=1; intentos < 5; intentos++){
			if (numero == resultado){
				printf ("Felicidades has dado con el numero ganador");
				intentos = 10;
			}else{
				if (numero < resultado){
					printf ("Lo siento el numero es mas grande. Vuelva a intentar: ");
					scanf ("%d",&numero);
				}else{
					printf ("Lo siento el numero es mas pequeño. Vuelva a intentar: ");
					scanf ("%d",&numero);
				}
				if (intentos == 4){
					printf ("\nLo siento ya no te quedan mas intentos!!! El numero era %d",resultado);
				}
			}
		}
   
   
   printf ("\nQuieres seguir jugando? (s/n) : ");
   scanf ("%s",&seguir);
   }





}