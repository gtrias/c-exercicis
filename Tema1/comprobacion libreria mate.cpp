#include <iostream.h>
#include <mate.h>
main(){
	int numero_1, numero_2;
	cout << "Introduzca el numero para averiguar si es perfecto: ";
   cin >> numero_1;

   if (perfecto(numero_1)==true){
   	cout << "\n El numero es perfecto";
   }else{
   	cout << "\n El numero no es perfecto";
   }

   numero_1 = 0;
   numero_2 = 0;
   cout << "\n Introduzca dos numeros para comprobar si son amigos: ";
   cin >> numero_1 >> numero_2;
   if (amigos(numero_1,numero_2)==true){
	   cout << "\n Los numeros son amigos!!";
   }else{
   	cout << "\n Los numeros no son amigos!!";
   }
   cin numero_1;

}
