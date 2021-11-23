/* Cwiczenie_2.c -- Program pobiera od uzytkownika liczbe calkowita, a nastepnie wyswietla wszystkie
wartosci z zakresu <liczba, liczba + 10>. */

#include<stdio.h>

int main(void)
{
    // Definiowanie zmiennych
    int liczba, zakres;

    // Pobranie wartosci od uzytkownika
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    zakres = liczba + 11;

    // Wypisanie wszystkich liczb z zalozonego zakresu
    while (liczba < zakres)
    {
        printf("%d\n", liczba);
        liczba += 1;
    }

    return 0;
}
