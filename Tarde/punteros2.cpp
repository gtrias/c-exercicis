#include <iostream.h>
#include <math.h>
main(){

int a,b,c,n;
int *Pa,*Pb,*Pc,*Pn;

Pa = &a;
Pb = &b;
Pc = &c;
Pn = &n;

cout<<"introduzca primer numero: ";
cin>> *Pa;
cout<<"introduzca segundo numero: ";
cin>> *Pb;
cout<<"introduzca tercer numero: ";
cin>> *Pc;


*Pn = *Pa;
if(*Pn < *Pb){
  *Pn = *Pb;
}
if(*Pn < *Pc){
  *Pn = *Pc;
}


cout<<"el numero mayor es: "<< *Pn;
cin>> *Pn;

return(0);
}
