//VOCALES

#include <conio.h>
#include <stdio.h>

void contarVocales(char frase[100]);

void main(){
	char frase[100];
   printf("Introduzca la frase que desea averiguar el numero de vocales: ");
	gets(frase);
   contarVocales(frase);

}

void contarVocales(char frase[100]){
  	int i,v_a=0,v_e=0,v_i=0,v_o=0,v_u=0;
   for (i=0; frase[i] != '\0'; i++){
    	if (frase[i] == 'a' ){
      	v_a ++;
      }else{
      	if (frase[i] == 'A'){
         	v_a ++;
         }else{
         	if (frase[i] == 'e'){
            	v_e ++;
            }else{
            	if (frase[i] == 'E'){
               	v_e++;
               }else{
               	if ( frase[i] == 'i' ){
                  	v_i++;
                  }else{
                  	if ( frase[i] == 'I'){
                     	v_i++;
                     }else{
                     	if (frase[i] == 'o'){
                        	v_o++;
                        }else{
                        	if (frase[i] == 'O'){
                           	v_o++;
                           }else{
                           	if (frase[i] == 'u'){
                              	v_u++;
                              }else{
                              	if (frase[i] == 'U'){
                                 	v_u++;
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
   printf("\nSe ha introducido %d veces la vocal a",v_a);
   printf("\nSe ha introducido %d veces la vocal e",v_e);
   printf("\nSe ha introducido %d veces la vocal i",v_i);
   printf("\nSe ha introducido %d veces la vocal o",v_o);
   printf("\nSe ha introducido %d veces la vocal u",v_u);
	getch();
}
