#include <stdio.h>
int main() {
int A=0,N=0,i=0,guardavalor=0;
scanf("%d",&A);
//A=3
scanf("%d",&N);
//N=-1
while(N < 0 || N == 0){
    scanf("%d",&N);
}
for(i=0;i <= N-1;i++){
    guardavalor=guardavalor+A+i;
    
    
}
printf("%d\n",guardavalor);
return 0;
}
