#include <iostream>

using namespace std;

int main() {
	int num1;
	int num2;
	cout << "Ingrese el primer número entero: ";
	cin >> num1;
	cout << "Ingrese el segundo número entero: ";
	cin >> num2;
	if (num2 == 0) {
		cout << "Error: No se puede dividir un número entre 0";
	} else {
		cout << "El resultado de dividir " << num1 << " entre " << num2 << " es igual a: " << num1/num2;
	}
}