#include "Funkcje_liczace.h"
#include <math.h>

float delta(float a, float b, float c) {

	float wynik = pow(b, 2) - 4 * a * c;
	return wynik;
}