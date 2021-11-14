/* Cwiczenie_6.c -- Program pobiera objetosc wody w litrach od uzytkownika,
a nastepnie wyswietla liczbe czastek wody w tej objetosci. */

#include<stdio.h>
#include<math.h>

int main(void)
{
    const float masa_czasteczki = 3.0 * pow(10,-23);
    const int litr = 1000;
    float objetosc;

    printf("Podaj objetosc wody w litrach: ");
    scanf("%f", &objetosc);

    printf("\nW %.2f litrach wody znajduje sie %.2f czasteczek wody.\n",
           objetosc, objetosc*litr/masa_czasteczki);

    return 0;
}
