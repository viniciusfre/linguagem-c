#include <stdio.h>
int main()
{
    int i = 1, j = 7, k = 2, contador = 0, l = 0, A = 0, B = 5, C = 0;
    for (i = 1; i <= 9; i = i + k)
    {
        for (A = j; A >= B; A--)
        {
            printf("I=%d J=%d\n", i, A);
            contador = contador + 1;
            if (j == 13 && contador % 3 == 0)
            {
                break;
            }
        }
        if (contador % 3 == 0)
        {
            A = j + 2;
            j = A;
            B = j - 2;
        }
    }

    return 0;
}


