/* Cwiczenie_6.c -- Program odczytuje dane wejsciowe do znaku '#',
a nastepnie wyswietla informacje o liczbie powtorzen ciagu "an". */

#include <stdio.h>

int main(void)
{
    // Definiowanie zmiennych
    int powtorzenia_an = 0, start = 0;
    char znak;
    char pierwszy_znak = 'x', drugi_znak = 'x';

    // Sprawdzenie i zlicznienie zmiennych
    printf("Podaj zdanie: ");

    while ((znak = getchar()) != '#')
    {
       drugi_znak = znak;

       if (pierwszy_znak == 'a' && drugi_znak == 'n')
       {
           powtorzenia_an++;
       }

        pierwszy_znak = drugi_znak;
    }

    // Wyswietlenie obliczen
    printf("\"an\" powtorzono %d razy\n", powtorzenia_an);

    return 0;
}
