#include <stdio.h>
int main()
{
    int X = 1, pares = 0,contador=0,comparador=0;
    while (X != 0)
    {
        scanf("%d", &X);
        // 4
        if(X == 0){
            break;
        }
        comparador = X;
        //comparador = 4
        while(contador < 5)
        {
            if (comparador % 2 == 0)
            {
                pares = pares + comparador;
                comparador++;
                //comparador = 13
                contador++;
                //contador = 5

            }
            else{
                comparador++;
            }
        }
        printf("%d\n",pares);
        contador = 0;
        pares = 0;

    }
    return 0;
}