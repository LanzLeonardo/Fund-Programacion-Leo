#include <stdio.h>

int main(){
	int n, num, i,j, aux1, aux2, contc=0,cont3=0,mod, aux4;
	char respuesta;
	do{
	
	printf("Ingrese la cantidad de numeros que desea operar\n");
	scanf("%d", &n);
	
	for(i=1;i<=n; i++)
	{
		printf("Introduzca numero a operar\n Iteracion %d\n",i);
		scanf("%d", &num);
		
	
		if(num>99 || num<=-999){
			
			aux1=0;
			aux2= num;
			while(aux2 !=0){
				aux1=aux1*10+(aux2 % 10);
				aux2 /= 10;
			}
		    printf("\nSu numero invertido es %d\n",aux1);
	
			
		}
		
		
		
		
		
		aux4=num;
		do{
			mod= aux4 % 10;
			aux4= aux4 / 10;
			
			if(mod==3){
				cont3++;
			}else{
			
				if(mod==5){
					contc++;
				}
			 }
			
			
		}while(aux4 != 0);
		
	
	}
	printf("\nCantidad de 5 ingresada:%d\n", contc);
	printf("\nCantidad de 3 ingresada:%d\n", cont3);
	
	printf("\n Desea evaluar nuevos numeros?\n s:Si\n n:No\n");
	scanf("%s", &respuesta);
	}while(respuesta=='s');
	
	return 0;
}