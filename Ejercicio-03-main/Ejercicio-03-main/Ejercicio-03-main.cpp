#include <iostream>
using namespace std;

void menu() {
    cout << "Hello!\n";
    cout << "Bienvenido al programa Ejercicio 3." << endl;
    cout << "Debe ingresar 4 numeros enteros de forma consecutiva..." << endl;
    cout << "El programa calculara el maximo de estos numeros... y luego la suma de todos ellos..." << endl;
    cout << "Ingrese sus numeros: " << endl;
}

int max_of_four(int a, int b, int c, int d) {
    int respuesta = 0;
    int numeros[] = { a,b,c,d };
    
    for (int i = 0; i < 4; i++) {
        if (numeros[i] > respuesta) {
            respuesta = numeros[i];
        }
    }

    return respuesta;
}

int sum_of_four(int a, int b, int c, int d) {

    int respuesta = 0;
    int numeros[] = { a,b,c,d };
    for (int i = 0; i < 4; i++) {
        respuesta += numeros[i];
    }
    return respuesta;
}

int main()
{
    menu();

    int a, b, c, d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    int ans = max_of_four(a, b, c, d);

    cout << "El valor maximo de los 4 es: " << ans << endl;

    cout << "La suma de todos los numeros es: " << sum_of_four(a, b, c, d) << endl;
}
