#include <stdio.h>
int main()
{
    int M = 1, N = 1, contador = 0, aux = 0, soma = 0;
    while (M > 0 || N > 0)
    {
        soma = 0;
        scanf("%d %d", &M, &N);
        if (M <= 0 || N <= 0)
        {
            break;
        }
        // M =5 N=2/aux = 5/M = 2/N = 5
        if (M > N)
        {
            aux = M;
            M = N;
            N = aux;
        }
        // 2 5
        for (contador = M; contador <= N; contador++)
        {
            soma = soma + contador;
            printf("%d ", contador);
        }
        printf("Sum=%d\n", soma);
    }

    return 0;
}