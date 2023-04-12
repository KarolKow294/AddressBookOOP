#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    while (true)
    {
        if (!ksiazkaAdresowa.sprawdzCzyUzytkownikJestZalogowany())
        {
            ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();
        }
        else
        {
            ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();
        }
    }
    return 0;
}
