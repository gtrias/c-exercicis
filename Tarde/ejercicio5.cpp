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
  if ( b*b-4*a*c < 0 ){
    cout << "Este problema no se puede resolver";
    cin >> a;
  }else{
    res_1 = (-b+ sqrt(b*b-4*a*c)) / (2*a);
    res_2 = (-b- sqrt(b*b-4*a*c)) / (2*a);
    cout << "El primer resultado es: " << res_1 << "\n";
    cout << "El segundo resultado es: " << res_2 << "\n";
    cin >>a;
  }
  return(0);
}