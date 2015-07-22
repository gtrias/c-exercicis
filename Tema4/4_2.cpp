#include <stdio.h>
#include <conio.h>
#include <string.h>

void registrar(char frase[100]);
void invertir(char frase[100]);

void main(){
	char cadena[100];
   registrar(cadena);
   invertir(cadena);
   getch();
}

void registrar(char frase[100]){
   printf("Introduzca la frase a invertir: ");
   gets(frase);
}

void invertir(char frase[100]){
   int i,j=0;
   printf("La frase invertida es: ");
   j = strlen(frase);
   for(i = 0; i<=j ; i++){
   	printf("%c",frase[j-i]);
   }
}