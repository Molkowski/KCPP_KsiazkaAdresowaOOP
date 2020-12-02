#include "UzytkownikMenedzer.h"

Uzytkownik UzytkownikMenedzer:: podajDaneNowegoUzytkownika()  // W tej funkcji tworzy sie funkcje a nastepnie przypisuje sie jej parametry (id, login, haslo)
{
    Uzytkownik uzytkownik; //tworzenie obiektu o nazwie uzytkownik o klasie Uzytkownik

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika()); //wywolanie funkcji ustawId za pomoca obiektu uzytkownik w klasie Uzytkownik

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

void UzytkownikMenedzer::wczytajUzytkownikowZPliku()
{
   uzytkownicy = plikZuzytkownikami.wczytajUzytkownikowZPliku(); //stowrzenie vectora któremu nadawane s¹ wartoœci z funkcji wczytajUzytkownikowZPliku nalezacej do klasy PlikZuzytkownikami
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

void UzytkownikMenedzer::rejestracjaUzytkownika() //w tej funkcji zapisuje sie do vectora utworzony obiekt. Tworzymy vector obiektow.
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika(); //obiekt o nazwie uzytkownik z klasy Uzytkownik któremu nadana jest wartosc która jest wynikiem dzialania funkcji podajDaneNowegoUzytkownika

    uzytkownicy.push_back(uzytkownik); //dodawanie obiektu o nazwie uzytkownik do vectora o nazwie uzytkownicy

    plikZuzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik); //Przesylanie obiektu uzytkownik do funkcji dodajacej dane do pliku.

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

string UzytkownikMenedzer::wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}
void UzytkownikMenedzer::wypiszCalyvectro()
{
    for (int i=0; i<uzytkownicy.size(); i++)
    {
        cout << uzytkownicy[i].pobierzId() << " ";
        cout << uzytkownicy[i].pobierzLogin() << " ";
        cout << uzytkownicy[i].pobierzHaslo() << endl;
    }
}

int UzytkownikMenedzer::logowanieUzytkownika()
{

    string login = "", haslo = "";

    cout << endl << "Podaj login: ";
    getline(cin,login);
    login = wczytajLinie();

    vector <Uzytkownik>::iterator itr = uzytkownicy.begin(); //korzystanie z danych zapisanych w vectorze
    while (itr != uzytkownicy.end())
    {
        if (itr -> pobierzLogin() == login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = wczytajLinie();

                if (itr -> pobierzHaslo() == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    return idZalogowanegoUzytkownika = itr -> pobierzId();

                    system("pause");
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }
        itr++;
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return 0;
}

void UzytkownikMenedzer::zmianaHaslaZalogowanegoUzytkownika()
{
    cout << idZalogowanegoUzytkownika << endl;
    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    noweHaslo = wczytajLinie();

    for (vector <Uzytkownik>::iterator itr = uzytkownicy.begin(); itr != uzytkownicy.end(); itr++)
    {
        if (itr -> pobierzId() == idZalogowanegoUzytkownika)
        {
            itr -> ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }

   plikZuzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}


