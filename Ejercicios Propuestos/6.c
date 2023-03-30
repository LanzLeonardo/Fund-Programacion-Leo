/*1º) Pida por teclado una cantidad (dato entero) en dolares.
2º) Calcule su equivalente en euros.
3º) Muestre por pantalla el resultado (dato rea)
Nota: 1 euro = 166,386 dolares.*/

#include <stdio.h>

float euro= 166.386, cambio;
int dolares;

int main (){
	
	printf("Ingrese el monto en dolares a convertir\n");
	scanf("%d", &dolares);
	
	cambio= dolares*euro;
	
	printf("Su cantidad de dolares %d$ al cambio en euros es equivalente a: %.2f\n", dolares, cambio);
}