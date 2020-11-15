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
    vector <Uzytkownik> uzytkownicy; //vector klasy Uzytkownik o nazwie uzytkownicy

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZuzytkownikami plikZuzytkownikami;

public:
    void rejestracjaUzytkownika();

};

#endif // UZYTKOWNIKMENADZER_H
