#include <stdio.h>

int main() {
	int num1;
	int num2;
	printf("Ingrese el primer número entero: ");
	scanf("%i", &num1);
	printf("Ingrese el segundo número entero: ");
	scanf("%i", &num2);
	if (num2 == 0) {
		printf("Error: no se puede dividir entre 0");
	} else {
		printf("El resultado de dividir %i entre %i es igual a: %i", num1, num2, num1/num2);
	}
}