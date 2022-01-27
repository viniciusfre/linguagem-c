#include <stdio.h>
int main()
{
    int N = 0, contador = 1;
    scanf("%d", &N);
    //N = 6
    //contador = 0
    while(contador != N)
    {
        if (N % contador == 0)
        {
            printf("%d\n",contador);
        }
        contador++;
        //contador=1
    }
    printf("%d\n",N);

    return 0;
}