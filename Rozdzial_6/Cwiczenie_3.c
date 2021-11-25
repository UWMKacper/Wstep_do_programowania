/* Cwiczenie_3.c -- Program wykorzystuje petle aby wyswietlic wzor:
F
FE
FED
FEDC
FEDCB
FEDCBA */

#include <stdio.h>

int main(void)
{
    // Definicja stalych i zmiennych
    char znak = 'F';
    int i, j;

    // Tworzenie wierszy
    for (i = 0; i < 6; i++)
    {
        // Tworzenie kolumn
        for (j = 0; j <= i; j++)
        {
            printf("%c", znak-j);
        }

        printf("\n"); // Tworzenie nowego wiersza
    }

    return 0;
}
