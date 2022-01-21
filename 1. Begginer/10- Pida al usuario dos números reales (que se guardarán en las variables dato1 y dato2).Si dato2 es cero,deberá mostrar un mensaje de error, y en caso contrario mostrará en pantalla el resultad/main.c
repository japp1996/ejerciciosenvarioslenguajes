#include <stdio.h>

int main() {
	float data1;
	float data2;
	printf("Ingrese un número real: ");
	scanf("%f", &data1);
	printf("Ingrese otro número real: ");
	scanf("%f", &data2);
	if (data2 == 0) {
		printf("Error: No se pueden dividir números entre 0");
	} else {
		printf("El resultado de dividir %f entre %f es igual a %f", data1, data2, data1/data2);
	}
}
