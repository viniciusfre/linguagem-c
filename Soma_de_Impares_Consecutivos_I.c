#include <stdio.h>
int main()
{
    int X, Y, c, aux, d = 0;
    scanf("%d", &X);
    scanf("%d", &Y);
    if (Y > X)
    {
        aux = X;
        X = Y;
        Y = aux;
    }
    for (c = Y+1; c < X; c++)
    {
        if (c % 2 != 0){ 
            d = d + c;

        }
    }
    printf("%d\n", d);
    return 0;
}