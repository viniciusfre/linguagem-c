#include <stdio.h>
int main() {
int N=0,X=0,Y=0,contador=0,aux=0,contador1=0,soma;
scanf("%d",&N);
for(contador = 0;contador < N;contador++){
    soma=0;
    scanf("%d %d",&X,&Y);
    //x = 13 y = 10/aux = 10/y = 13/x= 10
    if(Y < X){
        aux = Y;
        Y = X;
        X = aux;
        
        

    }
    //x = 4 y = 5
    //x = 11
    for(contador1 = X+1;contador1 < Y;contador1++){
        if(contador1 %2 != 0){
            soma += contador1;
            
        }
        
        


    }
    printf("%d\n",soma);
    
}

return 0;
}