#include <stdio.h>

int main(){
    int nro,horas;
    float valor;
    scanf("%d%d%f",&nro,&horas,&valor);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",nro,horas*valor);
    return(0);

}