#include <stdio.h>
int main()
{
    int A = 0, C, G=0,H=0,I=0,J=0;
    for (C = 1; C <= 5; C++)
    {
        scanf("%d", &A);
        if (A%2 == 0)
        {
            G++;
        }
        if(A%2 != 0){
            H++;
        }
        if(A > 0 ){
            I++;

        }
        if(A < 0 ){
            J++;

        }
    }
    printf("%d valor(es) par(es)\n", G);
    printf("%d valor(es) impar(es)\n", H);
    printf("%d valor(es) positivo(s)\n", I);
    printf("%d valor(es) negativo(s)\n", J);
    return 0;
}