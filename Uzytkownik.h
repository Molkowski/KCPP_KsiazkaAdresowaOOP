#include <iostream>

using namespace std;

class Uzytkownik
{
    int id;
    string login;
    string haslo;

public:
    void ustawId(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string haslo);

    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
};
