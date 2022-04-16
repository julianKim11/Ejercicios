#include <iostream>
using namespace std;

int main()
{
    int puntos1 = 0;
    int puntos2 = 0;
    float puntosBonus1;
    float puntosBonus2;
    float bonus = 1.05;

    cout << "Ingrese los puntos del jugador 1: ";
    cin >> puntos1;
    cout << "Ingrese los puntos del jugador 2: ";
    cin >> puntos2;

    if (puntos1 % 2 == 0 && puntos2 % 2 == 0 || puntos1 % 2 == 0 && puntos2 % 2 != 0) {
        cout << "\nBonus conseguido.\n\n";
        puntosBonus1 = puntos1 * bonus;
        puntosBonus2 = puntos2 * bonus;
        cout << "Jugador 1: " << puntosBonus1 << "\n" << "Jugador 2: " << puntosBonus2 << "\n";
    }
    else {
        cout << "\nEl bonus no fue otorgado.\n\n";
    }
}