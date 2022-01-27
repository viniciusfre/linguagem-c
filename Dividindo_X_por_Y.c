#include <stdio.h>
int main() {
int N=0,contador=0;
double X = 0,Y=0;
scanf("%d",&N);
for(contador = 0;contador < N;contador++){
    scanf("%lf %lf",&X,&Y);
    if(Y == 0){
        printf("divisao impossivel\n");

    }else{
        printf("%.1lf\n",X/Y);
    }

}

return 0;
}