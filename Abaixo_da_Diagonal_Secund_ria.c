#include <stdio.h>
int main()
{
    double M[12][12], soma = 0;
    int i = 0, j = 0, contador = 0;
    char O; // S de soma ou M de Média
    scanf("%c", &O);
    // S
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
     // i = 3/j =11
    for (j = 11; j > 0; j--)
        {
            if(i == 11 && j == 0){
                break;
            }
            if (i + j == 11)
            {
                i++;
                j = 11;
            }
            soma = soma + M[i][j];
            //soma = M[3][11];
            contador++;
            //contador=3
        }
        
    
    // faz a soma
    if (O == 'S')
    {
        printf("%.1lf\n", soma);
    }
    if (O == 'M')
    {
        printf("%.1lf\n", soma / contador);
    }

    return 0;
}