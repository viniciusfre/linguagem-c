#include <stdio.h>
int main()
{
    int Inter = 0;  // gols do Inter
    int Gremio = 0; // gols do Gremio
    int grenaisgremio = 0;
    int grenaisinter = 0;
    int totgrenais = 0;
    int X = 0;
    int Empates = 0;
    while (X != 2)
    {
        scanf("%d %d", &Inter, &Gremio);
        // Inter = 3/Gremio = 1/
        if (Inter > Gremio)
        {
            grenaisinter = grenaisinter + 1;
            // grenaisinter = 2
        }
        if (Inter < Gremio)
        {
            grenaisgremio = grenaisgremio + 1;
            // grenaisgremio = 1
        }
        if (Inter == Gremio)
        {
            Empates = Empates + 1;
            // Empates = 0
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &X);
        if (X == 2)
        {
            totgrenais = grenaisgremio + grenaisinter;
            printf("%d grenais\n", totgrenais);
            printf("Inter:%d\n", grenaisinter);
            printf("Gremio:%d\n", grenaisgremio);
            printf("Empates:%d\n", Empates);
            if (grenaisinter > grenaisgremio)
            {
                printf("Inter venceu mais\n");
            }
            if(grenaisinter < grenaisgremio)
            {
                printf("Grêmio venceu mais\n");
            }
            if(grenaisinter == grenaisgremio){
                printf("Não houve vencedor\n");
        
            }
            break;
        }
        else{
            continue;
        }
    }
    return 0;
}