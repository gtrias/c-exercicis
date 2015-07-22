#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int tablero_usr[10][10];
int tablero_ia[10][10];
int vidas_usuario = 3;
int vidas_maquina = 3;
int disparo_acertado[2] = {11,11};
int posibles[2][8];


void dibujar_cuad_maq();
void dibujar_cuad_usr();
void inicializar_matr();
void mensaje(int tipo);
void colocar_barco_maquina();
void colocar_barco_usuario();
void disparo_usuario();
void disparo_maquina(int coord_x, int coord_y);
void adivinar_coord(int x, int y);


void main(){
	randomize();
	inicializar_matr();
   colocar_barco_maquina();
	dibujar_cuad_maq();
   dibujar_cuad_usr();
   colocar_barco_usuario();
   dibujar_cuad_usr();
   do {
   	disparo_usuario();
      disparo_maquina(disparo_acertado[0],disparo_acertado[1]);
      mensaje(1);
      printf("Vidas usuario %d vidas maquina %d", vidas_usuario, vidas_maquina);
      getch();
   } while(vidas_usuario != 0 && vidas_maquina != 0);
   if(vidas_usuario == 0){
   	mensaje(0);
      printf("HAS PERDIDO!!!!!!!!");
   }
   else{
    	mensaje(0);
      printf("FELICIDADES HAS GANADO!!!!!!!!!");
   }
   getch();

}

// --------------------------------------------------------
// | PROCEDIMIENTO PARA DIBUJAR LA CUADRICULA DEL USUARIO  |
// --------------------------------------------------------
void dibujar_cuad_usr(){
	int i,j,y,x;

   y=5;
   x=10;
   gotoxy(x,y-3);
   for(i=0; i<10; i++){
         	printf("%d",i+1);
   }
   for (j=0; j<10; j++){
   	gotoxy(x-3,y);
      printf("%d",j+1);

      gotoxy(x,y);
      for (i=0; i<10; i++){
         if (tablero_usr[i][j] == 0 || tablero_usr[i][j] == 3){
         	printf(".");
      	}
         if (tablero_usr[i][j]==1){
         	printf("o");
         }
         if (tablero_usr[i][j]==2){
         	printf("X");
         }
      }
      y++;
   }
}
// --------------------------------------------------------
// | PROCEDIMIENTO PARA DIBUJAR LA CUADRICULA DE LA MAQUINA|
// --------------------------------------------------------

void dibujar_cuad_maq(){
	int i,j,y,x;

   y=5;
   x=30;
   gotoxy(x,y-3);
   for(i=0; i<10; i++){
         	printf("%d",i+1);
   }
   for (j=0; j<10; j++){
   	gotoxy(x-3,y);
      printf("%d",j+1);
      gotoxy(x,y++);
   	for (i=0; i<10; i++){
      	if (tablero_ia[i][j]==3){
         	printf(".");
         }
         if (tablero_ia[i][j]==1 || tablero_ia[i][j]==0){
         	printf("?");
         }
         /*if (tablero_ia[i][j]==1){
         	printf("o");
			}*/
         if (tablero_ia[i][j]==2){
         	printf("X");
         }
      }
   }
}

// --------------------------------------------------------
// | PROCEDIMIENTO PARA INICIALIZAR LAS MATRICES           |
// --------------------------------------------------------
void inicializar_matr(){
	int i,j;
   for (i=0; i<10; i++){
   	for (j=0; j<10; j++){
      	tablero_usr[i][j] = 0;
         tablero_ia[i][j] = 0;
      }
   }

}
void mensaje(int tipo){
	if (tipo == 0){
		gotoxy(5,16);
      printf("                                                                         ");
      gotoxy(5,16);
   }
   if (tipo == 1){
      gotoxy(5,18);
   	printf("                                                                         ");
   	gotoxy(5,18);
   }
}
// --------------------------------------------------------
// | PROCEDIMIENTO PARA COLOCAR LOS BARCOS DE LA MAQUINA	 |
// --------------------------------------------------------

void colocar_barco_maquina(){
	int coordx, coordy, orientacion;
   coordx = random(10);
   coordy = random(10);
   orientacion = random(2);

   if (!orientacion){
   	if(coordx==9){
		  coordx --;
      }
      else{
      	if(coordx==0){
	         coordx ++;
         }
      }
      tablero_ia[coordx-1][coordy] = 1;
      tablero_ia[coordx+1][coordy] = 1;

   }else{
   	if (coordy==0){
			coordy++;
      }
      else{
      	if (coordy==9){
         	coordx--;
         }
      }
   			tablero_ia[coordx][coordy-1] = 1;
      		tablero_ia[coordx][coordy+1] = 1;
   }
   tablero_ia[coordx][coordy] = 1;

}

