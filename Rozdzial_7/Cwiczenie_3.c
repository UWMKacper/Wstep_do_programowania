/* Cwiczenie_3.c -- Program pobiera liczby calowite az natrafi na 0.
Po pobraniu danych program podaje liczbe liczb parzystych (bez 0),
nieparzystych oraz wartosc srednia kazdej z nich. */

int main(void)
{
    // Definiowanie zmiennych
    int liczba;
    int licznik_parzystych = 0, licznik_nieparzystych = 0, suma_parzysta = 0, suma_nieparzysta = 0;
    float srednia_parzysta, srednia_nieparzysta;

    // Pobranie i sprawdzenie liczb
    while (scanf("%d", &liczba) == 1 && liczba != 0)
    {
        if (liczba == 0)
            break;

        else if (liczba%2 == 0)
        {
            licznik_parzystych++;
            suma_parzysta += liczba;
        }

        else
        {
            licznik_nieparzystych++;
            suma_nieparzysta += liczba;
        }
    }

    srednia_parzysta = suma_parzysta/licznik_parzystych;
    srednia_nieparzysta = suma_nieparzysta/licznik_nieparzystych;

    // Wyswietlanie danych
    printf("Liczba liczb parzystych: %d\nSrednia liczba parzysta: %.2f", licznik_parzystych, srednia_parzysta);
    printf("\nLiczba liczb nieparzystych: %d\nSrednia liczba nieparzysta: %.2f", licznik_nieparzystych, srednia_nieparzysta);

    return 0;
}
