/*
Realizar un programa en c que cuente la cantidad de veces que se ingresan números pares y la cantidad de números impares,
cantidad de números primos ingresados. El programa seguirá leyendo números hasta que se ingrese un número negativo o el cero.
Al finalizar el programa se necesita imprimir las cantidades de pares, impares y primos.

*/

#include <stdio.h>
int main(){
    int num,i_par,i_impar,primo;
    
    do
    {
        printf("\n Estimado Usuario, ingrese un numero");
        printf("\n Recuerde que si ingresa un numero negativo");
        printf("\n o el cero el programa terminara: ");
        scanf("%d",&num);

        if(num%2==0){
            i_par++;
        }else{
            i_impar++;
        }

        
        
        
        
        if(num<=0){
            printf("Saliendo del programa...");
        }
     
    }while(num>0);
    
    
 return 0;
}
