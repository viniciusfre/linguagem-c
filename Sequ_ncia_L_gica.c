#include <stdio.h>
int main() {
int N=0,contador=0,A[3]={1,1,1},somador=2,subtraente=1;
scanf("%d",&N);
for(contador = 1;contador <= N*2;contador++){
    printf("%d %d %d\n",A[0],A[1],A[2]);
    if(contador % 2 == 0){
        A[0]=A[0]+1;
        A[1]=A[1]+somador;
        somador = somador + 2;
    }
    if(contador %2 != 0){
        A[1]=A[1]+1;

    }
    if(A[0]*A[1] >= 10 && contador %2 != 0){
        A[2]=(A[0]*A[1])-subtraente;
        subtraente = subtraente + 1;


    }else{
        A[2]=A[0]*A[1];
    }
    
}

return 0;
}