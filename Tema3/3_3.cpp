#include <stdio.h>
#include <conio.h>
void menu();
void registrarGrado(int n_poli);
void registrarPoli(int pol[], int grado);
void operacion(int resta);
void visualizar();
void visualizar_resultado();
void signo(int vector[],int i);

int poli1[100];
int poli2[100];
int resultado[100];
int grado1=0;
int grado2=0;



void main(){
	menu();

}

void menu(){
	int opcion;
	printf("1.- Introducir primer polinomio: ");
   printf("\n2.- Introducir segundo polinomio: ");
  	printf("\n3.- Sumar los polinomios: ");
  	printf("\n4.- Restar  polinomios: ");
   printf("\n5.- Visualizar polinomio: ");
   printf("\n6.- Visualizar resultado: \n");
   scanf("%d",&opcion);
   switch(opcion){
   	case 1: registrarGrado(0);
      	break;
      case 2: registrarGrado(1);
      	break;
      case 3: operacion(0);
      	break;
      case 4: operacion(1);
      	break;
      case 5: visualizar();
      	break;
      case 6: visualizar_resultado();
      	break;
   }

}
void registrarGrado(int n_poli){

	printf("Introduzca el grado del polinomio %d: ", n_poli);
   if (!n_poli){
   	scanf("%d",&grado1);

      registrarPoli(poli1,grado1);
   }else{
   	scanf("%d",&grado2);

      registrarPoli(poli2,grado2);
   }

}
void registrarPoli (int pol[], int grado){
	int i;
	for(i=0; i<=grado; i++) {
   	printf("\n Introduzca el valor del grado %d: ",i);
      scanf("%d",&pol[i]);
   }
   menu();
}
void visualizar(){
	int i,pol,grado,poli;
   printf("Que polinomio quieres visualizar? :");
   scanf("%d",&pol);
   if(pol==1){
   	for(i=grado1;i>=1;i--) {
      	signo(poli1,i);
   		printf("%dx^%d ",poli1[i],i);
   	}
      signo(poli1,i);
      printf("%d",poli1[0]);
   }
   else{

      for(i=grado2;i>=1;i--) {
      	signo(poli2,i);
   		printf("%dx^%d ",poli2[i],i);
   	}
      signo(poli2,i);
      printf("%d",poli2[0]);

   }


   getch();
   menu();

}
void visualizar_resultado(){
   int mayor;
	if (grado1 > grado2){
    	mayor = grado1;
   }
   else{
   	mayor = grado2;
   }
 	do {
      	signo(resultado,mayor);
   		printf("%dx^%d ",resultado[mayor],mayor);
         mayor --;
   }while(mayor>=1);
      signo(resultado,mayor);
      printf("%d",resultado[0]);

	getch();
   menu();
}

void signo(int vector[],int i){
	if (vector[i]>0){
         	printf("+");
   }
}

void operacion(int resta){
	int mayor, menor,i,j;
   if (grado1 > grado2){
    	mayor = grado1;
      menor = grado2;
   }
   else{
    	mayor = grado2;
      menor = grado1;
   }

   for(j=0; j<=menor;j++){
      	if(resta){
				resultado[j] = poli1[j] - poli2[j];
         }
         else{
          	resultado[j] = poli1[j] + poli2[j];
         }
   }
   for(i=j; i<=mayor;i++){
      if (grado1 > grado2){
      	resultado[i] = poli1[i];
      }
      else{
      	resultado[i] = poli2[i];
      }
   }
  	getch();
   menu();
}

