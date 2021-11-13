/* Cwiczenie_1.c -- Program bada jak zachowuje siê system w
sytuacji przepelnienia zmiennej calkowitej oraz zmiennoprzecinkowej i
niedomiaru zmiennej zmiennoprzecinkowej*/

#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{
    int maksymalny_int;
    float maksymalny_float, minimalny_float;

    maksymalny_int = INT_MAX + 1;
    maksymalny_float = FLT_MAX + 1;
    minimalny_float = 0.000001;

    printf("Maksymalna wartosc zmiennej int wynosi: %d. Po dodaniu do niej liczby 1 osiaga ona wartosc: %d.\n", INT_MAX, maksymalny_int);
    printf("Maksymalna wartosc zmiennej float wynosi: %f. Po dodaniu do niej liczby 1 osiaga ona wartosc: %f.\n", FLT_MAX, maksymalny_float);
    printf("Minimalna wartosc zmiennej float wynosi: %f. Po podzieleniu jej przez liczbe 10 osiaga ona wartosc: %f.\n", minimalny_float, minimalny_float/10);

    return 0;
}
