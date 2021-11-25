/* Cwiczenie_12.c -- Program pobiera zdanie, a nastepnie wyswietla go
wspak. */

#include <stdio.h>
#define MAX_CHARS 255

int main(void)
{
    // Definiowanie zmiennych
    char tablica[MAX_CHARS];
    int i = 0;

    // Pobranie danych od uzytkownika
    do
    {
        scanf("%c", &tablica[i]);
        i++;
    } while (tablica[i - 1] != '\n'); // -1 bo niwelujemy +1 z ostaniego wiersza instrukcji do

    for (;i >= 2; i--)
    {
        printf("%c", tablica[i-2]);  // -2 bo dwa ostatnie znaki to enter
    }

    return 0;
}
