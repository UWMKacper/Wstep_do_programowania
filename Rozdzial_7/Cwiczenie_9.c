/* Cw_9.c -- Program pobiera dodatnia liczbe calkowita, a nastepnie
wyswietla wszystkie liczby pierwsze mniejsze lub rowne tej liczbie. */

int main(void)
{
    // Definiowanie zmiennych
    int dodatnia_liczba_calkowita, i, k;
    int licznik = 0;

    // Wprowadzanie danych przez uzytkownika
    printf("Prosze podac liczbe calkowita.\n");
    printf("\nPodaj liczbe calkowita: ");

    scanf("%d", &dodatnia_liczba_calkowita);

    printf("Liczby pierwotne, ktore sa dzielnikami podanej liczby: ");

    // Wyznaczanie wszystkich liczb w zakresie podanym przez uzytkownika
    for (i = 1; i <= dodatnia_liczba_calkowita; i++)
    {
        licznik = 0; // licznik sprawdza czy dana liczba ma tylko 2 dzielniki (sama siebie i jedynke)

        // Sprawdzenie czy dana liczba ma tylko 2 dzielniki
        for (k = 1; k <= i; k++)
        {
            if (i%k == 0)
            {
                licznik++;
            }
        }

        // Wyswietlenie liczby, jezeli jest ona liczba pierwsza
        if (licznik == 2)
        {
            printf("%d ", i);
            licznik = 0;
        }
    }

    printf("\n");

    return 0;
}
