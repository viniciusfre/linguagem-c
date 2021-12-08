#include <stdio.h>
#include <stdlib.h>

int main(){
    int A,B,C,D;
    scanf("%d %d %d",&A,&B,&C);
    D=(A+B+abs(A-B))/2;
    if(D > C){
        printf("%d eh o maior\n",D);


    }else{printf("%d eh o maior\n",C);
    }
    
    return(0);

}