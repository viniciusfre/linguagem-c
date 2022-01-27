#include <stdio.h>
int main() {
double soma=0,coelhos=0,sapos=0,ratos=0;//quantidade total de cobaias
int contador = 0;//Contador do for
int N=0;//quantidade de scans
int quantia=0;//quantidade de cobaias
char tipo;//tipo da cobaia/ C,R ou S/coelho/rato/sapo
double totC=0,totS=0,totR=0;
scanf("%d",&N);
for(contador = 0;contador < N;contador++){
    scanf("%d %c",&quantia,&tipo);
    soma = soma+ quantia;
    if(tipo == 'C'){
        coelhos = coelhos + quantia;

    }
    if(tipo == 'R'){
        ratos = ratos + quantia;

    }
    if(tipo == 'S'){
        sapos = sapos + quantia;

    }
}
totC = (coelhos*100)/soma;
totR = (ratos*100)/soma;
totS = (sapos*100)/soma;
printf("Total: %.0lf cobaias\n",soma);
printf("Total de coelhos: %.0lf\n",coelhos);
printf("Total de ratos: %.0lf\n",ratos);
printf("Total de sapos: %.0lf\n",sapos);
printf("Percentual de coelhos: %.2lf %%\n",totC);
printf("Percentual de ratos: %.2lf %%\n",totR);
printf("Percentual de sapos: %.2lf %%\n",totS);

return 0;
}