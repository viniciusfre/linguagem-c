#include <stdio.h>
int main()
{
    int X = 0, Z = 0, contador = 1, guardavalor = 0;
    scanf("%d", &X);
    // 3
    scanf("%d", &Z);
    // 5
    if (X > Z)
    {
       
        while (X >= Z)
        {
            scanf("%d", &Z);
            // 20
        }
        guardavalor = X + 1;
        // 4
        while (X < Z)
        {

            X = X + guardavalor;
            // X = 3 + 4
            // 7+5+6+7
            guardavalor = guardavalor + 1;
            // 4
            contador++;
        }
        printf("%d\n", contador);
    }
    else
    {
        printf("0");
    }

    return 0;
}