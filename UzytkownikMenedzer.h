#ifndef UZYTKOWNIKMENADZER_H
#define UZYTKOWNIKMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZuzytkownikami.h"

using namespace std;

class UzytkownikMenedzer
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy; //vector o nazwie uzytkownicy przyjmujacy wartoœci z klasy Uzytkownik (id, login, haslo.
                                    //W momencie przypisania do niego wartosci w jednej z metod, jego wartosci sa dostepne dla pozostalych metod
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZuzytkownikami plikZuzytkownikami; //obiekt plikZuzytkownikami z klasy PlikZuzytkownikami
    string wczytajLinie();


public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZuzytkownikami(nazwaPlikuZUzytkownikami){};
    void rejestracjaUzytkownika(); //zainicjowanie funkcji rejestracjaUzytkownika
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();

    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszCalyvectro();
};

#endif // UZYTKOWNIKMENADZER_H
