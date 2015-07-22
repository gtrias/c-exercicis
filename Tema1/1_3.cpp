#include <iostream.h>
main (){
  int nota_temp,contador,nota_max=0,nota_min=10,sumatorio=0,suspensos=0;
  float media;
  cout << "Introduzca las notas (del uno al diez) (para salir introducir el 0): \n";
  cin >> nota_temp;
  for (contador=0; nota_temp != 0; contador ++){
    if (nota_temp > 10){
      cout << "\n Tienes que introducir una nota entre el 1 y el 10: ";
    }else{
      if (nota_temp > nota_max){
        nota_max = nota_temp;
      }
    	if (nota_temp < nota_min){
     	  nota_min = nota_temp;
    	}
    	if (nota_temp < 5){
     	  suspensos ++;
    	}
        sumatorio = sumatorio + nota_temp;
    	}
    cin >> nota_temp;


  }
  cout << "\n El numero de notas es: " << contador;
  cout << "\n La mayor nota introducida es: " << nota_max;
  cout << "\n La menor nota introducida es: " << nota_min;
  media = 1.0 * sumatorio / 1.0 * contador;
  cout << "\n La media de las notas introducidas es: " << media ;
  cout << "\n Hay " << suspensos << " personas que no han aprobado.";
  cout << "\n Han aprobado "<< contador - suspensos << " personas";

  cin >> nota_temp;
}