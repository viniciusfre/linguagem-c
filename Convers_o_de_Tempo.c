#include <stdio.h>

int main(){
    int N,A,B,C;
    scanf("%d",&N);
    printf("%d:",N/3600);
    A= N%3600;
    printf("%d:",A/60);
    B = N%60;
    printf("%d\n",B);


    
    return 0;
}
