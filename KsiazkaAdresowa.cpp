#include "KsiazkaAdresowa.h"
//funkcje wywoluje sie przy pomocy obiekt�w,

void KsiazkaAdresowa::wypiszCalyvectro()
{
    uzytkownikMenedzer.wypiszCalyvectro();
}

void KsiazkaAdresowa::rejestracjaUzytkownika() //tworzenie funkcji o nazwie rejestracjaUzytkownika
{
    uzytkownikMenedzer.rejestracjaUzytkownika(); //wywo�anie funkcji o nazwie rejestracjaUzytkownika za pomoc� obiektu uzytkownikMenedzer nale��cy do klasy UzytkownikMenedzer
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

