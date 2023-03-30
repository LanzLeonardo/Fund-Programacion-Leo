#include <stdio.h>



int main(){
	int i, num1, num2, acum1=0, mod;
	char respuesta;
	

	do
	{
	
	printf("Ingrese el primer numero\n");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero\n");
	scanf("%d", &num2);
	
	for(i=1;i<=num1-1; i++){
	
		mod= num1%i;
	    if(mod==0){
		
	    acum1= acum1+i;
		}	
	}
	
	
	if(acum1==num2){
		printf("\nLos numeros son amigos\n");
	}else{
		printf("\nLos numeros no son amigos\n");
	

}
	printf("\nDesea evaluar otro par de numeros?\n s:Si\n n:No\n");
	scanf("%s", &respuesta);	
     }while(respuesta=='s');

	return 0;
}