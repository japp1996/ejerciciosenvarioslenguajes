#include<stdio.h>

int main()
{
	int a;
	int b;
	printf("%s", "Ingrese un número: ");
	scanf("%i", &a); /* & is to indicate address in memory for variable, in this case the input of user */
	printf("%s", "Ingrese otro: ");
	scanf("%i", &b);
	printf("El resultado es %i", a + b);
}