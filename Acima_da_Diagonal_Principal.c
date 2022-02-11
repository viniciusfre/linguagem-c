#include <stdio.h>
int main()
{
    double M[12][12], soma = 0;
    int i = 0, j = 0, contador = 0;
    char O; // S de soma ou M de Média
    scanf("%c", &O);
    //S
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
            
        }
    }
    // enche a matriz
    i = 0;
    j = 0;
    for (i = 0; i < 12; i++)
    {
        if(i == 11){
            break;
        }
        j = i;
        //i = 0/j = 0
        for (j = 0; j < 12; j++)
        {
            if (j > i)
            {
               soma = soma + M[i][j];
                contador++; 
            }
            
        }
    }
    // faz a soma
    if (O == 'S')
    {
        printf("%.1lf\n", soma);
    }
    if(O == 'M')
    {
        printf("%.1lf\n", soma / contador);
    }

    return 0;
}