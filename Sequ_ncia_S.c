#include <stdio.h>
int main()
{
    double S = 0, contador = 0;
    for (contador = 1; contador <= 100; contador++)
    {
        S = S + 1 / contador;
    }
    printf("%.2lf\n", S);
    return 0;
}