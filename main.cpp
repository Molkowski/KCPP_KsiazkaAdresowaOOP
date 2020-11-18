#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt");
    ksiazkaAdresowa.rejestracjaUzytkownika(); //wykonanie metody o nazwie rejestracja uzytkownika ktora jest publiczna na obiekcie ksiazkaAdresowa
    return 0;
}
