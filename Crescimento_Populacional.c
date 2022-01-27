#include <stdio.h>
int main()
{
    int T = 0;             // numero de casos de teste
    int PA = 0, PB = 0;    // população de A e B
    double G1 = 0, G2 = 0; // 1 digito decimal crescimento populacional em A e B(percentual)
    int contador = 0, anos = 0;
    scanf("%d", &T);
    // 6
    for (contador = 0; contador < T; contador++)
    {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        // 100 150 1.0 0
        while (PA <= PB)
        {
            PA = PA + (PA * G1 / 100);
            PB = PB + (PB * G2 / 100);
            anos++;
            if (anos > 100)
            {
                break;
            }
        }
        if (anos > 100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {
            printf("%d anos.\n", anos);
        }
        anos = 0;
    }

    return 0;
}