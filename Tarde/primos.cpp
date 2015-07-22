#include <iostream.h>
main(){
  int n, i=1, contador=0;

  cout << "Introduzca el numero a revisar: ";
  cin >> n;

  while (n > i){
    if (n%i == 0){
      contador ++;
    }
    i++;
  }

  if (contador == 1){
    cout << " El numero es primo";
  }else{
    cout << " El numero no es primo";
  }
  cin >> n;

}





