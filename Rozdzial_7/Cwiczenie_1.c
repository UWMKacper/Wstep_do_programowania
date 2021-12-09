/* Cwiczenie_1.c - Program odczytuje dane wejsciowe az do napotkania znaku '#',
a nastêpnie wyswietla informacje o liczbie odczytanych odstepow,
znakow nowej linii oraz wszystkich innych znakow. */

#include <stdio.h>

int main(void)
{
    // Definiowaie zmiennych
    int liczba_odstepow = 0, liczba_enterow = 0, liczba_innych_znakow = 0;
    char znak;

    // Zczytywanie i obliczanie danych
    printf("Wprowadz zdanie: ");

    while ((znak = getchar()) != '#')
    {
        if (znak == ' ')
            liczba_odstepow++;
        else if (znak == '\n')
            liczba_enterow++;
        else
            liczba_innych_znakow++;
    }

    // Wyswietlanie wynikow
    printf("\nWprowadzono:\n\nodstepow: %d\nznakow nowej linii: %d\ninnych znakow: %d\n",
           liczba_odstepow, liczba_enterow, liczba_innych_znakow);

    return 0;
}
