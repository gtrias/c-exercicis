// ROMBO por Genar Trias Ortiz
#include <stdio.h>
#include <conio.h>

void pintarLinia(int x, int y, int orientacion, int asterisc );
void pintarTriangulo(int x, int y, int orientacion, int asterisc);
void pintarRombo(int x, int y, int asterisc);

void main(){
	int x,y,n_asterisc;
   printf("En que posicion horizontal deseas pintar el rombo? ");
   scanf("%d",&x);
   printf("En que posicion vertical deseas pintar el rombo? ");
   scanf("%d",&y);
   printf("Cuantos asteriscos tiene que tener?: ");
   scanf("%d",&n_asterisc);
   clrscr();
	pintarRombo(x,y,n_asterisc);
	getch();
}

void pintarLinia(int x, int y, int orientacion, int asterisc ){
	int i;

   if (orientacion == 1){
   	gotoxy(x,y);
	   for(i = 0; i<asterisc; i++){
      	printf("*");
   	}
   }else{

   	for(i = 1; i<=asterisc; i++){
       	gotoxy(x-i,y);
         printf("*");
      }
   }
}

void pintarTriangulo(int x, int y, int orientacion, int asterisc){
	int i;
	// DERECHA ARRIBA
	if (orientacion == 1){
		for (i=asterisc; i>=0; i--){
       	pintarLinia(x,y,1,i);
         y--;
      }
   }
   // DERECHA ABAJO
   else{
   	if(orientacion == 2){
      	for (i=asterisc; i>=0; i--){
       		pintarLinia(x,y,1,i);
         	y++;
      	}
      }
      // IZQUIERDA ARRIBA
      else{
      	if(orientacion == 3){
         	for (i=asterisc; i>=0; i--){
       			pintarLinia(x,y,2,i);
         		y--;
      		}
         }
         // IZQUIERDA ABAJO
         else{
         	for (i=asterisc; i>=0; i--){
       			pintarLinia(x,y,2,i);
         		y++;
      		}
         }
      }
	}

}

void pintarRombo(int x, int y, int asterisc){
	pintarTriangulo(x,y,1,asterisc);
   pintarTriangulo(x,y,2,asterisc);
   pintarTriangulo(x,y,3,asterisc);
   pintarTriangulo(x,y,4,asterisc);

}
