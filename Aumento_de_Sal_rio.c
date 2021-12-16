#include <stdio.h>
int main()
{
    double salario, reajuste;
    scanf("%lf", &salario);
    if (salario >= 0 && salario <= 400)
    {
        reajuste = 15;
        printf("Novo salario: %.2lf\n",salario * 1.15);
        printf("Reajuste ganho: %.2lf\n",salario * 0.15);
        printf("Em percentual: %.0lf %%\n",reajuste);
    }
    if (salario > 400 && salario <= 800)
    {
        reajuste = 12;
        printf("Novo salario: %.2lf\n",salario * 1.12);
        printf("Reajuste ganho: %.2lf\n",salario * 0.12);
        printf("Em percentual: %.0lf %%\n", reajuste);
    }
    if (salario > 800 && salario <= 1200)
    {
        reajuste = 10;
        printf("Novo salario: %.2lf\n",salario * 1.10);
        printf("Reajuste ganho: %.2lf\n",salario * 0.10);
        printf("Em percentual: %.0lf %%\n",reajuste);
    }
    if (salario > 1200 && salario <= 2000)
    {
        reajuste = 7;
        printf("Novo salario: %.2lf\n",salario * 1.07);
        printf("Reajuste ganho: %.2lf\n",salario * 0.07);
        printf("Em percentual: %.0lf %%\n", reajuste);
    }
    if (salario > 2000)
    {
        reajuste = 4;
        printf("Novo salario: %.2lf\n",salario * 1.04);
        printf("Reajuste ganho: %.2lf\n",salario * 0.04);
        printf("Em percentual: %.0lf %%\n", reajuste);
    }

    return 0;
}