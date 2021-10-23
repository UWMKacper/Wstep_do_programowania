/*Pierwszy przykladowy program.
Uzytkownik podaje ilosc psow, aby otrzymac lancuch znakow zawierajacy podana liczbe.*/

#include <stdio.h>

int main(void)
{
    int psy;
    printf("Ile masz psow?\n");
    scanf("%d", &psy);
    printf("A wiec masz %d psow!\n", psy);
    return 0;
}
