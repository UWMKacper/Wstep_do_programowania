/* Cwiczenie_1.c -- program pobiera zmienne imie i nazwisko,
a nastepnie wyswietla je w odwrtnej kolejnosci. */

#include<stdio.h>

int main(void)
{
    char imie[40], nazwisko[40];

    printf("Podaj swoje imie i nazwisko: ");
    scanf("%s %s", imie, nazwisko);

    printf("\n%s %s\n", nazwisko, imie);

    return 0;
}
