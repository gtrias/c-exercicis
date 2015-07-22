#include <iostream.h>
main()
{
int a,b,c;
cout<<"Dime cuanto vale a: " ;
cin>>a;
cout<<"Dime el valor de b: ";
cin>>b;
c=a;
a=b;
b=c;
cout<< "a vale:  " << a << "\n";
cout<< "b vale:  " << b;
cin>> a;
return(0);
}
