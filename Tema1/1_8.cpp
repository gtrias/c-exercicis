#include <iostream.h>
#include <mate.h>
void main(){
   int n1, n2,menor,mayor,n,i;
	cout << "Introduce el primer numero a analizar: ";
   cin >> n1;
   cout << "Introduce el segundo numero a analizar: ";
   cin >> n2;
   if (n1 < n2){
   	menor = n1;
      mayor = n2;
   }else{
   	menor = n2;
      mayor = n1;
   }




   for (n = menor; n != mayor; n++){
      for (i=n; i != mayor ; i++){
	     	if (i != n && amigos(n,i)==true){
   	      	cout << "\nEl numero " << n << " y el numero " << i << " son amigos";
		   }
      }
   }
   cout << "\n EL programa ha terminado de calcular" ;
  cin >> n1;

}