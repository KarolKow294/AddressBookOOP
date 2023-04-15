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
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaZPlikuZUzytkownikami, string nazwaZPlikuZAdresatami)
        : uzytkownikMenedzer(nazwaZPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaZPlikuZAdresatami)
    {
        adresatMenedzer = NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    };

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wybierzOpcjeZMenuGlownego();
    void wybierzOpcjeZMenuUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();
    bool sprawdzCzyUzytkownikJestZalogowany();
    void dodajAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void wyswietlWszystkichAdresatow();
    void usunAdresata();
    void edytujAdresata();
};

#endif
