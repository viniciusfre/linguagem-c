#include <stdio.h>
int main() {
int N,i=0,M[100],menor=0,pos=0;
scanf("%d",&N);
for(i = 0; i < N;i++){
    scanf("%d",&M[i]);
    if(i == 0){
        menor = M[i];
    }
    if(M[i] < menor){
        menor = M[i];
        pos = i;

    }
    

}
printf("%d\n",pos+1);
return 0;
}