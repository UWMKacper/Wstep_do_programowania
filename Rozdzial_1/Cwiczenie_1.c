/*Kalkulator MacroMuscle
Program pobiera od uzytkownika wartosc w calach i przelicza ja na centymetry.*/

#include<stdio.h>
int main(void)
{
    int cale;

    /*Komentarz powitalny.*/
    printf("Kalkulator MacroMuscle.\n");

    /*Pobranie danych od uzytkownika.*/
    printf("\nProsze podac liczbe cali: ");
    scanf("%d", &cale);

    /*Zwrocenie przeliczonej wartosci.*/
    printf("\nLiczba podana w calach: %d w centymetrach wynosi: %0.2f.\n", cale, cale*2.54);
    return 0;
}
