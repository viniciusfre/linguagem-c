#include <stdio.h>
int main()
{
    int T = 0, contador = 0, i = 0, j = 0, N = 0; // indicando o número de casos de teste.
    unsigned long long int A[61];                           // Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.
    A[0]=0;
    A[1]=1;
    // 3
    for (i = 2; i <= 60; i++)
    {
        A[i] = A[i - 1] + A[i - 2];
    }
    scanf("%d", &T);
    for (j = 0; j < T; j++)
    {
        scanf("%d", &N);
        // 0
        printf("Fib(%d) = %llu\n", N, A[N]);
    }

    return 0;
}
