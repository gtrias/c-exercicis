#include <iostream.h>
main(){
  float radio,area,longitud,pi;

  cout<<"Escriba el radio de la circunferencia: ";
  cin>>radio;
  pi=3,14;
  longitud=2*pi*radio;
  area=pi*radio*radio;
  cout<<"El area de la circunferencia es: " << area <<"\n";
  cout<<"La longitud es: "<< longitud;
  cin>>radio;
  return(0);


}