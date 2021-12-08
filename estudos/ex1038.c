#include <stdio.h>
int main(){
    double cod,quant;
    scanf("%lf%lf",&cod,&quant);
    if(cod == 1){
        printf("Total: R$ %.2lf\n",4*quant);

    }
    else if(cod == 2){
        printf("Total: R$ %.2lf\n",4.50*quant);

    }
    else if(cod == 3){
        printf("Total: R$ %.2lf\n",5*quant);

    }
    else if(cod == 4){
        printf("Total: R$ %.2lf\n",2*quant);

    }
    else{
        printf("Total: R$ %.2lf\n",1.5*quant);

    }
    return(0);

}