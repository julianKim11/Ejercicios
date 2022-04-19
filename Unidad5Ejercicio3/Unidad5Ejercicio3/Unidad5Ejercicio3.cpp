#include <iostream>
using namespace std;

int main()
{
	string tablero[4][6];
	int filas = 4;
	int columnas = 6;
	string unidad;

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cin >> unidad;
			if (unidad == "Arqueros" || unidad == "Soldados" || unidad == "Caballeros" || unidad == "arqueros" || unidad == "soldados" || unidad == "caballeros") {
				tablero[i][j] = unidad;
			}
			else {
				tablero[i][j] = "None";
			}
		}
	}

	cout << "\n";
	
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << tablero[i][j] << "\n";
		}
	}

	/*
	EJEMPLO
	int tablero[4][6];
	int filas = 4;
	int columnas = 6;
	int contador = 0;

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			contador++;
			tablero[i][j] = contador;
		}
	}

	printf("Ultimo casillero: %i \n", tablero[filas - 1][columnas - 1]);*/
}