#include <stdio.h>

int main(){
    double H,VM;//Tempo em horas e velocidade media em km/h respectivamente
    scanf("%lf%lf",&H,&VM);
    printf("%.3lf\n",(H*VM)/12);
    return(0);

}