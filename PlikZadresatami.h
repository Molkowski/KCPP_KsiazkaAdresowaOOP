#pragma once

#include <iostream>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZadresatami
{
MetodyPomocnicze metodyPomocnicze;

vector <Adresat> adresaci;
const string nazwaPlikuZAdresatami;
int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami();
string daneAdresataOddzielonePionowymiKreskami;
string daneJednegoAdresataOddzielonePionowymiKreskami;
Adresat pobierzDaneAdresata();
int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami();
string pobierzLiczbe(string tekst, int pozycjaZnaku);

public:
    PlikZadresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
  //PlikZuzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI) : nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI){};
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> adresaci, int idZalogowanegoUzytkownika);
};
