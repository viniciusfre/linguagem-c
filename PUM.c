#include <stdio.h>
int main() {
int N=0,contador=0;//quantidade de linhas de saida
int A[3]={1,2,3};
scanf("%d",&N);
for(contador=0;contador < N;contador++){
    printf("%d %d %d PUM\n",A[0],A[1],A[2]);
    A[0]=A[0]+4;
    A[1]=A[1]+4;
    A[2]=A[2]+4;

}


return 0;
}
