/* Cwiczenie_1.c -- Program pobiera od uzytkownika minuty i wyswietla je w postaci
godziny i minuty. Do obliczen wykorzystano petle while i stala symboliczba dla liczby 60. */

#include<stdio.h>
int pobierz_wartosc(void);

int main(void)
{
    // Definiowanie stalych i zmiennych
    int const MIN_W_H = 60;
    int minuty, godziny, reszta;

    // Pobranie danych od uzytkownika
    minuty = pobierz_wartosc();

    while (minuty > 0)
    {
        godziny = minuty / MIN_W_H;
        reszta = minuty % MIN_W_H;

        printf("%d minut to %d godzin i %d minut\n", minuty, godziny, reszta);

        minuty = pobierz_wartosc();
    }

    return 0;
}

int pobierz_wartosc(void)
{
    int min;

    printf("Podaj liczbe minut do przeliczenia: ");
    scanf("%d", &min);

    return min;
}
