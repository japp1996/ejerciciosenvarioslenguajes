#include<stdio.h>

int main() {
	int n1;
	int n2;
	printf("%s", "Ingrese el primer número: ");
	scanf("%i", n1);
	printf("%s", "Ingrese el segundo número: ");
	scanf("%i", n2);
	printf("El producto de %i y %i es igual a %i", n1, n2, n1 * n2);
}