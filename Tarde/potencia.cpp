#include <iostream.h>
main (){
  int contador;
  float b, n, resultado;

  cout << "Introduzca la base: ";
  cin >> b;
  cout << "\nIntroduzca el exponente: ";
  cin >> n;
  resultado = b;
  if (b == 0){
    resultado = 0;
  }
  if (n == 0){
    resultado = 1;
  }
  if (n < 0){
    n = -n;
    for (contador=1; contador < n; contador++){
      resultado = resultado * b;
    }
    resultado = 1/resultado;
  }else{
    for (contador=1; contador < n; contador++){
      resultado = resultado * b;
    }
  }
  cout << "\nEl restultado es: " << resultado;
  cin >> b;

}