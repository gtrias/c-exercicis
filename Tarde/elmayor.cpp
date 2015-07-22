#include <iostream.h>
main(){
  int numero,mayor=0;
  cout << "Introduzca el primer numero a comparar (999 para salir): ";
  cin >> numero;
  while (numero != 999){
    if (numero > mayor){
      mayor = numero;
    }
    cout << "\n Introduzca el siguiente numero a comparar (999 para salir): ";
    cin >> numero;
  }
  cout << "\n El mayor de los que has escrito es: " << mayor;
  cin >> mayor;
}