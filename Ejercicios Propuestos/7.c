/*Escribir en lenguaje C un programa que:
1º) Pida por teclado un número (dato entero).
2º) Muestre por pantalla:
• "ES PAR", en el caso de que el número sea divisible entre 2.
• "ES IMPAR", en el caso de que el número no sea divisible entre 2*/

#include <stdio.h>

int numero;

int main(){
	printf("Ingrese el numero a evaluar\n");
	scanf("%d", &numero);
	
	if (numero % 2==0)
	{
	
		printf("El numero ES PAR\n");
	}
	else
	{
		printf("El numero ES IMPAR\n");
		
	}
	
	return 0;
			
}