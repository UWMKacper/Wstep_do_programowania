/* Praca_domowa_petle.c -- Uzytkownik wprowadza liczbe "n", nastepnie
uzytkownik jest proszony "n" razy o wprowadzenie liczb. Program wyswietla
sume wprowadzonych liczb. */

#include <stdio.h>

int main(void)
{
    // Deklaracja zmiennych
    unsigned int n;
    int i;
    float suma, skladnik_dodawania;

    // Pobradnie liczby sterujacej od uzytkownika
    printf("Prosze o wprowadzenie dodatniej liczby: ");
    scanf("%u", &n);

    // Pobieranie i sumowanie liczb od uzytkownika
    for (i = 1; i <= n; i++)
    {
        printf("\nProsze wprowadzic liczbe numer [%d]: ", i);
        scanf("%f", &skladnik_dodawania);

        suma += skladnik_dodawania;
    }

    // Wyswietlenie wyniku obliczen
    printf("\nSuma wynosi: %.3f", suma);

    return 0;
}
