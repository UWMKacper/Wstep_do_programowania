/* Cwiczenie_4.c -- Program pobiera liczbe zmiennoprzecinkowa i wyswietla
ja w postaci ulamka dziesietnego, notacji wykladniczej i notacji p. */

#include<stdio.h>

int main(void)
{
    float zmienna;

    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &zmienna);

    printf("\nPodana liczba to %f lub %e lub %.2a\n", zmienna, zmienna, zmienna);

    return 0;
}
