/*Program wyswietla tekst przy pomocy dodatkowych funkcji (poza main)*/

#include <stdio.h>

int main(void)
{
    /* wywolanie zewnetrznych funkcji*/
    tekst_1();
    tekst_1();
    tekst_2();
}

int tekst_1(void)
{
    printf("Panie Janie!\n");
}

int tekst_2(void)
{
    printf("Rano wstan!\n");
}
