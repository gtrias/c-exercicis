#include <iostream.h>
main(){
  int Hd,Md,Sd,Tv,Hll,Mll,Sll;
  cout << "Introduzca la hora de despegue(h): ";
  cin >> Hd;
  cout << "Introduzca los minutos de despegue(m): ";
  cin >> Md;
  cout << "Introduzca los segundos de despegue(s): ";
  cin >> Sd;
  cout << "Introduzca el tiempo de vuelo en segundos(s): ";
  cin >> Tv;
  Sll = Tv + Sd;
  Mll = Md + Sll / 60;
  Sll = Sll % 60;
  Hll = Hd + Mll / 60;
  Mll = Mll % 60;
  Hll = Hll % 24;

  cout << "La hora de llegada es: " << Hll << ":" << Mll << ":" << Sll;
  cin >> Tv;
  return(0);
}
