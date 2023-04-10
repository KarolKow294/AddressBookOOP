#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    char wybor;

    KsiazkaAdresowa ksiazkaAdresowa(0, "Uzytkownicy.txt", 0, "Adresaci.txt");

    while (true)
    {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            if (ksiazkaAdresowa.czyVectorAdresaciJestPusty())
            {
                ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
            }

            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '3':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '4':
                ksiazkaAdresowa.ustawIdZalogowanegoUzytkownika(0);
                ksiazkaAdresowa.czyszczenieVectoraAdresaci();
                break;
            }
        }
    }
    return 0;
}
