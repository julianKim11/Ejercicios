#include <iostream>
using namespace std;

int main()
{
	int nota;
	int seleccion;

	cout << "Ingrese su nota: ";
	cin >> nota;

	if (nota < 4) {
		seleccion = 1;
	}
	else if (nota < 8 && nota > 4) {
		seleccion = 2;
	}
	else {
		seleccion = 3;
	}

	switch (seleccion) {
	case 1: 
		printf("Reprobado.\n");
		break;
	case 2:
		printf("Aprobado.\n");
		break;
	case 3:
		printf("Promocionado.\n");
		break;
	default:
		printf("Vuelva a ingresar su nota");
		break;
	}
}