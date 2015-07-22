#include <stdio.h>
#include <conio.h>

int factorial(int numero);
void main(){
  int numero,resultado;
  char repetir = 's';
  while (repetir == 's'){
    printf("Introduzca el numero del que se desee calcular el factorial: ");
    scanf("%d",&numero);
    resultado = factorial(numero);
    printf("\n El factorial de %d es: %d",numero,resultado);
    printf("\n Deseas repetir? (s/n): ");
    scanf("%s",&repetir);
  }
}
int factorial(int numero){
	int resultado,i;
    resultado = numero;
    for (i=1; i < numero; i++){
      resultado = resultado * i;
    }
    return(resultado);
}
