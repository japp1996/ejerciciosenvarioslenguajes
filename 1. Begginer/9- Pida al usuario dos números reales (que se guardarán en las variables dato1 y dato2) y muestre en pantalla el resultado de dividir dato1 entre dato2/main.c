#include<stdio.h>

int main() {
	float data1;
	float data2;
	printf("Ingrese el primer número real: ");
	scanf("%f", &data1);
	printf("Ingrese el segundo número real: ");
	scanf("%f", &data2);
	printf("El resultado de dividir %f entre %f es igual a %f", data1, data2, data1/data2);
}