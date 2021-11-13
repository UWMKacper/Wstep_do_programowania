/* Cwiczenie_3.c -- Program pobiera liczbê zmiennoprzecinkowa,
 i wyswietla ja w postaci ulamka dziesietnego i w zapisie wykladniczym. */

#include<stdio.h>

int main(void)
{
    float zmienna1;

    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &zmienna1);

    printf("\na. Wpisano liczbe %2.1f lub %2.1e.\n", zmienna1, zmienna1);
    printf("b. Wpisano liczbe %+2.3f lub %+2.3e.\n", zmienna1, zmienna1);

    return 0;
}


