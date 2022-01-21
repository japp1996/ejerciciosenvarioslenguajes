#include <iostream>

using namespace std;

int main(void) {
	for (int i = 0; i < 1; i) {
		int num;
		cout << "Ingrese un número: ";
		cin >> num;
		if (num != 0) {
			if (num%2 == 0) {
				cout << "El número es par\n";
			} else {
				cout << "El número es impar\n";
			}
		} else {
			cout << "El programa ha finalizado";
			i = 1;
		}
	}
}