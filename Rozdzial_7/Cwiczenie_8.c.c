/* Cwiczenie_8.c -- Edycja programu nr7. Teraz w menu wybiera sie jedna z 5
opcji. Pierwsze 4 to rozne stawki godzinowe. 5 to wyjscie. Po wybraniu
stawki godzinowej, obliczeniu wartosci i wyswietleniu wyniku obliczen
program powraca do menu wyboru. */

#include <stdio.h>

#define PODATEK_DO_1200 0.15
#define PODATEK_D0_1800 0.20
#define PODATEK_DO_RESZTY 0.25
#define PODSTAWOWE_WYNAGRODZENIE_1 35
#define PODSTAWOWE_WYNAGRODZENIE_2 37
#define PODSTAWOWE_WYNAGRODZENIE_3 40
#define PODSTAWOWE_WYNAGRODZENIE_4 45
#define NADGODZINY 1.5

int obliczenia(int podstawowe_wynagrodzenie);
int tekst(void);

int main(void)
{
    // Glowna funkcja sterujaca calym programem
    int wybor;

    // Wyswietlenie menu wyboru
    tekst();

    // Wybranie menu i wywolanie funkcji obliczeniowej z odpowiednim argumentem
    while (scanf("%d", &wybor) && wybor != 5)
    {
        if (wybor == 1)
            obliczenia(PODSTAWOWE_WYNAGRODZENIE_1);
        else if (wybor == 2)
            obliczenia(PODSTAWOWE_WYNAGRODZENIE_2);
        else if (wybor == 3)
            obliczenia(PODSTAWOWE_WYNAGRODZENIE_3);
        else if (wybor == 4)
            obliczenia(PODSTAWOWE_WYNAGRODZENIE_4);
        else
            printf("\nWybrano zla opcje.\n");

        tekst();
    }
    printf("\nKoniec!\n");

    return 0;
}

int obliczenia(int podstawowe_wynagrodzenie)
{
    // Oblicznienia z zadania 7
    int liczba_godzin, wynagrodzenie_brutto;
    float wynagrodzenie_netto = 0;

    // Pobranie danych od uzytkownika
    printf("Podaj liczbe godzin: ");
    scanf("%d", &liczba_godzin);

    // Wyznaczenie kwoty netto dla odpowiedniego progu
    wynagrodzenie_brutto = liczba_godzin*podstawowe_wynagrodzenie;
    wynagrodzenie_netto = wynagrodzenie_brutto;

    if (wynagrodzenie_brutto < 1200)
        wynagrodzenie_netto -= wynagrodzenie_brutto*PODATEK_DO_1200;

    else if (wynagrodzenie_brutto >= 1200 && wynagrodzenie_brutto < 1800)
    {
        if (wynagrodzenie_brutto < 1600)
            wynagrodzenie_netto -= 1200*PODATEK_DO_1200 + (1800 - wynagrodzenie_brutto)*PODATEK_D0_1800;
        else
            wynagrodzenie_netto -= 1200*PODATEK_DO_1200 + (1600 - wynagrodzenie_brutto)*PODATEK_D0_1800 + (1800 - wynagrodzenie_brutto - 1600)*PODATEK_D0_1800*NADGODZINY;
    }

    else
    {
        wynagrodzenie_netto -= 1200*PODATEK_DO_1200 + (1600 - 1200)*PODATEK_D0_1800 + (1800 - 1600)*PODATEK_D0_1800*NADGODZINY + (wynagrodzenie_brutto - 1800)*PODATEK_DO_RESZTY*NADGODZINY;
    }

    printf("\nWynagrodzenie netto: %.2f zl\n", wynagrodzenie_netto);

    return 0;
}

int tekst(void)
{
    // Menu wyboru stawki godzinowej

    printf("\n\n*************************************************************\n");
    printf("Podaj liczbe odpowadajaca zadanej stwce wynagrodzenia lub opcji\n");
    printf("1) 35 zl/godz.                       2) 37 zl/godz.\n");
    printf("3) 40 zl/godz.                       4) 45 zl/godz.\n");
    printf("5) wyjscie\n");
    printf("\n*************************************************************\n");
    printf("Wybrany numer: ");

    return 0;
}
