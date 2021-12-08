#include <stdio.h>

int main(){
    char nome[10];
    double salario,totvendas;
    scanf("%s%lf%lf",&nome,&salario,&totvendas);
    printf("TOTAL = R$ %.2lf\n",salario+totvendas*0.15);
    return(0);

}