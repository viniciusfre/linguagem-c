#include <stdio.h>
int main()
{
    int diai, horai, mini, segi;
    int diaf, horaf, minf, segf;
    int dias,horas,minutos,segundos;
    scanf("Dia %d", &diai);
    scanf("%d : %d : %d\n", &horai, &mini, &segi);
    scanf("Dia %d", &diaf);
    scanf("%d : %d : %d", &horaf, &minf, &segf);
    dias = diaf-diai;
    horas = horaf-horai;
    minutos = minf-mini;
    segundos =segf-segi;
    if(segundos < 0 ){
        minutos--;
        segundos +=60;


    }
    if(minutos < 0 ){
        horas--;
        minutos +=60;


    }
    if(horas < 0 ){
        dias--;
        horas +=24;


    }
    

    printf("%d dia(s)\n",dias);
    printf("%d hora(s)\n",horas);
    printf("%d minuto(s)\n",minutos);
    printf("%d segundo(s)\n",segundos);
    return 0;
}