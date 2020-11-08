#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int opcion;
	float a, b, c;
	
	printf("\nIngrese el primer numero:");
	scanf("%f", &a);
	printf("\nIngrese el segundo numero:");
	scanf("%f", &b);
	system("cls");
	
	printf("\nElige una opcion:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion\n");
	printf("\t 4.- Division\n");
	printf("\t 5.- Potencia\n");
	printf("\t 6.- Raiz cuadrada\n");
	printf("\t 7.- Salir:\n");
	scanf("%d",&opcion);
	system("cls");
	

	switch(opcion)
	{
	case 1: 
		c= a + b ;
		printf("La suma es: %0.2f", c);
		break;
	case 2:
		c= a - b ;
		printf("La resta es: %0.2f", c);
		break;
	case 3: 
		c= a * b ;
		printf("La multiplicacion es: %0.2f", c);
		break;
	case 4:
		c= a / b ;
		printf("La division de %0.2f / %0.2f es: %0.2f", a, b, c);
		c= b / a ;
		printf("\nLa division de %0.2f / %0.2f es: %0.2f", b, a, c);
		break;
	case 5: 
		c= pow(a,b);
		printf("La potencia de %0.2f a la %0.2f es: %0.2f", a, b, c);
		c= pow(b,a) ;
		printf("\nLa potencia de %0.2f a la %0.2f es: %0.2f", b, a, c);
		break;
	case 6:
	    c= sqrt(a);
		printf("La raiz cuadrada de %0.2f es: %0.2f", a, c);
		c= sqrt(b) ;
		printf("\nLa raiz cuadrada de %0.2f es: %0.2f", b, c);
		break;
	default:
		printf("\nNo esta puesta correctamente la opcion\n");
		exit(0);
	}
	printf("\nFin");
	return 0;
} 
