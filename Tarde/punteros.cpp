#include <iostream.h>
#include <math.h>
main(){

int *a,*b,*c,*n;

a = new int;
b = new int;
c = new int;
n = new int;

cout<<"introduzca primer numero: ";
cin>> *a;
cout<<"introduzca segundo numero: ";
cin>> *b;
cout<<"introduzca tercer numero: ";
cin>> *c;


*n = *a;
if(*n < *b){
  *n = *b;
}
if(*n < *c){
  *n = *c;
}


cout<<"el numero mayor es: "<< *n;
cin>> *n;
delete a,b,c,n;

return(0);
}
