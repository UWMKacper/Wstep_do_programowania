/* Cwiczenie_4.c -- Program pobiera wzrost[cm] oraz imie,
 a nastepnie wyswietla je w postaci imie, masz wzrost metra wzrostu. */

#include<stdio.h>

int main(void)
{
    char imie[40];
    float wzrost;

    printf("Podaj swoj wzrost w cm oraz swoje imie: ");
    scanf("%f %s", &wzrost, imie);

    printf("\n%s, masz %.2f metra wzrostu.\n", imie, wzrost/100);

    return 0;
}


