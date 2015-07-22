#include <iostream.h>
main(){
  int n,mayor=0,temp,contador,posicion;
  cout << "Introduzca la cantidad de numeros que quiere comparar: ";
  cin >> n;
  cout << "\nIntroduzca un numero: ";
  cin >> temp;
  posicion = 1;
  for (contador=2; contador <= n ; contador ++){
    cout << "\nIntroduzca un numero: ";
    cin >> temp;
    if (temp > mayor){
      mayor = temp;
      posicion = contador;
    }
  }
  cout << "\n El mayor numero es: " << mayor << " y esta en " << posicion << "posicion";
  cin >> n;
}