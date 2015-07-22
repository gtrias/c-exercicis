#include <iostream.h>
main(){
  int n, i=1, contador=0;
  bool primo;

  cout << "Introduzca el numero a revisar: ";
  cin >> n;

  while (n > i){
    if (n%i == 0){
      contador ++;
    }
    i++;
  }

  if (contador == 1){
    primo = true;
    cout << " El numero es primo";
  }else{
    primo = false;
    cout << " El numero no es primo";
  }
  cin >> n;

}





