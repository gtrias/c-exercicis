#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <dos.h>

void registrarFrase(char frase[80]);
void salirIzquierda(char frase[80]);
void salirDerecha(char frase[80]);
void movimiento(char frase[80]);

void main(){
   char frase[80];
	registrarFrase(frase);
   salirIzquierda(frase);
   movimiento(frase);

}

void registrarFrase(char frase[80]){
 	printf("Introduzca la frase del cartel: ");
   gets(frase);
}
void salirIzquierda(char frase[80]){
	int i,j,final;

   gotoxy(0,20);
   final = strlen(frase);
  	for(i=final ; i >= 0; i--){

   	gotoxy(1,20);
   	for(j=i; j<=final ; j++){
       	printf("%c",frase[j]);
      }
      sleep(1);
  	}
}
void salirDerecha(char frase[80]){
   int i,j,final;

   gotoxy(0,20);
   final = strlen(frase);
  	for(i=final ; i >= 0; i--){

   	gotoxy(80-i,20);
   	for(j=0; j<=i ; j++){
       	printf("%c",frase[j]);
      }
      sleep(1);
  	}
   salirIzquierda(frase);
}
void movimiento(char frase[80]){
	bool acabar = false;
	int pos = 0,final;
   final = strlen(frase);
   clrscr();
   for(pos = 1; pos + final <= 80 ; pos++){
   	gotoxy(pos,20);
      printf(" ");
      printf("%s",frase);
      sleep(1);
   }
   salirDerecha(frase);
}


