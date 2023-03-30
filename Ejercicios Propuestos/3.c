/*Suponiendo que el kilo de azúcar y de café están a 3$ y 0.72$ respectivamente, escribir
en lenguaje C un programa que:
1º) Pida por teclado una cantidad (dato real) en dolares.
2º) Si la mitad de la cantidad introducida se destina a comprar azúcar, una tercera parte a comprar
café, y el resto no se gasta. Calcule cuántos kilos de azúcar y café (datos reales) se pueden comprar
con dicha cantidad de dinero, así como la cantidad (dato real) de dinero sobrante.
3º) Muestre por pantalla los resultados (datos reales)*/

#include <stdio.h>

float dolares, azucar=3.0, cafe=0.72, kilosc, kilosa, restante;

int main(){
	printf("Ingrese cantidad de dolares\n");
	scanf("%g",&dolares);
	
	kilosa= (dolares/2)/azucar;
	kilosc= (dolares/3)/cafe;
	restante= dolares/3;
	
	printf("La cantidad de azucar que puede comprar es: %.2fkg\n",kilosa);
	printf("La cantidad de cafe que puede comprar es: %.2fkg\n",kilosc);
	printf("El dinero sobrante es de : %.2f$\n",restante);

	
	
	
	
	
	
	
}