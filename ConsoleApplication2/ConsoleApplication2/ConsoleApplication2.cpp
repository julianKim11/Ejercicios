#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int comparandoPoder(int poder1, int poder2) {
	int resultado;
	if (poder1 > poder2) {
		resultado = 1;
	}
	else if (poder1 == poder2) {
		resultado = 2;
	}
	else {
		resultado = 3;
	}
	return resultado;
}

int seleccionDeCarta(int sel) {
	int poder;
	if (sel == 1) {
		poder = 3;
	}
	else if (sel == 2) {
		poder = 2;
	}
	else {
		poder = 1;
	}
	return poder;
}

int main()
{
	srand((unsigned)time(0));
	int Godzilla = 80 + (rand() % 20);
	int MechaGodzilla = 80 + (rand() % 20);
	int Kingkong = 80 + (rand() % 20);
	int j1;
	int com= 1 + (rand() % 99);
	int j1Seleccion;
	int compuSeleccion;
	string nombre;
	string resultado;
	string jugador;
	string compu;

	cout << "Bienvenido.\n\nIngrese su nombre: ";
	cin >> nombre;

	cout << "\nCartas:\n\n1: Godzilla.\n2: MechaGodzilla.\n3: Kingkong.\n\nSeleccione una carta: ";
	cin >> j1;

	if (seleccionDeCarta(j1) == 1) {
		jugador = "Haz seleccionado a KingKong con un poder de: ";
		cout << jugador.append(to_string(Kingkong));
		j1Seleccion = Kingkong;
	}
	else if (seleccionDeCarta(j1) == 2) {
		jugador = "Haz seleccionado a MechaGodzilla con un poder de: ";
		cout << jugador.append(to_string(MechaGodzilla));
		j1Seleccion = MechaGodzilla;
	}
	else {
		jugador = "Haz seleccionado a Godzilla con un poder de: ";
		cout << jugador.append(to_string(Godzilla));
		j1Seleccion = Godzilla;
	}
 
	if (j1 == 1 && com <50) {
		compu = "\nHa seleccionado a MechaGodzilla con un poder de: ";
		cout << compu.append(to_string(MechaGodzilla));
		compuSeleccion = MechaGodzilla;
	}
	else if (j1 == 1 && com >= 50) {
		compu = "\nHa seleccionado a Kingkong con un poder de: ";
		cout << compu.append(to_string(Kingkong));
		compuSeleccion = Kingkong;
	}
	else if (j1 == 2 && com < 50) {
		compu = "\nHa seleccionado a Godzilla con un poder de: ";
		cout << compu.append(to_string(Godzilla));
		compuSeleccion = Godzilla;
	}
	else if (j1 == 2 && com >= 50) {
		compu = "\nHa seleccionado a Kingkong con un poder de: ";
		cout << compu.append(to_string(Kingkong));
		compuSeleccion = Kingkong;
	}
	else if (j1 == 3 && com < 50) {
		compu = "\nHa seleccionado a MechaGodzilla con un poder de: ";
		cout << compu.append(to_string(MechaGodzilla));
		compuSeleccion = MechaGodzilla;
	}
	else if (j1 == 3 && com >= 50) {
		compu = "\nHa seleccionado a Godzilla con un poder de: ";
		cout << compu.append(to_string(Godzilla));
		compuSeleccion = Godzilla;
	}

	if (comparandoPoder(j1Seleccion, compuSeleccion) == 1) {
		resultado = "\nGana " + nombre + ".\n";
		cout << resultado;
	} 
	else if (comparandoPoder(j1Seleccion, compuSeleccion) == 2) {
		resultado = "\nEmpate.\n";
		cout << resultado;
	} 
	else {
		resultado = "\nGana la computadora.\n";
		cout << resultado;
	}
}
