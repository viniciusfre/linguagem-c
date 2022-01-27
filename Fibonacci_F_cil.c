#include <stdio.h>
int main()
{
    int N = 0, A[46], contador = 0, i = 0,numerador=0;
    scanf("%d", &N);
    A[0] = 0;
    A[1] = 1;
    // N = 5
    for (contador = 2; contador < N; contador++)
    {
        A[contador] = A[contador - 1] + A[contador - 2];
        
    }
    for(numerador = 0;numerador <= N;numerador++){
        if (numerador == N)
        {
            printf("\n");
        }
        else if(numerador == N-1){
            printf("%d", A[numerador]);

        }
        else
        {
            printf("%d ", A[numerador]);
        }
        //0 1 1 2 3
        

    }
    
    return 0;
}