#include <iostream.h>
main(){
  int n, resultado, cont;
  cout << "Introduzca el numero a factorizar: ";
  cin >> n;
  resultado = n;
  for (cont=1; n > cont ; cont++){
    resultado = resultado * cont;
  }
  cout << "\nEl numero factorizado es: " << resultado;
  cin >> n;
}