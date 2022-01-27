#include <stdio.h>

int main()
{

    int tipo[4], contador = 0;
    int valor = 1, alcool = 0, diesel = 0,gasolina = 0;
    for (contador = 0; contador <= 4; contador++)
    {
        tipo[contador] = valor;
        valor++;
    }
    valor=0;
    while (valor != tipo[3])
    {   
        valor = 0;
        scanf("%d", &valor);

        while (valor < 1 && valor > 4)
        {
            scanf("%d", &valor);
        }
        if (valor == 1)
        {
            alcool = alcool + 1;
        }
        else if (valor == 2)
        {
            gasolina = gasolina + 1;
        }
        else if (valor == 3)
        {
            diesel = diesel + 1;
        }
        else if (valor == 4)
        {
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n", alcool);
            printf("Gasolina: %d\n", gasolina);
            printf("Diesel: %d\n", diesel);
        }
        
    }

    return 0;
}