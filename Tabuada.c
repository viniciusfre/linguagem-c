#include <stdio.h>
int main()
{
    int X, A;
    scanf("%d", &X);
    for (A = 1; A <= 10; A++)
    {
        printf("%d * %d = %d\n", X, A, X * A);
    }

    return 0;
}