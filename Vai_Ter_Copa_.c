#include <stdio.h>
int main() {
int N;
while(scanf("%d",&N)!= EOF){
   if(N == 0){
       printf("vai ter copa!\n");
   }else if(N > 0){
       printf("vai ter duas!\n");
   }else if(N > 100 || N < 0){
       break;
   }
}
return 0;
}