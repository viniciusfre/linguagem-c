#include <stdio.h>
#include <string.h>
struct renas
{
    char nome[100];
    int peso, idade, numRenas, totRenas;
    double altura;
};
void ordena(struct renas r[], int totRenas)
{
    int i, mudancas = 0;
    struct renas aux;
    i = 0;
    /*Rudolph 50 100 1.12
    Dasher 10 121 1.98
    Dancer 10 131 1.14
    Vixen 50 110 1.42
    Comet 50 121 1.21
    Cupid 50 107 1.45
    Donner 30 106 1.23
    Blitzen 50 180 1.84
    Prancer 7 142 1.36
    */
    // mudancas = 0
    do
    {

        for (i = 0; i < totRenas; i++)
        {

            if (r[i].peso < r[i + 1].peso)
            {
                aux = r[i];
                r[i] = r[i + 1];
                r[i + 1] = aux;
                mudancas++;
            }
            // peso decrescente
            else if (r[i].peso == r[i + 1].peso)
            {
                if (r[i].idade > r[i + 1].idade)
                {
                    aux = r[i];
                    r[i] = r[i + 1];
                    r[i + 1] = aux;
                    mudancas++;
                }
                // idade crescente
                else if (r[i].idade == r[i + 1].idade)
                {
                    if (r[i].altura < r[i + 1].altura)
                    {
                        aux = r[i];
                        r[i] = r[i + 1];
                        r[i + 1] = aux;
                        mudancas++;
                    }
                    else if (r[i].altura == r[i + 1].altura)
                    {
                        if (strcmp(r[i].nome, r[i + 1].nome) > 0)
                        {
                            aux = r[i];
                            r[i] = r[i + 1];
                            r[i + 1] = aux;
                            mudancas++;
                        }
                    }
                }
            }
        }
        if (mudancas == 0)
        {
            break;
        }
        else
        {
            mudancas = 0;
        }

    } while (1);
};
void printa(struct renas r[], int numRenas, int casos)
{
    int i, j,k=0;
    for (i = 0; i < casos; i++)
    {
        printf("CENARIO {%d}\n", i + 1);
        for (j = 0; j < numRenas; j++)
        {
            printf("%d - %s\n", j + 1, r[k].nome);
            k++;
        }
        k = numRenas;
    }
}
int main()
{
    char nome[100];
    int casos, totRenas, numRenas, peso, idade, i, j=0,k=0;
    double altura;
    struct renas r[1000];
    scanf("%d", &casos);
    for (i = 0; i < casos; i++)
    {   
        scanf("%d %d", &totRenas, &numRenas);
        for (j; j < totRenas; j++)
        {
            scanf("%s %d %d %lf", nome, &peso, &idade, &altura);
            strcpy(r[k].nome, nome);
            r[k].peso = peso;
            r[k].idade = idade;
            r[k].altura = altura;
            //r[j].numRenas = numRenas;
            //r[j].totRenas = totRenas;
            k++;
        }
        k = totRenas;
    }

    ordena(r, totRenas);
    printa(r, numRenas, casos);
    return 0;
}