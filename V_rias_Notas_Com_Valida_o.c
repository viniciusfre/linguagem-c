#include <stdio.h>
int main()
{
    double A = 0, B = 0, media = 0, somaA = 0, somaB = 0; // notas da primeira e segunda avaliação/media delas
    int X = 0, validade = 0;                              // verifica a validação da nota
    while (X != 2)
    {
        
        media = 0;
        scanf("%lf", &A);
        // A = 8
        scanf("%lf", &B);
        // B = 9
        if (A < 0 || A > 10)
        {
            printf("nota invalida\n");
        }
        else
        {
            validade = validade + 1;
            // validade = 2
            somaA = somaA + A;
            // somaA = 8
        }
        if (B < 0 || B > 10)
        {
            printf("nota invalida\n");
        }
        else
        {
            validade = validade + 1;
            // validade = 2
            somaB = somaB + B;
            // somaB = 9
        }
        if (validade == 2)
        {
            media = (somaA + somaB) / 2;
            printf("media = %.2lf\n", media);
        }
        if (media > 0)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&X);
            if (X < 1 || X > 2)
            {
                while (X < 1 || X > 2)
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &X);
                }
            }
            if (X == 1)
            {
                somaA = 0;
                somaB = 0;
                validade = 0;
            }
            if(X == 2)
            {
                break;
            }
        }
    }

    return 0;
}
