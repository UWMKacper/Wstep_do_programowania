/* Cwiczenie_2.c -- Program pobiera kod ASCII i nastepnie wyswietla
znak odpowiadajacy temu kodowi. */

#include<stdio.h>

int main(void)
{
    char znak;

    printf("Podaj kod ASCII: ");
    scanf("%d", &znak);

    printf("\nWpisano nastepujacy kod: %d. Odpowiada on znakowi: %c.\n", znak, znak);

    return 0;
}
