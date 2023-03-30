/*1º) Pida por teclado la arista (dato real) de un cubo.
2º) Calcule el volumen del cubo.
3º) Muestre por pantalla el resultado (dato real).
La formula para calcular elvolumen de un cubo es tomar la arista y elevarla al cuadrado*/
#include <stdio.h>
#include <math.h>

float arista, volumen;

int main(){
	printf("Escriba la arista de su cubo\n");
	scanf("%g", &arista);
	volumen= pow (arista, 3);
	printf("El volumen de su cubo es:%g\n",volumen);
	
	return 0;
} 
