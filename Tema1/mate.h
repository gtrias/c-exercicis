// FUNCION FACTORIAL
int factorial(int numero){
	int resultado,i;
   resultado = numero;
   for (i=1; i < numero; i++){
     resultado = resultado * i;
   }
   return(resultado);
}

// FUNCION NUMERO PRIMO
bool primo(int numero){
	int i=1,contador=0;
	while (numero > i){
   	if (numero%i == 0){
   		contador ++;
   	}
	i++;
  	}

	if (contador == 1){
		return(true);
  	}else{
   	return(false);
  	}
}


// FUNCION PERFECTO
bool perfecto(int numero){
	// PRIMERO COMPROBAREMOS LOS DIVISORES
   int contador=2,quociente=3, suma_divisores=1;

   while (contador < quociente){
     if (numero % contador == 0){
       quociente = numero / contador;
       suma_divisores = suma_divisores + quociente + contador;
     }
     contador ++;
   }
   // AHORA COMPROBAMOS SI LA SUMA DE LOS DIVISORES (SIN CONTAR EL NUMERO PROPIO)
   // ES IGUAL QUE EL NUMERO INTRODUCIDO
   if (numero == suma_divisores){
   	return(true);
   }else{
   	return(false);
   }

}

// FUNCION NUMEROS AMIGOS
bool amigos(int num_1, int num_2){

   int contador=2,quociente=3, suma_divisores_1=1, suma_divisores_2=1;

   // SUMA DE DIVISORES DEL PRIMER NUMERO
  	while (contador < quociente){
  		if (num_1 % contador == 0){
     		quociente = num_1 / contador;
     		suma_divisores_1 = suma_divisores_1 + quociente + contador;
  		}
	   contador ++;
   }

   // SUMA DE DIVISORES DEL SEGUNDO NUMERO
   contador = 2;
   quociente = 3;
   while (contador < quociente){
  		if (num_2 % contador == 0){
     		quociente = num_2 / contador;
     		suma_divisores_2 = suma_divisores_2 + quociente + contador;
  		}
	   contador ++;
   }

   // AHORA COMPROBAMOS SI LA SUMA DE LOS DIVISORES (SIN CONTAR EL NUMERO PROPIO)
   // DE CADA NUMERO ES IGUAL AL OTRO NUMERO
   if (suma_divisores_1 == num_2 && suma_divisores_2 == num_1){
   	return(true);
   }else{
   	return(false);
   }

}

bool primos(int n1, int n2){
	int i,mayor,menor;
   if (n1 > n2){
   	mayor = n1;
      menor = n2;
   }else{
   	mayor = n2;
      menor = n1;
   }

  	for (i=2; i <= menor; i++){
      if (menor % i == 0 && mayor % i == 0){
      	return (false);
      }
   }
   return (true);
}


int euler(int n){
	int i,resultado=0;
   for (i=1; i < n; i++){
		if (primos(n,i) == true){
      	resultado ++;
      }
   }
   return(resultado);

// cuantos hay menor que este numero que sean primos con �l
}


int combinatorio(int n1, int n2){
	int resultado;
   resultado = (factorial(n1) / factorial(n2)) * factorial (n1-n2);
   return (resultado);
}

int potencia(int n,int grado){
	int i,resultado;
   resultado = n;
   for(i=1; i < grado; i++){
   	resultado = resultado * n;
   }
   return(resultado);

}
