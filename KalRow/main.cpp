#include <iostream>
#include <conio.h>
#include "funkcje_liczace.h"

using namespace std;

string s;

int main() 
{
    cout<<"podaj rownanie do policzenia: \n" ;
    getline(cin,s) ;

    cout<<rownanie_liniowe(s) ;

return 0 ;
	
	_getch();
}
