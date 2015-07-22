#include <stdio.h>
#include <conio.h>

int fibo(int n);

void main(){
	int term,resultado;
	printf("Introduce el termino del cual deseas calcular la serie de fibonacci: ");
   scanf("%d",&term);
   resultado = fibo(term);
   printf("El numero de fibonacci es: %d",resultado);
   getch();

}
int fibo(int n){
	if (n==0){
   	return(1);
   }
   if (n==1){
   	return(1);
   }
   else{
      return(fibo(n-1)+fibo(n-2));
   }
}

