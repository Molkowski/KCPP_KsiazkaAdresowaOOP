#include <iostream>
#include "KsiazkaAdresowa.h"

// Zadeklarowa³em obiekt Adresat, teraz pozostaje do rozpykania temat Menedzera Adresatow i Pliku z Uzytkownikami
//do klasy Plik z Adresatami trzeba przesłać wartość idZalogowanegoUzytkownika

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt", "Adresaci.txt"); //konstruktor
    cout << "Rejestracja uzytkownika" << endl;
    ksiazkaAdresowa.rejestracjaUzytkownika(); //wykonanie metody o nazwie rejestracja uzytkownika ktora jest publiczna na obiekcie ksiazkaAdresowa
    cout << "Logowanie uzytkownika" << endl;
    ksiazkaAdresowa.logowanieUzytkownika();
    cout << "Zmiana hasla" << endl;
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    cout << "Podaj dane nowego adresata" << endl;
    ksiazkaAdresowa.podajDaneNowegoAdresata();
    return 0;
}
