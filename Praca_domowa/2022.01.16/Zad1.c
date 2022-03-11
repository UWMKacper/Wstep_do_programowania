/*Rownanie kwadratowe w postaci A.X^2 + B.X + C = 0, wprowadzając A, B i C z klawiatury i wyświetlając pierwiastki równania.
Warto też spróbować zrobić schemat blokowy. Przy rozwiązaniu równania należy uwzględnić 3 przypadki w zależności od znaku Delty,
oraz, że w przypadku A=0 równanie sprowadza się do równania liniowego B.x + C = 0, które należy rozwiązać w odpowiedni sposób.*/

#include <stdio.h>
#include <complex.h>
#include <math.h>

void main(void)
{
    float A, B, C, delta;
    printf("Podaj A, B, C: ");
    scanf("%f, %f, %f", &A, &B, &C);

    delta = B*B - 4*A*C;

    if (delta == 0)
    {
        printf("\nFunckja ma dwa rozwiazania rzeczywiste, ktore sa sobie rowne i wynosza:\n");
        printf("x_0: %f\n", -B/(2*A));
    }
    else if (delta > 0)
    {
        printf("\nFunkcja ma dwa rozwiazania rzeczywiste ktore wynosza:\n");
        printf("x_1: %f\n", (-B-sqrt(delta))/(2*A));
        printf("x_2: %f\n", (-B+sqrt(delta))/(2*A));
    }
    else
    {
        printf("\nFunkcja ma dwa rozwiazania zespolone ktore wynosza:\n");
        printf("x_1: %.3f%+.3fi\n",-B/(2*A),sqrt(-delta)/(2*A));
        printf("x_2: %.3f%+.3fi\n",-B/(2*A),-sqrt(-delta)/(2*A));
    }
}
