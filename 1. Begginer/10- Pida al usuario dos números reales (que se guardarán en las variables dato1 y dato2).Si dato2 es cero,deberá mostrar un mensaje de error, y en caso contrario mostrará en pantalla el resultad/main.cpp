#include <iostream>

using namespace std; // accesing to class to not use in code std::method

int main(void) {
	float data1;
	float data2;
	cout << "Ingrese un número real: " << endl;
	cin >> data1;
	cout << "Ingrese otro número real: " << endl;
	cin >> data2;
	if (data2 == 0) {
		cout << "Error: No se pueden dividir números entre 0";
	} else {
		cout << "El resultado de dividir " << data1 << " entre " << data2 << " es igual a: " << data1/data2;
	}
}