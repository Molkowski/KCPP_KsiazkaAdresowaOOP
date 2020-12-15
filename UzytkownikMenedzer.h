#pragma once

using namespace std;

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZuzytkownikami.h"
#include "MetodyPomocnicze.h"

class UzytkownikMenedzer
{

    PlikZuzytkownikami plikZuzytkownikami;
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy; //vector o nazwie uzytkownicy przyjmujacy wartoœci z klasy Uzytkownik (id, login, haslo.
                                    //W momencie przypisania do niego wartosci w jednej z metod, jego wartosci sa dostepne dla pozostalych metod
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

    string wczytajLinie();


public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZuzytkownikami(nazwaPlikuZUzytkownikami){}; // <- Konstruktor z lista inicjalizacyjna klasy UzytkownikMenedzer,

    int pobierzIdZalogowanegoUzytkownika();                                                                                                     //plikZuzytkownikami - nazwa zmiennej
                                                                                                         //nazwaPlikZUzytkownikami - wartość zmiennej
    void rejestracjaUzytkownika(); //zainicjowanie funkcji rejestracjaUzytkownika
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();

    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszCalyvectro();
};


