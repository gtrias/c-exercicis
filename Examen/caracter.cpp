// CADENAS CARACTERES por Genar Trias Ortiz
#include <stdio.h>
#include <conio.h>
#include <string.h>

void rotaCadena(char cadena[100], int n, int orientacion);
void verCadena(char cadena[100]);
char cambiaCaracter(char caracter, int n);
void encriptaCadena(char cadena[100], int rotacion, int cambioCaracter);
void desencriptaCadena(char cadena[100], int rotacion, int cambioCaracter);


void main(){
	int desplazamiento,cambio_caracter;
	char cadena[100];
   printf("Introduce cadena a encriptar: ");
   gets(cadena);
   printf("\n Que valor de desplazamiento deseas para la encriptacion: ");
   scanf("%d",&desplazamiento);
   printf("\n Que valor de cambio de caracteres deseas?: ");
   scanf("%d",&cambio_caracter);
   encriptaCadena(cadena, desplazamiento, cambio_caracter);
   printf("La cadena encriptada ha quedado asi: ");
	verCadena(cadena);

	printf("\n Que valor de desplazamiento deseas para la desencriptacion: ");
   scanf("%d",&desplazamiento);
   printf("\n Que valor de cambio de caracteres deseas para desencriptar?: ");
   scanf("%d",&cambio_caracter);
   desencriptaCadena(cadena, desplazamiento, cambio_caracter);
   printf("La cadena desencriptada ha quedado asi: ");
   verCadena(cadena);

}


void encriptaCadena(char cadena[100], int rotacion, int cambioCaracter){
	int i,final;
   final = strlen(cadena);
	rotaCadena(cadena,rotacion,1);
   for (i = 0; i<final; i++){
		cadena[i] = cambiaCaracter(cadena[i],cambioCaracter);
   }
}
void desencriptaCadena (char cadena[100], int rotacion, int cambioCaracter){
   int i,final;
   cambioCaracter = - cambioCaracter;
   final = strlen(cadena);
	rotaCadena(cadena,rotacion,2);
   for (i = 0; i<final; i++){
		cadena[i] = cambiaCaracter(cadena[i],cambioCaracter);
   }
}

char cambiaCaracter(char caracter, int n){
 	caracter = caracter + n;
   return(caracter);
}
void rotaCadena(char cadena[100], int n, int orientacion){
	char buffer[100];
   int longitud,i,pos;
   longitud = strlen(cadena);
   strcpy(buffer,cadena);

   if (orientacion == 2){
		for (i=0; i<longitud; i++){
  		 	pos = i+n;
     		if (pos >= longitud){
      		pos = pos - longitud;
      	}
      	cadena[i] = buffer[pos];
   	}
   }else{
   	for (i=0; i<longitud; i++){
      	pos = i-n;
         if (pos < 0){
         	pos = pos + longitud;
         }
         cadena[i] = buffer[pos];
      }
   }

}
void verCadena(char cadena[100]){
 	printf("\n%s", cadena);
   getch();
}
