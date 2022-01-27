#include <stdio.h>
int main()
{
    int i, j=7, contador = 0;
    for (i = 1; i <= 9; i = i + 2)
    {
        while (contador < 3)
        {
            printf("I=%d J=%d\n", i, j);
            contador++;
            j--;
        }
       j=7;
       contador=0;
    }

    return 0;
}