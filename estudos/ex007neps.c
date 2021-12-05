#include <stdio.h>

int main(){
    int X,Y;
    scanf("%d%d",&X,&Y);
    if(X>0 && Y>0){
        printf("Q1");
    }else if(X<0 && Y<0){
        printf("Q3");
    }else if(X<0 && Y>0){
        printf("Q2");
    }else if(X>0 && Y<0){
        printf("Q4");
    }else{
        printf("eixos");
    }
    return(0);
}

