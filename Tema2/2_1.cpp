#include <stdio.h>
#include <conio.h>
int mcd (int numero1, int numero2);
void main(){
	int num1, num2;
   printf("Introduce el primer numero: ");
   scanf("%d",&num1);
   printf("Introduce el segundo numero: ");
   scanf("%d",&num2);

   printf("El mcd entre %d y %d, es: %d",num1,num2,mcd(num1,num2)) ;
   getch();


}

int mcd (int numero1, int numero2){
	int temporal;
   while (numero1 > 0){
   	temporal = numero1;
      numero1 = numero2 % numero1;
      numero2 = temporal;
   }
   return numero2;
}

