#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct paises
{
    char nome[100];
    int ouro, prata, bronze;
};
int compara(const void *p1, const void *p2)
{
    struct paises *i = (struct paises *)p1;
    struct paises *j = (struct paises *)p2;
    if (i->ouro < j->ouro)
        return 1;
    else if (i->ouro > j->ouro)
        return -1;
    else if (i->prata < j->prata)
        return 1;
    else if (i->prata > j->prata)
        return -1;
    else if (i->bronze < j->bronze)
        return 1;
    else if (i->bronze > j->bronze)
        return -1;
    else
        return strcmp(i->nome, j->nome);
}
int main()
{
    int N, ouro, prata, bronze, i;
    char nome[100];
    scanf("%d", &N);
    struct paises p[N];
    for (i = 0; i < N; i++)
    {
        scanf("%s", nome);
        scanf("%d", &ouro);
        scanf("%d", &prata);
        scanf("%d", &bronze);
        strcpy(p[i].nome, nome);
        p[i].ouro = ouro;
        p[i].prata = prata;
        p[i].bronze = bronze;
    }
    qsort(p, N, sizeof(struct paises), compara);
    for (i = 0; i < N; i++)
    {
        printf("%s %d %d %d\n", p[i].nome, p[i].ouro, p[i].prata, p[i].bronze);
    }
    return 0;
}