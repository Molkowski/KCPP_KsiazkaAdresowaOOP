#pragma once

#include <iostream>
#include <vector>
#include "PlikZadresatami.h"
#include "Adresat.h"
#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer {

PlikZadresatami plikZadresatami;
UzytkownikMenedzer uzytkownikMenedzer;
MetodyPomocnicze metodyPomocnicze;

vector <Adresat> adresaci;
int idZalogowanegoUzytkownika = uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
int idOstatniegoAdresata = plikZadresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);

public:
AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZadresatami(nazwaPlikuZAdresatami){};

Adresat podajDaneNowegoAdresata();

};

