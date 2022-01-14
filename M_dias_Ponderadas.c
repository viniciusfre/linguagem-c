#include <stdio.h>
int main() {
double X,Y,Z,C;
int N;
scanf("%d",&N);
for(C = 1;C <= N;C++){
    scanf("%lf%lf%lf",&X,&Y,&Z);
    printf("%.1lf\n",((X*2)+(Y*3)+(Z*5))/10);

}




return 0;
}