#include <iostream.h>
main(){
  int num, contador;
  cout << "Escriba el numero para descubrir sus divisores";
  cin >> num;
  contador = num;
  while (contador != 0){
    if (num % contador == 0){
      cout << "\n" << contador << " Es divisor";
    }
    contador --;
  }
  cin >> num;

}
