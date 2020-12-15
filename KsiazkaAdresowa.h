#pragma once

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer; //tworzenie obiektu o nazwie uzytkownikMenedzer w klasie UzytkownikMenedzer
    AdresatMenedzer adresatMenedzer;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), adresatMenedzer(nazwaPlikuZAdresatami)
    {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
    // Konstruktor KsiazkaAdresowa z lista inicjalizacyjna
    // uzytkownikMenedzer - nazwa zmiennej
    // nazwaPlikuZUzytkownikami - wartosc zmiennej
    // {} cia³o konstruktora w którym jest zawarta metoda wczytajUzytkownikowZPlik() w klasie uzytkownikMenedzer

    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszCalyvectro();
    Adresat podajDaneNowegoAdresata();
};
