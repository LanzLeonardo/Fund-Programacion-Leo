#include <stdio.h>

int main(){

int anos, tipomalla, metros, costo, descuento, total, ingreso1=0, ingreso2=0, ingreso3=0, beisbol=0, tenis=0, personasdescuento=0, cantidaddescuento, todascompras=0, respuesta;

do{
    printf("Cuantos annoss como comprador tiene en la empresa?\n");
    scanf("%d", &anos);
    
    printf("Tipo de malla a comprar\n");
    printf("[1]Beisbol\n");
    printf("[2]Tennis\n");
    scanf("%d", &tipomalla);
    
    if (tipomalla==1){
        printf("Cuantos metros de malla desea comprar?\n");
        scanf("%d", &metros);
        beisbol++;
        todascompras++;
        
        if(anos>15){
            costo= 50*metros;
            descuento= costo*0.3;
            total= costo-descuento;
            ingreso1= total;
            
            printf("Su total a pagar antes de el descuento era de: %d\n", costo);
            printf("Se le restaran $%d por descuento de 30porc\n", descuento);
            printf("Su total a pagar es de: %d\n", total);
            personasdescuento++;
            } else if(anos>5){
                costo= 50*metros;
                descuento= costo*0.08;
                total= costo-descuento;
                ingreso1= total;
            
            printf("Su total a pagar antes de el descuento era de: %d\n", costo);
            printf("Se le restaran $%d por descuento de 8porc\n", descuento);
            printf("Su total a pagar es de: %d\n", total);
            personasdescuento++;
            }   else{
                    costo= 50*metros;
                    printf("Su total a pagar es de: %d\n", costo);
                    ingreso1= costo;
            }
    } else if(tipomalla==2){
        printf("Cuantos metros de malla desea comprar?\n");
        scanf("%d", &metros);
        tenis++;
        todascompras++;
        
        if(anos>15){
            costo= 80*metros;
            descuento= costo*0.3;
            total= costo-descuento;
            ingreso2= total;
            
            printf("Su total a pagar antes de el descuento era de: %d\n", costo);
            printf("Se le restaran $%d por descuento de 30porc\n", descuento);
            printf("Su total a pagar es de: %d\n", total);
            personasdescuento++;
            } else if(anos>5){
                costo= 50*metros;
                descuento= costo*0.06;
                total= costo-descuento;
                ingreso2= total;
            
            printf("Su total a pagar antes de el descuento era de: %d\n", costo);
            printf("Se le restaran $%d por descuento de 6porc\n", descuento);
            printf("Su total a pagar es de: %d\n", total);
            personasdescuento++;
            }   else{
                    costo= 80*metros;
                    printf("Su total a pagar es de: %d\n", costo);
                    ingreso2= costo;
            }
        
    } else{
        printf("Tipo de malla elegido incorrecto\n");
    }
    
    ingreso3= ingreso3+ingreso1+ingreso2;
    printf("Total de mallas de Beisbol vendidas hasta ahora: %d\n", beisbol);
    printf("Total de mallas de Tennis vendidas hasta ahora: %d\n", tenis); 
    
    if(beisbol>tenis){
        printf("La malla mas vendida hasta ahora es la de Beisbol\n");
    } else if(tenis>beisbol){
        printf("La malla mas vendida hasta ahora es la de Tennis\n");
    } else{
        printf("Han sido vendidas la misma cantidad de ambas mallas\n");
    }
    
    printf("La cantidad de personas que has sido ganadoras de el descuento han sido de: %d\n", personasdescuento);
    printf("La catidad de ventas de el dia hasta ahora ha sido de: %d\n", todascompras);
    printf("El ingreso total de la empresa el dia de hoy ha sido de: %d\n", ingreso3);
    
    printf("Desea ingresar otro cliente?\n");
    printf("[1]Si\n");
    printf("[2]No\n");
    scanf("%d", &respuesta);
    
    }while (respuesta==1);
    
    return 0;
}
