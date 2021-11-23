/* Cwiczenie_4.c -- Modyfikacja programu dodaj.c. Teraz probram oblicza
sume liczb calkowitych dla wartosci podanej przez uzytkownika*/
/* dodaj.c -- piec typow instrukcji */

#include <stdio.h>
int main(void)          /* oblicza sume pierwszych liczb calkowitych dla
wartosci podanej przez uzytkownika                                 */
{
  int licznik, suma, granica;   /* instrukcja deklaracji           */

  licznik = 0;                  /* instrukcja przypisania          */
  suma = 0;                     /* jak wyzej                       */

  printf("Podaj liczbe do ktorej bedzie obliczana suma liczb calkowitych: ");
  scanf("%d", &granica);

  while (licznik++ < granica)   /* instrukcja                      */
     suma = suma + licznik;     /*       while                     */
  printf("suma = %d\n", suma);  /* instrukcja wywolania funkcji    */

  return 0;                     /* instrukcja zwrotu */
}
