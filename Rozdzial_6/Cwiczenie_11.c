/* Cwiczenie_11.c -- Program tworzy 8 elementowa tablice i przypisuje
jej kolejne potegi liczby 2. */

#include <stdio.h>

int main(void)
{
    // Definicja zmiennych
    int tablica[8];
    int i, dwa = 2;

    // Wypelnienie tablicy
    for (i = 0; i < 8; i++)
    {
        tablica[i] = (int) 2*(i+1);
    }

    i = 0; // Zerowanie wskaznika

    // Wyswietlenie wynikow obliczen

    while (i < 8)
    {
        printf("%d ", tablica[i]);
        i++;
    }

    return 0;
}
