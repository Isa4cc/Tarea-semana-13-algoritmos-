/*
Realizar un programa en C que resuelva el siguiente problema: 
En un bosque se necesita saber el promedio de diámetro de cada tronco
de ciprés y el promedio de su altura, así como el mayor y menor diámetros y altura ingresada.
El proceso termina cuando el usuario responde con una ‘N’, mientras tanto, debe responder con ‘S’.
*/


#include <stdio.h>

int main(){

    float Diametro,Diam, Altu, mayorDiametro, menorDiametro, Altura, promedioAltura, mayorAltura, menorAltura;
    char opcin;
    int contD, contA;
    mayorAltura=0;
    menorAltura=__INT_MAX__;
    menorDiametro=__INT_MAX__; //Es una constante propia de C, la cual almacena el valor más alto que puede tomar una variable.
    mayorDiametro=0;
    Diam=0;
    Altu=0;
    contA=0;
    contD=0;

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
        if (Diametro<menorDiametro){
            menorDiametro=Diametro;
        }
        
        Diam+=Diametro;
        contD++;

        do{
            printf("\nIngrese la altura del tronco: ");
            scanf("%f", &Altura);
            if(Altura<=0){
                printf("\nPor favor, ingrese una altura adecuada\n");
            }
        }while(Altura<=0);

        if(Altura>mayorAltura){
            mayorAltura=Altura;
        }
        if (Altura<menorAltura){
            menorAltura=Altura;
        }
        

        Altu+=Altura;
        contA++;

        do{
            printf("\nDesea ingresar mas datos? S/N: ");
            scanf(" %c", &opcin);
            if(opcin !='s' && opcin !='S' && opcin !='n' && opcin !='N'){
                printf("\nPor favor, ingrese una opcion valida\n");
            }
        }while(opcin !='s' && opcin !='S' && opcin !='n' && opcin !='N');	

    }while(opcin !='n' && opcin !='N');
    promedioAltura=Altu/contA;
    printf("\nEl promedio de altura de los troncos es: %f", promedioAltura);
    printf("\nEl mayor diametro ingresado es: %f", mayorDiametro);
    printf("\nEl menor diametro ingresado es: %f", menorDiametro);
    printf("\nLa mayor altura ingresada es: %f", mayorAltura);
    printf("\nLa menor altura ingresada es: %f", menorAltura);
    
    return 0;
}

