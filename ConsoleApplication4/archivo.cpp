#include <iostream>
#include "Header1.h"
#include <ctime>
using namespace std;

int getRandom(int numero) {
	srand(time(NULL)); //poner el seed
	int random = (rand() % numero);
	return random;
}