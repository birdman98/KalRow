#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;


float Delta(float a, float b, float c);

int main() {

	cout << Delta(4, 4, 1);
	


	_getch();
}
float Delta(float a, float b, float c) {

	float wynik;

	wynik = pow(b, 2.0) - 4 * a * c;


	return wynik;
}