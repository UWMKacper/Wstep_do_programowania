/* Cwiczenie_5.c -- Program pobiera wiek od uzytkownika, a nastepnie
przelicza go na sekundy i wyswietla wartosc obliczen. */

#include<stdio.h>
#include<math.h>

int main(void)
{
    float wiek;
    const float sekundy_w_roku = 3.156 * pow(10,7);

    printf("Podaj swoj wiek w latach: ");
    scanf("%f", &wiek);

    printf("\nMasz %.1f lat. W sekundach bedzie to %.2f.\n",
           wiek, sekundy_w_roku*wiek);

    return 0;
}
