#include <stdio.h>
int main()
{
    int N = 0, contador = 0, impares = 0, i = 0;
    scanf("%d", &N);
    // N = 2
    int X = 0, Y = 0;
    for (contador = 0; contador < N; contador++)
    {
        scanf("%d %d", &X, &Y);
        // X = 11/ Y = 2/
        while (i != Y)
        {
            if (X % 2 != 0)
            {
                impares = impares + X;
                i++;
                // i = 3
                X++;
                // X = 10
            }
            else
            {
                X++;
            }
        }
        printf("%d\n", impares);
        i = 0;
        impares=0;
    }
    // 5 7 9
    return 0;
}