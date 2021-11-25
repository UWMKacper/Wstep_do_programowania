/* Cwiczenie_14.c -- Program oblicza jak dlugo zajmie wydanie 1000000$,
gdy co roku wydaje sie 100000$, a pozostale pieniadze wzrastaja co roku
o 8%. */

#include <stdio.h>

int main(void)
{
    // Definiowanie stalych i zmiennych
    float bank = 1000000, wydatek = 100000;
    float const procent = 0.08;
    int licznik = 1;

    // Obliczenia
    while (bank > 0)
    {
        bank -= wydatek;
        bank += bank*procent;

        licznik++;
    }

    // Wyswietlenie wyniku
    printf("\nPo %d latach w banku zostalo %.2f.", licznik, bank);
}
