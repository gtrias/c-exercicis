#include <iostream.h>
#include <conio.h>
pintar(int n, int fila, int col){
	int i;
   gotoxy(col, fila);
   for (i=0; i<n; i++){
     cout << "*";
   }

}
main(){
	int fil,i,asterisc=0;
   cout << "Cuantas filas quieres? ";
   cin >> fil;
   for(i=0; i<fil ;i++){
      pintar(asterisc,i+10,10);
      asterisc++;
   }
   cin >> fil;

}