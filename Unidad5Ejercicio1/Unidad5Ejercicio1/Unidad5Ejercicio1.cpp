#include <iostream>
using namespace std;

int main()
{
	int comboGolpe[10];
	float sumaTotal = 0;

	cout << "Ingrese los valores de cada golpe.\n";

	for (int i = 0; i < 10; i++) {
		cout << "Golpe " << i + 1 << ": ";
		cin >> comboGolpe[i];
		sumaTotal += comboGolpe[i];
	}

	cout << "\n";
	cout << "Danio total del combo: " << sumaTotal << "\n\n" << "Danio total promedio: " << sumaTotal/10 << "\n\n";
}
