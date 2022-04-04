#include <iostream>

int main() {

	using namespace std;

	string inicial;
	int edad;
	string estado;
		
	cout << "Ingrese la inicial de su nombre:";
	cin >> inicial;
	cout << "Ingrese su edad:";
	cin >> edad;

	if (edad < 18) {
		estado = "Menor";
	}
	else if (edad < 65 && edad > 18) {
		estado = "Mayor";
	}
	else {
		estado = "Jubilado";
	}
	
	cout << "Nuevo ingreso de usuario:\nCodigo - " + inicial + " " + estado;
}