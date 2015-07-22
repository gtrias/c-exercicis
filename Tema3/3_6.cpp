#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <conio.h>

void inicializarMatriz();
// repartir 1 para el usuario y 2 para la máquina
void repartir(int usuario, int matriz);
void identificarCarta(int i, int j);
int menuOpciones();

void main (){
	int baraja[4][10];
	int puntos_usuario = 0, puntos_maquina = 0;
	randomize();
	inicializarMatriz();
	repartir(1,baraja);
}

void repartir(int usuario, int matriz){
	int fila,columna;

   do{
   	fila = random(10);
   	columna = random(4);
      matriz[columna][fila] = usuario;
   }while(matriz[columna][fila] != 1 && matriz[columna][fila] != 2);
}

int menuOpciones(){
 	int opcion;
   printf("1.- Pedir Carta: ");
   printf("2.- Plantarse");
   scanf("%d",&opcion);
   return(opcion);
}

void inicializarMatriz(){
	int i,j;
   for (i=0; i<4; i++){
   	for (j=0; j<10; j++){
  			baraja[i][j] = 0;
      }
  	}
}

void banca(){
	int i,j;
   i = random(4);
   j = random(10);
   baraja[i][j]=2;
}

void identificarCarta(int i, int j){
	//i palo j carta
   i++;
   j++;
   if (i == 1){
    	printf ("oros");
   }
   if (i == 2){
      printf("espadas");
   }
   if (i == 3){
      printf("copas");
   }
   if (i == 4){
      printf("bastos");
   }

   if (j == 1){
    	printf("a");
   }
   if (j == 11){
   	printf("j");
   }
   if (j == 12){
   	printf("q");
   }
   if (j == 13){
   	printf("")
}

