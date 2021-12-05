#include <stdio.h>

int main(){
    int N1,N2;
    scanf("%d%d",&N1,&N2);
    float media = ((N1*2)+(N2*3))/5;
    if(media >= 7){
        printf("Aprovado");

    }else if(media<3){
        printf("Reprovado");
    }else{
        printf("Final");
    }
    return(0);
}

