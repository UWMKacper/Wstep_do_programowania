/* Cwiczenie_4.c -- Program wczytuje dane wejsciowe do znaku '#'. Kazda '.'
zastepuje '!', a kazdy '!' zastepuje '!!' oraz wyswietla liczbe zmian. */

#include <stdio.h>

int main(void)
{
    // Definiowanie zmiennych
    int licznik_zmian = 0;
    char znak;

    // Pobranie i zliczenie danych
    printf("Podaj zdanie: ");

    while ((znak = getchar()) != '#')
    {
        if (znak == '.')
        {
            znak = '!';
            licznik_zmian++;
        }
        else if (znak == '!')
        {
            znak = '!!';
            licznik_zmian++;
        }
    }

    // Wyswietlenie wyniku obliczen
    printf("Liczba zmian: %d.\n", licznik_zmian);

    return 0;
}
