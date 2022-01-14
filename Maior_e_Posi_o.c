#include <stdio.h>
int main()
{
    int C, N, maior = 0, D = 1;
    for (C = 0; C <= 100; C++)
    {
        scanf("%d", &N);
        if (N > maior)
        {
            maior = N;
            D++;   
        }
        
    }
    printf("%d\n", maior);
    printf("%d\n", D);
    return 0;
}
