/* Cwiczenie_10.c -- Program ma obliczyc sume dwoch ciagow. Uzytkownik
podaje zakres w jakim maja go obliczyc. */

#include <stdio.h>
#include <math.h>

int main()
{
    // Definicja zmiennych
    float ciag1 = 0, ciag2 = 0, granica;
    int i;

    // Pobieranie zmiennych od uzytkownika
    printf("Podaj granice: ");
    scanf("%f", &granica);

    // Wyznaczanie sumy ciagow
    for (i = 1; i <= granica; i++)
    {
        ciag1 += 1.0/i;
        ciag2 += (1.0/i)*pow(-1, i+1); // Co drugi wyraz jest ujemny
    }

    // Wyswietlanie wynikow obliczen
    printf("\nCiag1: %f", ciag1);
    printf("\nCiag2: %f", ciag2);

    return 0;
}
