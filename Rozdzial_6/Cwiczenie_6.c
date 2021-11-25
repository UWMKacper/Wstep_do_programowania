/* Cwiczenie_6.c -- Program wczytuje pojedyncze slowo do tablicy,
a nastepnie wyswietla je wspak. */

#include <stdio.h>

int main(void)
{
    // Definiowanie zmiennych
    char wyraz[40];
    int i;

    // Pobranie zmiennej od uzytkownika
    printf("Podaj wyraz: ");
    scanf("%s", wyraz);

    // Wyswietlenie wyniku obliczen
    for (i = strlen(wyraz)-1; i >= 0; i-- )
    {
        printf("%c", wyraz[i]);
    }

    return 0;
}
