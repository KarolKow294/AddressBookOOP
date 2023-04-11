#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;

public:
    KsiazkaAdresowa(string nazwaZPlikuZUzytkownikami, string nazwaZPlikuZAdresatami) : uzytkownikMenedzer(nazwaZPlikuZUzytkownikami),
    adresatMenedzer(nazwaZPlikuZAdresatami) {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wybierzOpcjeZMenuGlownego();
    void wybierzOpcjeZMenuUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();
    bool sprawdzCzyUzytkownikJestWylogowany();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};

#endif
