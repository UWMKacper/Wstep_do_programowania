/*Program przelicza wartosc zmiennej calkowitej "liczba".*/

#include <stdio.h>

int main(void)
{
    // zdefiniowanie zmiennej calkowitej
    int liczba;
    liczba = 10;

    // obliczenia
    printf("Liczba: %d. Podwojona liczba: %d. ", liczba, liczba*2);
    printf("Liczba podniesiona do kwadratu: %d.\n", liczba*liczba);

    return 0;
}
