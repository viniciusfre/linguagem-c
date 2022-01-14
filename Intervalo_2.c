#include <stdio.h>
int main() {
int N,C,D=0,E=0;
scanf("%d",&N);
for(C = 0; C < N;C++){
    scanf("%d",&D);
    if(D >= 10 && D <=20){
        E++;


    }
}
printf("%d in\n",E);
printf("%d out\n",N-E);


return 0;
}