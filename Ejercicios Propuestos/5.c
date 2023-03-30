/*Escribir en lenguaje C un programa que:
1º) Pida por teclado dos números (datos enteros) y sean almacenados en dos variables, llamadas v1
y v2.
2º) Intercambie los valores de las variables.
3º) Muestre por pantalla los valores contendidos en las variables*/

#include <stdio.h>

int var1, var2, aux;

int main(){
	printf("Ingrese el valor de su primera variable\n");
	scanf("%d", &var1);
	printf("Ingrese el valor de su segunda variable\n");
	scanf("%d", &var2);
	
	aux=var1;
	var1=var2;
	var2=aux;
	
	printf("Su variables invertidad son:%d, %d\n",var1,var2);
}