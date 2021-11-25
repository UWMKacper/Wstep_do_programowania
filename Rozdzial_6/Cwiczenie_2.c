/* Cwiczenie_2.c -- Program wykorzystuje petle aby wyswietlic wzor:
$
$$
$$$
$$$$
$$$$$ */

#include <stdio.h>

int main(void)
{
    // Definicje zmiennych
    char znak = '$';
    int i, j;

    // Petla zewnetrzna - tworzy wiersze
    for (i = 0; i < 5; i++)
    {
        // Petla wewnetrzna - tworzy znaki
        for (j = 0; j <= i; j++)
        {
            printf("%c", znak);
        }

        printf("\n");  // Nowa linia po kazdym wierszu
    }

    return 0;
}

