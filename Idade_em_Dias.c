#include <stdio.h>

int main(){
    int idade,A,B,C,D;//em dias
    scanf("%d",&idade);
    printf("%d ano(s)\n",idade/365);
    A = idade%365;
    printf("%d mes(es)\n",A/30);
    B = A%30;
    printf("%d dia(s)\n",B);
    return 0;

}