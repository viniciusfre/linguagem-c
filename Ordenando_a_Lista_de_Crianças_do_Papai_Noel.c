#include <stdio.h>
#include <string.h>
struct criancas
{
    char nome[100];
};
void ordena(struct criancas c[], int casos)
{
    int i, mudancas = 0;
    struct criancas aux;
    i = 0;
    do
    {

        for (i = 0; i < casos; i++)
        {
            if (strcmp(c[i].nome, c[i + 1].nome) > 0)
            {
                aux = c[i];
                c[i] = c[i + 1];
                c[i + 1] = aux;
                mudancas++;
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
void printa(struct criancas c[],int casos,int comportados)
{
    int i;
    for (i = 0; i <= casos; i++)
    {
        printf("%s\n",c[i].nome);
    }
    printf("Se comportaram: %d | Nao se comportaram: %d\n",comportados,casos-comportados);
}
int main()
{
    char nome[100],comportamento[5];
    int casos=0,i=0,comportados=0;
    struct criancas c[100]={0};
    scanf("%d", &casos);
    setbuf(stdin,NULL);
    for (i = 0; i < casos; i++)
    {   
        scanf(" %c %s",&comportamento,nome);
        setbuf(stdin,NULL);
        if(comportamento[0] == '+'){
            comportados++;
        }
        strcpy(c[i].nome,nome);
    }
    ordena(c, casos);
    printa(c, casos,comportados);
    return 0;
}