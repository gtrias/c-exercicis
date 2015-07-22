// TRANSPONER

#include <stdio.h>
#include <conio.h>


int menu();
void transponer(int matriz[5][5], int matriz_trans[5][5]);
void introducirMatriz(int matriz[5][5]);
void visualizarMatriz(int matriz[5][5]);


void main(){
	int matriz1[5][5],matriz2[5][5];
   int opcion;

   while (opcion != 5){
   	opcion = menu();
   	switch(opcion){
    		case 1: introducirMatriz(matriz1);
     		 	break;
      	case 2: transponer(matriz1,matriz2);
      		break;
      	case 3: visualizarMatriz(matriz1);
      		break;
      	case 4: visualizarMatriz(matriz2);
      		break;
         default: printf("Opcion incorrecta!");
         	break;
   	}
   }

}

int menu(){
	int opcion;
	clrscr();
 	printf("1.- Introducir matriz: ");
   printf("\n2.- Transponer matriz: ");
   printf("\n3.- Visualizar matriz introducida: ");
   printf("\n4.- Visualizar matriz transpuesta: ");
   printf("\n5.- Salir: \n");
   scanf("%d",&opcion);
   return(opcion);

}

void introducirMatriz(int matriz[5][5]){
   int fila,columna;
	for(fila=0; fila<5; fila++){
   	for(columna=0; columna<5; columna++){
      	printf("\nIntroduzca el elemento de la fila %d columna %d : ",fila,columna);
         scanf("%d",&matriz[columna][fila]);
      }
   }


}
void transponer(int matriz[5][5], int matriz_trans[5][5]){
	int columna,fila;
   for (fila=0; fila<5; fila++){
		for (columna=0; columna<5; columna++){
		   matriz_trans[fila][columna] = matriz[columna][fila];
      }
   }

}
void visualizarMatriz(int matriz[5][5]){
	int columna,fila;
	for (fila=0; fila<5; fila++){
		for (columna=0; columna<5; columna++){
      	if (columna == 0){
          	printf("\n");
         }
  		   printf(" %d",matriz[fila][columna]);
     	}
	}
	getch();
}
