#include <stdio.h>
int main()
{
    int horai, mini;
    int horaf, minf;
    int A, B;
    int dias, horas, minutos, segundos;
    scanf("%d%d%d%d", &horai, &mini, &horaf, &minf);
    horas = horaf - horai;
    minutos = minf - mini;
    // 5 30 2 20
    // 18 horas e 50
    A = 24;
    B = 0;
    if (minutos < 0)
    {
        if (horas > 0)
        {
            horas--;
            minutos += 60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
        }
        // 7 20 5 10
        else
        {
            
            horas = 24 - (horai - horaf);
            horas--;
            minutos += 60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
        }
    }
    // 5 : 20/ 3 : 30
    // 24-2=22:50
    else if (horas < 0)
    {
        if (minutos > 0)
        {
            horas = 24 - (horai - horaf);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
        }
    }
    else if (horaf == horai && horaf == mini && horaf == minf)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", A, B);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }

    return 0;
}