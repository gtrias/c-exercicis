#include <iostream.h>
#include <math.h>
main(){
  int a,b,c;
  float res_1, res_2;
  cout << "introduzca a: ";
  cin >> a;
  cout << "introduzca b: ";
  cin >> b;
  cout << "introduzca c: ";
  cin >> c;
  while (b*b-4*a*c < 0){
    cout << "Los numeros introducidos no se pueden calcular. \n Introduzca otros 3 numeros \n Introduzca el a: ";
    cin >> a;
    cout << "Ahora introduzca b: ";
    cin >> b;
    cout << "Ahora introduzca c: ";
    cin >> c;
  }

  res_1 = (-b+ sqrt(b*b-4*a*c)) / (2*a);
  res_2 = (-b- sqrt(b*b-4*a*c)) / (2*a);
  cout << "El primer resultado es: " << res_1 << "\n";
  cout << "El segundo resultado es: " << res_2 << "\n";
  cin >>a;

  return(0);
}