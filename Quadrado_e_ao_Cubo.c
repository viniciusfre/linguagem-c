#include <stdio.h>
int main() {
int A[3]={1,1,1},contador=0,N=0,multiplicador=8,somador=3;
scanf("%d",&N);
for(contador=0;contador < N;contador++){
    printf("%d %d %d\n",A[0],A[1],A[2]);
    if(A[1] >= 4){
        somador = somador + 2;


    }
    A[0]=A[0]+1;
    A[1]=A[1]+somador;
    A[2]=A[0]*A[1];
    


}
return 0;
}