#include <stdio.h>
int main()
{
    int T = 0, N[1000], contador = 0, X = 0;
    scanf("%d", &T);
    // 3
    for(contador = 0; contador < 1000; contador++)
    {
        N[contador] = X;
        printf("N[%d] = %d\n",contador,N[contador]);
        X++;
        if (X == T)
        {
            X = 0;
        }
    }

    return 0;
}