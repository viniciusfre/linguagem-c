#include <stdio.h>
int main()
{
    int A = 0, C, G=0;
    for (C = 1; C <= 5; C++)
    {
        scanf("%d", &A);
        if (A%2 == 0)
        {
            G++;
        }
    }
    printf("%d valores pares\n", G);
    return 0;
}