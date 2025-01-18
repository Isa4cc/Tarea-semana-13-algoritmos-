/*
Realizar un programa en c que cuente la cantidad de veces que se ingresan números pares y la cantidad de números impares,
cantidad de números primos ingresados. El programa seguirá leyendo números hasta que se ingrese un número negativo o el cero.
Al finalizar el programa se necesita imprimir las cantidades de pares, impares y primos.
*/

#include <stdio.h>
int main(){
    int num,i_par,i_impar,primo,cont;
    i_par=0;
    i_impar=0;  
    primo=0;   
    
    do
    {
        printf("\n Estimado Usuario, ingrese un numero");
        printf("\n Recuerde que si ingresa un numero negativo");
        printf("\n o el cero el programa terminara: ");
        scanf("%d",&num);

        if(num>=0){       //La condición incluye al num 0,
            if(num%2==0){ // porque tambien es un numero par
            i_par++;      
            }else{
            i_impar++;
            }
        }
       
        cont = 0; // Inicializar cont para cada número
        for(int i=1; i<=num; i++){
            if(num%i == 0){
            cont++;
            }
        }
        if(cont == 2){ // Verificar si tiene exactamente 2 divisores
        primo++;
        }
        
        if(num<=0){
            printf("Saliendo del programa...");   
        }
     
    }while(num>0);

    printf("\n La cantidad de numeros pares es: %d",i_par);
    printf("\n La cantidad de numeros impares es: %d",i_impar);
    printf("\n La cantidad de numeros primos es: %d",primo);

 return 0;
}
