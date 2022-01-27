#include <stdio.h>
int main() {
int N[20],contador=0;
int i=0;
for(i = 19;i >= 0; i--){
    scanf("%d",&N[i]);
}
for(contador = 0;contador < 20;contador++){
    printf("N[%d] = %d\n",contador,N[contador]);


}
return 0;
}