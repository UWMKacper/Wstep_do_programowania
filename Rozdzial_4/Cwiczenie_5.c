/* Cwiczenie_5.c -- Program pobiera imie i nazwisko od uzytkownika,
 a nastepnie wyswietla je w okreslonej postaci. */

#include<stdio.h>

int main(void)
{
    char imie[40], nazwisko[40];

    printf("Podaj swoje imie oraz nazwisko: ");
    scanf("%s %s", imie, nazwisko);

    // wyrownanie liczb do prawej krawedzi
    printf("\n%s %s\n", imie, nazwisko);
    printf("%*d %*d\n", strlen(imie), strlen(imie), strlen(nazwisko), strlen(nazwisko));

    // wyrownanie liczb do lewej krawedzi
    printf("\n%s %s\n", imie, nazwisko);
    printf("%-*d %-*d\n", strlen(imie), strlen(imie), strlen(nazwisko), strlen(nazwisko));

    return 0;
}



