#include <stdio.h>
int main() {
int inicio,fim,duracao,dia;
scanf("%d%d",&inicio,&fim);
dia = 24;
if(inicio > fim){
    printf("O JOGO DUROU %d HORA(S)\n",24-inicio+fim);
}
if(inicio < fim){
    printf("O JOGO DUROU %d HORA(S)\n",fim-inicio);
}
if(inicio == fim){
    printf("O JOGO DUROU %d HORA(S)\n",dia);
}

return 0;
}