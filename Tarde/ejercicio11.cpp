#include <iostream.h>
main(){
  int numeros,contador;
  contador = 0;
  cout << "Introduzca numeros\n";
  cin >> numeros;
  while (numeros != 0){
    if (numeros > 0){
      contador ++;
    }
    cin >> numeros;
  }
  cout << "Has escrito " << contador << " veces un numero positivo";
  cin >> numeros;
}