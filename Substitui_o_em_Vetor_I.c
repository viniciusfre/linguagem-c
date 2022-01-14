#include <stdio.h>
int main() {
int X[10];
int C;
for(C = 0; C < 10;C++){
    scanf("%d",&X[C]);
    if(X[C] == 0 || X[C] < 0){
        printf("X[%d] = 1\n",C);
    }else{
        printf("X[%d] = %d\n",C,X[C]);
    }
}
return 0;
}