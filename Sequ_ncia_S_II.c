#include <stdio.h>
int main()
{
    double S = 1, denominador = 2, numerador = 0;
    for (numerador = 3; numerador <= 39; numerador = numerador + 2)
    {
        S = S + numerador / denominador;
        denominador = denominador * 2;
    }
    printf("%.2lf\n", S);
    return 0;
}