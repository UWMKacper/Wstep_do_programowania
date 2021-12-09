/* Cw_7.c -- Program pobiera liczbe przepracowanych godzin w tygodniu,
nastepnie wyswietla wynagrodzenie brutto, podatek oraz wynagrodzenie
netto. Przyjete wartosci:
a) podstawowe wynagrodzenie = 40zl/godz
b) nadgodziny (powyzej 40 godzin w tygodniu) 150% podstawowego wynagrodzenia
c) podatek 15% dla pierwszych 1200 zl
   podatek 20% dla kolejnych 600 z³
   podatek 25% dla reszty wynagrodzenia.
W obliczeniach wykorzystaj stala #define. */

#include <stdio.h>
#define PODATEK_DO_1200 0.15
#define PODATEK_D0_1800 0.20
#define PODATEK_DO_RESZTY 0.25
#define PODSTAWOWE_WYNAGRODZENIE 40
#define NADGODZINY 1.5

int main(void)
{
    // Definiowanie zmiennych
    int liczba_godzin;
    float wynagrodzenie_netto = 0;
    float wynagrodzenie_brutto;

    // Pobranie danych do obliczen
    printf("Podaj liczbe godzin: ");
    scanf("%d", &liczba_godzin);

    wynagrodzenie_brutto = liczba_godzin*PODSTAWOWE_WYNAGRODZENIE;
    wynagrodzenie_netto = wynagrodzenie_brutto;

    // Obliczenie kwot dla zadanych progow
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

    // Wyswietlenie wynikow obliczen
    printf("\nWynagrodzenie brutto: %.2f zl\n", wynagrodzenie_brutto);
    printf("Wynagrodzenie netto: %.2f zl\n", wynagrodzenie_netto);

    return 0;
}
