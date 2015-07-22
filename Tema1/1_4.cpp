// NOMINA
#include <iostream.h>
void main(){
	int t_contrat,n_hijos,total;
   char pregunta;
	cout << "Introduzca el sueldo base: ";
	cin >> total;
	cout << "\n Introduzca el tiempo de antigüedad en años que lleva el empleado en la empresa: ";
	cin >> t_contrat;
   if (t_contrat != 0){
		total = (t_contrat / 3) * 5000;
   }
   cout << "\n Es el empleado jefe de departamento? (s/n) :";
   cin >> pregunta;
   if (pregunta == 's' || pregunta == 'S'){
   	total = total + 7000;
   }
   cout << "\n Esta el trabajador casado? (s/n) :";
   cin >> pregunta;
   if (pregunta == 's' || pregunta == 'S'){
		total = total + 10000;
   }
   cout << "\n Cuantos hijos tiene? :";
   cin >> n_hijos;
   if (n_hijos != 0){
   	total = total + (n_hijos * 3000);
   }
   cout << "\n En total la nomina de este trabajador es de: " << total  << "pts.";
   cin >> pregunta;

}