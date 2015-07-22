#include <iostream.h>
main(){
  float nota;
  cout << "Introduzca la nota: ";
  cin >> nota;
  if ( nota < 0 || nota > 10){
    cout << "Deve introducir un numero entre 0 y 10";
  }else{
    if (nota < 5){
      cout << "Insuficiente";
    }else{
      if (nota < 7){
        cout << "Suficiente";
      }else{
        if (nota < 9){
          cout << "Notable";
        }else{
          cout << "Sobresaliente";
        }
      }
    }
  }
  cin >> nota;
  return(0);
}
