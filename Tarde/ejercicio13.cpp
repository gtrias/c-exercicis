#include <iostream.h>
main(){
  int n,contador=0,resultado=0;
  cout << "Introduzca un numero: ";
  cin >> n;
  while (contador <= n){
      resultado = resultado + contador;
      contador ++;
  }
  cout << "\n El resultado es: " << resultado;
  cin >> n;
}
