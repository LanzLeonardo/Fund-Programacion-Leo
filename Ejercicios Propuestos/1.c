#include <stdio.h>


float nota1,nota2,nota3, promedio;
int main(){
	printf("Indique la nota de los 3 parciales cursados\n");
	scanf("%g,%g,%g", &nota1, &nota2, &nota3);
	promedio= (nota1+nota2+nota3)/3;
	printf("El primedio de las notas %g,%g,%g es: %g\n",nota1,nota2,nota3,promedio);

	return 0;
}