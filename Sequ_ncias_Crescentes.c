#include <stdio.h>
int main()
{
    int X = 1, contador = 1, A[1] = {1}, i = 0;
    while (X != 0)
    {
        scanf("%d", &X);
        // X = 5
        if (X == 0)
        {
            break;
        }
        // contador = 1
        while (contador <= X)
        {
            if (contador != X)
            {
                printf("%d ", A[0]);
            }
            else
            {
                printf("%d", A[0]);
                printf("\n");
            }
            A[0] = A[0] + 1;
            // A[0]= 1
            contador++;
        }
        A[0]= 1;
        contador = 1;
    }
    return 0;
}