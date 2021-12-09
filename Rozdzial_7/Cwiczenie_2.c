/* Cw_2.c -- Program odczytuje dane az do napotkania znaku '#',
a nastepnie wyswietla kazdy znak wraz z jego kodem dziesietnym ASCII.
W jednym okienku powinno znajdowaæ siê 8 znaków. */

#include <stdio.h>

int main(void)
{
    // Definiowanie zmiennych
    char znaki;
    int licznik = 0;

    // Wprowadzenie i wyswietlenie danych
    printf("Wprowadz znaki: ");

    while ((znaki = getchar()) != '#')
    {
        if (licznik < 8)
            printf("Znak: %c - kod: %d ", znaki, znaki);
        else
        {
            printf("\nZnak: %c - kod: %d ", znaki, znaki);
            licznik = 0;
        }

        licznik++;
    }

    return 0;
}
