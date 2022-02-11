#include <stdio.h>
int main()
{
    int N, i, j;
    int M[70][70];
    while (scanf("%d", &N) != EOF)
    {
        for (i = N - 1; i >= 0; i--)
        {
            for (j = N - 1; j >= 0; j--)
            {
                M[i][j] = 3;
            }
        }
        // enche a matriz de 3
        for (i = N - 1; i >= 0; i--)
            for (j = N - 1; j >= 0; j--)
            {
                if (i == j)
                {
                    M[i][j] = 1;
                }
            }
        // enche a matriz de 1
        i = 0;

        for (j = N - 1; j >= 0; j--)
        {
            M[i][j] = 2;
            i++;
        }

        // enche a matriz de 2
        for (i = N - 1; i >= 0; i--)
        {
            for (j = N - 1; j >= 0; j--)
            {
                if (j == 0)
                {
                    printf("%d\n", M[i][j]);
                }
                else
                {
                    printf("%d", M[i][j]);
                }
            }
        }
        // printar os valores
    }

    return 0;
}