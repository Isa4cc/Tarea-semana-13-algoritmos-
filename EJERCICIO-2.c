/*
Realizar un programa en C que resuelva el siguiente problema: 
En un bosque se necesita saber el promedio de diámetro de cada tronco
de ciprés y el promedio de su altura, así como el mayor y menor diámetros y altura ingresada.
El proceso termina cuando el usuario responde con una ‘N’, mientras tanto, debe responder con ‘S’.
*/


#include <stdio.h>

int main(){

    float Diametro, mayorDiametro, menorDiametro, Altura, promedioAltura;
    char opcin;
    int contD, contA;
    mayorDiametro=0;
    menorDiametro=0;
    do{
        
        do{
            printf("\nIngrese el diametro del tronco: ");
            scanf("%f", &Diametro);
            if(Diametro<=0){
                printf("\nPor favor, ingrese un diametro adecuado\n");
            }
        }while(Diametro<=0);

        if(Diametro>mayorDiametro){
            mayorDiametro=Diametro;
        }
        if(menorDiametro>Diametro){
            menorDiametro=Diametro;
        }
        contD++;

        do{
            printf("\nIngrese la altura del tronco");
            scanf("%f", &Altura);
            if(Altura<=0){
                printf("\nPor favor, ingrese una altura adecuada\n");
            }
        }while(Altura<=0);

        if(Altura>mayorDiametro){
            mayorDiametro=Altura;
        }
        if(menorDiametro>Altura){
            menorDiametro=Altura;
        }
        contA++;

        do{
            printf("\nDesea ingresar otro tronco? S/N: ");
            scanf("%c", &opcin);
            if(opcin !='s' && opcin !='S' && opcin !='n' && opcin !='N'){
                printf("\nPor favor, ingrese una opcion valida\n");
            }
        }while(opcin !='s' && opcin !='S' && opcin !='n' && opcin !='N');	
        if(opcin=='N' || opcin=='n'){
           printf("*****Programa Finalizado*****\n");
        }

    }while(opcin !='n' || opcin !='N');
    promedioAltura=Altura/contA;
        printf("\nEl promedio de diametro de los troncos es: %f", Diametro/contD);
        printf("\nEl promedio de altura de los troncos es: %f", promedioAltura);
        printf("\nEl mayor diametro ingresado es: %f", mayorDiametro);
        printf("\nEl menor diametro ingresado es: %f", menorDiametro);
        printf("\nLa mayor altura ingresada es: %f", mayorDiametro);
        printf("\nLa menor altura ingresada es: %f", menorDiametro);
    return 0;
}

