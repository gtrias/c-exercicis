#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void dibujar(int x, int y);

void main(){
	int n_caballos,caballo,xcab,ycab;
   int posiciones[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   bool final = false;


  	printf("Introduzca el numero de caballos (max 25): ");
   scanf ("%d",&n_caballos);
   clrscr();
   while (final == false){
      // Se selecciona al azar el caballo que avanzara
		caballo = random(n_caballos)+1;

      // Se modifica el valor del caballo elegido
      posiciones[caballo]++;

      xcab = posiciones[caballo];

      dibujar(xcab,caballo);

   	if(posiciones[caballo] == 60){
      	final = true;
         gotoxy(25,20);
         printf ("EL CABALLO GANADOR ES EL: %d", caballo);
   	}

   }
   getch();
}
void dibujar(int x,int y){
  //	gotoxy(x-1,y);
  // printf(" ",y);
   gotoxy(x-1,y);
   printf(" %d",y);

}