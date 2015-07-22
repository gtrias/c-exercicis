#include <stdio.h>
#include <conio.h>
void menu();
void crear();
void ordenar();
void insertar();
void borrar();
void buscar();
void visualizar();

int vector[100];
int final=0;

void main(){
	menu();
}
void menu(){
   int seleccion;
	clrscr();
   printf("1.- Crear vector numerico de 10 elementos: ");
   printf("\n2.- Ordenar vector: ");
   printf("\n3.- Insertar un elemento: ");
   printf("\n4.- Borrar un elemento: ");
   printf("\n5.- Buscar un elemento: ");
   printf("\n6.- Visualizar lista: \n");
   scanf("%d",&seleccion);
   switch (seleccion){
   	case 1: crear();
      	break;
      case 2: ordenar();
      	break;
      case 3: insertar();
      	break;
      case 4: borrar();
      	break;
      case 5: buscar();
      	break;
      case 6: visualizar();
      	break;
   }
}
void crear(){
	int i;
   final = 0;
	for (i=0; i < 10; i++ ){
   	printf("\n Introduzca el #%d numero: ",i);
      scanf("%d",&vector[i]);
      final ++;
   }
   printf("Se ha creado el vector correctamente");
   visualizar();
}
void ordenar(){
	int cont,i, aux;

   for(cont=0; cont < final; cont++){
   	for(i=0; i < final-1; i++){
			if (vector[i]>vector[i+1]){
   	   	aux = vector[i+1];
    			vector[i+1] = vector[i];
      		vector[i] = aux;
	   	}
      }
   }
   printf("El vector se ha ordenado correctamente");
   visualizar();

}
void insertar(){
	int pos,i,numero,aux;
	printf("Introduzca la posicion donde se desea insertar un numero: ");
   scanf("%d", &pos);
   printf("Introduzca el numero a almacenar: ");
   scanf("%d", &numero);

   for (i=pos-1; i<= final; i++){
		aux = vector[i];
   	vector[i] = numero;
      numero = aux;
   }
   final ++;
   visualizar();

}
void borrar(){
	int i,aux,pos;
   printf("Introduzca la posicion donde se desea insertar un numero: ");
   scanf("%d", &pos);
   for (i=pos; i<= final; i++){
		aux = vector[i+1];
   	vector[i] = vector[i+1];
      vector[i+1] = aux;
   }
   final --;
   visualizar();


}
void buscar(){
	int valor, i;
	printf("Introduzca el valor a buscar: ");
   scanf("%d",&valor);
   for (i=0; i < final; i++ ){
   	if (vector[i] == valor){
      	printf("\nEl valor que estabas buscando se encuentra en la pos %d",i);
      }
   }
   getch();
   menu();
}
void visualizar(){
	int i;
	printf("\nLos valores del vector son: ");
   for (i=0; i < final; i++ ){
   	printf(" %d, ",vector[i]);
   }
   getch();
   menu();
}

