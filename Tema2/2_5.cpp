#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
void main(){
	float dado[5];
   int i,cara;
   dado[0]=0;
   dado[1]=0;
   dado[2]=0;
   dado[3]=0;
   dado[4]=0;
   dado[5]=0;
	randomize();
   for (i=1; i<=1000; i++){
   	cara = random(6);
      dado[cara]++;

   }
   printf ("\nLa frecuencia relativa que ha salido el uno es: %f", dado[0]/1000);
   printf ("\nLa frecuencia relativa que ha salido el dos es: %f", dado[1]/1000);
   printf ("\nLa frecuencia relativa que ha salido el tres es: %f",dado[2]/1000);
   printf ("\nLa frecuencia relativa que ha salido el cuatro es: %f",dado[3]/1000);
   printf ("\nLa frecuencia relativa que ha salido el cinco es: %f",dado[4]/1000);
   printf ("\nLa frecuencia relativa que ha salido el seis es: %f",dado[5]/1000);
   scanf("%d",i);
}
