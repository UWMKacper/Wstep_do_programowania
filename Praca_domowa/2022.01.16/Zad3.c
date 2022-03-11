/* Wprowadzenie do tablicy 10 liczb i obliczenie sumy i średniej wszystkich liczb oraz liczb ujemnych; liczb parzystych. */

#include <stdio.h>

void main(void)
{
    const int ROZMIAR = 10;
    int tablica[10] = {-4, -2, -5, 11, 12, 6, 0, 55, -100, 4};
    int i, n = -4, suma_wszystkie = 0, suma_ujemne = 0, suma_parzyste = 0;
    float srednia_wszystkie, srednia_ujemne, srednia_parzyste;

    // Suma wszystkich liczb
    for (i = 0; i < ROZMIAR; i++)
    {
        if (tablica[i] < 0)
            suma_ujemne += tablica[i];
        if (tablica[i]%2 == 0)
            suma_parzyste += tablica[i];
        suma_wszystkie += tablica[i];
    }
    printf("\nSuma wszystkich liczb: %d\n", suma_wszystkie);
    printf("Suma liczb ujemnych: %d\n", suma_ujemne);
    printf("Suma liczb parzystych: %d\n", suma_parzyste);

    // Srednia wszystkich liczb
    srednia_wszystkie = suma_wszystkie/ROZMIAR;
    srednia_ujemne = suma_ujemne/ROZMIAR;
    srednia_parzyste = suma_parzyste/ROZMIAR;

    printf("\nSrednia wszystkich liczb: %f\n", srednia_wszystkie);
    printf("Srednia liczb ujemnych: %f\n", srednia_ujemne);
    printf("Srednia liczb parzystych: %f\n", srednia_parzyste);
}
