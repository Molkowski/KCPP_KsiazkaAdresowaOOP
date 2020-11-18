#include "UzytkownikMenedzer.h"

Uzytkownik UzytkownikMenedzer:: podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik; //deklaracja obiektu o nazwie uzytkownik o klasie Uzytkownicy

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    string login;
    do
    {
        cout << "Podaj login: ";
        cin >> login;
        uzytkownik.ustawLogin(login);

    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    string haslo;
    cout << "Podaj haslo: ";
    cin >> haslo;
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}

int UzytkownikMenedzer::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool UzytkownikMenedzer::czyIstniejeLogin(string login)
{
    for (int i=0; i<uzytkownicy.size(); i++)
    {
        if(uzytkownicy[i].pobierzLogin() == login)
        {
            cout << endl << "istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
    }
    return false;
}

void UzytkownikMenedzer::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik); //dodawanie obiektu o nazwie uzytkownik do vectora o nazwie uzytkownicy

    PlikZuzytkownikami plikZuzytkownikami;
    plikZuzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

void UzytkownikMenedzer::wczytajUzytkownikowZPliku()
{
   uzytkownicy = plikZuzytkownikami.wczytajUzytkownikowZPliku();
}
