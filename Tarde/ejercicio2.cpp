#include <iostream.h>
main(){
  int n,n_3,n_9;
  cout << "Escriba un numero: ";
  cin >> n;
  n_3 = n * n * n ;
  n_9 = n_3 * n_3 * n_3 ;
  cout << "Dicho numero elevado al cubo da: " << n_3 << "\n";
  cout << "Y elevado a nueva da: " << n_9 << "\n";
  cin >> n;
  return(0);
}