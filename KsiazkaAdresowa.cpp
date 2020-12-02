#include "KsiazkaAdresowa.h"
//funkcje wywoluje sie przy pomocy obiektów,

void KsiazkaAdresowa::wypiszCalyvectro()
{
    uzytkownikMenedzer.wypiszCalyvectro();
}

void KsiazkaAdresowa::rejestracjaUzytkownika() //tworzenie funkcji o nazwie rejestracjaUzytkownika
{
    uzytkownikMenedzer.rejestracjaUzytkownika(); //wywo³anie funkcji o nazwie rejestracjaUzytkownika za pomoc¹ obiektu uzytkownikMenedzer nale¿¹cy do klasy UzytkownikMenedzer
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

