#include <iostream.h>
main (){
int *variable1, *cambio;

variable1 = new int;
cambio = new int;

cin >> *cambio;

variable1 = cambio;

cout << *variable1;
cout << "\n" << variable1 << "\n" << cambio;

cin >> *variable1;

}

