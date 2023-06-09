#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if (sprawdzCzyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";

    wybor = MetodyPomocnicze::wczytajZnak();

    switch (wybor)
    {
    case '1':
        rejestracjaUzytkownika();
        break;
    case '2':
        logowanieUzytkownika();
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

void KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";

    wybor = MetodyPomocnicze::wczytajZnak();

    switch (wybor)
    {
    case '1':
        dodajAdresata();
        break;
    case '2':
        wyszukajAdresatowPoImieniu();
        break;
    case '3':
        wyszukajAdresatowPoNazwisku();
        break;
    case '4':
        wyswietlWszystkichAdresatow();
        break;
    case '5':
        usunAdresata();
        break;
    case '6':
        edytujAdresata();
        break;
    case '7':
        zmianaHaslaZalogowanegoUzytkownika();
        break;
    case '8':
        wylogujUzytkownika();
        break;
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenedzer.wylogujUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

bool KsiazkaAdresowa::sprawdzCzyUzytkownikJestZalogowany()
{
    return uzytkownikMenedzer.sprawdzCzyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::dodajAdresata()
{
    if (sprawdzCzyUzytkownikJestZalogowany())
    {
        adresatMenedzer -> dodajAdresata();
    }
    else
    {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    if (sprawdzCzyUzytkownikJestZalogowany())
    {
        adresatMenedzer -> wyszukajAdresatowPoImieniu();
    }
    else
    {
        cout << "Aby wyszukac adresata po imieniu, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    if (sprawdzCzyUzytkownikJestZalogowany())
    {
        adresatMenedzer -> wyszukajAdresatowPoNazwisku();
    }
    else
    {
        cout << "Aby dodac wyszukac adresata po nazwisku, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if (sprawdzCzyUzytkownikJestZalogowany())
    {
        adresatMenedzer -> wyswietlWszystkichAdresatow();
    }
    else
    {
        cout << "Aby wyswietlic wszystkich adresatow, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::usunAdresata()
{
    if (sprawdzCzyUzytkownikJestZalogowany())
    {
        adresatMenedzer -> usunAdresata();
    }
    else
    {
        cout << "Aby usunac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::edytujAdresata()
{
    if (sprawdzCzyUzytkownikJestZalogowany())
    {
        adresatMenedzer -> edytujAdresata();
    }
    else
    {
        cout << "Aby edytowac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}
