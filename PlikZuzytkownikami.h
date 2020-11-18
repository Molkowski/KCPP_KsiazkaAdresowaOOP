#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"


using namespace std;

 class PlikZuzytkownikami
 {
    fstream plikTekstowy;
    string nazwaPlikuZUzytkownikami;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZuzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownicy);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
 };

#endif
