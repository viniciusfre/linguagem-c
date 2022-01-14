#include <stdio.h>
int main() {
int N,C;
scanf("%d",&N);
for(C = 1;C <= 10000;C++){
    if(C % N == 2){
    printf("%d\n",C);

    }
}

return 0;
}