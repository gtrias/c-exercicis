#include <iostream.h>
#include <math.h>
main(){

int a,b,c,d,n;

cout<<"introduzca primer numero: ";
cin>>a;
cout<<"introduzca segundo numero: ";
cin>>b;
cout<<"introduzca tercer numero: ";
cin>>c;
cout<<"introduzca cuarto numero: ";
cin>>d;

n=a;
if(n<b){
  n=b;
}
if(n<c){
  n=c;
}
if(n<d){
  n=d;
}

cout<<"el numero mayor es: "<<n;
cin>>n;
return(0);
}
