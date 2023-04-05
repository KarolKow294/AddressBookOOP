#include <iostream>

#include "KsiazkaAdresowa.h"
#include "Menu.h"

using namespace std;

int main()
{
    char wybor;
    int idZalogowanegoUzytkownika;
    //vector <Adresat> adresaci;

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    Menu menu;

    while (true)
    {
        if (idZalogowanegoUzytkownika == 0)
        {
            wybor = menu.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
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
            //if (adresaci.empty() == true)
                // Pobieramy idOstatniegoAdresata, po to aby zoptymalizowac program.
                // Dzieki temu, kiedy uztykwonik bedzie dodawal nowego adresata
                // to nie bedziemy musieli jeszcze raz ustalac idOstatniegoAdresata
                //idOstatniegoAdresata = wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);

            wybor = menu.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                //idOstatniegoAdresata = dodajAdresata(adresaci, idZalogowanegoUzytkownika, idOstatniegoAdresata);
                break;
            case '2':
                //wyswietlWszystkichAdresatow(adresaci);
                break;
            case '3':
                //zmianaHaslaZalogowanegoUzytkownika(uzytkownicy, idZalogowanegoUzytkownika);
                break;
            case '4':
                idZalogowanegoUzytkownika = 0;
                //adresaci.clear();
                break;
            }
        }
    }

    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
