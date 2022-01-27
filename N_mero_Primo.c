#include <stdio.h>
int main()
{
    int N = 0, X = 0, contador = 0, divisores = 0, i = 0;
    scanf("%d", &N);
    // 3
    for (contador = 0; contador < N; contador++)
    {
        scanf("%d", &X);
        //7
        for (i = 1; i <= X; i++)
        {
            if (X % i == 0)
            {
                divisores = divisores + 1;
            }
        }
        if (divisores > 2)
        {
            printf("%d nao eh primo\n", X);
        }
        else
        {
            printf("%d eh primo\n", X);
        }
        divisores=0;
    }

    return 0;
}
