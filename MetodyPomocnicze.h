#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

class MetodyPomocnicze
{
public:
    string konwerjsaIntNaString(int liczba);
    string wczytajLinie();
    char wczytajZnak();
    int wczytajLiczbeCalkowita();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int konwersjaStringNaInt(string liczba);
    bool czyPlikJestPusty(fstream &plikTekstowy);
};

#endif
