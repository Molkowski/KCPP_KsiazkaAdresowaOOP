#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt"); //konstruktor
    cout << "Rejestracja uzytkownika" << endl;
    ksiazkaAdresowa.rejestracjaUzytkownika(); //wykonanie metody o nazwie rejestracja uzytkownika ktora jest publiczna na obiekcie ksiazkaAdresowa
    cout << "Logowanie uzytkownika" << endl;
    ksiazkaAdresowa.logowanieUzytkownika();
    cout << "Zmiana hasla" << endl;
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    return 0;
}
