/* Cwiczenie_4.c -- Program wykorzystuje petle aby wyswietlic wzor:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA */

int main(void)
{
    // Stale i zmienne
    char const znak = 'A';
    int wiersze, j;
    int liczba_spacji = 4;

    // Wiersze
    for (wiersze = 0; wiersze < 5; wiersze++)
    {
        // Spacje z lewej strony
        for(j = liczba_spacji; j > 0; j--)
        {
            printf(" ");
        }

        // Znaki do osi symetrii
        for (j = 0; j <= wiersze; j++)
        {
            printf("%c", znak + j);
        }

        // Znaki po osi symetrii
        for (j = j - 2; 0 <= j; j--)
        {
            printf("%c", znak + j);
        }

        liczba_spacji--;
        printf("\n");
    }
    return 0;
}
