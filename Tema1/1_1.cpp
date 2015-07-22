#include <stdio.h>
#include <conio.h>

void par(int numero);

main(){
  int numero;
  printf("Introduzca el numero a comprobar: ");
  scanf("%d",&numero);
  par(numero);

}

void par(int numero){
  if (numero%2 == 0){
    printf("\n El numero es par");
  }else{
    printf("\n El numero es impar");
  }
  getch();
}
