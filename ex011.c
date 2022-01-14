#include <stdio.h>

int main(){
    int peca1,nro1,peca2,nro2;
    double valor1,valor2;
    scanf("%d%d%lf",&peca1,&nro1,&valor1);
    scanf("%d%d%lf",&peca2,&nro2,&valor2);
    printf("VALOR A PAGAR: R$ %.2f\n",nro1*valor1+nro2*valor2);
    return(0);

}