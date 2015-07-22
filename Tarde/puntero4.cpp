#include <iostream.h>
main (){
  int *puntero;

  puntero = 0x00000000;

  *puntero = 4987;

  cout << *puntero;

  cout << "\n" << puntero;

  cin >> *puntero;




}
