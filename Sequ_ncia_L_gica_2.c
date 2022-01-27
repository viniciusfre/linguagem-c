#include <stdio.h>
int main() {
int X=0,Y=0,A[1]={1},contador=1;
scanf("%d %d",&X,&Y);
for(contador = 1;contador <= Y;contador++){
    if(contador % X != 0){
        printf("%d ",A[0]);
    }
    else{
        printf("%d",A[0]);
    }
    if(A[0] % X == 0){
        printf("\n");

    }
    A[0]=A[0] + 1;
   
}

return 0;
}