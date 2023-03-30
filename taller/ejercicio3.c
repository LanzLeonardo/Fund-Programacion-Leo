#include <stdio.h> 
#define DESC 0.50
#define DESCUE3 0.03
#define DESCUE5 0.05

int main(){
  int ci, contprod=0, contsin=0, contgif=0, cont3=0, cont5=0, promo, descuento_3, descuento_5, contador_pe=0, contador_ganadores; 
  char otro, etiqueta, respu, respuesta;
  float precio,acumpromo=0, acumprec=0, factura_total, porcengan=0;
 	
	 
   do{
     
  
  	do{
  		printf("\nIngrese precio de el producto\n");
  		scanf("%g", &precio);
  		
  		printf("\nTiene etiqueta de promocion?\n");
  		scanf("%s", &respu);
  		
  			if(respu=='s'){
  				acumpromo= acumpromo+precio;
  				contprod= contprod+1;
				printf("\nPrecio a pagar con descuento: %g\n", acumpromo);
			  }else{
			  	acumprec=acumprec+precio;
			  	contsin=contsin+1;
			  	printf("\nPrecio a pagar sin descuento: %g\n", acumprec);
			  }
			  
  		printf("\nDesea ingresar otro producto?\n s:Si\n n:No\n");
  		scanf("%s",&otro);
  	}while(otro=='s');
  	
  	 promo= acumpromo*DESC; 
  	 descuento_5= acumpromo*DESCUE5;
  	 descuento_3= acumpromo*DESCUE3;
  	 
	 printf("\nCantidad de productos con promocion ingresados: %d\n", contprod);
	 printf("\nCantidad de productos sin promocion ingresados: %d\n", contsin);	
	 
	 printf("\nIngrese ultimo digito de la cedula\n");
	 scanf("%d", &ci);
	 contador_pe= contador_pe+1;
	 
	if(((ci % 2)==0) && (contprod>=3) && (acumpromo>=1000) && (acumpromo<=5000) && (respu='s')){ 
		 	 factura_total= acumpromo-promo-descuento_5;    
	           if(contsin!=0){
	               factura_total= factura_total+acumprec;
	           		cont5= cont5+1;
	           		contador_ganadores= contador_ganadores+1;
			   		printf("\nSu total a pagar con mitad de precio mas 5 porciento por cedula par es: %g\n", factura_total);
			   }
	           
	 } else{
	        if(((ci % 2)!=0) && (contprod>=3) && (acumpromo>=1000) && (acumpromo<=5000) && (respu='s')){
	        factura_total= acumpromo-promo-descuento_3;
	            if(contsin!=0){
	               factura_total= factura_total+acumprec;
	                cont3= cont3+1;
	                contador_ganadores= contador_ganadores+1;
	            	printf("\nSu total a pagar con mitad de precio mas 3 porciento por cedula impar es: %g\n", factura_total);
					}
	            
	        }else{
			
	            
	        	factura_total= acumpromo+acumprec;
	        	printf("\nNo ha sido ganador de ninguna promocion por el dia de hoy\n");
				
			}	
			
		}        
		        porcengan= (contador_ganadores*100)/contador_pe;

            	contprod=0;
				contsin= 0;
				acumpromo=0;
				acumprec=0;
                

		printf("\nDesea agregar a otro cliente?\n s=Si\n n=No\n");
		scanf("%s", &respuesta);
		
	}while(respuesta=='s');

                printf("\nCantidad de personas que ganaron el 5porciento de descuento: %d\n", cont5);
                printf("\nCantidad de personas que ganaron el 3porciento de descuento: %d\n", cont3);
				
				
	return 0;
	
}