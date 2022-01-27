#include <stdio.h>
int main()
{
    int N[13], contador = 0, A=0;
    scanf("%d", &A);
    //4
    N[0]=A;
    //4
    for (contador = 1; contador < A; contador++)
    {
        N[contador] = N[contador - 1] * (N[0] - contador);
        
    }
    printf("%d\n", N[A-1]);
    return 0;
}