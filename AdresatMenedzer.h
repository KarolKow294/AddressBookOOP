#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    PlikZAdresatami plikZAdresatami;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {
        idZalogowanegoUzytkownika = 0;
    };

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void czyszczenieVectoraAdresaci();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
};

#endif
