#include "Funkcje_liczace.h"
#include <math.h>

float delta(float a, float b, float c) {

	float wynik = pow(b, 2) - 4 * a * c;
	return wynik;
}

float rownanie_liniowe (string s)
{
    float a=0, b=0 ;
    string a_str ;

    for (int i=0; i<s.length(); i++)
    {
        if (s[i]=='x')
        {
             a_str=s.substr(0,i) ;
             s.erase(0,i+1) ;
        }

    }
     b=atoi(s.c_str()) ;
     a=atoi(a_str.c_str()) ;

return -b/a ;
}
