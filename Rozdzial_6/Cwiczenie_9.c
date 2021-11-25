/* Cwiczenie_9.c -- Program wczytuje 8 liczb calkowitych do tablicy,
a nastepnie wyswietla je w odwrotnej kolejnosci. */

#include <stdio.h>

int main(void)
{
    // Definiowanie zmiennych
    int tablica[8];
    int liczba, i;

    // Pobranie 8 liczb od uzytkownika
    printf("Podaj 8 liczb calkowitych: ");
    for (i=0; i < 8; i++)
    {
        scanf("%d", &liczba);
        tablica[i] = liczba;
    }

    // Wyswietlenie liczb w odwrotnej kolejnosci
    printf("\nLiczby w odwrotnej kolejnosci:\n");
    for (i = 7; i >= 0; i--)
    {
        printf("%d ", tablica[i]);
    }

    return 0;
}
