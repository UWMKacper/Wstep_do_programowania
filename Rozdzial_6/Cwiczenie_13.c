/* Cwiczenie_13.c -- Program sprawdza kiedy procent skladany przyniesie
wiecej zysku niz procent prosty. */

#include <stdio.h>

int main(void)
{
    // Definiowanie stalych i zmiennych
    float ewa = 100, kasia = 100;
    float const ewa_procent = 0.1, kasia_procent = 0.05;
    int lata = 0;

    // Wykonywanie obliczen
    while (ewa >= kasia)
    {
        ewa += 100*ewa_procent;
        kasia = kasia + (kasia*kasia_procent);
        lata += 1;
    }

    // Wyswietlanie wyniku obliczen
    printf("Po %d latach Kasia ma %.2f, a Ewa ma %.2f", lata, kasia, ewa);

    return 0;
}
