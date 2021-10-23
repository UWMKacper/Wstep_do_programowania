/* Program wyswietlajacy lancuch "Usmiech!" w okreslony spsob.*/

#include <stdio.h>

int main(void)
{
    // wyswietlenie tekstu 3 razy
    tekst();
    tekst();
    tekst();
    printf("\n");

    // wyswietlenie tekstu 2 razy
    tekst();
    tekst();
    printf("\n");

    // wyswietlenie tekstu 1 raz
    tekst();
    printf("\n");

    return 0;
}

int tekst(void)
{
    printf("Usmiech!");
}
