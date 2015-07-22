#include <iostream.h>
main (){
  int nota_temp,contador,nota_max=0,nota_min=100,sumatorio,suspensos=0;
  float media;
  cout << "Introduzca las notas (para salir introducir un numero que no este entre 0 y 100): \n";
  cin >> nota_temp;
  for (contador=0; nota_temp <= 100 && nota_temp >= 0; contador ++){
    if (nota_temp > nota_max){
      nota_max = nota_temp;
    }
    if (nota_temp < nota_min){
      nota_min = nota_temp;
    }
    if (nota_temp < 60){
      suspensos ++;
    }
    sumatorio = sumatorio + nota_temp;
    cin >> nota_temp;

  }
  cout << "\n El numero de notas es: " << contador;
  cout << "\n La mayor nota introducida es: " << nota_max;
  cout << "\n La menor nota introducida es: " << nota_min;
  media = 1.0 * sumatorio / contador;
  cout << "\n La media de las notas introducidas es: " << media ;
  cout << "\n Hay " << suspensos << " personas que no han aprobado.";
  cout << "\n Han aprobado "<< contador - suspensos << " personas";

  cin >> nota_temp;
}