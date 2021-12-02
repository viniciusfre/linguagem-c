#include <stdio.h>

int main(){
    int nro,horas;
    float valor;
    scanf("%d%d%f",&nro,&horas,&valor);
    printf("NUMBER = %d\nSALARY =U$ %.2f",nro,horas*valor);
    return(0);

}