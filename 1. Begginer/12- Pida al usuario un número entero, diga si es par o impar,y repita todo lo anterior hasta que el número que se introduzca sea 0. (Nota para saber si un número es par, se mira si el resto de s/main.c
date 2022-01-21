#include <stdio.h>

int main() {
	int num;
	for (int i = 0; i < 1; i) {
		printf("Porfavor ingrese un número: ");
		scanf("%i", &num);
		if (num == 0) {
			printf("El programa ha finalizado.");
			i = 1;
		} else {
			if (num%2 == 0) {
				printf("El %i es un número par\n", num);
			} else {
				printf("El %i es un número impar\n", num);
			}
		}
	}

}

/**
 *
 * 1. Pedir que ingrese un número
 * 2. Validar que número es (par, impar o cero)
 * 3. En caso de par o impar repetir el paso 1
 * 		3.1 Para saber si es par se puede dividir los números y si el número es un entero es par
 * 		3.2 Para saber si es par se puede dividir los números y si el resto es 0 es par (num%2 == 0)
 * 4. En caso de que sea 0 terminar el proceso
 *
 */
