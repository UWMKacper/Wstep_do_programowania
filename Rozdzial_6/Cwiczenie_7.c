/* Cwiczenie_7.c -- Program pobiera od uzytkownika dwie liczby zmiennoprzecinkowe
i wyswietla wartosc ich roznicy podzielonej przez ich iloczyn. Program powienien
odczytywac dane do momentu, gdy uzytkownik nie poda liczby. */

#include <stdio.h>

int main(void)
{
    // Definiowanie zmiennych
    float liczba1, liczba2;

    // Pobranie danych od uzytkownika i wyswietlenie wyniku
    printf("Podaj dwie liczby: ");

    while (scanf("%f %f", &liczba1, &liczba2) == 2)
    {
        printf("(%.3f-%.3f)/(%.3f*%.3f)= %.3f", liczba1, liczba2,
               liczba1, liczba2, (liczba1-liczba2)/(liczba1*liczba2));

        printf("\nPodaj dwie liczby: ");
    }

    return 0;
}
