#include <iostream>
using namespace std;

int main()
{
	string tablero[4][8];
	int filas = 4;
	int columnas = 8;
	string unidad;

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas, j++) {
			cout << "Posicion: " << i << "-" << j << " = ";
			cin >> unidad;
			if (unidad == "Arqueros" || unidad == "Soldados" || unidad == "Caballeros") {
				tablero[i][j] = unidad;
			}
			else {
				tablero[i][j] = "None";
			}
		}
	}
	
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << tablero[i][j] << endl;
		}
	}
}