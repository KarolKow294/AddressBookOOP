#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "Menu.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;
    Menu menu;
public:
    KsiazkaAdresowa(int noweIdZalogowanegoUzytkownika, string nazwaZPlikuZUzytkownikami, int noweIdAdresata, string nazwaZPlikuZAdresatami) : uzytkownikMenedzer(nazwaZPlikuZUzytkownikami),
    adresatMenedzer(nazwaZPlikuZAdresatami) {
    uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(noweIdZalogowanegoUzytkownika);
    adresatMenedzer.ustawIdOstatniegoAdresata(noweIdAdresata);
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    bool czyVectorAdresaciJestPusty();
    int pobierzIdOstatniegoAdresata();
    void czyszczenieVectoraAdresaci();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
};

#endif
