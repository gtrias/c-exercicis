#include <iostream.h>
#include <conio.h>
void horizontal(int n, int fila, int col){
	int i;
   gotoxy(col, fila);
   for (i=0; i<n; i++){
     cout << "*";
   }

}
void vertical(int n, int fila, int col){
	int i;

   for (i=0; i<n; i++){
	   gotoxy(col, fila);
   	cout << "*";
      fila++;
   }
}
void main(){
	int cuad_columna, cuad_fila, asteriscos, i;
   cout << "En que posicion (x) deseas dibujar el cuadrado?: ";
   cin >> cuad_columna;
   cout << "En que posicion (y) deseas dibujar el cuadrado?: ";
   cin >> cuad_fila;
   cout << "Cuantos asteriscos deseas pintar por lado?: ";
   cin >> asteriscos;

   //Dibujo del cuadrado

   //Primera linia horizontal
   for(i=0; i<asteriscos ;i++){
      horizontal(asteriscos,cuad_fila,cuad_columna);
   }
   //Segunda linia horizontal
   for(i=0; i<asteriscos ;i++){
   	horizontal(asteriscos,cuad_fila+asteriscos,cuad_columna);
   }
   //Primera linia vertical
   for(i=0; i<asteriscos ;i++){
   	vertical(asteriscos,cuad_fila,cuad_columna);
   }
   //Segunda linia vertical
   for(i=0; i<asteriscos ;i++){
   	vertical(asteriscos+1,cuad_fila,cuad_columna+asteriscos);
   }
   cin >> cuad_fila;

}