#include <stdio.h>

int main()
{
	int i,opc;
	float num1,num2,suma,rest,multi,divi,pot;
	do {
		printf("Calculadora Bridge\n");
		printf("1.Suma\n");
		printf("2.Resta\n");
		printf("3.Multiplicacion\n");
		printf("4.Division\n");
		printf("5.Potencia\n");
		printf("6.Salir\n");
		scanf("%d",&opc);
		switch(opc) {
		case (1):
			printf("Ingrese el primer numero\n");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero\n");
			scanf("%f",&num2);
			suma=num1+num2;
			printf("La suma entre %f y %f es %f\n",num1,num2,suma);
			break;
		case(2):
			printf("Ingrese el primer numero\n");
			scanf("%f",&num1);
			printf("Ingrese el segundo numero\n");
			scanf("%f",&num2);
			rest=num1-num2;
			printf("La resta entre %f y %f es %f\n",num1,num2,rest);
			break;
		case(3):
			printf("Ingrese el multiplicando\n");
			scanf("%f",&num1);
			printf("Ingrese el multiplicador\n");
			scanf("%f",&num2);
			multi=num1*num2;
			printf("La multiplicacion entre %f y %f es %f\n",num1,num2,multi);
			break;
		case(4):
			printf("Ingrese el dividendo \n");
			scanf("%f",&num1);
			printf("Ingrese el divisor\n");
			scanf("%f",&num2);
			divi=num1/num2;
			if(num1==0&&num2==0) {
				printf("SYNTAX ERROR\n");

			} else {
				printf("La division entre %f y %f es %f\n",num1,num2,divi);

			}

			break;
		case(5):
			printf("Ingrese la base\n");
			scanf("%f",&num1);
			printf("Ingrese el exponente\n");
			scanf("%f",&num2);
			i=1;
			pot=1;
			if(num1==0&&num2==0) {
				printf("SYNTAX ERROR\n");
			} else if(num2==0) {
				pot=1;
				printf("La potencia de %f y %f es %f\n",num1,num2,pot);
			} else if(num2<0) {
				num2=-num2;
				do {
					pot*=num1;
					i++;
				} while(i<=num2);
				pot=1/pot;
				num2=-num2;
				printf("La potencia de %f y %f es %f\n",num1,num2,pot);
			}else{
				do {
					pot*=num1;
					i++;
				} while(i<=num2);
				printf("La potencia de %f y %f es %f\n",num1,num2,pot);
			}

			break;
		case(6):
			break;

		default:
			printf("Opcion no valida");

		}
	} while(opc!=6);
	return 0;
}
