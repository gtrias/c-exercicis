#include <iostream.h>
main(){
  int num, contador, quociente;
  char ejecucion='s';
  while (ejecucion == 's' || ejecucion == 'S'){
    cout << "Escriba el numero para descubrir sus divisores: ";
    cin >> num;
    contador = 1;
    quociente = 2;
    while (contador < quociente){
      if (num % contador == 0){
        quociente = num / contador;
        cout << "\n" << quociente << " Es divisor";
        cout << "\n" << contador << " Es divisor";
      }
      contador ++;
    }
    ejecucion = 'k';
    while (ejecucion != 's' && ejecucion != 'S' && ejecucion != 'n' && ejecucion != 'N'){
      cout << "\n Quiere continuar (s/n): ";
      cin >> ejecucion;
    }
  }
}
