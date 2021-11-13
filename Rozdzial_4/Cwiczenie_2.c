/* Cwiczenie_2.c -- program pobiera zmienna imie i wyswietla ja w roznych stylach. */

#include<stdio.h>

int main(void)
{
    char imie[40];

    printf("Podaj swoje imie: ");
    scanf("%s", imie);

    printf("\na) \"%s\"", imie);
    printf("\nb) \"%20s\"", imie);
    printf("\nc) \"%-20s\"", imie);
    printf("\nd) \"%*s\"\n", strlen(imie)+3, imie);

    return 0;
}

