/* Cwiczenie_5.c -- Program wyswietla tablice. W kazdym
wierszu tablicy ma byc liczba calkowita, jej kwadrat i
szescian. Dolna i gorna granica tabeli bedzie okreslona
przez uzytkownika. */

#include <stdio.h>

int main(void)
{
    int dolna_granica, gorna_granica;

    printf("Podaj dolna i gorna granice do obliczen: ");
    scanf("%d %d", &dolna_granica, &gorna_granica);

    for (printf("----------------------------\n"),
         printf("| Liczba |Kwadrat |Szescian|\n"),
         printf("----------------------------\n");
         dolna_granica<gorna_granica; dolna_granica++)
         {
             printf("|%-8d|%-8d|%-8d|\n", dolna_granica, dolna_granica*dolna_granica,
                    dolna_granica*dolna_granica*dolna_granica);
             printf("----------------------------\n");
         }

    return 0;
}
