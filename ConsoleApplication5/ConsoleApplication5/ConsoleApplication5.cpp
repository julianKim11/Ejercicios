#include <iostream>
#include <string>
using namespace std;

int main()
{
	int golpesWhile = 1;
	int golpesDoWhile = 1;
	int golpesFor = 1;

	cout << "Meteoro de Pegaso - while.\n";
	cout << "\n";

	while (golpesWhile <= 10) {
		cout << "Golpe " << golpesWhile << " - 1 Danio.\n";
		golpesWhile++;
	}

	cout << "\n";
	string resultado = "Danio total: ";
	cout << resultado.append(to_string(golpesWhile));
	cout << "\n";
	cout << "\n";
	cout << "Meteoro de Pegaso - do while.\n";
	cout << "\n";

	do {
		cout << "Golpe " << golpesDoWhile << " - 1 Danio.\n";
		golpesDoWhile++;
	} while (golpesDoWhile <= 10);

	cout << "\n";
	cout << resultado.append(to_string(golpesDoWhile));
	cout << "\n";
	cout << "\n";
	
	int danioPunio;

	cout << "Ingrese cuanto danio hace cada punio: ";
	cin >> danioPunio;
	for (int i = 0; i < 10; i++) {
		int danioPunio;
		cin >> danioPunio;
		cout << "Golpe " << golpesFor << " - 1 Danio.\n";
		
	}

}