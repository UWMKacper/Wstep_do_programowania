/* Cwiczenie_8.c -- Modyfikacja cwiczenia nr 7. Obliczenia
wykonywane sa przez zewnetrzna funkcje. */

#include <stdio.h>
float funkcja(float liczba1, float liczba2);

int main(void)
{
    // Definiowanie zmiennych
    float liczba1, liczba2;

    // Pobranie danych od uzytkownika i wyswietlenie wyniku
    printf("Podaj dwie liczby: ");

    while (scanf("%f %f", &liczba1, &liczba2) == 2)
    {
        printf("(%.3f-%.3f)/(%.3f*%.3f)= %.3f", liczba1, liczba2,
               liczba1, liczba2, funkcja(liczba1, liczba2));

        printf("\nPodaj dwie liczby: ");
    }

    return 0;
}

float funkcja(float liczba1, float liczba2)
{
    return (liczba1-liczba2)/(liczba1*liczba2);
}
