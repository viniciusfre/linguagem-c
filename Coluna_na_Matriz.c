#include <stdio.h>
int main()
{
    // Linha / Contador C e D
    int coluna, C, D;
    // Operação
    char O;
    // Matriz
    float M[12][12], SOMA = 0;
    // Escaneia linha e Operação
    scanf("%d %c", &coluna, &O);
    // Escaneia todos os valores da matriz
    for (C = 0; C < 12; C++)
    {
        for (D = 0; D < 12; D++)
        {
            scanf("%f", &M[C][D]);
        }
    }
    for (D = 0; D < 12; D++)
    {
        SOMA = SOMA + M[D][coluna];
    }
    if (O == 'S')
    {
        printf("%.1f\n", SOMA);
    }
    else
    {
        printf("%.1f\n", SOMA / 12);
    }

    return 0;
}