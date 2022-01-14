#include <stdio.h>
int main()
{
    int N, C, D;
    scanf("%d", &N);
    for (C = 0; C < N; C++)
    {

        scanf("%d", &D);
        // POSITIVOS
        if (D > 0)
        {
            // IMPARES
            // ODD POSITIVE
            if (D % 2 != 0)
            {
                printf("ODD POSITIVE\n");
            }
            // PARES
            // EVEN POSITIVE
            else if (D % 2 == 0)
            {
                printf("EVEN POSITIVE\n");
            }
            
        }
        // NEGATIVOS
        if (D < 0)
        {
            // IMPARES
            // ODD NEGATIVE
            if (D % 2 != 0)
            {
                printf("ODD NEGATIVE\n");
            }
            // PARES
            // EVEN NEGATIVE
            else if (D % 2 == 0)
            {
                printf("EVEN NEGATIVE\n");
            }
            
        }
        if (D == 0)
        {
            // NULL
            printf("NULL\n");
        }
    }

    return 0;
}