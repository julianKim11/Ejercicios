#include <iostream>
using namespace std;

int main()
{
	string equipoA[] = {"A1", "A2", "A3", "A4"};
	string equipoB[] = { "B1", "B2", "B3", "B4" };
	string equipo[8];
	int a = 0;
	int b = 0;

	for (int i = 0; i <= 7; i++) {
		if (i % 2 == 0) {
			equipo[i] = equipoA[a];
			a++;
		}
		else {
			equipo[i] = equipoB[b];
			b++;
		}
	}

	for (int i = 0; i <= 7; i++) {
		cout << equipo[i] << "   ";
	}
}