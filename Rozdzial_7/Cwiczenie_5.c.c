/* Cwiczenie_5.c -- Zadanie 4, ale teraz trzeba wykorzystaæ instrukcjê switch. */

#include <stdio.h>

int main(void)
{
    // Definiowanie zmiennych
    int licznik_zmian = 0;
    char znak;

    // Wprowadzenie i zliczenie zmian
    printf("Podaj zdanie: ");

    while ((znak = getchar()) != '#')
    {
        switch (znak)
        {
            case '.':
                znak = '!';
                licznik_zmian++;
                break;
            case '!':
                znak = '!!';
                licznik_zmian++;
                break;
        }
    }

    // Wyswietlenie wynikow obliczen
    printf("Liczba zmian: %d.\n", licznik_zmian);

    return 0;
}

