/*Escribir en lenguaje C un programa que:
1º) Pida por teclado una hora en horas, minutos y segundos (datos enteros).
2º) Calcule cuántos segundos han pasado desde las 0:0:0 horas.
3º) Muestre por pantalla el resultado (dato entero).*/
#include <stdio.h>

int ss, mm, hh, mulhor, mulmin,total;

int main(){
	printf("Ingrese hora actualen formato HH\n");
	scanf("%d",&hh);
	printf("Ingrese minutos actuales en formato MM\n");
	scanf("%d",&mm);
	printf("Ingrese segundos actuales en formato SS\n");
	scanf("%d",&ss);
	
	
	mulhor=hh*3600;
	mulmin=mm *60;
	total=mulmin+mulhor+ss;
	
	printf("Los segundos transcurridos desde las 0:0:0 han sido:%d\n",total);
	return 0;
}