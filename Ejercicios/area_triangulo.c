#include <stdio.h>

int main()
{
	float  base, altura, Area; 	//Declaración de variables
	
	//Instrucciones para el usuario
	printf("Ingrese la base:");
	scanf("%f", &base);
	printf("\nIngrese la altura:");
	scanf("%f", &altura);
	
	//Operacion
	Area = (base * altura) / 2;
	printf("\nEl area del triangulo es: %0.2f", Area);
	
return 0;
}
