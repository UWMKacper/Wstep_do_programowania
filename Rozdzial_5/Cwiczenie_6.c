/* Cwiczenie_6.c -- Program pobiera od uzytkowika liczbe zmiennoprzecinkowa,
a nastepnie wyswietla ja podniesiona do szescianu. */

#include <stdio.h>
#include <math.h>
int szescian(float n);

int main(void)
{
    // Definiowanie zmiennych
    float numer;

    // Pobranie zmiennej od uzytkownika
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &numer);

    // Wywolanie zewnetrznej funkcji
    szescian(numer);

    return 0;
}

int szescian(float n)
{
    // Definiowanie zmiennych
    float n_3;

    // Podniesienie liczby do szescianu
    n_3 = pow(n, 3);

    // Zwrocenie obliczonych wartosci
    printf("Liczba %.2f podniesiona do szescianu wynosi %.2f.\n", n, n_3);

    return 0;
}
