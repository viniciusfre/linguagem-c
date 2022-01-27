#include <stdio.h>
int main() {
int V=0,i=0,X=0,N[10];
scanf("%d",&V);
for(i=0;i < 10;i++){
    N[i]=V;
    printf("N[%d] = %d\n",i,V);
    V = V * 2;
    
}

return 0;
}