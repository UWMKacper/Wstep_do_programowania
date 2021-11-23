/* Cwiczenie_3.c -- Program pobiera od uzytkownika liczbe dni, a nastepnie
wyswietla je jako liczbe tygodni i dni. */

#include<stdio.h>

int main(void)
{
    // Definiowanie stalych i zmiennych
    int const TYDZIEN = 7;
    int dni, tygodnie, reszta;

    // Pobranie liczby od uzytkownika
    printf("Podaj liczbe dni do przeliczenia: ");
    scanf("%d", &dni);

    // Petla obliczajaca ilosc tygodni i dni w podanej liczbie dni
    while (dni > 0)
    {
        tygodnie = dni/TYDZIEN;  // Liczba tygodi
        reszta = dni%TYDZIEN;  // Liczba dni

        printf("%d dni to %d tygodnie i %d dni", dni, tygodnie, reszta);

        printf("\nPodaj liczbe dni do przeliczenia: ");
        scanf("%d", &dni);
    }

    return 0;
}
