/* Cwiczenie_1.c -- Program tworzy 26 elementowa tablice wypelniona
malymi literami, a nastepnie wyswietla ich zawartosc. */

#include<stdio.h>

int main(void)
{
    // Definiowanie zmiennych
    char tablica[26];
    char litera = 'a';
    int i;

    // Wypelnienie tablicy literami
    for (i = 0; i < 26; litera++, i++)
    {
        tablica[i] = litera;
    }

    // Wyswietlenie wynikow obliczen
    for (i = 0; i < 26; i++)
    {
        printf("%c ", tablica[i]);
    }

    return 0;
}
