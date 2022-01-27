#include <stdio.h>
int main()
{
    double A = 0, media = 0,guardavalor=0;
    int validade = 0;
    while (validade != 2)
    {
        scanf("%lf", &A);
        if (A >= 0 && A <= 10)
        {
            validade = validade + 1;
            if (validade == 1 && (A >= 0 && A <= 10))
            {
                guardavalor = A;
            }
            if (validade == 2)
            {
                media = guardavalor + A;
            }
        }
        else
        {
            validade = validade + 0;
            printf("nota invalida\n");
        }
    }
    printf("media = %.2lf\n", media / 2);

    return 0;
}