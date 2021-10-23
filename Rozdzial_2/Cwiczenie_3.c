/*Program przelicza wiek podany przez uzytkownika z lat na dni.*/

#include <stdio.h>

int main(void)
{
    int wiek;

    // pobranie danych od uzytkownika
    printf("Podaj swoj wiek w latach: ");
    scanf("%d", &wiek);

    // przeliczenie i przekazanie wyniku dla uzytkownika
    printf("\nTwoj wiek w dniach wynosi: %d.\n", wiek*365);
    return 0;
}
