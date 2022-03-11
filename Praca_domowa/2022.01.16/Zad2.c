/* Wprowadzenie do tablicy 10 liczb i wyświetlenie w odwrotnej kolejności. za pomocą pętli for; while; do ... while. */

#include <stdio.h>

void main(void)
{
    const int ROZMIAR = 10;
    int tablica[ROZMIAR];
    int i;

    // Wprowadzenie 10 liczb do tablicy
    printf("Tablica: ");
    for (i=0; i < ROZMIAR; i++)
    {
        tablica[i] = i*2;
        printf("%d ", tablica[i]);
    }

    // Obliczenia wykonane przy pomocy petli for
    printf("\nPetla for: ");
    for (i=ROZMIAR-1; i >= 0; i--)
    {
        printf("%d ", tablica[i]);
    }

    // Obliczenia wykonane przy pomocy petli while
    i = ROZMIAR-1;

    printf("\nPetla while: ");
    while(i >= 0)
    {
        printf("%d ", tablica[i]);
        i--;
    }

    // Obliczenia wykonane przy pomocy petli do ... while
    printf("\nPetla do while: ");
    i = ROZMIAR-1;
    do
    {
        printf("%d ", tablica[i]);
        i--;
    }while(i >= 0);
}
