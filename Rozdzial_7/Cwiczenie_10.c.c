/* Cwiczenie_10.c -- Uzytkownik podaje kategorie podatkowa i dochod.
Kategorie podatkowe:
---------------------------------------------------------------------------
|          Kategoria             |                Podatek                 |
---------------------------------------------------------------------------
| Stan wolny                     | 15% dochodu do 17850 $ plus 28% reszty |
---------------------------------------------------------------------------
| Glowa rodziny                  | 15% dochodu do 23900 $ plus 28% reszty |
---------------------------------------------------------------------------
| Malzenstwo, rozliczenie wspolne| 15% dochodu do 29750 $ plus 28% reszty |
---------------------------------------------------------------------------
| Malzenstwo, rozliczenie osobne | 15% dochodu do 14875 $ plus 28% reszty |
---------------------------------------------------------------------------
*/

#include <stdio.h>
// tekst(void) wyswietlanie menu wyboru kategorii podatkowej
int tekst(void);

int main(void)
{
    // Definiowanie stalych i zmiennych
    float const STAN_WOLNY = 17850, GLOWA_RODZINY = 23900, M_WSPOLNIE = 29750, M_OSOBNE = 14875;
    int wybor;
    float podatek1 = 0.15, podatek2 = 0.28, kwota_podatek = 0;
    float kwota;

    float tablica[4] = {STAN_WOLNY, GLOWA_RODZINY, M_WSPOLNIE, M_OSOBNE};

    // Pierwsze wyswietlenie menu i pobranie danych
    tekst();

    printf("Podaj numer: ");
    scanf("%d", &wybor);

    printf("Podaj kwote: ");
    scanf("%f", &kwota);

    // Petla z wyznaczeniem kwoty
    while (wybor != 4)
    {
        if (kwota > tablica[wybor])  // tablica[wybor] - z tablicy wybierana jest kategoria zgodna z numerem wybranym przez uzytkownika
            kwota_podatek = tablica[wybor]*podatek1 + (kwota - tablica[wybor])*podatek2;
        else
            kwota_podatek = kwota*podatek1;

        printf("Wartosc podatku: %.2f zl.\n", kwota_podatek);

        tekst();

        printf("Podaj numer: ");
        scanf("%d", &wybor);

        if (wybor == 4)
            break;

        printf("Podaj kwote: ");
        scanf("%f", &kwota);
    }

    return 0;
}

int tekst(void)
{
    printf("~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~\n");
    printf("0. Stan wolny.\n");
    printf("1. Glowa rodziny.\n");
    printf("2. Malzenstwo, rozliczenie wspolne.\n");
    printf("3. Malzenstwo, rozlicznienie osobne.\n");
    printf("4. Koniec.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    return 0;
}
