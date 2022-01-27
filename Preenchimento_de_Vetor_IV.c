#include <stdio.h>
int main()
{
    int impares[5], pares[5], contador = 0, indicepares = 0, indiceimpares = 0, impressorpar = 0, impressorimpar = 0, valores = 0, i = 0, j = 0,k=0, paressobrados = 0, imparessobrados = 0;
    for (contador = 0; contador < 15; contador++)
    {
        scanf("%d", &valores);
        // 4
        if (valores % 2 == 0)
        {

            // pares
            pares[indicepares] = valores;
            paressobrados++;
            indicepares++;
            // 1
            if (indicepares > 4)
            {
                while (impressorpar != indicepares)
                {
                    printf("par[%d] = %d\n", impressorpar, pares[impressorpar]);
                    impressorpar++;
                }
                indicepares = 0;
                impressorpar = 0;
            }
        }
        else
        {

            // impares
            impares[indiceimpares] = valores;
            imparessobrados++;
            indiceimpares++;
            // 2
            if (indiceimpares > 4)
            {
                while (impressorimpar != indiceimpares)
                {
                    printf("impar[%d] = %d\n", impressorimpar, impares[impressorimpar]);
                    impressorimpar++;
                }
                indiceimpares = 0;
                impressorimpar = 0;
            }
        }
    }
    while(imparessobrados > 5){
        printf("impar[%d] = %d\n",j,impares[j]);
        j++;
        imparessobrados--;

    }
    j=0;
    while(paressobrados > 5){
        printf("par[%d] = %d\n",j,pares[j]);
        j++;
        paressobrados--;
        
    }
    
    return 0;
}
