/*Escribir en lenguaje C un programa que:
1º) Pida por teclado tres números (datos enteros).
2º) Muestre el mayor de los tres números introducidos.*/

#include <stdio.h>

int num1, num2, num3;

int main(){
	printf("Ingrese su primer digito a evaluar\n");
	scanf("%d", &num1);
	printf("Ingrese su segundo digito a evaluar\n");
	scanf("%d", &num2);
	printf("Ingrese su tercer digito a evaluar\n");
	scanf("%d", &num3);
	
	if ((num1>num2)&&(num1>num3))
	{
	
		printf("El digito %d es mayor que %d y %d\n", num1, num2, num3);
	}
	else{
		if ((num2>num1) && (num2>num3)){
			printf("El digito %d es mayor que %d y %d\n", num2, num1, num3);	
		}
		else
		 {
		 	
		 	printf("El digito %d es mayor que %d y %d\n", num3, num1, num2);
		 }
	    }	

	
	
	}