// --------------------------------------------------------
// | PROCEDIMIENTO PARA COLOCAR LOS BARCOS DEL USUARIO	 |
// --------------------------------------------------------
void colocar_barco_usuario(){
	int coord_x,coord_y,orient;
   mensaje(0);
   printf("¿Donde quieres colocar el barco?");
	mensaje(1);
   printf("Introduzca la coordenada 'X' (entre 1 y 10): ");
   scanf("%d",&coord_x);
   coord_x --;

   mensaje(1);
   printf("Introduzca la coordenada 'Y' (entre 1 y 10): ");
   scanf("%d",&coord_y);
   coord_y --;

   mensaje(1);
   printf("Introduzca 1 si quieres el barco vertical o 0 si lo quieres horizontal: ");
   scanf("%d",&orient);


   if (orient){
   	if (coord_y==0){
      	coord_y ++;
      }
   	else{
       	if (coord_y==9){
         	coord_y --;
         }
      }
   tablero_usr[coord_x][coord_y-1] = 1;
	tablero_usr[coord_x][coord_y+1] = 1;
	}
   else{
   	if(coord_x==9){
			coord_x --;
      }
      else{
      	if(coord_x==0){
         	coord_x ++;
         }
      }
     	tablero_usr[coord_x-1][coord_y] = 1;
  		tablero_usr[coord_x+1][coord_y] = 1;
   }
   tablero_usr[coord_x][coord_y] = 1;
   mensaje(0);
}

// --------------------------------------------------------
// | PROCEDIMIENTO PARA REALIZAR EL DISPARO DEL USUARIO	 |
// --------------------------------------------------------


void disparo_usuario(){
	int coordx,coordy;
   mensaje(0);
   printf("Donde quieres lanzar el torpedo?");
	mensaje(1);
   printf("Introduzca la coordenada X: ");
   scanf("%d",&coordx);
   coordx--;
   mensaje(1);
   printf("Introduzca la coordenada Y: ");
   scanf("%d",&coordy);
   coordy--;

	if (tablero_ia[coordx][coordy]==0){
   	mensaje(0);
      printf("El torpedo ha caido al agua!!!");
      tablero_ia[coordx][coordy]=3;
      dibujar_cuad_maq();
      getch();
   }
   else{
   	if (tablero_ia[coordx][coordy]==1){
    		mensaje(0);
    	  	printf("Felicidades!! El torpedo ha tocado un barco enemigo!");
   	   tablero_ia[coordx][coordy]=2;
   	   vidas_maquina --;
			dibujar_cuad_maq();
   	   getch();
   	}
      else{

         mensaje(0);
         printf("Ya has disparado antes en esta coordenada!!");
         getch();
      }
   }


}

// --------------------------------------------------------
// | PROCEDIMIENTO PARA REALIZAR EL DISPARO DE LA MAQUINA |
// --------------------------------------------------------

void disparo_maquina(int coord_x, int coord_y){

   int i;

	if (coord_x > 10 || coord_y > 10){
	   coord_x = random(10);
	   coord_y = random(10);

      while(tablero_usr[coord_x][coord_y]==3 || tablero_usr[coord_x][coord_y]==2){
   	 	coord_x = random(10);
	  		coord_y = random(10);
   	}
  	}
   else{
   	while(tablero_usr[coord_x][coord_y]==3 || tablero_usr[coord_x][coord_y]==2){

      	adivinar_coord(coord_x,coord_y);
      	i = random(8);
      	coord_x = posibles[0][i];
      	coord_y = posibles[1][i];
      }
   }

   if (tablero_usr[coord_x][coord_y] == 0){
    	mensaje(0);
      printf("La maquina ha fallado!!!!");
      tablero_usr[coord_x][coord_y] = 3;
      dibujar_cuad_usr();
      getch();

   }
   else{
   	if (tablero_usr[coord_x][coord_y] == 1){
   		mensaje(0);
   	   printf("La maquina ha dado con uno de tus barcos!!!!!");
			vidas_usuario --;
   		tablero_usr[coord_x][coord_y] = 2;
         disparo_acertado[0] = coord_x;
         disparo_acertado[1] = coord_y;
    	 	dibujar_cuad_usr();
    	  	getch();
  		}
   }








}
// --------------------------------------------------------
// | PROCEDIMIENTO PARA REALIZAR EL DISPARO DE LA MAQUINA  |
// | DESPUES DE HABER ACERTADO UN PUNTO						  |
// --------------------------------------------------------
void adivinar_coord(int x, int y){


   posibles[0][0] = x - 1;
   posibles[1][0] = y;

   posibles[0][1] = x + 1;
   posibles[1][1] = y;

   posibles[0][2] = x;
   posibles[1][2] = y - 1;

   posibles[0][3] = x;
   posibles[1][3] = y + 1;

   posibles[0][4] = x + 1;
   posibles[1][4] = y + 1;

   posibles[0][5] = x - 1;
   posibles[1][5] = y - 1;

   posibles[0][6] = x + 1;
   posibles[1][6] = y - 1;

   posibles[0][7] = x - 1;
   posibles[1][7] = y + 1;

}


